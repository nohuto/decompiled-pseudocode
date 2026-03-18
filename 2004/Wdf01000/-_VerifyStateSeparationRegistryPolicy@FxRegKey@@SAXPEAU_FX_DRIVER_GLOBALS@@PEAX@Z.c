/*
 * XREFs of ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0004440
 * Callers:
 *     imp_WdfRegistryOpenKey @ 0x1C0009970 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRegistryAssignValue @ 0x1C0018D80 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfRegistryAssignMemory @ 0x1C005D6F0 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C005D910 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignString @ 0x1C005DB70 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryAssignULong @ 0x1C005DCB0 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C005DDB0 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryCreateKey @ 0x1C005DF50 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryRemoveKey @ 0x1C005ED70 (imp_WdfRegistryRemoveKey.c)
 *     imp_WdfRegistryRemoveValue @ 0x1C005EE00 (imp_WdfRegistryRemoveValue.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     memmove @ 0x1C001D440 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_Z @ 0x1C00588B8 (WPP_IFR_SF_Z.c)
 *     ?_IsAffectedByStateSeparationRegistryPolicy@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAE@Z @ 0x1C0060C40 (-_IsAffectedByStateSeparationRegistryPolicy@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAE@Z.c)
 *     ?_IsStateSeparationRegistryViolation@FxRegKey@@SAJPEAXPEAE@Z @ 0x1C0060ED4 (-_IsStateSeparationRegistryViolation@FxRegKey@@SAJPEAXPEAE@Z.c)
 */

void __fastcall FxRegKey::_VerifyStateSeparationRegistryPolicy(_FX_DRIVER_GLOBALS *FxDriverGlobals, void *Key)
{
  unsigned int *v4; // rdi
  void *v5; // r14
  FxDriverGlobalsDebugExtension *DebugExtension; // r12
  NTSTATUS v7; // eax
  NTSTATUS v8; // r15d
  unsigned int *v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // r13d
  void *v12; // rax
  unsigned __int8 isAffectedByPolicy; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int8 isViolation[3]; // [rsp+31h] [rbp-2Fh] BYREF
  unsigned int keyNameInfoSize; // [rsp+34h] [rbp-2Ch] BYREF
  _UNICODE_STRING keyPath; // [rsp+38h] [rbp-28h] BYREF
  _KEY_NAME_INFORMATION emptyKeyNameInfo; // [rsp+48h] [rbp-18h] BYREF
  void *Caller; // [rsp+98h] [rbp+38h]

  isAffectedByPolicy = 0;
  isViolation[0] = 0;
  emptyKeyNameInfo = 0LL;
  v4 = 0LL;
  keyNameInfoSize = 0;
  v5 = 0LL;
  keyPath = 0LL;
  if ( !FxDriverGlobals )
    return;
  if ( !Key )
    return;
  if ( !FxDriverGlobals->FxVerifierOn )
    return;
  DebugExtension = FxDriverGlobals->DebugExtension;
  if ( !DebugExtension
    || DebugExtension->StateSeparationDetection == FxStateSeparationDetectionNone
    || FxRegKey::_IsAffectedByStateSeparationRegistryPolicy(FxDriverGlobals, Key, &isAffectedByPolicy) < 0
    || !isAffectedByPolicy
    || FxRegKey::_IsStateSeparationRegistryViolation(Key, isViolation) < 0
    || !isViolation[0] )
  {
    return;
  }
  v7 = ZwQueryKey(Key, KeyNameInformation, &emptyKeyNameInfo, 8u, &keyNameInfoSize);
  v8 = v7;
  if ( v7 >= 0 )
    goto LABEL_20;
  if ( v7 == -2147483643 )
  {
    v9 = (unsigned int *)FxPoolAllocator(
                           FxDriverGlobals,
                           &FxDriverGlobals->FxPoolFrameworks,
                           PagedPool,
                           keyNameInfoSize,
                           FxDriverGlobals->Tag,
                           Caller);
    v4 = v9;
    if ( !v9 )
      goto LABEL_20;
    memset(v9, 0, keyNameInfoSize);
    v8 = ZwQueryKey(Key, KeyNameInformation, v4, keyNameInfoSize, &keyNameInfoSize);
    if ( v8 < 0 )
      goto LABEL_20;
    v10 = *v4 + 2;
    if ( v10 < *v4 )
      goto LABEL_20;
    v11 = *v4 + 2;
    v12 = FxPoolAllocator(
            FxDriverGlobals,
            &FxDriverGlobals->FxPoolFrameworks,
            PagedPool,
            v10,
            FxDriverGlobals->Tag,
            Caller);
    v5 = v12;
    if ( !v12 )
      goto LABEL_20;
    memset(v12, 0, v11);
    memmove(v5, v4 + 1, *v4);
    RtlInitUnicodeString(&keyPath, (PCWSTR)v5);
  }
  if ( v8 < 0 )
  {
LABEL_20:
    WPP_IFR_SF_q(FxDriverGlobals, 2u, 2u, 0xDu, WPP_FxRegKey_cpp_Traceguids, Key);
    goto LABEL_21;
  }
  WPP_IFR_SF_Z(FxDriverGlobals, 2u, 2u, 0xCu, WPP_FxRegKey_cpp_Traceguids, &keyPath);
LABEL_21:
  if ( DebugExtension->StateSeparationDetection == FxStateSeparationDetectionDebugBreak )
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  if ( v4 )
    FxPoolFree(v4);
  if ( v5 )
    FxPoolFree(v5);
}
