/*
 * XREFs of StorpInitializeWorkItem @ 0x1C003AEEC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000D810 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007C88 (RaidAllocatePool.c)
 *     WPP_SF_ @ 0x1C0031E4C (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C00320D0 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpInitializeWorkItem(__int64 a1, PIO_WORKITEM **a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp
  PIO_WORKITEM *Pool; // rax
  PIO_WORKITEM *v7; // rdi
  PIO_WORKITEM WorkItem; // rax

  v2 = 0;
  if ( a1 && a2 )
  {
    if ( KeGetCurrentIrql() > 2u )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x3Cu,
          (__int64)&WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids);
      }
      return 3238002696LL;
    }
    v5 = **(_QWORD **)(a1 - 16);
    Pool = (PIO_WORKITEM *)RaidAllocatePool(NonPagedPoolNx, 0x20uLL, 0x49576152u, *(_QWORD *)(v5 + 8));
    v7 = Pool;
    if ( Pool )
    {
      *(_OWORD *)Pool = 0LL;
      *((_OWORD *)Pool + 1) = 0LL;
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v5 + 8));
      *v7 = WorkItem;
      if ( WorkItem )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 5032));
        *a2 = v7;
        return v2;
      }
      ExFreePoolWithTag(v7, 0x49576152u);
    }
    return (unsigned int)-1056964605;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x3Bu,
      (__int64)&WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids,
      a1,
      a2);
  }
  return 3238002694LL;
}
