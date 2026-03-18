/*
 * XREFs of xxxGetWindowSmIcon @ 0x1C00C37C8
 * Callers:
 *     SendDwmIconChange @ 0x1C00C4E60 (SendDwmIconChange.c)
 *     xxxDrawCaptionTemp @ 0x1C014DC4C (xxxDrawCaptionTemp.c)
 *     xxxRealDrawMenuItem @ 0x1C024D304 (xxxRealDrawMenuItem.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     xxxCreateWindowSmIcon @ 0x1C007A488 (xxxCreateWindowSmIcon.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00D357C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F50CC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall xxxGetWindowSmIcon(unsigned __int64 a1, int a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 ThreadWin32Thread; // rdi
  _QWORD *v8; // rcx
  _BYTE *v10; // rcx
  unsigned __int64 WindowSmIcon; // rax
  _QWORD v12[2]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 LowLimit; // [rsp+70h] [rbp+8h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v12, *(_QWORD *)(a1 + 136));
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(_QWORD *)(v4 + 264);
  if ( !v5 || (v6 = HMValidateHandleNoSecure(*(_QWORD *)(v4 + 264), 3)) == 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)v12[0] + 112LL);
    if ( !v6 )
    {
      v10 = *(_BYTE **)(a1 + 40);
      if ( (v10[21] & 2) != 0 || (v10[20] & 8) != 0 && (v10[24] & 0x40) != 0 )
        goto LABEL_8;
      if ( a2 )
        goto LABEL_8;
      LowLimit = 0LL;
      if ( xxxSendTransformableMessageTimeout(a1, 0x37u, 0LL, 0LL, 0, 0x64u, (__int64 *)&LowLimit, 1, 0) )
        v5 = LowLimit;
      if ( !v5
        || (WindowSmIcon = xxxCreateWindowSmIcon(a1, v5, 0), (v6 = HMValidateHandleNoSecure(WindowSmIcon, 3)) == 0) )
      {
LABEL_8:
        v6 = qword_1C03307E0;
      }
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v12);
  v8 = *(_QWORD **)(ThreadWin32Thread + 1472);
  if ( v8 )
    *(_QWORD *)(ThreadWin32Thread + 1472) = *v8;
  return v6;
}
