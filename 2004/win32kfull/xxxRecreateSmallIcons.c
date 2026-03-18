/*
 * XREFs of xxxRecreateSmallIcons @ 0x1C02441FC
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00309B0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     SendDwmIconChange @ 0x1C002A5A0 (SendDwmIconChange.c)
 *     xxxCreateClassSmIcon @ 0x1C0030AF4 (xxxCreateClassSmIcon.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C008E1DC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     DestroyWindowSmIcon @ 0x1C008E61C (DestroyWindowSmIcon.c)
 *     DestroyClassSmIcon @ 0x1C008EFE0 (DestroyClassSmIcon.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B2CA8 (IsToplevelWindowDesktopComposed.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F75A4 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1C00FC6D0 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0106AF0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     xxxCreateWindowSmIcon @ 0x1C011B988 (xxxCreateWindowSmIcon.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(__int64 a1)
{
  bool v2; // bl
  __int64 ThreadWin32Thread; // rsi
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  struct _CALLPROCDATA **v8; // rbx
  __int64 v9; // rax
  char v10; // bl
  __int64 result; // rax
  __int64 *v12[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v13[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  SmartObjStackRefBase<tagCLS>::Init(v12, *(_QWORD *)(a1 + 136));
  v2 = (unsigned int)DestroyClassSmIcon(v12) && *(_QWORD *)(*(_QWORD *)(a1 + 136) + 80LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree((__int64 *)v12);
  v4 = *(_QWORD **)(ThreadWin32Thread + 1464);
  if ( v4 )
    *(_QWORD *)(ThreadWin32Thread + 1464) = *v4;
  if ( v2 )
  {
    v5 = *(_QWORD *)(a1 + 136);
    v14 = 0LL;
    v15 = 0LL;
    if ( (unsigned int)ClassLock(v5, &v14) )
    {
      SmartObjStackRefBase<tagCLS>::Init(v13, *(_QWORD *)(a1 + 136));
      xxxCreateClassSmIcon(v13);
      v6 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree((__int64 *)v13);
      v7 = *(_QWORD **)(v6 + 1464);
      if ( v7 )
        *(_QWORD *)(v6 + 1464) = *v7;
      v8 = *(struct _CALLPROCDATA ***)(a1 + 136);
      v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(v9 + 16) = v14;
      ClassUnlockWorker(v8);
    }
  }
  v10 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 23LL) & 0x20;
  if ( (unsigned int)DestroyWindowSmIcon(a1) && !v10 )
    xxxCreateWindowSmIcon(a1, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 272LL), 1);
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
    return SendDwmIconChange(a1);
  return result;
}
