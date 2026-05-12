/*
 * XREFs of RaSaveDriverInitData @ 0x1C0078F80
 * Callers:
 *     StorPortInitialize @ 0x1C0034850 (StorPortInitialize.c)
 * Callees:
 *     memmove @ 0x1C001B200 (memmove.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 */

__int64 __fastcall RaSaveDriverInitData(__int64 a1, unsigned int *a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xE0uLL, 0x49486152u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 0xD0uLL);
  memmove(v5, a2, *a2);
  v7 = (_QWORD *)(a1 + 96);
  v8 = *(_QWORD *)(a1 + 96);
  v9 = v5 + 26;
  if ( *(_QWORD *)(v8 + 8) != a1 + 96 )
    __fastfail(3u);
  *v9 = v8;
  v5[27] = v7;
  *(_QWORD *)(v8 + 8) = v9;
  *v7 = v9;
  return 0LL;
}
