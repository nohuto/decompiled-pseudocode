/*
 * XREFs of xxxActivateKeyboardLayout @ 0x1C0018AB0
 * Callers:
 *     NtUserActivateKeyboardLayout @ 0x1C0018800 (NtUserActivateKeyboardLayout.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0018B70 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C0019760 (HKLtoPKL.c)
 *     ThreadUnlock1 @ 0x1C00899B0 (ThreadUnlock1.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01A7BE0 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 */

struct tagKL *__fastcall xxxActivateKeyboardLayout(
        struct tagWINDOWSTATION *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // rbp
  struct tagKL *result; // rax
  struct tagKL *v9; // rbx
  __int64 v10; // rbx
  _BYTE v11[16]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = gptiCurrent;
  v12[2] = 0LL;
  result = (struct tagKL *)HKLtoPKL(gptiCurrent, a2);
  v9 = result;
  if ( result )
  {
    if ( (a3 & 8) != 0 )
      ReorderKeyboardLayouts(a1, result);
    v12[0] = *((_QWORD *)v4 + 51);
    *((_QWORD *)v4 + 51) = v12;
    v12[1] = v9;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v11);
    _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
    v10 = xxxInternalActivateKeyboardLayout(a1, v9, a3, a4);
    ThreadUnlock1();
    return (struct tagKL *)v10;
  }
  return result;
}
