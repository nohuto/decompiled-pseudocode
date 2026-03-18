/*
 * XREFs of xxxUnloadKeyboardLayout @ 0x1C01ADE50
 * Callers:
 *     NtUserUnloadKeyboardLayout @ 0x1C01409F0 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     HKLtoPKL @ 0x1C00593E0 (HKLtoPKL.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0059540 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 */

struct tagKL *__fastcall xxxUnloadKeyboardLayout(struct tagWINDOWSTATION *a1, __int64 a2)
{
  struct tagKL *result; // rax

  result = (struct tagKL *)HKLtoPKL((__int64)gptiCurrent, a2);
  if ( result )
    return (struct tagKL *)xxxInternalUnloadKeyboardLayout(a1, result, 0);
  return result;
}
