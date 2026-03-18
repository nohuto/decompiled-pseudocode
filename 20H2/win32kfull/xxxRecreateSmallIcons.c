/*
 * XREFs of xxxRecreateSmallIcons @ 0x1C0242F5C
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0078134 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C004ACA8 (IsToplevelWindowDesktopComposed.c)
 *     xxxCreateWindowSmIcon @ 0x1C007A488 (xxxCreateWindowSmIcon.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     SendDwmIconChange @ 0x1C00C4E60 (SendDwmIconChange.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00D357C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     DestroyWindowSmIcon @ 0x1C00D39BC (DestroyWindowSmIcon.c)
 *     DestroyClassSmIcon @ 0x1C00D4128 (DestroyClassSmIcon.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F50CC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1C00F7870 (ClassLock.c)
 *     xxxCreateClassSmIcon @ 0x1C010449C (xxxCreateClassSmIcon.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0106D80 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(unsigned __int64 a1)
{
  bool v2; // bl
  __int64 ThreadWin32Thread; // rsi
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  struct _CALLPROCDATA **v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  char v12; // bl
  __int64 result; // rax
  __int64 *v14[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v15[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  SmartObjStackRefBase<tagCLS>::Init(v14, *(_QWORD *)(a1 + 136));
  v2 = (unsigned int)DestroyClassSmIcon(v14) && *(_QWORD *)(*(_QWORD *)(a1 + 136) + 80LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree((__int64 *)v14);
  v4 = *(_QWORD **)(ThreadWin32Thread + 1472);
  if ( v4 )
    *(_QWORD *)(ThreadWin32Thread + 1472) = *v4;
  if ( v2 )
  {
    v5 = *(_QWORD *)(a1 + 136);
    v16 = 0LL;
    v17 = 0LL;
    if ( (unsigned int)ClassLock(v5, &v16) )
    {
      SmartObjStackRefBase<tagCLS>::Init(v15, *(_QWORD *)(a1 + 136));
      xxxCreateClassSmIcon(v15);
      v6 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree((__int64 *)v15);
      v7 = *(_QWORD **)(v6 + 1472);
      if ( v7 )
        *(_QWORD *)(v6 + 1472) = *v7;
      v8 = *(struct _CALLPROCDATA ***)(a1 + 136);
      v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v10 = v16;
      *(_QWORD *)(v9 + 16) = v16;
      ClassUnlockWorker(v8, v10, v11);
    }
  }
  v12 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 23LL) & 0x20;
  if ( (unsigned int)DestroyWindowSmIcon(a1) && !v12 )
    xxxCreateWindowSmIcon(a1, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 272LL), 1);
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
    return SendDwmIconChange(a1);
  return result;
}
