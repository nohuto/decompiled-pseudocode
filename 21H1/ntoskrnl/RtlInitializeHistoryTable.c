/*
 * XREFs of RtlInitializeHistoryTable @ 0x140A4E374
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14032E660 (RtlLookupFunctionEntry.c)
 *     RtlpFunctionAddressTableEntry @ 0x140A4E468 (RtlpFunctionAddressTableEntry.c)
 */

unsigned int *RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__fastcall __noreturn *v1)(unsigned int); // rax
  unsigned int *v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 *v7; // rbx
  unsigned int *result; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__fastcall __noreturn *)(unsigned int))RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    if ( v1 == RtlRaiseStatus )
      byte_140E01945 = i;
    v2 = RtlLookupFunctionEntry((unsigned __int64)v1, &v9, 0LL);
    v3 = 2LL * i;
    v4 = v9 + *v2;
    v5 = v9 + v2[1];
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 6] = v9;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 8] = v2;
    if ( v4 < qword_140E01948 )
      qword_140E01948 = v4;
    if ( v5 > qword_140E01950 )
      qword_140E01950 = v5;
  }
  v9 = 0LL;
  v6 = 3LL;
  RtlpUnwindHistoryTable[0] = i;
  v7 = (unsigned __int64 *)&RtlpSafeMachineFrameEntries;
  do
  {
    result = RtlLookupFunctionEntry(*v7, &v9, 0LL);
    *v7++ = v9 + result[2];
    --v6;
  }
  while ( v6 );
  return result;
}
