/*
 * XREFs of ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C0091348
 * Callers:
 *     SetRedirectedWindow @ 0x1C009100C (SetRedirectedWindow.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     _GetClassInfoEx @ 0x1C00B9EB0 (_GetClassInfoEx.c)
 *     InternalRegisterClassEx @ 0x1C00D237C (InternalRegisterClassEx.c)
 *     xxxSetClassData @ 0x1C010EA44 (xxxSetClassData.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00D357C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 */

__int64 __fastcall SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(__int64 a1)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 result; // rax
  _QWORD *v4; // rcx

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  result = SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(a1);
  v4 = *(_QWORD **)(ThreadWin32Thread + 1472);
  if ( v4 )
    *(_QWORD *)(ThreadWin32Thread + 1472) = *v4;
  return result;
}
