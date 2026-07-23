/*
 * XREFs of HalBugCheckSystem @ 0x1404B9390
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __stdcall __noreturn HalBugCheckSystem(PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource, PWHEA_ERROR_RECORD ErrorRecord)
{
  unsigned int SectionCount; // edi
  ULONG_PTR v3; // r9
  ULONG_PTR BugCheckParameter4; // r11
  _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *SectionDescriptor; // rdx
  unsigned int v7; // ebx
  _GUID *p_SectionType; // r10
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // r9

  SectionCount = ErrorRecord->Header.SectionCount;
  v3 = 0LL;
  BugCheckParameter4 = 0LL;
  SectionDescriptor = ErrorRecord->SectionDescriptor;
  v7 = 0;
  if ( SectionCount )
  {
    p_SectionType = &SectionDescriptor->SectionType;
    do
    {
      v9 = *(_QWORD *)&p_SectionType->Data1 - *(_QWORD *)&NMI_SECTION_GUID.Data1;
      if ( *(_QWORD *)&p_SectionType->Data1 == *(_QWORD *)&NMI_SECTION_GUID.Data1 )
        v9 = *(_QWORD *)p_SectionType->Data4 - *(_QWORD *)NMI_SECTION_GUID.Data4;
      if ( v9 )
      {
        v10 = *(_QWORD *)&p_SectionType->Data1 - *(_QWORD *)&XPF_MCA_SECTION_GUID.Data1;
        if ( *(_QWORD *)&p_SectionType->Data1 == *(_QWORD *)&XPF_MCA_SECTION_GUID.Data1 )
          v10 = *(_QWORD *)p_SectionType->Data4 - *(_QWORD *)XPF_MCA_SECTION_GUID.Data4;
        if ( !v10 )
        {
          v11 = *(_QWORD *)&ErrorRecord->Header.PlatformId.Data4[SectionDescriptor->SectionOffset];
          BugCheckParameter4 = (unsigned int)v11;
          v3 = HIDWORD(v11);
          break;
        }
      }
      else if ( (*((_BYTE *)&ErrorRecord->Header.SignatureEnd + SectionDescriptor->SectionOffset + 2) & 1) == 0 )
      {
        HalpDoingCrashDump = 1;
        HalpBugcheckInProgress = 1;
        KeBugCheckEx(0x80u, 0x4F4454uLL, 0LL, 0LL, 0LL);
      }
      ++SectionDescriptor;
      p_SectionType = (_GUID *)((char *)p_SectionType + 72);
      ++v7;
    }
    while ( v7 < SectionCount );
  }
  KeBugCheckEx(0x124u, ErrorSource->Type, (ULONG_PTR)ErrorRecord, v3, BugCheckParameter4);
}
