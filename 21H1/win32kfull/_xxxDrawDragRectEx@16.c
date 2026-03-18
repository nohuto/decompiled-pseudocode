/*
 * XREFs of _xxxDrawDragRectEx@16 @ 0x176775
 * Callers:
 *     ?xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z @ 0x175D86 (-xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z.c)
 *     _xxxCancelTrackingForThread@4 @ 0x17668C (_xxxCancelTrackingForThread@4.c)
 *     _xxxDrawDragRect@12 @ 0x176759 (_xxxDrawDragRect@12.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _LockW32Thread@8 @ 0x3C2F8 (_LockW32Thread@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     __ScreenToClient@8 @ 0xC76AE (__ScreenToClient@8.c)
 *     __SetSystemTimer@20 @ 0xCA7A8 (__SetSystemTimer@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _DetectNewMonitor@8 @ 0x150BE3 (_DetectNewMonitor@8.c)
 *     ?DoesQualifyForResizeOptimization@@YGHPAU_MOVESIZEDATA@@@Z @ 0x171050 (-DoesQualifyForResizeOptimization@@YGHPAU_MOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YGHPAUtagWND@@@Z @ 0x17108E (-DoesRequireResizeLayoutSynchronization@@YGHPAUtagWND@@@Z.c)
 *     ?IsSemiMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z @ 0x171919 (-IsSemiMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_FlushWigglies@@YGXXZ @ 0x1746F4 (-xxxMS_FlushWigglies@@YGXXZ.c)
 *     _xxxUpdateThreadsWindows@12 @ 0x17804C (_xxxUpdateThreadsWindows@12.c)
 *     _FindSpb@4 @ 0x17E390 (_FindSpb@4.c)
 *     _FreeSpb@4 @ 0x17E3AE (_FreeSpb@4.c)
 *     ?ReduceRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z @ 0x19E459 (-ReduceRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z.c)
 *     _GreWindowResizeComplete@8 @ 0x1CEAC5 (_GreWindowResizeComplete@8.c)
 *     _GreWindowResizeStarted@20 @ 0x1CEC76 (_GreWindowResizeStarted@20.c)
 *     _bMoveDevDragRect@16 @ 0x1E3757 (_bMoveDevDragRect@16.c)
 *     _bMoveDevPreviewRect@24 @ 0x1E3ABE (_bMoveDevPreviewRect@24.c)
 *     _bSetDevPreviewRect@24 @ 0x1E3D0B (_bSetDevPreviewRect@24.c)
 */

