/*
 * XREFs of ?GetApplicationId@WindowWrapperBase@@UEAAPEBGXZ @ 0x180081530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PCWSTR __fastcall WindowWrapperBase::GetApplicationId(HSTRING *this)
{
  return WindowsGetStringRawBuffer(this[37], 0LL);
}
