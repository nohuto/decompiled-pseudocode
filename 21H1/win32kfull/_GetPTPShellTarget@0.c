/*
 * XREFs of _GetPTPShellTarget@0 @ 0x178B8D
 * Callers:
 *     <none>
 * Callees:
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 *     _GetPTPShellListener@0 @ 0x178B6F (_GetPTPShellListener@0.c)
 */

void *__stdcall GetPTPShellTarget(void *a1)
{
  _DWORD *PTPShellListener; // eax
  _DWORD *v2; // esi
  void *result; // eax
  _DWORD v4[26]; // [esp+8h] [ebp-68h] BYREF

  PTPShellListener = (_DWORD *)GetPTPShellListener();
  v2 = INPUTDEST_FROM_PWND(PTPShellListener, v4);
  result = a1;
  qmemcpy(a1, v2, 0x68u);
  return result;
}
