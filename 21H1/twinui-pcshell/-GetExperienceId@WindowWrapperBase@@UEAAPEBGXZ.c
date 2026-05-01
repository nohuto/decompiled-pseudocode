/*
 * XREFs of ?GetExperienceId@WindowWrapperBase@@UEAAPEBGXZ @ 0x180083C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PCWSTR __fastcall WindowWrapperBase::GetExperienceId(HSTRING *this)
{
  return WindowsGetStringRawBuffer(this[38], 0LL);
}
