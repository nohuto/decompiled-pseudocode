/*
 * XREFs of ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C006749C
 * Callers:
 *     ?Initialize@FxCallbackSpinLock@@UEAAXPEAVFxObject@@@Z @ 0x1C0031670 (-Initialize@FxCallbackSpinLock@@UEAAXPEAVFxObject@@@Z.c)
 *     ?Initialize@FxCallbackMutexLock@@UEAAXPEAVFxObject@@@Z @ 0x1C0031860 (-Initialize@FxCallbackMutexLock@@UEAAXPEAVFxObject@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C00551B0 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?Initialize@FxVerifierLock@@AEAAJXZ @ 0x1C0055550 (-Initialize@FxVerifierLock@@AEAAJXZ.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C0067338 (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 */

__int64 __fastcall FxVerifierLock::CreateAndInitialize(
        FxVerifierLock **VerifierLock,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObject *ParentObject,
        unsigned __int8 UseMutex)
{
  bool v4; // zf
  void *v9; // rax
  FX_POOL **v10; // rax
  FxVerifierLock *v11; // rax
  FxVerifierLock *v12; // rdi
  int v13; // ebx
  __m128i v15; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = FxDriverGlobals->FxPoolTrackingOn == 0;
  v15.m128i_i64[0] = 0LL;
  v15.m128i_i64[1] = 64LL;
  if ( v4 )
    v9 = 0LL;
  else
    v9 = retaddr;
  v10 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v15, 0xB0uLL, FxDriverGlobals->Tag, v9);
  if ( v10
    && (FxVerifierLock::FxVerifierLock((FxVerifierLock *)v10, FxDriverGlobals, ParentObject, UseMutex),
        (v12 = v11) != 0LL) )
  {
    v13 = FxVerifierLock::Initialize(v11);
    if ( v13 >= 0 )
      *VerifierLock = v12;
    else
      FxVerifierLock::`scalar deleting destructor'(v12);
  }
  else
  {
    v13 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xBu, WPP_FxVerifierLock_hpp_Traceguids_0, -1073741670);
  }
  return (unsigned int)v13;
}
