/*
 * XREFs of ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800435D8
 * Callers:
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x180027900 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x1800447F8 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x180044BFC (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18006F750 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18006FD90 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18007E5D0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x1800CAD14 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Channel_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SYNCFLUSH@@@Z @ 0x1800D98F8 (-Channel_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHA.c)
 *     ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801AA984 (-RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801AAAC0 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180043640 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     memcpy_0 @ 0x1800EE9CB (memcpy_0.c)
 */

__int64 DynArrayImpl<1>::AddMultipleAndSet(__int64 a1, unsigned int a2, __int64 a3, ...)
{
  int v5; // esi
  void *Src; // [rsp+58h] [rbp+20h] BYREF
  va_list Srca; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(Srca, a3);
  Src = va_arg(va1, void *);
  v5 = DynArrayImpl<1>::Grow(a1, a2, 1, 0, (__int64)Srca);
  if ( v5 >= 0 )
  {
    memcpy_0((void *)(*(_QWORD *)a1 + a2 * *(_DWORD *)(a1 + 24)), Src, a2);
    ++*(_DWORD *)(a1 + 24);
  }
  return (unsigned int)v5;
}
