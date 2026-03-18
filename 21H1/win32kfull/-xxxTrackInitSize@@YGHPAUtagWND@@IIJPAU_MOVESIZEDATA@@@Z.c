/*
 * XREFs of ?xxxTrackInitSize@@YGHPAUtagWND@@IIJPAU_MOVESIZEDATA@@@Z @ 0x176158
 * Callers:
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ?zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x42628 (-zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _xxxDrawDragRect@12 @ 0x176759 (_xxxDrawDragRect@12.c)
 *     __ClientToScreen@8 @ 0x1B7000 (__ClientToScreen@8.c)
 */

int __userpurge xxxTrackInitSize@<eax>(
        unsigned int a1@<edx>,
        unsigned int *a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        _DWORD *a5,
        int a6,
        struct _MOVESIZEDATA *a7)
{
  unsigned int v9; // esi
  int v10; // edx
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  int v14; // edi
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // ecx
  unsigned int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  _DWORD *v24; // esi
  int v25; // edx
  _DWORD v26[4]; // [esp+10h] [ebp-24h] BYREF
  int v27; // [esp+20h] [ebp-14h]
  int v28; // [esp+24h] [ebp-10h] BYREF
  int v29; // [esp+28h] [ebp-Ch]

  if ( a1 != 256 && (a1 <= 0x1FF || a1 > 0x202) )
    return 1;
  v28 = (__int16)a4;
  v29 = SHIWORD(a4);
  _ClientToScreen(a2, &v28);
  _InterlockedIncrement(&glSendMessage);
  v9 = 0;
  v10 = xxxSendTransformableMessageTimeout(
          (int)a2,
          0x84u,
          0,
          (unsigned __int16)v28 | ((unsigned __int16)v29 << 16),
          0,
          0,
          0,
          1u,
          0);
  v27 = v10;
  v11 = a1 - 256;
  if ( !v11 )
  {
    if ( a5[41] == 9 )
    {
      if ( a2 )
        v9 = *a2;
      xxxSendMessage(a2, v9, 0x2000000);
    }
    if ( a3 == (struct tagWND *)13 || a3 == (struct tagWND *)27 || (unsigned int)a3 - 37 <= 3 )
      a5[46] &= ~1u;
    return 1;
  }
  v12 = v11 - 256;
  if ( !v12 )
  {
    if ( a3 != (struct tagWND *)1 )
    {
      v24 = (_DWORD *)(a2[5] + 52);
      v26[0] = *v24++;
      v26[1] = *v24++;
      v26[2] = *v24;
      v26[3] = v24[1];
      if ( PtInRect(v26, v28, v29) && v25 >= 10 && v25 <= 17 )
        xxxSendMessage(a2, *a2, (unsigned __int16)v25 | 0x2000000);
      else
        zzzSetCursor(*(void **)(_gasyscur[0] + 4828));
      return 1;
    }
    v14 = v29;
    goto LABEL_15;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v14 = v29;
    if ( !PtInRect(a5 + 3, v28, v29) )
      goto LABEL_10;
LABEL_15:
    v16 = a5[41];
    if ( v16 )
    {
      if ( v16 == 9 && v10 == 2 )
      {
        if ( a2 )
          v17 = *a2;
        else
          v17 = 0;
        xxxSendMessage(a2, v17, 0x2000000);
        a5[39] = a5[27] - v28;
        v18 = a5[28] - v14;
        a5[46] &= ~1u;
        a5[40] = v18;
      }
    }
    else if ( v10 >= 10 && v10 <= 17 )
    {
      if ( a2 )
        v19 = *a2;
      else
        v19 = 0;
      xxxSendMessage(a2, v19, (unsigned __int16)v10 | 0x2000000);
      v20 = v27;
      a5[46] &= ~1u;
      v21 = dword_258758[v20];
      v22 = dword_25872C[v20];
      a5[42] = v21;
      v23 = v22 + v21;
      a5[43] = v22;
      a5[41] = v23;
      a5[39] = a5[dword_251404[v23] + 27] - v28;
      a5[40] = a5[dword_2513D8[v23] + 27] - v14;
    }
    return 1;
  }
  if ( v13 != 1 )
    return 1;
LABEL_10:
  bSetDevDragRect(*(_DWORD **)(_gpDispInfo + 20), 0, 0, 0);
  if ( (*(_BYTE *)(_gptiCurrent + 264) & 0x10) != 0 )
  {
    xxxDrawDragRect(2);
    *(_DWORD *)(_gptiCurrent + 264) &= ~0x10u;
  }
  a5[46] &= ~1u;
  CCursorClip::ClearClip(_gpCursorClip);
  xxxReleaseCapture();
  a5[46] |= 8u;
  return 0;
}
