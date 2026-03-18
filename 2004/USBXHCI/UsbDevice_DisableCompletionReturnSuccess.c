/*
 * XREFs of UsbDevice_DisableCompletionReturnSuccess @ 0x1C0045870
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_DisableCompletion @ 0x1C0045554 (UsbDevice_DisableCompletion.c)
 */

void __fastcall UsbDevice_DisableCompletionReturnSuccess(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  UsbDevice_DisableCompletion(a1, a2, 0, a4);
}
