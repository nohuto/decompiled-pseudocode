/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180091B80
 * Callers:
 *     IsOleInitializePresent @ 0x18008FAF4 (IsOleInitializePresent.c)
 *     IsNAVShutdownPresent @ 0x18008FBD4 (IsNAVShutdownPresent.c)
 *     IsPolicyManager_GetPolicyPresent @ 0x18008FDDC (IsPolicyManager_GetPolicyPresent.c)
 *     IsPicRetrieveFileInfoPresent @ 0x180090DFC (IsPicRetrieveFileInfoPresent.c)
 *     IsDwmSetWindowAttributePresent @ 0x180091094 (IsDwmSetWindowAttributePresent.c)
 *     IsComCtl32Present @ 0x18009123C (IsComCtl32Present.c)
 *     IsGetThreadDesktopPresent @ 0x180091F24 (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x1800920FC (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
