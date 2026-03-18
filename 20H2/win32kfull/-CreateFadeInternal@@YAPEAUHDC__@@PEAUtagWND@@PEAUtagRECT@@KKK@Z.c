/*
 * XREFs of ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E68A8
 * Callers:
 *     xxxTooltipWndProc @ 0x1C011C5E0 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01E8068 (zzzStartSonar.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0236284 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C003DE78 (ScaleDPIRect.c)
 *     InitializeDPIINFO @ 0x1C0090EAC (InitializeDPIINFO.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C0096F94 (GreDwmNotifySpriteDPIChange.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009AB10 (GreCreateCompatibleBitmapInternal.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxSetLayeredWindow @ 0x1C00C6608 (xxxSetLayeredWindow.c)
 *     GreCreateSprite @ 0x1C00C6994 (GreCreateSprite.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     DeleteFadeSprite @ 0x1C01E7500 (DeleteFadeSprite.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall CreateFadeInternal(struct tagWND *a1, struct tagRECT *a2, int a3, int a4, unsigned int a5)
{
  __int64 v9; // rcx
  __int64 v10; // r9
  struct tagRECT v11; // xmm6
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int32 v15; // r10d
  __int32 v16; // r8d
  LONG top; // r9d
  __int32 v18; // edx
  LONG left; // eax
  __int32 v20; // ecx
  struct tagMINIWINDOWINFO *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rcx
  unsigned int v28; // r14d
  unsigned int v29; // r15d
  __int64 v30; // rdx
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v36[2]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v37[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-50h]
  _OWORD v39[9]; // [rsp+C0h] [rbp-40h] BYREF

  if ( gfade[2] )
    return 0LL;
  if ( gfade[1] )
  {
    GreCleanDC();
    GreSetLayout(gfade[1], 0xFFFFFFFFLL, 0LL);
  }
  else
  {
    gfade[1] = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
    v9 = gfade[1];
    if ( !v9 )
      return 0LL;
    GreSetDCOwnerEx(v9, 0LL, 0LL, 0LL);
  }
  if ( a1 )
    a2 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  LOWORD(v32) = 96;
  if ( a1 )
  {
    LODWORD(gfade[6]) |= 8u;
    gfade[0] = *(_QWORD *)a1;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                        + 64LL) & 1) != 0 )
        {
          v25 = *((_QWORD *)a1 + 5);
          v26 = *(_DWORD *)(v25 + 288);
          if ( (v26 & 0xF) == 0 && (v26 & 0x40000000) != 0 )
          {
            v27 = *(unsigned __int16 *)(v25 + 284);
            if ( (_WORD)v27 != 96 )
              LOWORD(v32) = GreGetScaledLogPixels(v27, v22, v23, v24);
          }
        }
      }
    }
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v35);
    xxxSetLayeredWindow((unsigned __int64)a1, 0, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v35);
  }
  else
  {
    v11 = *a2;
    v34 = 0LL;
    v33 = (__m128i)v11;
    if ( (a5 & 0xF) == 2 )
    {
      v34 = MonitorFromRect(a2, 2LL, a5, v10);
    }
    else
    {
      v36[0] = 0;
      v36[1] = 0;
      LogicalToPhysicalDPIPoint(v36, a2, a5, &v34);
      if ( *(_WORD *)(*(_QWORD *)(v34 + 40) + 64LL) != 96 )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                        + 64LL) & 1) != 0
          && (a5 & 0xF) == 0
          && (a5 & 0x40000000) != 0 )
        {
          v35 = 0LL;
          LOWORD(v32) = GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v34 + 40) + 64LL), v12, v13, v14);
          ScaleDPIRect(&v33, &v33, v32, 0x60u, 0LL, 0LL);
          v15 = v33.m128i_i32[1];
          v16 = v33.m128i_i32[0];
          top = a2->top;
          v18 = v33.m128i_i32[1] - top;
          left = a2->left;
          v20 = v33.m128i_i32[0] - a2->left;
          v33.m128i_i32[2] += v33.m128i_i32[0];
          a2->right += v20;
          a2->bottom += v18;
          v33.m128i_i32[3] += v15;
          a2->left = v20 + left;
          a2->top = top + v18;
          v33.m128i_i32[0] = 2 * v16;
          v33.m128i_i32[1] = 2 * v15;
          v11 = (struct tagRECT)v33;
        }
        else
        {
          v11 = (struct tagRECT)v33;
        }
      }
    }
    v38 = 0LL;
    memset(v37, 0, sizeof(v37));
    InitializeDPIINFO((__int64)v37, a5, v34, 0LL);
    LODWORD(gfade[6]) &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset(v39, 0, 0x88uLL);
      v21 = (struct tagMINIWINDOWINFO *)v39;
      a4 &= ~0x100u;
      v39[0] = v11;
      v39[1] = v11;
      *(_QWORD *)&v39[3] = ***(_QWORD ***)(grpdeskRitInput + 8LL);
    }
    else
    {
      v21 = 0LL;
    }
    gfade[0] = GreCreateSprite(
                 *(HDEV *)(gpDispInfo + 40LL),
                 0LL,
                 a2,
                 v21,
                 0x9900u,
                 1,
                 1,
                 0,
                 0,
                 0,
                 (unsigned __int16 *)&v32);
    if ( gfade[0] )
      GreDwmNotifySpriteDPIChange(gfade[0], 0LL, (HSPRITE)gfade[0]);
  }
  if ( !gfade[0] )
    return 0LL;
  v28 = a2->right - a2->left;
  v29 = a2->bottom - a2->top;
  gfade[2] = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 56LL), v28, v29, 0, 0LL, (unsigned __int16 *)&v32);
  v30 = gfade[2];
  if ( !v30 )
  {
    DeleteFadeSprite();
    return 0LL;
  }
  GreSelectBitmap(gfade[1], v30);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
      GreSetLayout(gfade[1], 0xFFFFFFFFLL, 1LL);
  }
  GreSetDCOwnerEx(gfade[1], 2147483650LL, 0LL, 1LL);
  LODWORD(gfade[3]) = a2->left;
  HIDWORD(gfade[3]) = a2->top;
  LODWORD(gfade[4]) = v28;
  HIDWORD(gfade[4]) = v29;
  LODWORD(gfade[5]) = a3;
  LODWORD(gfade[6]) |= a4;
  HIDWORD(gfade[6]) = (gfade[6] & 0x40) != 0 ? 0xFF00FF : 0;
  return (HDC)gfade[1];
}
