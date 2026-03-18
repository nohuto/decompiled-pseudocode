/*
 * XREFs of ?xxxMNDismissWithNotify@@YGXPAUtagMENUSTATE@@ABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@IJ@Z @ 0x196DCA
 * Callers:
 *     _xxxMNButtonUp@16 @ 0x197A96 (_xxxMNButtonUp@16.c)
 *     _xxxMNDoubleClick@12 @ 0x19860D (_xxxMNDoubleClick@12.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     _zzzStartFade@0 @ 0x153F74 (_zzzStartFade@0.c)
 *     ?zzzMNFadeSelection@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x197315 (-zzzMNFadeSelection@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 */

int __fastcall xxxMNDismissWithNotify(int a1, int a2, int a3, struct tagWND *HighLimit, int a5)
{
  bool v5; // zf
  int v6; // edi
  int v8; // esi
  _DWORD v10[4]; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+20h] [ebp-4h]

  v5 = (**(_BYTE **)a1 & 4) == 0;
  v11 = a2;
  v10[3] = a1;
  if ( v5 )
  {
    if ( ((unsigned int)&loc_20000 & *(_DWORD *)(a1 + 4)) != 0 )
    {
      v6 = 294;
      a5 = **(_DWORD **)(**(_DWORD **)a2 + 20);
      goto LABEL_7;
    }
    a5 = 0;
    v6 = 273;
  }
  else
  {
    v6 = 274;
  }
  HighLimit = *(struct tagWND **)(*(_DWORD *)a3 + 8);
LABEL_7:
  SmartObjStackRefBase<tagMENU>::Init(v10, *(_DWORD *)(**(_DWORD **)a2 + 20));
  v10[2] = 0;
  v8 = zzzMNFadeSelection(v10, a3);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v10);
  if ( v8 )
    zzzStartFade();
  xxxWindowEvent(0x8013u, *(struct tagEVENTHOOK **)(**(_DWORD **)v11 + 8), 2 * (v6 == 274) - 3, HighLimit, 0);
  return xxxMNCancel((unsigned int)HighLimit, a5);
}
