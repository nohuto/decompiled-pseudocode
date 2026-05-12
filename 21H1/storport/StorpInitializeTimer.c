/*
 * XREFs of StorpInitializeTimer @ 0x1C003AD60
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000D810 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007C88 (RaidAllocatePool.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 *     WPP_SF_ @ 0x1C0031E4C (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C0031F68 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C00320D0 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpInitializeTimer(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  char *Pool; // rax
  char *v7; // rsi

  v2 = 0;
  if ( !a1 || !a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x45u,
        (__int64)&WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids,
        a1,
        a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    v5 = **(_QWORD **)(a1 - 16);
    if ( v5 && !*(_DWORD *)v5 )
    {
      Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0xA0uLL, 0x54416152u, *(_QWORD *)(v5 + 8));
      v7 = Pool;
      if ( Pool )
      {
        memset(Pool + 8, 0, 0x98uLL);
        *(_QWORD *)v7 = v5;
        KeInitializeTimer((PKTIMER)(v7 + 8));
        KeInitializeDpc((PRKDPC)(v7 + 72), (PKDEFERRED_ROUTINE)StorportTimerDpc, v7);
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 4272));
        *a2 = v7;
      }
      else
      {
        return (unsigned int)-1056964605;
      }
      return v2;
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x47u,
        (__int64)&WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids,
        a1);
    }
    return 3238002694LL;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x46u,
      (__int64)&WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids);
  }
  return 3238002696LL;
}
