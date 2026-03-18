/*
 * XREFs of UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C0026B60
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C0025B44 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 */

__int64 __fastcall UserValidateAndAttachQueueToInputWindowApiExt(HWND a1, struct IInputQueue *a2, struct tagWND **a3)
{
  return ValidateAndAttachQueueToInputWindow(a1, a2, a3);
}
