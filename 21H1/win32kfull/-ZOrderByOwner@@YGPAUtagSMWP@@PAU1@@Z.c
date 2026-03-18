/*
 * XREFs of ?ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z @ 0x327EE
 * Callers:
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 * Callees:
 *     ?SetTopmostEnum@@YGXPAUtagWND@@HH@Z @ 0x176E4 (-SetTopmostEnum@@YGXPAUtagWND@@HH@Z.c)
 *     ?FindValidWindowPos@@YGPAUtagWINDOWPOS@@PAUtagSMWP@@@Z @ 0x327CC (-FindValidWindowPos@@YGPAUtagWINDOWPOS@@PAUtagSMWP@@@Z.c)
 *     ?TrackZorder@@YGPAUtagWND@@PAUtagWINDOWPOS@@PAU1@11PAPAUHWND__@@2@Z @ 0x32A60 (-TrackZorder@@YGPAUtagWND@@PAUtagWINDOWPOS@@PAU1@11PAPAUHWND__@@2@Z.c)
 *     ?ZOrderByOwner2@@YGPAUtagSMWP@@PAU1@H@Z @ 0x32B6C (-ZOrderByOwner2@@YGPAUtagSMWP@@PAU1@H@Z.c)
 *     ?CheckTopmost@@YGHPAUtagWINDOWPOS@@@Z @ 0x32CDC (-CheckTopmost@@YGHPAUtagWINDOWPOS@@@Z.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GetLastTopMostWindow@4 @ 0x933C8 (_GetLastTopMostWindow@4.c)
 *     _SetWindowGroupBand@12 @ 0x97764 (_SetWindowGroupBand@12.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 */

struct tagSMWP *__thiscall ZOrderByOwner(struct tagSMWP *this)
{
  struct tagSMWP *v1; // ebx
  int v2; // eax
  int v3; // edx
  _DWORD *v4; // ecx
  bool v5; // zf
  struct tagWND *v6; // eax
  int v7; // edx
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // edx
  int v12; // eax
  unsigned int v13; // ecx
  int v15; // esi
  int v16; // eax
  int v17; // edi
  struct tagWND *v18; // eax
  int v19; // edx
  struct tagWND *v20; // ecx
  int v21; // eax
  _DWORD *LastTopMostWindow; // eax
  struct tagWND *v23; // ecx
  int *v24; // eax
  int v25; // eax
  int DesktopWindow; // eax
  int v27; // ecx
  struct tagWINDOWPOS *v28; // [esp+0h] [ebp-B8h]
  struct tagSMWP *v29; // [esp+0h] [ebp-B8h]
  HWND *v30; // [esp+4h] [ebp-B4h]
  _DWORD v31[32]; // [esp+10h] [ebp-A8h] BYREF
  int v32; // [esp+90h] [ebp-28h]
  _DWORD *v33; // [esp+94h] [ebp-24h]
  int v34; // [esp+98h] [ebp-20h] BYREF
  int v35; // [esp+9Ch] [ebp-1Ch]
  int v36; // [esp+A0h] [ebp-18h] BYREF
  int v37; // [esp+A4h] [ebp-14h]
  struct tagWND *v38; // [esp+A8h] [ebp-10h]
  int v39; // [esp+ACh] [ebp-Ch]
  struct tagWINDOWPOS *v40; // [esp+B0h] [ebp-8h]
  struct tagWND *v41; // [esp+B4h] [ebp-4h]

