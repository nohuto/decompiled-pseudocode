/*
 * XREFs of ??$MakeSizedPoolPtr@U_MDL@@@@YA?AV?$unique_ptr@U_MDL@@U?$KFreePool@U_MDL@@@@@wistd@@K_K@Z @ 0x1C01096A0
 * Callers:
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C0109398 (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 * Callees:
 *     memset @ 0x1C00403C0 (memset.c)
 */

_QWORD *__fastcall MakeSizedPoolPtr<_MDL>(_QWORD *a1, __int64 a2, SIZE_T a3)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v6; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a3, 0x6D4D444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, a3);
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
    *a1 = v6;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
