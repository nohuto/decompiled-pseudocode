/*
 * XREFs of ?GetObjectFromMinUser@@YAPEAU_HEAD@@PEAX_N@Z @ 0x1C011C0A0
 * Callers:
 *     ValidateBaseHandleFromMinuserHandle @ 0x1C011C290 (ValidateBaseHandleFromMinuserHandle.c)
 *     ValidateHwndMinuser @ 0x1C011C390 (ValidateHwndMinuser.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C013D640 (LookForMatchingBaseWindowPHE.c)
 */

struct _HEAD *__fastcall GetObjectFromMinUser(void *a1, char a2)
{
  __int64 v2; // rbx
  __int64 ThreadWin32Thread; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdi
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( a2 )
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  else
    ThreadWin32Thread = 0LL;
  if ( ThreadWin32Thread )
    CurrentProcessWin32Process = *(_QWORD *)(ThreadWin32Thread + 416);
  else
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = LookForMatchingBaseWindowPHE(a1, CurrentProcessWin32Process, ThreadWin32Thread);
  if ( v6 )
  {
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v8);
    return (struct _HEAD *)*((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((v6 - (__int64)qword_1C024AD48) >> 5));
  }
  return (struct _HEAD *)v2;
}
