/*
 * XREFs of ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00CEA9C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C0122EBC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 */

__int64 __fastcall SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(__int64 a1)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 result; // rax
  _QWORD *v4; // rcx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(a1);
  v4 = *(_QWORD **)(ThreadWin32Thread + 1464);
  if ( v4 )
    *(_QWORD *)(ThreadWin32Thread + 1464) = *v4;
  return result;
}