int __fastcall xxxDrawDragRectEx(int a1, int *a2, int a3, int *a4)
{
  int *v4; // esi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v7; // eax
  int v8; // eax
  int v9; // ecx
  bool v10; // zf
  int result; // eax
  int *v12; // esi
  int *v13; // esi
  int *v14; // eax
  int v15; // ecx
  int *v16; // edi
  int v17; // ecx
  int v18; // eax
  LONG_PTR v19; // esi
  int *v20; // eax
  int v21; // esi
  int v22; // edi
  int v23; // ecx
  int v24; // ecx
  int v25; // eax
  int *v26; // edi
  int Spb; // eax
  int RectRgnIndirect; // esi
  int v29; // eax
  PKTHREAD v30; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v32; // edx
  _DWORD *v33; // ecx
  int v34; // eax
  _DWORD *v35; // ecx
  _DWORD *v36; // edx
  _DWORD *v37; // edi
  int *v38; // edi
  int *v39; // esi
  int v40; // eax
  _DWORD *v41; // esi
  LONG_PTR v42; // edi
  int v43; // eax
  int v44; // ecx
  int v45; // ecx
  PKTHREAD v46; // eax
  int v47; // eax
  LONG_PTR *v48; // esi
  LONG_PTR v49; // eax
  char v50; // al
  PKTHREAD v51; // eax
  PKTHREAD v52; // eax
  BOOL v53; // eax
  int *v54; // edi
  LONG_PTR v55; // eax
  const struct tagRECT *v56; // [esp+0h] [ebp-90h]
  struct tagRECT *v57; // [esp+4h] [ebp-8Ch]
  unsigned int v59; // [esp+Ch] [ebp-84h]
  _DWORD *v60; // [esp+Ch] [ebp-84h]
  int v61; // [esp+10h] [ebp-80h]
  int v62; // [esp+10h] [ebp-80h]
  int v63; // [esp+10h] [ebp-80h]
  unsigned int v64; // [esp+14h] [ebp-7Ch] BYREF
  _DWORD *v65; // [esp+18h] [ebp-78h]
  int *v66; // [esp+1Ch] [ebp-74h]
  int v67; // [esp+20h] [ebp-70h]
  BOOL v68; // [esp+24h] [ebp-6Ch]
  int v69; // [esp+28h] [ebp-68h]
  signed int v70; // [esp+2Ch] [ebp-64h]
  LONG_PTR v71; // [esp+30h] [ebp-60h] BYREF
  int v72; // [esp+34h] [ebp-5Ch] BYREF
  _DWORD *v73; // [esp+38h] [ebp-58h]
  int v74; // [esp+3Ch] [ebp-54h]
  int v75; // [esp+40h] [ebp-50h] BYREF
  int v76; // [esp+44h] [ebp-4Ch]
  int v77; // [esp+48h] [ebp-48h]
  int v78; // [esp+4Ch] [ebp-44h]
  int v79; // [esp+50h] [ebp-40h] BYREF
  unsigned int v80; // [esp+54h] [ebp-3Ch]
  int v81; // [esp+58h] [ebp-38h]
  LONG_PTR v82; // [esp+5Ch] [ebp-34h] BYREF
  LONG_PTR v83; // [esp+60h] [ebp-30h]
  LONG_PTR v84; // [esp+64h] [ebp-2Ch]
  LONG_PTR v85; // [esp+68h] [ebp-28h]
  LONG v86; // [esp+6Ch] [ebp-24h] BYREF
  int v87; // [esp+70h] [ebp-20h]
  int v88; // [esp+74h] [ebp-1Ch]
  int v89; // [esp+78h] [ebp-18h]
  int v90; // [esp+7Ch] [ebp-14h] BYREF
  int v91; // [esp+80h] [ebp-10h]
  int v92; // [esp+84h] [ebp-Ch] BYREF
  int v93; // [esp+88h] [ebp-8h]
  unsigned int v94; // [esp+98h] [ebp+8h]

  v4 = a2;
  v66 = a4;
  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 248)
    && (v7 = KeGetCurrentThread(),
        (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v7) + 248) + 4) + 32) & 1) != 0) )
  {
    v69 = 5;
    v8 = 1;
  }
  else
  {
    v8 = 0;
    v69 = 4;
  }
  v61 = v8;
  v9 = a3 & 0xFFFFFFF;
  v10 = (*(_BYTE *)(a1 + 184) & 0x10) == 0;
  v70 = a3 & 0xF0000000;
  v94 = a3 & 0xFFFFFFF;
  if ( v10 )
  {
    result = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 20);
    if ( (*(_BYTE *)(result + 19) & 8) == 0 )
    {
      if ( v4 )
      {
        *a4 = *v4;
        v12 = v4 + 1;
        a4[1] = *v12++;
        a4[2] = *v12;
        a4[3] = v12[1];
      }
      return result;
    }
  }
  if ( v4 )
  {
    result = EqualRectInl((const void *)(a1 + 12), v4);
    if ( result )
      return result;
    v9 = v94;
  }
  else
  {
    v4 = a4;
  }
  v68 = 0;
  v86 = *v4;
  v13 = v4 + 1;
  v87 = *v13++;
  v88 = *v13;
  v89 = v13[1];
  if ( v70 >= 0 && v9 == 3 && DetectNewMonitor((INT *)a1, &v86) )
  {
    v14 = a2;
    v15 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 20) + 184) & 0xF;
    v68 = v15 != 2;
    if ( a2 && (v15 != 2 || (*(_BYTE *)(a1 + 184) & 0x20) == 0) )
    {
      v16 = v66;
      *v66 = v86;
      *++v16 = v87;
      *++v16 = v88;
      v16[1] = v89;
      *a2 = v86;
      a2[1] = v87;
      a2[2] = v88;
      a2[3] = v89;
    }
    if ( v15 == 2 )
      goto LABEL_23;
    xxxMS_FlushWigglies();
    GenerateMouseMove(0);
  }
  v14 = a2;
