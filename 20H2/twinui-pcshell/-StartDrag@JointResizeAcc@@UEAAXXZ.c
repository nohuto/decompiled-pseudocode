/*
 * XREFs of ?StartDrag@JointResizeAcc@@UEAAXXZ @ 0x18041F3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall JointResizeAcc::StartDrag(IRawElementProviderSimple *this)
{
  UiaRaiseAutomationEvent(this - 2, 20026);
}
