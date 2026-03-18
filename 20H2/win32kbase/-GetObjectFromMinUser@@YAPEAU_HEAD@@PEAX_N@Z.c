/*
 * XREFs of ?GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z @ 0x1C0119D60
 * Callers:
 *     ValidateBaseHandleFromMinuserHandle @ 0x1C0119F50 (ValidateBaseHandleFromMinuserHandle.c)
 *     ValidateHwndMinuser @ 0x1C011A050 (ValidateHwndMinuser.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C013B2F0 (LookForMatchingBaseWindowPHE.c)
 */

struct _HEAD *__fastcall GetObjectFromMinUser(void *a1, char a2)
{
  __int64 v2; // rbx
  __int64 ThreadWin32Thread; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( a2 )
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  else
    ThreadWin32Thread = 0LL;
  if ( ThreadWin32Thread )
    CurrentProcessWin32Process = *(_QWORD *)(ThreadWin32Thread + 424);
  else
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = LookForMatchingBaseWindowPHE(a1, CurrentProcessWin32Process, ThreadWin32Thread);
  if ( v7 )
  {
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v11,
      v6,
      v8,
      v9);
    return (struct _HEAD *)*((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((v7 - (__int64)qword_1C0248D48) >> 5));
  }
  return (struct _HEAD *)v2;
}
