/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180091220
 * Callers:
 *     IsOleInitializePresent @ 0x18008F1E4 (IsOleInitializePresent.c)
 *     IsNAVShutdownPresent @ 0x18008F2C4 (IsNAVShutdownPresent.c)
 *     IsPicRetrieveFileInfoPresent @ 0x180090498 (IsPicRetrieveFileInfoPresent.c)
 *     IsDwmSetWindowAttributePresent @ 0x180090734 (IsDwmSetWindowAttributePresent.c)
 *     IsComCtl32Present @ 0x1800908DC (IsComCtl32Present.c)
 *     IsGetThreadDesktopPresent @ 0x1800915C4 (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x18009179C (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
