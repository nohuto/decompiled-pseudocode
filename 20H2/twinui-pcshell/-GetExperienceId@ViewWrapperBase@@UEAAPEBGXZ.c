/*
 * XREFs of ?GetExperienceId@ViewWrapperBase@@UEAAPEBGXZ @ 0x1802CE8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PCWSTR __fastcall ViewWrapperBase::GetExperienceId(HSTRING *this)
{
  return WindowsGetStringRawBuffer(this[19], 0LL);
}
