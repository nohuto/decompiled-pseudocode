/*
 * XREFs of MiDeleteNonPagedPoolTail @ 0x1402F2370
 * Callers:
 *     MiClearNonPagedPtes @ 0x1402F1DCC (MiClearNonPagedPtes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiReduceShareCount @ 0x1402F23FC (MiReduceShareCount.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolTail(__int64 a1, _KPROCESS *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rbx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 168);
  MiFlushTbList(v2, a2);
  if ( *(_DWORD *)(v2 + 208) )
  {
    v7 = 48LL * *(_QWORD *)(v2 + 216) - 0x58000000000LL;
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v8, v3, v4, v5);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    MiReduceShareCount(v7, *(unsigned int *)(v2 + 208));
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_DWORD *)(v2 + 208) = 0;
  }
  return 0LL;
}
