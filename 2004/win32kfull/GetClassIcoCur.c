/*
 * XREFs of GetClassIcoCur @ 0x1C0115200
 * Callers:
 *     <none>
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C008E1DC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F75A4 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
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
  v5 = *(_QWORD **)(ThreadWin32Thread + 1464);
  if ( v5 )
    *(_QWORD *)(ThreadWin32Thread + 1464) = *v5;
  return v3;
}
