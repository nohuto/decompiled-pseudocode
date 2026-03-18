/*
 * XREFs of ?CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C00595F0
 * Callers:
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C0059424 (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 *     ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x1C008339C (-Reset@FxPowerIdleMachine@@QEAAXXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C0059060 (--0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z.c)
 */

__int64 __fastcall FxTagTracker::CreateAndInitialize(
        FxTagTracker **TagTracker,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxTagTrackerType Type,
        unsigned __int8 CaptureStack,
        FxObject *Owner)
{
  FX_POOL **v9; // rax
  unsigned int v10; // ebx
  FxTagTracker *v11; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v9 = FxPoolAllocator(
         FxDriverGlobals,
         &FxDriverGlobals->FxPoolFrameworks,
         ExDefaultNonPagedPoolType,
         0x500uLL,
         FxDriverGlobals->Tag,
         retaddr);
  v10 = 0;
  if ( v9 )
    FxTagTracker::FxTagTracker((FxTagTracker *)v9, FxDriverGlobals, Type, CaptureStack, Owner);
  else
    v11 = 0LL;
  if ( v11 )
  {
    *TagTracker = v11;
  }
  else
  {
    v10 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxTagTracker_hpp_Traceguids, -1073741670);
  }
  return v10;
}
