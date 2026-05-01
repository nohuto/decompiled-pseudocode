/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x1802A559C
 * Callers:
 *     wil::details::ScopeExitFn__lambda_8061a6914a01b14361eb9c3d0a3e5fbe___::_ScopeExitFn__lambda_8061a6914a01b14361eb9c3d0a3e5fbe___ @ 0x1802A0080 (wil--details--ScopeExitFn__lambda_8061a6914a01b14361eb9c3d0a3e5fbe___--_ScopeExitFn__lambda_8061.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x1802A8A8C (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x1802A8FF4 (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x1802ABA14 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1802ABF8C (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1802AC32C (-_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z @ 0x1802ACFE4 (-_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800F03F3 (memmove_0.c)
 *     ??_GPendingViewData@ViewEventDispatcher@@QEAAPEAXI@Z @ 0x1802A153C (--_GPendingViewData@ViewEventDispatcher@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( a2 >= a1[1] )
    return 2147650721LL;
  v5 = 3 * a2;
  ViewEventDispatcher::PendingViewData::`scalar deleting destructor'((ViewEventDispatcher::PendingViewData *)(*a1 + 24 * a2));
  v6 = a1[1];
  if ( a2 != v6 - 1 )
  {
    memmove_0((void *)(*a1 + 8 * v5), (const void *)(*a1 + 8 * v5 + 24), 24 * (v6 - a2) - 24);
    v6 = a1[1];
  }
  a1[1] = v6 - 1;
  return 0LL;
}
