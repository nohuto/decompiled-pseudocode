/*
 * XREFs of ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0210864
 * Callers:
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 * Callees:
 *     bSetDevDragRect @ 0x1C002A4E0 (bSetDevDragRect.c)
 *     xxxReleaseCapture @ 0x1C0038EA0 (xxxReleaseCapture.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0094BE8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     xxxDrawDragRect @ 0x1C02110B8 (xxxDrawDragRect.c)
 *     _ClientToScreen @ 0x1C025D1B4 (_ClientToScreen.c)
 */

__int64 __fastcall xxxTrackInitSize(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        int a4,
        struct _MOVESIZEDATA *a5)
{
  unsigned __int64 v8; // rdi
  unsigned int v9; // r14d
  int v10; // r15d
  unsigned int v11; // r14d
  unsigned int v12; // r14d
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  __int128 v20; // [rsp+58h] [rbp-18h] BYREF

  if ( a2 != 256 && (a2 <= 0x1FF || a2 > 0x202) )
    return 1LL;
  LODWORD(v19) = (__int16)a4;
  HIDWORD(v19) = SHIWORD(a4);
  ClientToScreen(a1, &v19);
  _InterlockedIncrement(&glSendMessage);
  v8 = 0LL;
  v9 = a2 - 256;
  v10 = xxxSendTransformableMessageTimeout(
          (unsigned __int64)a1,
          0x84u,
          0LL,
          (struct _LARGE_STRING *)((unsigned __int16)v19 | (WORD2(v19) << 16)),
          0,
          0,
          0LL,
          1,
          0);
  if ( !v9 )
  {
    if ( *((_DWORD *)a5 + 44) == 9 )
    {
      if ( a1 )
        v8 = *(_QWORD *)a1;
      xxxSendMessage((unsigned __int64)a1, 0x20u, v8, (struct _LARGE_STRING *)0x2000000);
    }
    if ( a3 > 0x28 || (_DWORD)a3 != 13 && (_DWORD)a3 != 27 && (unsigned int)(a3 - 37) > 3 )
      return 1LL;
    goto LABEL_36;
  }
  v11 = v9 - 256;
  if ( !v11 )
  {
    if ( a3 != 1 )
    {
      v20 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
      if ( PtInRect(&v20, v19) && (unsigned int)(v10 - 10) <= 7 )
        xxxSendMessage(
          (unsigned __int64)a1,
          0x20u,
          *(_QWORD *)a1,
          (struct _LARGE_STRING *)((unsigned __int16)v10 | 0x2000000LL));
      else
        zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 4976LL));
      return 1LL;
    }
LABEL_14:
    v14 = *((_DWORD *)a5 + 44);
    if ( !v14 )
    {
      if ( (unsigned int)(v10 - 10) <= 7 )
      {
        if ( a1 )
          v8 = *(_QWORD *)a1;
        xxxSendMessage((unsigned __int64)a1, 0x20u, v8, (struct _LARGE_STRING *)((unsigned __int16)v10 | 0x2000000LL));
        *((_DWORD *)a5 + 49) &= ~1u;
        v15 = dword_1C02F4CA4[v10];
        v16 = *(_DWORD *)&aFriendlyname[2 * v10 + 10];
        *((_DWORD *)a5 + 45) = v15;
        v17 = v16 + v15;
        *((_DWORD *)a5 + 46) = v16;
        *((_DWORD *)a5 + 44) = v17;
        v18 = dword_1C02F4CF8[v17];
        *((_DWORD *)a5 + 42) = *((_DWORD *)a5 + dword_1C02F4D28[v17] + 30) - v19;
        *((_DWORD *)a5 + 43) = *((_DWORD *)a5 + v18 + 30) - HIDWORD(v19);
      }
      return 1LL;
    }
    if ( v14 != 9 || v10 != 2 )
      return 1LL;
    if ( a1 )
      v8 = *(_QWORD *)a1;
    xxxSendMessage((unsigned __int64)a1, 0x20u, v8, (struct _LARGE_STRING *)0x2000000);
    *((_DWORD *)a5 + 42) = *((_DWORD *)a5 + 30) - v19;
    *((_DWORD *)a5 + 43) = *((_DWORD *)a5 + 31) - HIDWORD(v19);
LABEL_36:
    *((_DWORD *)a5 + 49) &= ~1u;
    return 1LL;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( !PtInRect((_DWORD *)a5 + 6, v19) )
      goto LABEL_10;
    goto LABEL_14;
  }
  if ( v12 != 1 )
    return 1LL;
LABEL_10:
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x10) != 0 )
  {
    xxxDrawDragRect(a5, 0LL, 2LL);
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
  }
  *((_DWORD *)a5 + 49) &= ~1u;
  CCursorClip::ClearClip(gpCursorClip);
  xxxReleaseCapture();
  *((_DWORD *)a5 + 49) |= 8u;
  return 0LL;
}
