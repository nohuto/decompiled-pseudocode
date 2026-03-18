/*
 * XREFs of UsbDevice_DisableCompletionReturnFailure @ 0x1C0046D40
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_DisableCompletion @ 0x1C0046A44 (UsbDevice_DisableCompletion.c)
 */

void __fastcall UsbDevice_DisableCompletionReturnFailure(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  UsbDevice_DisableCompletion(a1, a2, 1, a4);
}
