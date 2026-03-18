/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C002366C
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C000DF88 (zzzDwmStartRedirection.c)
 *     SetRedirectedWindow @ 0x1C00210E8 (SetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C0051748 (RecreateRedirectionBitmap.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0018AAC (GreCreateCompatibleBitmapInternal.c)
 *     IsDesktopWindow @ 0x1C0020E80 (IsDesktopWindow.c)
 *     IsWindowContentProtected @ 0x1C0022F38 (IsWindowContentProtected.c)
 *     GreGetSpriteAttributes @ 0x1C004C520 (GreGetSpriteAttributes.c)
 *     GreSetRedirection @ 0x1C004F1E0 (GreSetRedirection.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C0054514 (GetWindowMonitorAdapterLuid.c)
 *     GreGetDxSharedSurface @ 0x1C0054578 (GreGetDxSharedSurface.c)
 *     GreReferenceObject @ 0x1C00657F8 (GreReferenceObject.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     GreDereferenceObject @ 0x1C00AFA30 (GreDereferenceObject.c)
 *     DesktopFromDesktopWindow @ 0x1C00C3B8C (DesktopFromDesktopWindow.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C010EE84 (GreSetRedirectionBitmapOwner.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(__int64 a1, int a2, int a3, HSURF *a4)
{
  __int64 v4; // r10
  int v5; // esi
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // r13d
  int v12; // eax
  HWND v13; // rdx
  unsigned int v14; // r12d
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  HSURF v19; // rbx
  __int64 v20; // r15
  __int64 v21; // r13
  unsigned int v22; // r12d
  __int64 TopLevelWindow; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // [rsp+40h] [rbp-30h] BYREF
  struct _BLENDFUNCTION v27; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v28; // [rsp+48h] [rbp-28h] BYREF
  __int64 v29; // [rsp+58h] [rbp-18h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+40h] BYREF
  HSURF *v32; // [rsp+C8h] [rbp+58h]

  v32 = a4;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  LODWORD(v31) = 0;
  v29 = 0LL;
  if ( (*(_BYTE *)(v4 + 26) & 0x20) != 0 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  v9 = *(_DWORD *)(v4 + 232);
  v10 = 0x4000000;
  if ( (v9 & 0x80000) == 0 )
  {
    if ( !a3 )
      goto LABEL_5;
    *(_DWORD *)(v4 + 232) = v9 | 0x80000;
    v4 = *(_QWORD *)(a1 + 40);
  }
  v10 = 201326592;
LABEL_5:
  v11 = 1;
  if ( (*(_BYTE *)(v4 + 26) & 8) == 0 || (LOBYTE(v12) = IsDesktopWindow(a1), v12) )
  {
    v10 |= 0x1000000u;
  }
  else
  {
    v13 = *(HWND *)a1;
    v27 = 0;
    v26 = 0;
    if ( (unsigned int)GreGetSpriteAttributes(*(HDEV *)(gpDispInfo + 40LL), v13, &v27, &v26, 1) && (v26 & 1) != 0 )
      v10 |= 0x1000000u;
    v4 = *(_QWORD *)(a1 + 40);
  }
  v14 = 1;
  if ( *(_DWORD *)(v4 + 96) - *(_DWORD *)(v4 + 88) > 1 )
    v14 = *(_DWORD *)(v4 + 96) - *(_DWORD *)(v4 + 88);
  if ( *(_DWORD *)(v4 + 100) - *(_DWORD *)(v4 + 92) > 1 )
    v11 = *(_DWORD *)(v4 + 100) - *(_DWORD *)(v4 + 92);
  if ( !a2 && (LOBYTE(v15) = IsDesktopWindow(a1), v15) )
  {
    v19 = *(HSURF *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) + 120LL);
  }
  else
  {
    LOWORD(v31) = 96;
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) != 0 )
        {
          v16 = *(_QWORD *)(a1 + 40);
          v17 = *(_DWORD *)(v16 + 288);
          if ( (v17 & 0xF) == 0 && (v17 & 0x40000000) != 0 )
          {
            v25 = *(unsigned __int16 *)(v16 + 284);
            if ( (_WORD)v25 != 96 )
              LOWORD(v31) = GreGetScaledLogPixels(v25);
          }
        }
      }
    }
    if ( (v10 & 0x1000000) == 0 )
    {
      v18 = *(_QWORD *)(a1 + 40);
      LODWORD(v28) = 0;
      if ( (*(_DWORD *)(v18 + 232) & 0x80000) == 0
        || (int)GreGetDxSharedSurface(*(HWND *)a1, (__int64)&v28, (__int64)&v30) < 0 )
      {
        GetWindowMonitorAdapterLuid(a1, &v29);
      }
    }
    v19 = (HSURF)GreCreateCompatibleBitmapInternal(
                   *(HDC *)(gpDispInfo + 56LL),
                   v14,
                   v11,
                   v10,
                   &v29,
                   (unsigned __int16 *)&v31);
    LODWORD(v31) = 1;
  }
  if ( !v19 )
  {
    v5 = -2143354872;
    goto LABEL_40;
  }
  v20 = *(_QWORD *)(a1 + 16);
  v21 = 0LL;
  v22 = 0;
  TopLevelWindow = GetTopLevelWindow(a1);
  if ( (unsigned int)IsWindowContentProtected(a1) )
    goto LABEL_55;
  if ( !TopLevelWindow || a1 == TopLevelWindow || !(unsigned int)IsWindowContentProtected(TopLevelWindow) )
  {
LABEL_29:
    if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x3FFF) == 0x29D )
    {
      v24 = DesktopFromDesktopWindow(a1);
      if ( v24 )
        v21 = ***(_QWORD ***)(v24 + 8);
    }
    else
    {
      v21 = ***(_QWORD ***)(*(_QWORD *)(v20 + 448) + 8LL);
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( (_DWORD)v31 )
    {
      v5 = GreReferenceObject(v19);
      if ( v5 < 0 )
        goto LABEL_38;
    }
    if ( (unsigned int)GreMarkUndeletableBitmap(v19) )
    {
      if ( (unsigned int)GreSetRedirection(v19, 1LL) && (unsigned int)GreSetRedirectionBitmapOwner(v19, v21, v22) )
      {
LABEL_36:
        if ( v5 < 0 )
          GreDereferenceObject(v19);
LABEL_38:
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
        if ( v5 < 0 )
        {
          GreDeleteObject(v19);
          v19 = 0LL;
        }
        goto LABEL_40;
      }
      GreMarkDeletableBitmap(v19);
    }
    v5 = -2143354871;
    goto LABEL_36;
  }
  if ( *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 416LL) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) )
  {
LABEL_55:
    v22 = *(_DWORD *)(*(_QWORD *)(v20 + 416) + 56LL);
    goto LABEL_29;
  }
  GreDeleteObject(v19);
  v19 = 0LL;
  v5 = -1073741790;
LABEL_40:
  *v32 = v19;
  return (unsigned int)v5;
}
