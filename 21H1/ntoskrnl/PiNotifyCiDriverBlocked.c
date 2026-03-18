/*
 * XREFs of PiNotifyCiDriverBlocked @ 0x14089E914
 * Callers:
 *     PiIsDriverBlocked @ 0x140769384 (PiIsDriverBlocked.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiNotifyCiDriverBlocked(_OWORD *a1, const void **a2)
{
  char *PoolWithTag; // rax
  void *v5; // rdi
  unsigned int updated; // ebx

  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)*(unsigned __int16 *)a2 + 18, 0x20207050u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  *(_OWORD *)PoolWithTag = *a1;
  *((_WORD *)PoolWithTag + 8) = *(_WORD *)a2;
  memmove(PoolWithTag + 18, a2[1], *(unsigned __int16 *)a2);
  updated = ZwUpdateWnfStateData((__int64)&WNF_CI_BLOCKED_DRIVER, (__int64)v5);
  ExFreePoolWithTag(v5, 0);
  return updated;
}
