/*
 * XREFs of GetClassIcoCur @ 0x1C0116790
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00D357C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F50CC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall GetClassIcoCur(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 ThreadWin32Thread; // rdi
  _QWORD *v5; // rcx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v7, *(_QWORD *)(a1 + 136));
  switch ( a2 )
  {
    case -14:
      v3 = *(_QWORD *)(*(_QWORD *)v7[0] + 80LL);
      break;
    case -12:
      v3 = *(_QWORD *)(*(_QWORD *)v7[0] + 88LL);
      break;
    case -34:
      v3 = *(_QWORD *)(*(_QWORD *)v7[0] + 112LL);
      break;
    default:
      v3 = 0LL;
      break;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v7);
  v5 = *(_QWORD **)(ThreadWin32Thread + 1472);
  if ( v5 )
    *(_QWORD *)(ThreadWin32Thread + 1472) = *v5;
  return v3;
}
