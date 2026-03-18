/*
 * XREFs of _FreeHidData@4 @ 0x144291
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _EditionPostRawMouseInputMessage@24 @ 0xACE78 (_EditionPostRawMouseInputMessage@24.c)
 *     ?PostHidInput@@YGHPAUDEVICEINFO@@PAUtagQ@@PAUtagWND@@I@Z @ 0x143C5D (-PostHidInput@@YGHPAUDEVICEINFO@@PAUtagQ@@PAUtagWND@@I@Z.c)
 *     _NtUserGetRawInputBuffer@12 @ 0x16426F (_NtUserGetRawInputBuffer@12.c)
 *     ?PostRawKeyboardInputToForeground@@YGHPAU_RAW_INPUT_FOREGROUND_TARGET@@KPAXPAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x16DBC5 (-PostRawKeyboardInputToForeground@@YGHPAU_RAW_INPUT_FOREGROUND_TARGET@@KPAXPAU_KEYBOARD_INPUT_DA.c)
 *     ?PostRawKeyboardInputToSinks@@YGXKPAXPAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x16DCFA (-PostRawKeyboardInputToSinks@@YGXKPAXPAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall FreeHidData(int a1)
{
  int result; // eax

  result = HMMarkObjectDestroy(a1);
  if ( result )
  {
    HMAssignmentUnlock(a1 + 12);
    return HMFreeObject(a1);
  }
  return result;
}
