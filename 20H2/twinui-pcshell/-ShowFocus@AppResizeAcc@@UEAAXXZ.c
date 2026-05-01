/*
 * XREFs of ?ShowFocus@AppResizeAcc@@UEAAXXZ @ 0x180419EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppResizeAcc::ShowFocus(IRawElementProviderSimple *this)
{
  UiaRaiseAutomationEvent(this - 2, 20005);
}
