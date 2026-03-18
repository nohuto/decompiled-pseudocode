/*
 * XREFs of ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00CE268
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C0120B6C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 */

__int64 __fastcall SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(__int64 a1)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 result; // rax
  _QWORD *v4; // rcx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(a1);
  v4 = *(_QWORD **)(ThreadWin32Thread + 1472);
  if ( v4 )
    *(_QWORD *)(ThreadWin32Thread + 1472) = *v4;
  return result;
}
