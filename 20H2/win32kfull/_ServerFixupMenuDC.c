/*
 * XREFs of _ServerFixupMenuDC @ 0x1C00FDB60
 * Callers:
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00FCE80 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1C00FD270 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHINITMENU @ 0x1C00FD550 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C00FD830 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C022C3F0 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 * Callees:
 *     GreSetTextAlign @ 0x1C002F63C (GreSetTextAlign.c)
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C007920C (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _WindowFromDC @ 0x1C00F652C (_WindowFromDC.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C011B8B8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreGetTextAlign @ 0x1C011C378 (GreGetTextAlign.c)
 */

HDC __fastcall ServerFixupMenuDC(HDC a1, __int64 a2, unsigned int a3, int a4)
{
  HDC DCEx; // rsi
  unsigned int CurrentProcessId; // ebx
  struct tagWND *v11; // rax
  struct tagWND *v12; // rbx
  __int64 v13; // rax
  int TextAlign; // r8d
  __int64 v15; // rcx
  _DWORD **v16; // rax
  bool v17; // zf
  _QWORD v18[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-28h]

  DCEx = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) != (CurrentProcessId & 0xFFFFFFFC) && a1 )
  {
    SmartObjStackRefBase<tagMENU>::Init(v18, 0LL);
    v19 = 0LL;
    v11 = WindowFromDC(a1);
    v12 = v11;
    if ( v11 )
    {
      DCEx = (HDC)_GetDCEx(v11, 0LL, 65539LL);
      GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
      GetDPIMETRICS(v12);
      GreSelectFont(DCEx);
      v13 = ValidateHmenu(a2);
      SmartObjStackRefBase<tagMENU>::operator=(v18, v13);
      if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v18) )
      {
        TextAlign = GreGetTextAlign(a1);
        if ( a4 && *(_QWORD *)(*(_QWORD *)v18[0] + 88LL) )
        {
          v15 = v19;
          if ( !v19 )
            v15 = *(_QWORD *)v18[0];
          v16 = (_DWORD **)MNGetpItemFromIndex(v15, a3);
          if ( !v16 )
            goto LABEL_16;
          v17 = (**v16 & 0x2000) == 0;
          goto LABEL_14;
        }
        if ( *(_QWORD *)(*(_QWORD *)v18[0] + 88LL) )
        {
          v17 = (***(_DWORD ***)(*(_QWORD *)v18[0] + 88LL) & 0x2000) == 0;
LABEL_14:
          if ( !v17 )
            GreSetTextAlign(a1, TextAlign | 0x100);
        }
      }
    }
LABEL_16:
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v18);
  }
  return DCEx;
}
