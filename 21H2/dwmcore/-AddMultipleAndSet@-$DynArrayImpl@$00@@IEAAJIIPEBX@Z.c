/*
 * XREFs of ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180043280
 * Callers:
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x180042224 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180044A1C (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x180044D44 (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18004A2AC (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180050990 (-UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x1800CC870 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x1800E7A34 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Channel_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SYNCFLUSH@@@Z @ 0x1800F68E0 (-Channel_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHA.c)
 *     ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801FDD60 (-RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801FDE30 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ?StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ @ 0x1802292E0 (-StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x1800432E8 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
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
