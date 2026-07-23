/*
 * XREFs of PiPnpRtlGatherContainerRemoveInfo @ 0x140734904
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140734D34 (PiPnpRtlFreePanelRemoveInfo.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlGatherContainerRemoveInfo(__int64 a1, __int64 a2, PVOID *a3)
{
  __int64 *PoolWithTag; // rax
  int Object; // ebx

  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x47706E50u);
  *a3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    Object = -1073741670;
LABEL_9:
    PiPnpRtlFreePanelRemoveInfo(*a3);
    *a3 = 0LL;
    return (unsigned int)Object;
  }
  *(_OWORD *)PoolWithTag = 0LL;
  Object = PiDmGetObject(1LL, a1, PoolWithTag);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_9;
  Object = PiDmGetObject(5LL, a2, (__int64 *)*a3 + 1);
  if ( Object == -1073741772 )
    Object = 0;
  if ( Object < 0 )
    goto LABEL_9;
  return (unsigned int)Object;
}
