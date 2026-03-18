/*
 * XREFs of xxxActivateKeyboardLayout @ 0x1C00892B0
 * Callers:
 *     NtUserActivateKeyboardLayout @ 0x1C0089000 (NtUserActivateKeyboardLayout.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0044210 (ThreadUnlock1.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0089370 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C0089F60 (HKLtoPKL.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01A5860 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 */

struct tagKL *__fastcall xxxActivateKeyboardLayout(
        struct tagWINDOWSTATION *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // rbp
  struct tagKL *result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagKL *v12; // rbx
  __int64 v13; // rbx
  _BYTE v14[16]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = gptiCurrent;
  v15[2] = 0LL;
  result = (struct tagKL *)HKLtoPKL(gptiCurrent, a2);
  v12 = result;
  if ( result )
  {
    if ( (a3 & 8) != 0 )
      ReorderKeyboardLayouts(a1, result);
    v15[0] = *((_QWORD *)v4 + 52);
    *((_QWORD *)v4 + 52) = v15;
    v15[1] = v12;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v14,
      v9,
      v10,
      v11);
    _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    v13 = xxxInternalActivateKeyboardLayout(a1, v12, a3, a4);
    ThreadUnlock1();
    return (struct tagKL *)v13;
  }
  return result;
}
