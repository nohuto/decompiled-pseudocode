/*
 * XREFs of PiPnpRtlGatherPanelRemoveInfo @ 0x1408A3494
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140734D34 (PiPnpRtlFreePanelRemoveInfo.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlGatherPanelRemoveInfo(__int64 a1, __int64 a2, unsigned int ***a3)
{
  __int64 *PoolWithTag; // rax
  int Object; // ebx

  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x47706E50u);
  *a3 = (unsigned int **)PoolWithTag;
  if ( !PoolWithTag )
  {
    Object = -1073741670;
LABEL_8:
    PiPnpRtlFreePanelRemoveInfo(*a3);
    *a3 = 0LL;
    return (unsigned int)Object;
  }
  *(_OWORD *)PoolWithTag = 0LL;
  Object = PiDmGetObject(1LL, a1, PoolWithTag);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_8;
  Object = PiDmGetObject(6LL, a2, (__int64 *)*a3 + 1);
  if ( Object == -1073741772 )
    Object = 0;
  if ( Object < 0 )
    goto LABEL_8;
  return (unsigned int)Object;
}
