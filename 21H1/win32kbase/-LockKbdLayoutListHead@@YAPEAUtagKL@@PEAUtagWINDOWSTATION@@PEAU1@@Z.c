/*
 * XREFs of ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C005652C
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00579C8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0059540 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01AD940 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0071980 (HMAssignmentLock.c)
 */

struct tagKL *__fastcall LockKbdLayoutListHead(struct tagWINDOWSTATION *a1, struct tagKL *a2)
{
  __int64 *v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[1] = a2;
  v2 = (__int64 *)((char *)a1 + 72);
  if ( !a1 )
    v2 = &gspklWinstaLessSessionLayouts;
  v4[0] = v2;
  return (struct tagKL *)HMAssignmentLock(v4);
}
