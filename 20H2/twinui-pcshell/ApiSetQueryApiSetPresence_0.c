/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180091780
 * Callers:
 *     IsOleInitializePresent @ 0x18008F654 (IsOleInitializePresent.c)
 *     IsNAVShutdownPresent @ 0x18008F734 (IsNAVShutdownPresent.c)
 *     IsPolicyManager_GetPolicyPresent @ 0x18008F93C (IsPolicyManager_GetPolicyPresent.c)
 *     IsPicRetrieveFileInfoPresent @ 0x18009095C (IsPicRetrieveFileInfoPresent.c)
 *     IsDwmSetWindowAttributePresent @ 0x180090BF4 (IsDwmSetWindowAttributePresent.c)
 *     IsComCtl32Present @ 0x180090D9C (IsComCtl32Present.c)
 *     IsGetThreadDesktopPresent @ 0x180091B24 (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x180091CFC (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
