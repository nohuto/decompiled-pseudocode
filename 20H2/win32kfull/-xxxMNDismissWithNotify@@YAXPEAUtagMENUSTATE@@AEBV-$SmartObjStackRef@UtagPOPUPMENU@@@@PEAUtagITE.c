/*
 * XREFs of ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0235BEC
 * Callers:
 *     xxxMNButtonUp @ 0x1C0236EBC (xxxMNButtonUp.c)
 *     xxxMNDoubleClick @ 0x1C0237EB8 (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C02385D8 (xxxMNKeyDown.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     zzzStartFade @ 0x1C01E7F8C (zzzStartFade.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0236284 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMNCancel @ 0x1C0236FD4 (xxxMNCancel.c)
 */

__int64 __fastcall xxxMNDismissWithNotify(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v7; // r14d
  int v8; // edi
  int v9; // ebx
  int v10; // r8d
  _QWORD v12[4]; // [rsp+30h] [rbp-38h] BYREF

  v7 = a1;
  if ( (**(_DWORD **)a1 & 4) != 0 )
  {
    v8 = 274;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x20000) != 0 )
    {
      v8 = 294;
      goto LABEL_7;
    }
    v8 = 273;
  }
  a4 = *(_DWORD *)(*(_QWORD *)a3 + 8LL);
LABEL_7:
  SmartObjStackRefBase<tagMENU>::Init(v12, *(_QWORD *)(**(_QWORD **)a2 + 40LL));
  v12[2] = 0LL;
  v9 = zzzMNFadeSelection(v12, a3);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v12);
  if ( v9 )
    zzzStartFade();
  v10 = -1;
  if ( v8 != 274 )
    v10 = -3;
  xxxWindowEvent(0x8013u, *(struct tagWND **)(**(_QWORD **)a2 + 16LL), v10, a4, 0);
  return xxxMNCancel(v7, v8, a4);
}
