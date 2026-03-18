/*
 * XREFs of __ServerFixupMenuDC@16 @ 0xB932A
 * Callers:
 *     _SfnINOUTLPUAHMEASUREMENUITEM@32 @ 0xB8942 (_SfnINOUTLPUAHMEASUREMENUITEM@32.c)
 *     _SfnINLPUAHDRAWMENU@32 @ 0xB8C12 (_SfnINLPUAHDRAWMENU@32.c)
 *     _SfnINLPUAHINITMENU@32 @ 0xB8DEE (_SfnINLPUAHINITMENU@32.c)
 *     _SfnINLPUAHDRAWMENUITEM@32 @ 0xB8FCA (_SfnINLPUAHDRAWMENUITEM@32.c)
 *     _SfnINLPUAHNCPAINTMENUPOPUP@32 @ 0x18E3FD (_SfnINLPUAHNCPAINTMENUPOPUP@32.c)
 * Callees:
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QBE_NXZ @ 0x8F1E2 (--B-$SmartObjStackRef@UtagMENU@@@@QBE_NXZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     __WindowFromDC@4 @ 0x9A764 (__WindowFromDC@4.c)
 *     _GreSetTextAlign@8 @ 0xB66FA (_GreSetTextAlign@8.c)
 *     _GreGetTextAlign@4 @ 0xB687C (_GreGetTextAlign@4.c)
 *     ?GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z @ 0xB68B6 (-GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z.c)
 */

HDC __fastcall _ServerFixupMenuDC(HDC a1, int a2, unsigned int a3, int a4)
{
  HDC DCEx; // ebx
  int ObjectOwner; // esi
  struct tagWND *v8; // eax
  struct tagWND *v9; // esi
  int *DPIMETRICS; // eax
  int v11; // eax
  int TextAlign; // esi
  int v13; // ecx
  _DWORD **v14; // eax
  _DWORD v15[2]; // [esp+Ch] [ebp-10h] BYREF
  int v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+18h] [ebp-4h]

  v17 = a2;
  DCEx = 0;
  ObjectOwner = GreGetObjectOwner(a1, 1);
  if ( ObjectOwner != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) && a1 )
  {
    SmartObjStackRefBase<tagMENU>::Init(v15, 0);
    v16 = 0;
    v8 = _WindowFromDC();
    v9 = v8;
    if ( v8 )
    {
      DCEx = (HDC)_GetDCEx(v8, 0, 65539);
      GreSelectBrush(DCEx, *(_DWORD *)(_gpsi + 4320));
      DPIMETRICS = (int *)GetDPIMETRICS(v9);
      GreSelectFont(DCEx, *DPIMETRICS);
      v11 = ValidateHmenu(v17);
      SmartObjStackRefBase<tagMENU>::operator=(v15, v11);
      if ( SmartObjStackRef<tagMENU>::operator bool(v15) )
      {
        TextAlign = GreGetTextAlign(a1);
        if ( a4 && *(_DWORD *)(*(_DWORD *)v15[0] + 56) )
        {
          v13 = v16;
          if ( !v16 )
            v13 = *(_DWORD *)v15[0];
          v14 = (_DWORD **)MNGetpItemFromIndex(v13, a3);
          if ( !v14 )
            goto LABEL_16;
          goto LABEL_14;
        }
        if ( *(_DWORD *)(*(_DWORD *)v15[0] + 56) )
        {
          v14 = *(_DWORD ***)(*(_DWORD *)v15[0] + 56);
LABEL_14:
          if ( (**v14 & 0x2000) != 0 )
            GreSetTextAlign(a1, TextAlign | 0x100);
        }
      }
    }
LABEL_16:
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v15);
  }
  return DCEx;
}
