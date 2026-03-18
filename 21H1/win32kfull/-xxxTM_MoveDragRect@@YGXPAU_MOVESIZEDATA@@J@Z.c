/*
 * XREFs of ?xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z @ 0x175D86
 * Callers:
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818 (-IsSemiMaximized@@YG_NPBUtagWND@@@Z.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _GreIsWindowResizeInProgress@8 @ 0xA6C58 (_GreIsWindowResizeInProgress@8.c)
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?MoveRect@@YGHPAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x171DE6 (-MoveRect@@YGHPAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SizeRect@@YGHPAU_MOVESIZEDATA@@KPAUtagMONITOR@@PAK@Z @ 0x17220B (-SizeRect@@YGHPAU_MOVESIZEDATA@@KPAUtagMONITOR@@PAK@Z.c)
 *     ?SwapRect@@YGXPAUtagRECT@@0@Z @ 0x172420 (-SwapRect@@YGXPAUtagRECT@@0@Z.c)
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 *     _WPP_RECORDER_SF_qdddd@40 @ 0x1765FC (_WPP_RECORDER_SF_qdddd@40.c)
 *     _xxxDrawDragRect@12 @ 0x176759 (_xxxDrawDragRect@12.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 */

void __fastcall xxxTM_MoveDragRect(int a1, unsigned int a2)
{
  void *v3; // ecx
  bool v4; // zf
  unsigned int v5; // edx
  char v6; // cl
  unsigned int v7; // eax
  int v8; // esi
  int v9; // ecx
  int *v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  struct tagRECT *v23; // [esp+0h] [ebp-50h]
  struct tagCHECKPOINT **v24; // [esp+4h] [ebp-4Ch]
  unsigned int v25; // [esp+Ch] [ebp-44h] BYREF
  unsigned int v26; // [esp+10h] [ebp-40h]
  unsigned int v27; // [esp+14h] [ebp-3Ch]
  ULONG_PTR BugCheckParameter2; // [esp+18h] [ebp-38h]
  unsigned int v29; // [esp+1Ch] [ebp-34h] BYREF
  int *v30; // [esp+20h] [ebp-30h]
  int v31; // [esp+24h] [ebp-2Ch]
  int v32; // [esp+28h] [ebp-28h]
  int v33; // [esp+2Ch] [ebp-24h] BYREF
  int v34; // [esp+30h] [ebp-20h]
  int v35; // [esp+34h] [ebp-1Ch]
  int v36; // [esp+38h] [ebp-18h]
  unsigned int v37[4]; // [esp+3Ch] [ebp-14h] BYREF

  v27 = a2;
  memset(v37, 0, sizeof(v37));
  v25 = 0;
  v29 = 0;
  v3 = **(void ***)(a1 + 8);
  v32 = *(_DWORD *)(a1 + 192);
  if ( GreIsWindowResizeInProgress(v3) )
  {
    *(_DWORD *)(a1 + 188) |= 1u;
    return;
  }
  v4 = *(_DWORD *)(a1 + 164) == 9;
  v31 = a1 + 12;
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a1 + 56);
  if ( v4 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x800) == 0 )
    {
      if ( !MoveRect((_DWORD *)a1, v27, 0) )
        return;
      v5 = 534;
      goto LABEL_13;
    }
    if ( !xxxSizeOrMoveRect(v27, (int *)a1, (struct _MOVESIZEDATA *)&v25, (int *)v37, &v29, v23, v24) )
      return;
    v6 = v25;
    if ( (v25 & 1) == 0 )
    {
      v5 = 534;
      goto LABEL_14;
    }
    SwapRect((int *)v29, (int *)v37);
    xxxMinMaximizeEx(*(struct tagQ **)(a1 + 8), (struct tagWND *)9, 4u, 0, 0, 0);
    SwapRect((int *)v37, (int *)v29);
  }
  else if ( !SizeRect(v27, (int *)a1, 0, (struct tagCHECKPOINT *)&v25, (struct tagMONITOR *)v23, (unsigned int *)v24) )
  {
    return;
  }
  v5 = 532;
LABEL_13:
  v6 = v25;
