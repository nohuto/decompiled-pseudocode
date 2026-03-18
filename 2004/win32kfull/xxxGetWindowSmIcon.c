/*
 * XREFs of xxxGetWindowSmIcon @ 0x1C002BFF8
 * Callers:
 *     SendDwmIconChange @ 0x1C002A5A0 (SendDwmIconChange.c)
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     xxxRealDrawMenuItem @ 0x1C024E90C (xxxRealDrawMenuItem.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C008E1DC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F75A4 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     xxxCreateWindowSmIcon @ 0x1C011B988 (xxxCreateWindowSmIcon.c)
 */

__int64 __fastcall xxxGetWindowSmIcon(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rdi
  _QWORD *v9; // rcx
  _BYTE *v11; // rcx
  __int64 WindowSmIcon; // rax
  __int64 v13; // rdx
  _QWORD v14[2]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 LowLimit; // [rsp+70h] [rbp+8h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v14, *(_QWORD *)(a1 + 136));
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(v5 + 264);
  if ( !v6 || (LOBYTE(v4) = 3, (v7 = HMValidateHandleNoSecure(*(_QWORD *)(v5 + 264), v4)) == 0) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)v14[0] + 112LL);
    if ( !v7 )
    {
      v11 = *(_BYTE **)(a1 + 40);
      if ( (v11[21] & 2) != 0 || (v11[20] & 8) != 0 && (v11[24] & 0x40) != 0 )
        goto LABEL_8;
      if ( a2 )
        goto LABEL_8;
      LowLimit = 0LL;
      if ( xxxSendTransformableMessageTimeout(a1, 55, 0, 0, 0, 100, (unsigned __int64)&LowLimit, 1, 0) )
        v6 = LowLimit;
      if ( !v6
        || (WindowSmIcon = xxxCreateWindowSmIcon(a1, v6, 0LL),
            LOBYTE(v13) = 3,
            (v7 = HMValidateHandleNoSecure(WindowSmIcon, v13)) == 0) )
      {
LABEL_8:
        v7 = qword_1C03317E0;
      }
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v14);
  v9 = *(_QWORD **)(ThreadWin32Thread + 1464);
  if ( v9 )
    *(_QWORD *)(ThreadWin32Thread + 1464) = *v9;
  return v7;
}
