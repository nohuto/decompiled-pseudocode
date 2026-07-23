/*
 * XREFs of IopInitializeBootLogging @ 0x140891878
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlFindMessage @ 0x1405ED770 (RtlFindMessage.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406637D0 (RtlAnsiStringToUnicodeString.c)
 *     IopBootLog @ 0x140771BE0 (IopBootLog.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1407A7240 (RtlCreateUnicodeStringFromAsciiz.c)
 */

void __fastcall IopInitializeBootLogging(__int64 a1, __int64 a2)
{
  UNICODE_STRING *Pool; // rax
  UNICODE_STRING *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  wchar_t *Buffer; // rax
  PUNICODE_STRING v11; // r8
  unsigned __int16 Length; // ax
  unsigned __int16 v13; // ax
  PVOID *i; // rbx
  ANSI_STRING SourceString; // [rsp+30h] [rbp-10h] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+70h] [rbp+30h] BYREF

  MessageEntry = 0LL;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  if ( !qword_140D2D030 )
  {
    Pool = (UNICODE_STRING *)IopVerifierExAllocatePool(NonPagedPoolNx, 0xB0uLL);
    qword_140D2D030 = Pool;
    v5 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, 0xB0uLL);
      ExInitializeResourceLite((PERESOURCE)&v5[4]);
      ExAcquireResourceExclusiveLite((PERESOURCE)&qword_140D2D030[4], 1u);
      v6 = *(_QWORD *)(a1 + 16);
      v7 = -1LL;
      if ( RtlFindMessage(*(PVOID *)(v6 + 48), 0xBu, 0, 0xB5u, &MessageEntry) >= 0 )
      {
        v8 = -1LL;
        SourceString.Buffer = (char *)MessageEntry->Text;
        do
          ++v8;
        while ( MessageEntry->Text[v8] );
        SourceString.Length = v8;
        SourceString.MaximumLength = v8 + 1;
        RtlAnsiStringToUnicodeString(qword_140D2D030, &SourceString, 1u);
        if ( qword_140D2D030->Length > 4u )
        {
          v9 = (unsigned __int16)(qword_140D2D030->Length - 4);
          Buffer = qword_140D2D030->Buffer;
          qword_140D2D030->Length = v9;
          Buffer[v9 >> 1] = 0;
        }
      }
      if ( RtlFindMessage(*(PVOID *)(v6 + 48), 0xBu, 0, 0xB6u, &MessageEntry) < 0 )
      {
        v11 = qword_140D2D030;
      }
      else
      {
        SourceString.Buffer = (char *)MessageEntry->Text;
        do
          ++v7;
        while ( MessageEntry->Text[v7] );
        SourceString.Length = v7;
        SourceString.MaximumLength = v7 + 1;
        RtlAnsiStringToUnicodeString(qword_140D2D030 + 1, &SourceString, 1u);
        v11 = qword_140D2D030;
        Length = qword_140D2D030[1].Length;
        if ( Length > 4u )
        {
          v13 = Length - 4;
          qword_140D2D030[1].Length = v13;
          v11[1].Buffer[(unsigned __int64)v13 >> 1] = 0;
        }
      }
      RtlCreateUnicodeStringFromAsciiz(v11 + 3, (PCSTR)(a2 + 1));
      ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
      for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
        IopBootLog((PCUNICODE_STRING)(i + 9), 1);
      ExReleaseResourceLite(&PsLoadedModuleResource);
      ExReleaseResourceLite((PERESOURCE)&qword_140D2D030[4]);
    }
  }
}
