/*
 * XREFs of ?ShowFocus@AppResizeAcc@@UEAAXXZ @ 0x1803F6F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppResizeAcc::ShowFocus(IRawElementProviderSimple *this)
{
  UiaRaiseAutomationEvent(this - 2, 20005);
}
