/*
 * XREFs of MiAllowImageMap @ 0x140687660
 * Callers:
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 * Callees:
 *     SeGetTrustLabelAce @ 0x14026C320 (SeGetTrustLabelAce.c)
 *     MiGetControlAreaLoadConfig @ 0x1402A4208 (MiGetControlAreaLoadConfig.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 *     PsBlockNonCetBinaries @ 0x1405CF59C (PsBlockNonCetBinaries.c)
 *     ObReleaseObjectSecurity @ 0x140654230 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140654620 (ObpGetObjectSecurity.c)
 *     SeQueryMandatoryLabel @ 0x1406694C4 (SeQueryMandatoryLabel.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x14093BF98 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwpTimLogMitigationForProcess @ 0x14093C814 (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall MiAllowImageMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  int v8; // ebx
  __int64 *v9; // r8
  _DWORD *ControlAreaLoadConfig; // rax
  unsigned __int8 v12; // di
  ULONG_PTR v13; // rbx
  int v14; // edi
  int v15; // esi
  int ObjectSecurity; // ebx
  int v17; // ebp
  int v18; // esi
  ULONG_PTR v19; // r15
  PSECURITY_DESCRIPTOR v20; // rbp
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+20h] [rbp-38h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 2512);
  SecurityDescriptor = 0LL;
  v8 = v4 & 0x80000;
  if ( ((v4 & 0x80000) != 0 || (v4 & 0x100000) != 0) && (*(_BYTE *)(a2 + 40) & 3) != 0 )
  {
    v9 = MITIGATION_AUDIT_PROHIBIT_REMOTE_IMAGE_MAP;
    if ( v8 )
      v9 = MITIGATION_ENFORCE_PROHIBIT_REMOTE_IMAGE_MAP;
    EtwpTimLogMitigationForProcess(1LL, (unsigned int)(v8 != 0) + 1, v9, a1);
    if ( v8 )
      return 3221225506LL;
  }
  if ( !*(_BYTE *)(a4 + 50) )
    goto LABEL_18;
  ControlAreaLoadConfig = (_DWORD *)MiGetControlAreaLoadConfig(a3);
  if ( (*(_DWORD *)(a1 + 2512) & 4) != 0 && (!ControlAreaLoadConfig || (*ControlAreaLoadConfig & 1) == 0) )
    return 3221227014LL;
  if ( (*(_DWORD *)(a1 + 2516) & 0x200000) != 0 )
  {
    v12 = 0;
    if ( ControlAreaLoadConfig )
      v12 = (*(_BYTE *)ControlAreaLoadConfig & 0x40) != 0;
    v13 = MiReferenceControlAreaFile(a3);
    v14 = PsBlockNonCetBinaries(a1, *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a3 + 56LL) + 76LL) & 1, v12, v13 + 88);
    MiDereferenceControlAreaFile(a3, v13);
    if ( v14 < 0 )
      return (unsigned int)v14;
  }
LABEL_18:
  v15 = v4;
  ObjectSecurity = 0;
  v17 = v4 & 0x400000;
  v18 = v15 & 0x200000;
  if ( v18 || v17 )
  {
    MemoryAllocated = 0;
    v19 = MiReferenceControlAreaFile(a3);
    ObjectSecurity = ObpGetObjectSecurity(v19, &SecurityDescriptor, &MemoryAllocated, 0);
    if ( ObjectSecurity < 0 )
    {
      ObjectSecurity = -1073741790;
    }
    else
    {
      v20 = SecurityDescriptor;
      if ( (unsigned int)SeQueryMandatoryLabel((__int64)SecurityDescriptor) <= 0x1000
        && !SeGetTrustLabelAce((__int64)v20) )
      {
        ObjectSecurity = -1073741790;
      }
      ObReleaseObjectSecurity(v20, MemoryAllocated);
    }
    if ( ObjectSecurity == -1073741790 )
    {
      EtwTimLogProhibitLowILImageMap((unsigned int)(v18 != 0) + 1, a1, v19 + 88);
      if ( !v18 )
        ObjectSecurity = 0;
    }
    MiDereferenceControlAreaFile(a3, v19);
  }
  return (unsigned int)ObjectSecurity;
}