  v1 = this;
  if ( FindValidWindowPos(this) )
  {
    v2 = *((_DWORD *)v1 + 4);
    v35 = v2;
    while ( 1 )
    {
      if ( !v2 )
        return v1;
      v3 = *((_DWORD *)v1 + 4);
      v4 = (_DWORD *)*((_DWORD *)v1 + 6);
      v32 = v2 - 1;
      v5 = *v4 == 0;
      v39 = v3 - 1;
      if ( !v5 )
        break;
      if ( v3 != 1 )
      {
        memmove(v4, v4 + 32, (v3 - 1) << 7);
        v3 = *((_DWORD *)v1 + 4);
      }
      *((_DWORD *)v1 + 4) = v3 - 1;
LABEL_20:
      v2 = v32;
    }
    v37 = v4[1];
    v6 = (struct tagWND *)CheckTopmost(v28);
    v7 = *((_DWORD *)v1 + 6);
    v41 = v6;
    qmemcpy(v31, (const void *)v7, sizeof(v31));
    v8 = v39;
    if ( v39 )
    {
      v15 = v39 << 7;
      memmove((void *)v7, (const void *)(v7 + 128), v39 << 7);
      qmemcpy((void *)(v15 + *((_DWORD *)v1 + 6)), v31, 0x80u);
      v8 = v39;
    }
    v1 = ZOrderByOwner2(v29, (int)v30);
    if ( !v1 )
      return v1;
    if ( !v41 )
    {
LABEL_9:
      v38 = 0;
      v36 = 0;
      v34 = 0;
      v9 = *((_DWORD *)v1 + 4);
      if ( v9 <= 0 )
        v41 = 0;
      else
        v41 = (struct tagWND *)_HMObjectFromHandle(*(_DWORD *)((v9 << 7) + *((_DWORD *)v1 + 6) - 128));
      v40 = 0;
      if ( v35 <= 1 && (v31[6] & 0x400000) != 0 )
        v40 = (struct tagWINDOWPOS *)_HMObjectFromHandle(v31[1]);
      if ( v8 != *((_DWORD *)v1 + 4) )
      {
        v10 = v8 << 7;
        v37 = v8 << 7;
        do
        {
          v11 = (_DWORD *)(v10 + *((_DWORD *)v1 + 6));
          v33 = v11;
          if ( *v11 == v31[0] )
          {
            v12 = v11[6];
            qmemcpy(v11, v31, 0x80u);
            v8 = v39;
            v13 = v12 ^ (v31[6] ^ v12) & 0xFFFFFFFB;
            v11[6] = v13;
            if ( ((unsigned int)&loc_20000 & v13) != 0 )
              v11[6] = v13 & 0xFFFDFBFF | 0x400;
          }
          v38 = TrackZorder(v40, v41, (struct tagWND *)&v34, (struct tagWND *)&v36, (HWND *)v28, v30);
          ++v8;
          v10 = v37 + 128;
          v39 = v8;
          v37 += 128;
        }
        while ( v8 != *((_DWORD *)v1 + 4) );
      }
      goto LABEL_20;
    }
    v16 = _HMObjectFromHandle(v31[0]);
    v40 = 0;
    v17 = v16;
    v18 = v41;
    if ( v41 == (struct tagWND *)2 )
    {
      v38 = (struct tagWND *)(*((_DWORD *)v1 + 6) + (v8 << 7));
      v36 = _HMObjectFromHandle(*(_DWORD *)v38);
      if ( (*(_BYTE *)(*(_DWORD *)(v36 + 20) + 16) & 8) == 0 || v37 != -2 )
        goto LABEL_24;
      LastTopMostWindow = (_DWORD *)GetLastTopMostWindow(v17);
      if ( LastTopMostWindow )
        LastTopMostWindow = (_DWORD *)*LastTopMostWindow;
      v23 = v38;
      *((_DWORD *)v38 + 1) = LastTopMostWindow;
      if ( LastTopMostWindow != *(_DWORD **)v23 )
        goto LABEL_24;
      if ( (*(_WORD *)(*(_DWORD *)(v36 + 20) + 30) & 0x3FFF) == 0x29D || (v24 = *(int **)(v36 + 52)) == 0 )
        v25 = 0;
      else
        v25 = *v24;
      *((_DWORD *)v23 + 1) = v25;
      v18 = v41;
    }
    if ( v18 == (struct tagWND *)1 )
    {
      v19 = 1;
LABEL_25:
      if ( (*(_BYTE *)(*(_DWORD *)(v31[21] + 232) + 464) & 2) != 0
        && ((v21 = *(_DWORD *)(*(_DWORD *)(v17 + 20) + 148), v21 == 1) || v21 == 2) )
      {
        v41 = (struct tagWND *)1;
        v20 = 0;
        v40 = (struct tagWINDOWPOS *)(v19 + 1);
      }
      else
      {
        v41 = 0;
        v20 = (struct tagWND *)((v31[6] >> 9) & 1);
      }
      if ( *(_DWORD *)(*(_DWORD *)(v17 + 20) + 148) == 1 || v40 == (struct tagWINDOWPOS *)1 )
        SetTopmostEnum(v19, v20, (int)v28, (int)v30);
      if ( v41 )
      {
        if ( *(struct tagWINDOWPOS **)(*(_DWORD *)(v17 + 20) + 148) != v40 )
        {
          DesktopWindow = _GetDesktopWindow(v17);
          if ( *(_DWORD *)(v17 + 56) == DesktopWindow )
            SetWindowGroupBand(v27, 1);
        }
      }
      goto LABEL_9;
    }
LABEL_24:
    v19 = 0;
    goto LABEL_25;
  }
  return v1;
}
