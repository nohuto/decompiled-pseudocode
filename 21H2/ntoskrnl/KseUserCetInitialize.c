/*
 * XREFs of KseUserCetInitialize @ 0x140A39C28
 * Callers:
 *     KseInitialize @ 0x140A3D89C (KseInitialize.c)
 * Callees:
 *     KsepLogError @ 0x140371AC4 (KsepLogError.c)
 *     KsepDebugPrint @ 0x140527128 (KsepDebugPrint.c)
 *     KseRegisterShim @ 0x1407BDBB0 (KseRegisterShim.c)
 */

void KseUserCetInitialize()
{
  int v0; // eax
  __int64 v1; // rcx
  char v2; // al

  v0 = KseRegisterShim((__int64)&KseUserCetBasicModeAllowRetTargetNotCetCompatShim, 0LL, 0LL);
  if ( v0 < 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v1 + 1] = v0;
    v2 = KsepDebugFlag;
    KsepHistoryErrors[2 * v1] = 1245275;
    if ( (v2 & 2) != 0 )
      KsepDebugPrint(12LL, "UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
    KsepLogError(12, "UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
  }
}
