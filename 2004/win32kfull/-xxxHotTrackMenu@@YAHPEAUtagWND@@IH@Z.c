/*
 * XREFs of ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0243708
 * Callers:
 *     xxxHotTrack @ 0x1C0057148 (xxxHotTrack.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0024D1C (GetWindowDpiLastNotify.c)
 *     GreGetTextAlign @ 0x1C005D2C8 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C005D450 (GreSetTextAlign.c)
 *     xxxDrawMenuItem @ 0x1C0060D14 (xxxDrawMenuItem.c)
 *     GreSelectFont @ 0x1C0062690 (GreSelectFont.c)
 *     MNGetpItemIndex @ 0x1C00636B8 (MNGetpItemIndex.c)
 *     MNGetpItemFromIndex @ 0x1C00646F8 (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C0064724 (GetDPIMETRICSForDpi.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024FDDC (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHotTrackMenu(struct tagWND *a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v8; // rdx
  struct tagITEM *v9; // r14
  __int64 v10; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // eax
  unsigned int v18; // eax
  HDC DCEx; // rsi
  __int64 v20; // rdx
  int v21; // ecx
  int TextAlign; // eax
  int v23; // r15d
  __int64 v24; // rdx
  int v25; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v32; // [rsp+40h] [rbp-20h]
  __int128 v33; // [rsp+48h] [rbp-18h] BYREF
  __int64 v34; // [rsp+58h] [rbp-8h]

  v34 = 0LL;
  v3 = 1;
  v4 = *((_QWORD *)a1 + 5);
  v33 = 0LL;
  if ( (*(_BYTE *)(v4 + 16) & 1) != 0 )
  {
    v8 = *((_QWORD *)a1 + 21);
    if ( v8 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v31, v8);
      v32 = 0LL;
      v9 = (struct tagITEM *)MNGetpItemFromIndex(*v31[0], a2);
      if ( !v9 )
      {
LABEL_10:
        v3 = 0;
LABEL_11:
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v31);
        return v3;
      }
      v10 = *v31[0];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v33 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v33;
      *((_QWORD *)&v33 + 1) = v10;
      if ( v10 )
        HMLockObject(v10);
      xxxMNRecomputeBarIfNeeded(a1, v31);
      v12 = v32;
      if ( !v32 )
        v12 = *v31[0];
      if ( (unsigned int)MNGetpItemIndex(v12, (__int64)v9) == -1 )
      {
LABEL_9:
        ThreadUnlock1(v14, v13, v15);
        goto LABEL_10;
      }
      v14 = *(_QWORD *)v9;
      v17 = *(_DWORD *)(*(_QWORD *)v9 + 4LL);
      if ( a3 )
      {
        if ( (v17 & 1) != 0 )
          goto LABEL_9;
        v18 = v17 | 0x100;
      }
      else
      {
        v18 = v17 & 0xFFFFFEFF;
      }
      *(_DWORD *)(v14 + 4) = v18;
      DCEx = (HDC)_GetDCEx(a1, 0LL, 65539LL);
      GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
      v20 = *((_QWORD *)a1 + 5);
      v21 = *(_DWORD *)(v20 + 288) & 0xF;
      if ( v21 != 3 && (*(_DWORD *)(v20 + 232) & 0x8000000) != 0 )
        GetWindowDpiLastNotify((__int64)a1);
      GetDPIMETRICSForDpi();
      GreSelectFont(DCEx);
      TextAlign = GreGetTextAlign(DCEx);
      v23 = TextAlign;
      if ( *(_QWORD *)(*v31[0] + 88LL) && (***(_DWORD ***)(*v31[0] + 88LL) & 0x2000) != 0 )
        GreSetTextAlign(DCEx, TextAlign | 0x100);
      v24 = *((_QWORD *)a1 + 5);
      v25 = *(_DWORD *)(v24 + 288) & 0xF;
      if ( v25 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v24 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v24 + 232) & 0x8000000) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( !v25
             && (v27 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v27 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
      }
      xxxDrawMenuItem(DCEx, WindowDpiLastNotify, v31, v9, 0, 0LL);
      GreSetTextAlign(DCEx, v23);
      ThreadUnlock1(v29, v28, v30);
      _ReleaseDC(DCEx);
      goto LABEL_11;
    }
  }
  return 0LL;
}
