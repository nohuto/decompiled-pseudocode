/*
 * XREFs of ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0023BF8
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1C0024070 (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 *     SetWindowGroupBand @ 0x1C0024248 (SetWindowGroupBand.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0024360 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C00245BC (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     GetLastTopMostWindow @ 0x1C003CA64 (GetLastTopMostWindow.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C006DE98 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C010B938 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner(struct tagSMWP *a1)
{
  struct tagSMWP *v1; // rdi
  int v2; // r13d
  HWND *v3; // rcx
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  __int128 *v7; // rcx
  int v8; // r12d
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rsi
  __int64 v20; // rax
  struct tagWND *v21; // r15
  struct tagWND *v22; // r14
  struct tagWND *v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // r13
  __int64 v26; // r10
  int v27; // edx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // rax
  int v38; // eax
  _OWORD *v40; // rcx
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int64 v50; // rax
  int v51; // r14d
  __int64 v52; // rbx
  int v53; // edx
  int v54; // esi
  unsigned int v55; // r8d
  _QWORD *v56; // rsi
  __int64 v57; // r15
  _QWORD *LastTopMostWindow; // rax
  __int64 *v59; // rax
  __int64 v60; // rax
  HWND v61; // [rsp+30h] [rbp-F8h] BYREF
  HWND v62; // [rsp+38h] [rbp-F0h] BYREF
  __int128 v63; // [rsp+40h] [rbp-E8h]
  __int128 v64; // [rsp+50h] [rbp-D8h]
  __int128 v65; // [rsp+60h] [rbp-C8h]
  __int128 v66; // [rsp+70h] [rbp-B8h]
  __int128 v67; // [rsp+80h] [rbp-A8h]
  __int128 v68; // [rsp+90h] [rbp-98h]
  __int128 v69; // [rsp+A0h] [rbp-88h]
  __int128 v70; // [rsp+B0h] [rbp-78h]
  __int128 v71; // [rsp+C0h] [rbp-68h]
  __int128 v72; // [rsp+D0h] [rbp-58h]
  __int64 v73; // [rsp+E0h] [rbp-48h]
  int v74; // [rsp+138h] [rbp+10h]
  int v75; // [rsp+140h] [rbp+18h]
  __int64 v76; // [rsp+148h] [rbp+20h]

  v1 = a1;
  if ( FindValidWindowPos(a1) )
  {
    v2 = *((_DWORD *)v1 + 7);
    v74 = v2;
    if ( v2 )
    {
      while ( 1 )
      {
        v3 = (HWND *)*((_QWORD *)v1 + 5);
        --v2;
        v4 = *((_DWORD *)v1 + 7);
        v75 = v2;
        v5 = v4 - 1;
        if ( !*v3 )
        {
          if ( v4 != 1 )
          {
            memmove(v3, v3 + 21, 168LL * v5);
            v4 = *((_DWORD *)v1 + 7);
          }
          *((_DWORD *)v1 + 7) = v4 - 1;
          goto LABEL_20;
        }
        v61 = v3[1];
        v6 = CheckTopmost((struct tagWINDOWPOS *)v3);
        v7 = (__int128 *)*((_QWORD *)v1 + 5);
        v8 = v6;
        v9 = *((_QWORD *)v7 + 20);
        v10 = v7[1];
        v63 = *v7;
        v11 = v7[2];
        v64 = v10;
        v12 = v7[3];
        v65 = v11;
        v13 = v7[4];
        v66 = v12;
        v14 = v7[5];
        v67 = v13;
        v15 = v7[6];
        v68 = v14;
        v16 = v7[7];
        v69 = v15;
        v17 = v7[8];
        v70 = v16;
        v18 = v7[9];
        v71 = v17;
        v72 = v18;
        v73 = v9;
        if ( v5 )
        {
          v19 = v5;
          v76 = v5;
          memmove(v7, (char *)v7 + 168, 168LL * v5);
          v40 = (_OWORD *)(168LL * v5 + *((_QWORD *)v1 + 5));
          v41 = v64;
          *v40 = v63;
          v42 = v65;
          v40[1] = v41;
          v43 = v66;
          v40[2] = v42;
          v44 = v67;
          v40[3] = v43;
          v45 = v68;
          v40[4] = v44;
          v46 = v69;
          v40[5] = v45;
          v47 = v70;
          v40[6] = v46;
          v40 += 8;
          v48 = v71;
          *(v40 - 1) = v47;
          v49 = v72;
          v50 = v73;
          *v40 = v48;
          v40[1] = v49;
          *((_QWORD *)v40 + 4) = v50;
        }
        else
        {
          v19 = 0LL;
          v76 = 0LL;
        }
        v1 = ZOrderByOwner2(v1, v5);
        if ( !v1 )
          return v1;
        if ( v8 )
          break;
LABEL_8:
        v20 = *((int *)v1 + 7);
        v21 = 0LL;
        v61 = 0LL;
        v62 = 0LL;
        if ( (int)v20 <= 0 )
          v22 = 0LL;
        else
          v22 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(168 * v20 + *((_QWORD *)v1 + 5) - 168));
        v23 = 0LL;
        if ( v74 <= 1 && (v65 & 0x400000) != 0 )
          v23 = (struct tagWND *)_HMObjectFromHandle(*((_QWORD *)&v63 + 1));
        if ( v5 != *((_DWORD *)v1 + 7) )
        {
          v24 = 168 * v76;
          v25 = v63;
          do
          {
            v26 = v24 + *((_QWORD *)v1 + 5);
            if ( *(_QWORD *)v26 == v25 )
            {
              v27 = *(_DWORD *)(v26 + 32);
              v28 = v64;
              *(_OWORD *)v26 = v63;
              v29 = v65;
              *(_OWORD *)(v26 + 16) = v28;
              v30 = v66;
              *(_OWORD *)(v26 + 32) = v29;
              v31 = v67;
              *(_OWORD *)(v26 + 48) = v30;
              v32 = v68;
              *(_OWORD *)(v26 + 64) = v31;
              v33 = v69;
              *(_OWORD *)(v26 + 80) = v32;
              v34 = v70;
              *(_OWORD *)(v26 + 96) = v33;
              v35 = v71;
              *(_OWORD *)(v26 + 112) = v34;
              v36 = v72;
              v37 = v73;
              *(_OWORD *)(v26 + 128) = v35;
              *(_OWORD *)(v26 + 144) = v36;
              *(_QWORD *)(v26 + 160) = v37;
              v38 = v27 ^ (v65 ^ v27) & 0xFFFFFFFB;
              *(_DWORD *)(v26 + 32) = v38;
              if ( (v38 & 0x20000) != 0 )
                *(_DWORD *)(v26 + 32) = v38 & 0xFFFDFBFF | 0x400;
            }
            ++v5;
            v24 += 168LL;
            v21 = TrackZorder((struct tagWINDOWPOS *)v26, v21, v23, v22, &v62, &v61);
          }
          while ( v5 != *((_DWORD *)v1 + 7) );
          v2 = v75;
        }
LABEL_20:
        if ( !v2 )
          return v1;
      }
      v51 = 0;
      v52 = _HMObjectFromHandle(v63);
      if ( v8 == 2 )
      {
        v56 = (_QWORD *)(*((_QWORD *)v1 + 5) + 168 * v19);
        v57 = _HMObjectFromHandle(*v56);
        if ( (*(_BYTE *)(*(_QWORD *)(v57 + 40) + 24LL) & 8) == 0 || v61 != (HWND)-2LL )
          goto LABEL_35;
        LastTopMostWindow = (_QWORD *)GetLastTopMostWindow(v52);
        if ( LastTopMostWindow )
          LastTopMostWindow = (_QWORD *)*LastTopMostWindow;
        v56[1] = LastTopMostWindow;
        if ( LastTopMostWindow != (_QWORD *)*v56 )
          goto LABEL_35;
        if ( (*(_WORD *)(*(_QWORD *)(v57 + 40) + 42LL) & 0x3FFF) == 0x29D || (v59 = *(__int64 **)(v57 + 96)) == 0LL )
          v60 = 0LL;
        else
          v60 = *v59;
        v56[1] = v60;
      }
      if ( v8 == 1 )
      {
        v53 = 1;
        goto LABEL_26;
      }
LABEL_35:
      v53 = 0;
LABEL_26:
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)&v69 + 1) + 416LL) + 820LL) & 2) != 0
        && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v52 + 40) + 236LL) - 1) <= 1 )
      {
        v54 = 1;
        v51 = v53 + 1;
        v55 = 0;
      }
      else
      {
        v54 = 0;
        v55 = ((unsigned int)v65 >> 9) & 1;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v52 + 40) + 236LL) == 1 || v51 == 1 )
        SetTopmostEnum((struct tagWND *)v52, v53, v55);
      if ( v54 && *(_DWORD *)(*(_QWORD *)(v52 + 40) + 236LL) != v51 && *(_QWORD *)(v52 + 104) == GetDesktopWindow(v52) )
        SetWindowGroupBand((struct tagWND *)v52);
      goto LABEL_8;
    }
  }
  return v1;
}
