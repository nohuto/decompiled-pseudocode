/*
 * XREFs of ?ResetWorkEvent@CKernelTransport@@UEAAXXZ @ 0x180153140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CKernelTransport::ResetWorkEvent(HANDLE *this)
{
  ResetEvent(this[2]);
}