LABEL_23:
  v17 = *(_DWORD *)(a1 + 184);
  if ( (v17 & 0x20) == 0 || (v17 & 0x4000000) != 0 && v94 < 2 )
  {
    if ( !v14 )
      v14 = v66;
    v90 = *v14;
    v91 = v14[1];
    v92 = v14[2];
    v93 = v14[3];
    v48 = (LONG_PTR *)(*_gpDispInfo + 12);
    v82 = *v48++;
    v83 = *v48++;
    v84 = *v48;
    v85 = v48[1];
    ReduceRectByWindowMargin((const struct tagWND *)&v90, v56, v57);
    if ( v70 >= 0 )
      v49 = *(_DWORD *)(a1 + 192);
    else
      v49 = *(_DWORD *)(a1 + 204);
    v71 = v49;
    LogicalToPhysicalDPIRect(&v90, &v90, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 20) + 184), &v71);
    if ( (*(_DWORD *)(a1 + 184) & 0x4000000) != 0 )
    {
      v50 = v69;
      v61 = v69;
    }
    else
    {
      v50 = v61;
    }
    if ( v68 )
      bSetDevDragRect(*(_DWORD **)(_gpDispInfo + 20), (int)&v90, (int)&v82, v50);
    if ( a2 )
    {
      if ( (*(_BYTE *)(a1 + 184) & 0x20) != 0 && v70 < 0 )
      {
        result = bMoveDevPreviewRect(
                   *(_DWORD *)(_gpDispInfo + 20),
                   &v90,
                   v61,
                   **(_DWORD **)(a1 + 8),
                   *(_DWORD *)(_gpsi + 4428),
                   *(_DWORD *)(_gpsi + 4432));
      }
      else
      {
        v51 = KeGetCurrentThread();
        v53 = 0;
        if ( *(_DWORD *)(W32GetThreadWin32Thread(v51) + 248) )
        {
          v52 = KeGetCurrentThread();
          if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v52) + 248) + 4) + 32) & 1) != 0 )
            v53 = 1;
        }
        result = bMoveDevDragRect(*(_DWORD *)(_gpDispInfo + 20), &v90, &v82, v53);
      }
      v54 = v66;
      *v66 = *a2;
      *++v54 = a2[1];
      *++v54 = a2[2];
      v54[1] = a2[3];
    }
    else
    {
      result = v94;
      if ( v94 )
      {
        if ( v94 == 1 && v70 < 0 )
          result = bSetDevPreviewRect(
                     *(_DWORD *)(_gpDispInfo + 20),
                     0,
                     0,
                     **(_DWORD **)(a1 + 8),
                     *(_DWORD *)(_gpsi + 4428),
                     *(_DWORD *)(_gpsi + 4432));
      }
      else if ( v70 >= 0 )
      {
        result = bSetDevDragRect(*(_DWORD **)(_gpDispInfo + 20), (int)&v90, (int)&v82, v61);
      }
      else
      {
        result = bSetDevPreviewRect(
                   *(_DWORD *)(_gpDispInfo + 20),
                   &v90,
                   v61,
                   **(_DWORD **)(a1 + 8),
                   *(_DWORD *)(_gpsi + 4428),
                   *(_DWORD *)(_gpsi + 4432));
      }
    }
  }
  else
  {
    v18 = *(_DWORD *)(a1 + 8);
    v64 = 0;
    v74 = 0;
    v69 = 0;
    v19 = *(_DWORD *)(v18 + 8);
    v81 = 0;
    v72 = 0;
    v71 = v19;
    v82 = 0;
    v70 = _gptiCurrent;
    v83 = 0;
    v84 = 0;
    if ( v19 != _gptiCurrent )
      LockW32Thread(v19, &v82);
    *(_DWORD *)(v19 + 264) |= 0x8000u;
    v20 = v66;
    if ( a2 )
    {
      *v66 = *a2;
      v20[1] = a2[1];
      v20[2] = a2[2];
      v20[3] = a2[3];
    }
    v90 = *v20;
    v91 = v20[1];
    v92 = v20[2];
    v93 = v20[3];
    v21 = *(_DWORD *)(a1 + 8);
    v22 = *(_DWORD *)(v21 + 56);
    if ( v22
      && !_IsTopLevelWindow(*(_DWORD **)(a1 + 8))
      && (_ScreenToClient(v22, &v90), _ScreenToClient(v23, &v92), (*(_BYTE *)(*(_DWORD *)(v22 + 20) + 18) & 0x40) != 0) )
    {
      v62 = v90;
      v67 = v92;
    }
    else
    {
      v62 = v92;
      v67 = v90;
    }
    v24 = *(_DWORD *)(v21 + 20);
    v25 = v21;
    if ( *(char *)(v24 + 8) >= 0 )
    {
      v26 = a2;
    }
    else
    {
      v75 = *(_DWORD *)(v24 + 52);
      v76 = *(_DWORD *)(v24 + 56);
      v77 = *(_DWORD *)(v24 + 60);
      v78 = *(_DWORD *)(v24 + 64);
      v26 = a2;
      if ( a2 )
      {
        if ( IntersectRect(&v75, &v75, a2) )
        {
          Spb = FindSpb(v21);
          FreeSpb(Spb);
          v25 = *(_DWORD *)(a1 + 8);
        }
        else
        {
          v25 = v21;
        }
      }
    }
    RectRgnIndirect = GreCreateRectRgnIndirect(*(_DWORD *)(v25 + 20) + 52);
    v59 = *(_DWORD *)(a1 + 8);
    v75 = RectRgnIndirect;
    v29 = *(_DWORD *)(*(_DWORD *)(v59 + 20) + 108);
    if ( v29 )
    {
      GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v29, 1);
      v59 = *(_DWORD *)(a1 + 8);
    }
    v73 = (_DWORD *)((IsSemiMaximizedMoveSizeData((_DWORD *)a1) << 20) + 532);
    v30 = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(v30);
    v79 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v79;
    v80 = v59;
    if ( v59 )
      HMLockObject(v59);
    v32 = *(_DWORD **)(a1 + 8);
    v63 = v62 - v67;
    v60 = v32;
    v33 = (_DWORD *)v32[5];
    v65 = v33;
    if ( v33[15] - v33[13] != v63 || v33[16] - v65[14] != v93 - v91 )
      v64 = 1;
    v34 = (int)v32;
    if ( v64 )
    {
      v65 = v32;
      if ( DoesQualifyForResizeOptimization(a1) )
      {
        v64 = 0;
        v69 = DoesRequireResizeLayoutSynchronization(v60);
        if ( GreWindowResizeStarted(v69, &v72, &v64) && v72 )
          _SetSystemTimer(*(_DWORD *)(a1 + 8), (char *)0xFFF2, v64, (int)ResizeTimerFunc, 1);
        v34 = *(_DWORD *)(a1 + 8);
        v74 = 1;
      }
      else
      {
        v34 = (int)v65;
      }
    }
    xxxSetWindowPos(v34, 0, v67, v91, v63, v93 - v91, (int)v73);
    if ( (*(_DWORD *)(a1 + 184) & 0x20000000) != 0 )
    {
      *(_DWORD *)(a1 + 192) = ValidateHmonitor(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 20) + 164));
      v73 = *(_DWORD **)(a1 + 8);
      if ( _IsTopLevelWindow(v73) )
      {
        v35 = v73;
        v36 = (_DWORD *)v73[5];
        if ( (v36[46] & 0xF) == 2 && (*(_DWORD *)(v73[2] + 352) & 0x2000000) == 0 )
        {
          if ( v26 )
          {
            *v26 = v36[13];
            v37 = v26 + 1;
            *v37++ = v36[14];
            *v37 = v36[15];
            v37[1] = v36[16];
            v35 = *(_DWORD **)(a1 + 8);
          }
          v38 = v66;
          v39 = (int *)(v35[5] + 52);
          *v66 = *v39++;
          *++v38 = *v39++;
          *++v38 = *v39;
          v38[1] = v39[1];
          v40 = *(_DWORD *)(a1 + 268);
          v41 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 20) + 52);
          *(_DWORD *)(a1 + 108) = *v41++;
          *(_DWORD *)(a1 + 112) = *v41++;
          *(_DWORD *)(a1 + 116) = *v41;
          *(_DWORD *)(a1 + 120) = v41[1];
          RectRgnIndirect = v75;
          *(_DWORD *)(a1 + 260) = v40;
          *(_DWORD *)(a1 + 264) = *(_DWORD *)(a1 + 272);
          *(_DWORD *)(a1 + 260) -= *(_DWORD *)(a1 + 108);
          *(_DWORD *)(a1 + 264) -= *(_DWORD *)(a1 + 112);
        }
      }
      *(_DWORD *)(a1 + 184) &= ~0x20000000u;
    }
    ThreadUnlock1();
    v42 = v71;
    if ( *(_DWORD *)(v71 + 368) == a1 )
    {
      v43 = GreCreateRectRgnIndirect(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 20) + 52);
      v44 = *(_DWORD *)(a1 + 8);
      v67 = v43;
      v45 = *(_DWORD *)(*(_DWORD *)(v44 + 20) + 108);
      if ( v45 )
      {
        GreCombineRgn(v43, v43, v45, 1);
        v43 = v67;
      }
      if ( RectRgnIndirect )
      {
        if ( v43 )
        {
          GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v43, 4);
        }
        else
        {
          GreDeleteObject(RectRgnIndirect);
          RectRgnIndirect = 0;
        }
      }
      v64 = *(_DWORD *)(_GetDesktopWindow(*(_DWORD **)(a1 + 8)) + 60);
      v46 = KeGetCurrentThread();
      v47 = W32GetThreadWin32Thread(v46);
      v79 = *(_DWORD *)(v47 + 228);
      *(_DWORD *)(v47 + 228) = &v79;
      v80 = v64;
      if ( v64 )
        HMLockObject(v64);
      xxxUpdateThreadsWindows(RectRgnIndirect);
      ThreadUnlock1();
      if ( v74 )
      {
        GreWindowResizeComplete(*(_DWORD *)(_gpDispInfo + 20), **(_DWORD **)(a1 + 8));
        if ( v72 )
        {
          if ( !v69 )
            FindTimer(*(_DWORD *)(a1 + 8), 65522, 2u, 1, 0);
        }
      }
      GreDeleteObject(v67);
    }
    result = GreDeleteObject(RectRgnIndirect);
    *(_DWORD *)(v42 + 264) &= ~0x8000u;
    if ( v42 != v70 )
      result = PopAndFreeW32ThreadLock((int)&v82);
  }
  if ( v68 && *(_DWORD *)(a1 + 164) == 9 )
  {
    v55 = *(_DWORD *)(a1 + 192);
    v75 = 0;
    v76 = 0;
    v71 = v55;
    PhysicalToLogicalDPIPoint(&v75, a1 + 276, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 20) + 184), &v71);
    *(_DWORD *)(a1 + 156) = v86 - v75;
    result = v87 - v76;
    *(_DWORD *)(a1 + 160) = v87 - v76;
  }
  return result;
}