LABEL_14:
  v26 = v5;
  if ( (v6 & 2) != 0
    && (BugCheckParameter2 = *(_DWORD *)(a1 + 8), (*(_BYTE *)(*(_DWORD *)(BugCheckParameter2 + 20) + 22) & 1) != 0) )
  {
    v7 = *(_DWORD *)(a1 + 164);
    v33 = *(_DWORD *)(a1 + 28);
    v34 = *(_DWORD *)(a1 + 32);
    v35 = *(_DWORD *)(a1 + 36);
    v36 = *(_DWORD *)(a1 + 40);
    _InterlockedIncrement(&glSendMessage);
    v8 = 0;
    xxxSendTransformableMessageTimeout(BugCheckParameter2, v5, v7, (int)&v33, 0, 0, 0, 1u, 0);
    xxxMinMaximizeEx(*(struct tagQ **)(a1 + 8), (struct tagWND *)3, 0x16u, *(_DWORD *)(a1 + 204), 0, 0);
    if ( IsSemiMaximized(*(_DWORD **)(a1 + 8)) || (*(_BYTE *)(*(_DWORD *)(v9 + 20) + 23) & 1) != 0 )
      v8 = 128;
    *(_DWORD *)(a1 + 184) = v8 | *(_DWORD *)(a1 + 184) & 0xFFFFFF7F;
    v10 = (int *)(*(_DWORD *)(v9 + 20) + 52);
    v33 = *v10++;
    v34 = *v10++;
    v35 = *v10;
    v36 = v10[1];
    *(_DWORD *)(a1 + 28) = v33;
    *(_DWORD *)(a1 + 32) = v34;
    *(_DWORD *)(a1 + 36) = v35;
    *(_DWORD *)(a1 + 40) = v36;
    *(_DWORD *)(a1 + 60) = v33;
    *(_DWORD *)(a1 + 64) = v34;
    *(_DWORD *)(a1 + 68) = v35;
    *(_DWORD *)(a1 + 72) = v36;
    *(_DWORD *)(a1 + 12) = v33;
    *(_DWORD *)(a1 + 16) = v34;
    *(_DWORD *)(a1 + 20) = v35;
    *(_DWORD *)(a1 + 24) = v36;
    *(_DWORD *)(a1 + 44) = v33;
    *(_DWORD *)(a1 + 48) = v34;
    *(_DWORD *)(a1 + 52) = v35;
    *(_DWORD *)(a1 + 56) = v36;
  }
  else
  {
    v30 = (int *)(a1 + 28);
    v11 = *(_DWORD *)(a1 + 184);
    BugCheckParameter2 = 0;
    if ( (v11 & 0x4000000) != 0 )
    {
      if ( (v11 & 0x20) != 0 )
      {
        if ( (v6 & 8) != 0 )
        {
          xxxDrawDragRect(0x80000000);
        }
        else if ( (v6 & 4) != 0 )
        {
          bSetDevDragRect(*(_DWORD **)(_gpDispInfo + 20), 0, 0, 0);
        }
      }
      v12 = *(_DWORD *)(a1 + 184);
      if ( (v12 & 0x2000000) != 0 )
      {
        if ( (v12 & 0x20) != 0 )
        {
          v13 = *(_DWORD *)(a1 + 8);
          v14 = *(_DWORD *)(a1 + 164);
          v33 = *(_DWORD *)(a1 + 60);
          v34 = *(_DWORD *)(a1 + 64);
          v35 = *(_DWORD *)(a1 + 68);
          v36 = *(_DWORD *)(a1 + 72);
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v13, v26, v14, (int)&v33, 0, 0, 0, 1u, 0);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qdddd(v15, 12, v15, *(_DWORD *)(a1 + 8), v33, v34, v35, v36);
          xxxDrawDragRectEx(a1, a1 + 60, 0x80000000, a1 + 44);
        }
        else
        {
          v30 = (int *)(a1 + 60);
          v31 = a1 + 44;
          BugCheckParameter2 = 0x80000000;
        }
      }
    }
    v16 = *(_DWORD *)(a1 + 164);
    v17 = *(_DWORD *)(a1 + 8);
    v33 = *v30;
    v34 = v30[1];
    v35 = v30[2];
    v36 = v30[3];
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(v17, v26, v16, (int)&v33, 0, 0, 0, 1u, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdddd(v18, 13, v18, *(_DWORD *)(a1 + 8), v33, v34, v35, v36);
    xxxDrawDragRectEx(a1, &v33, BugCheckParameter2 | 3, v31);
  }
  if ( *(_DWORD *)(a1 + 164) == 9
    && ((*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 20) + 184) & 0xF) == 2 || *(_DWORD *)(a1 + 192) == v32) )
  {
    v19 = *(_DWORD *)(a1 + 156) - (__int16)v27;
    v20 = *(_DWORD *)(a1 + 160) - SHIWORD(v27);
    if ( (*(_DWORD *)(a1 + 184) & 0x6000020) == 0x6000000 )
    {
      v21 = *(_DWORD *)(a1 + 28) + v19;
      v22 = *(_DWORD *)(a1 + 32);
    }
    else
    {
      v21 = v33 + v19;
      v22 = v34;
    }
    *(_DWORD *)(a1 + 156) = v21;
    *(_DWORD *)(a1 + 160) = v20 + v22;
  }
}
