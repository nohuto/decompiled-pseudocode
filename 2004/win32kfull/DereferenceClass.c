/*
 * XREFs of DereferenceClass @ 0x1C008D950
 * Callers:
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     _lambda_f1a4ef51568b8a4d2f2910aa9313a7fc_::operator() @ 0x1C01592A4 (_lambda_f1a4ef51568b8a4d2f2910aa9313a7fc_--operator().c)
 * Callees:
 *     DestroyClass @ 0x1C008DD2C (DestroyClass.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C008E1DC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F75A4 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall DereferenceClass(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 ThreadWin32Thread; // rbx
  __int64 result; // rax
  _QWORD *v7; // rcx
  _QWORD **v8; // rdx
  _QWORD *i; // r8
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v10, *(_QWORD *)(a2 + 136));
  *(_QWORD *)(*(_QWORD *)(a2 + 40) + 128LL) = 0LL;
  v4 = v10[0];
  *(_QWORD *)(a2 + 136) = 0LL;
  --*(_DWORD *)(*(_QWORD *)v4 + 72LL);
  if ( *(_QWORD *)v10[0] != *(_QWORD *)(*(_QWORD *)v10[0] + 56LL) )
  {
    --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10[0] + 56LL) + 72LL);
    if ( !*(_DWORD *)(*(_QWORD *)v10[0] + 72LL) )
    {
      v8 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)v10[0] + 56LL) + 64LL);
      for ( i = *v8; i != *(_QWORD **)v10[0]; i = (_QWORD *)*i )
        ;
      DestroyClass(a1);
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  result = SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v10);
  v7 = *(_QWORD **)(ThreadWin32Thread + 1464);
  if ( v7 )
    *(_QWORD *)(ThreadWin32Thread + 1464) = *v7;
  return result;
}
