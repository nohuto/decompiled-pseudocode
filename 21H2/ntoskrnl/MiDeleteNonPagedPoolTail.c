/*
 * XREFs of MiDeleteNonPagedPoolTail @ 0x140296850
 * Callers:
 *     MiClearNonPagedPtes @ 0x140296238 (MiClearNonPagedPtes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReduceShareCount @ 0x1402968DC (MiReduceShareCount.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolTail(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // rbx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 168);
  MiFlushTbList(v1);
  if ( *(_DWORD *)(v1 + 208) )
  {
    v6 = 48LL * *(_QWORD *)(v1 + 216) - 0x58000000000LL;
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v7, v2, v3, v4);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    MiReduceShareCount(v6, *(unsigned int *)(v1 + 208));
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_DWORD *)(v1 + 208) = 0;
  }
  return 0LL;
}
