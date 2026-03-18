/*
 * XREFs of SaveCursorPosition @ 0x1C01A9A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SaveCursorPosition(__int64 a1)
{
  *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = a1;
}
