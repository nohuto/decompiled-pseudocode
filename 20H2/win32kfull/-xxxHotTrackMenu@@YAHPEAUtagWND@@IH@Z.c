/*
 * XREFs of ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0242468
 * Callers:
 *     xxxHotTrack @ 0x1C0129B48 (xxxHotTrack.c)
 * Callees:
 *     GreSetTextAlign @ 0x1C002F63C (GreSetTextAlign.c)
 *     xxxDrawMenuItem @ 0x1C00338A8 (xxxDrawMenuItem.c)
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C003510C (GetDPIMETRICSForDpi.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GetWindowDpiLastNotify @ 0x1C00C9744 (GetWindowDpiLastNotify.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     GreGetTextAlign @ 0x1C011C378 (GreGetTextAlign.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024E7D4 (xxxMNRecomputeBarIfNeeded.c)
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
  unsigned int WindowDpiLastNotify; // eax
  __int64 v23; // rax
  int TextAlign; // eax
  int v25; // r15d
  __int64 v26; // rdx
  int v27; // ecx
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v34; // [rsp+40h] [rbp-20h]
  __int128 v35; // [rsp+48h] [rbp-18h] BYREF
  __int64 v36; // [rsp+58h] [rbp-8h]

  v36 = 0LL;
  v3 = 1;
  v4 = *((_QWORD *)a1 + 5);
  v35 = 0LL;
  if ( (*(_BYTE *)(v4 + 16) & 1) != 0 )
  {
    v8 = *((_QWORD *)a1 + 21);
    if ( v8 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v33, v8);
      v34 = 0LL;
      v9 = (struct tagITEM *)MNGetpItemFromIndex(*v33[0], a2);
      if ( !v9 )
      {
LABEL_10:
        v3 = 0;
LABEL_11:
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v33);
        return v3;
      }
      v10 = *v33[0];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v35 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v35;
      *((_QWORD *)&v35 + 1) = v10;
      if ( v10 )
        HMLockObject(v10);
      xxxMNRecomputeBarIfNeeded(a1, v33);
      v12 = v34;
      if ( !v34 )
        v12 = *v33[0];
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
      if ( v21 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v20 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v20 + 232) & 0x8000000) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( !v21
             && (v23 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v23 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      GetDPIMETRICSForDpi(WindowDpiLastNotify);
      GreSelectFont(DCEx);
      TextAlign = GreGetTextAlign(DCEx);
      v25 = TextAlign;
      if ( *(_QWORD *)(*v33[0] + 88LL) && (***(_DWORD ***)(*v33[0] + 88LL) & 0x2000) != 0 )
        GreSetTextAlign(DCEx, TextAlign | 0x100);
      v26 = *((_QWORD *)a1 + 5);
      v27 = *(_DWORD *)(v26 + 288) & 0xF;
      if ( v27 == 3 )
      {
        v28 = (*(_DWORD *)(v26 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v26 + 232) & 0x8000000) != 0 )
      {
        v28 = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( !v27
             && (v29 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v29 + 8) + 64LL) & 1) != 0 )
      {
        v28 = 96;
      }
      else
      {
        v28 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      xxxDrawMenuItem(DCEx, v28, v33, v9, 0, 0LL);
      GreSetTextAlign(DCEx, v25);
      ThreadUnlock1(v31, v30, v32);
      _ReleaseDC(DCEx);
      goto LABEL_11;
    }
  }
  return 0LL;
}
