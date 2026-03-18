/*
 * XREFs of _ServerFixupMenuDC @ 0x1C01015A0
 * Callers:
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C01008C0 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1C0100CB0 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHINITMENU @ 0x1C0100F90 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C0101270 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C022D280 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 * Callees:
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C005C53C (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C005D240 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreGetTextAlign @ 0x1C005D2C8 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C005D450 (GreSetTextAlign.c)
 *     GreSelectFont @ 0x1C0062690 (GreSelectFont.c)
 *     MNGetpItemFromIndex @ 0x1C00646F8 (MNGetpItemFromIndex.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _WindowFromDC @ 0x1C00FC03C (_WindowFromDC.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
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
