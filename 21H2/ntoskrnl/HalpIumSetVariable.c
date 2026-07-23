/*
 * XREFs of HalpIumSetVariable @ 0x1404D6A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpIumSetVariable(_WORD *Src, __int128 *a2, int a3, size_t a4, void *Srca)
{
  __int64 v9; // rax
  size_t v10; // rsi
  unsigned __int64 v11; // rbx
  char *PoolWithTag; // rax
  _QWORD *v14; // rdi
  void *v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // rbx

  if ( !qword_140C4A290 || KeGetCurrentIrql() > 2u )
    return 0x8000000000000003uLL;
  v9 = -1LL;
  do
    ++v9;
  while ( Src[v9] );
  v10 = 2 * v9 + 2;
  v11 = (v10 + a4 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  if ( v11 > 0x1FA000 )
    return 0x8000000000000004uLL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (v10 + a4 + 4151) & 0xFFFFFFFFFFFFF000uLL, 0x77466B53u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 0x8000000000000009uLL;
  *((_DWORD *)PoolWithTag + 8) = a3;
  *(_QWORD *)PoolWithTag = PoolWithTag + 56;
  memmove(PoolWithTag + 56, Src, v10);
  v15 = (void *)(v10 + *v14);
  v14[1] = v10;
  v16 = *a2;
  v14[6] = v15;
  *((_OWORD *)v14 + 1) = v16;
  memmove(v15, Srca, a4);
  v14[5] = a4;
  v17 = ((__int64 (__fastcall *)(__int64, _QWORD *, unsigned __int64))qword_140C4A290)(5LL, v14, v11);
  ExFreePoolWithTag(v14, 0);
  return v17;
}
