/*
 * XREFs of xxxUnloadKeyboardLayout @ 0x1C01A5D70
 * Callers:
 *     NtUserUnloadKeyboardLayout @ 0x1C0138A00 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C008832C (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     HKLtoPKL @ 0x1C0089F60 (HKLtoPKL.c)
 */

struct tagKL *__fastcall xxxUnloadKeyboardLayout(struct tagWINDOWSTATION *a1, __int64 a2)
{
  struct tagKL *result; // rax
  __int64 v4; // r9

  result = (struct tagKL *)HKLtoPKL((__int64)gptiCurrent, a2);
  if ( result )
    return (struct tagKL *)xxxInternalUnloadKeyboardLayout(a1, result, 0LL, v4);
  return result;
}
