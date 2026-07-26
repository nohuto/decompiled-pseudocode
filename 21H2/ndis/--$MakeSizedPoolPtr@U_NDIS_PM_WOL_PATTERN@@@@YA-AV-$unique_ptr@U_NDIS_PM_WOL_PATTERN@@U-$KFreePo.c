/*
 * XREFs of ??$MakeSizedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@K_K@Z @ 0x1C011F248
 * Callers:
 *     ??$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x1C011F114 (--$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFre.c)
 * Callees:
 *     memset @ 0x1C00403C0 (memset.c)
 */

_QWORD *__fastcall MakeSizedPoolPtr<_NDIS_PM_WOL_PATTERN>(_QWORD *a1, __int64 a2, SIZE_T a3)
{
  PVOID PoolWithTag; // rax
  void *v6; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a3, 0x7877444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, a3);
    memset(v6, 0, 0xC4uLL);
    *a1 = v6;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
