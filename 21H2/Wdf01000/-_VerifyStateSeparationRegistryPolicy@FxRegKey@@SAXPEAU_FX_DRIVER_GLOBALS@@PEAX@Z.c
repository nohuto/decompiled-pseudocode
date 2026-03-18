/*
 * XREFs of ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00152DC
 * Callers:
 *     imp_WdfRegistryAssignValue @ 0x1C0012E80 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00156A0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRegistryCreateKey @ 0x1C0030EF0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryAssignULong @ 0x1C0033080 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryAssignString @ 0x1C0033830 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryAssignMemory @ 0x1C006FFD0 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C00701E0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C0070460 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryRemoveKey @ 0x1C0070AF0 (imp_WdfRegistryRemoveKey.c)
 *     imp_WdfRegistryRemoveValue @ 0x1C0070B80 (imp_WdfRegistryRemoveValue.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_Z @ 0x1C006C210 (WPP_IFR_SF_Z.c)
 *     ?_IsAffectedByStateSeparationRegistryPolicy@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAE@Z @ 0x1C0071DD0 (-_IsAffectedByStateSeparationRegistryPolicy@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAE@Z.c)
 *     ?_IsStateSeparationRegistryViolation@FxRegKey@@SAJPEAXPEAE@Z @ 0x1C0072064 (-_IsStateSeparationRegistryViolation@FxRegKey@@SAJPEAXPEAE@Z.c)
 */

void __fastcall FxRegKey::_VerifyStateSeparationRegistryPolicy(_FX_DRIVER_GLOBALS *FxDriverGlobals, void *Key)
{
  FX_POOL_TRACKER *v2; // rdi
  wchar_t *v3; // r14
  FxDriverGlobalsDebugExtension *DebugExtension; // r15
  ULONG Tag; // ecx
  void *v8; // rax
  unsigned int v9; // ecx
  ULONG v10; // edx
  void *v11; // rax
  FX_POOL **v12; // rax
  unsigned __int8 isAffectedByPolicy; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int8 isViolation[3]; // [rsp+31h] [rbp-3Fh] BYREF
  unsigned int keyNameInfoSize[3]; // [rsp+34h] [rbp-3Ch] BYREF
  __m128i v16; // [rsp+40h] [rbp-30h] BYREF
  _UNICODE_STRING keyPath; // [rsp+50h] [rbp-20h] BYREF
  _KEY_NAME_INFORMATION emptyKeyNameInfo; // [rsp+60h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]

  emptyKeyNameInfo = 0LL;
  v2 = 0LL;
  keyNameInfoSize[0] = 0;
  v3 = 0LL;
  isAffectedByPolicy = 0;
  isViolation[0] = 0;
  keyPath = 0LL;
  if ( FxDriverGlobals )
  {
    if ( Key )
    {
      if ( FxDriverGlobals->FxVerifierOn )
      {
        DebugExtension = FxDriverGlobals->DebugExtension;
        if ( DebugExtension )
        {
          if ( DebugExtension->StateSeparationDetection
            && FxRegKey::_IsAffectedByStateSeparationRegistryPolicy(FxDriverGlobals, Key, &isAffectedByPolicy) >= 0
            && isAffectedByPolicy
            && FxRegKey::_IsStateSeparationRegistryViolation(Key, isViolation) >= 0
            && isViolation[0] )
          {
            if ( ZwQueryKey(Key, KeyNameInformation, &emptyKeyNameInfo, 8u, keyNameInfoSize) != -2147483643 )
              goto LABEL_23;
            Tag = FxDriverGlobals->Tag;
            v16.m128i_i64[0] = 0LL;
            v16.m128i_i64[1] = 256LL;
            v8 = FxDriverGlobals->FxPoolTrackingOn ? retaddr : 0LL;
            v2 = (FX_POOL_TRACKER *)FxPoolAllocator(
                                      FxDriverGlobals,
                                      &FxDriverGlobals->FxPoolFrameworks,
                                      &v16,
                                      keyNameInfoSize[0],
                                      Tag,
                                      v8);
            if ( !v2 )
              goto LABEL_23;
            if ( ZwQueryKey(Key, KeyNameInformation, v2, keyNameInfoSize[0], keyNameInfoSize) < 0 )
              goto LABEL_23;
            v9 = LODWORD(v2->Link.Flink) + 2;
            if ( v9 < LODWORD(v2->Link.Flink) )
              goto LABEL_23;
            v10 = FxDriverGlobals->Tag;
            v16.m128i_i64[0] = 0LL;
            v16.m128i_i64[1] = 256LL;
            v11 = FxDriverGlobals->FxPoolTrackingOn ? retaddr : 0LL;
            v12 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v16, v9, v10, v11);
            v3 = (wchar_t *)v12;
            if ( v12 )
            {
              memmove(v12, (char *)&v2->Link.Flink + 4, LODWORD(v2->Link.Flink));
              RtlInitUnicodeString(&keyPath, v3);
              WPP_IFR_SF_Z(FxDriverGlobals, 2u, 2u, 0xCu, WPP_FxRegKey_cpp_Traceguids, &keyPath);
            }
            else
            {
LABEL_23:
              WPP_IFR_SF_q(FxDriverGlobals, 2u, 2u, 0xDu, WPP_FxRegKey_cpp_Traceguids, Key);
            }
            if ( DebugExtension->StateSeparationDetection == FxStateSeparationDetectionDebugBreak )
              FxVerifierDbgBreakPoint(FxDriverGlobals);
            if ( v2 )
              FxPoolFree(v2);
            if ( v3 )
              FxPoolFree((FX_POOL_TRACKER *)v3);
          }
        }
      }
    }
  }
}
