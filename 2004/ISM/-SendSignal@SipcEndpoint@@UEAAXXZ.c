/*
 * XREFs of ?SendSignal@SipcEndpoint@@UEAAXXZ @ 0x1800C1820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SipcEndpoint::SendSignal(HANDLE *this)
{
  SetEvent(this[4]);
}
