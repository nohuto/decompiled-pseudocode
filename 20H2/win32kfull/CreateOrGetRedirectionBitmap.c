/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C0090950
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C007FCE0 (zzzDwmStartRedirection.c)
 *     SetRedirectedWindow @ 0x1C009100C (SetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00F9CD8 (RecreateRedirectionBitmap.c)
 * Callees:
 *     DesktopFromDesktopWindow @ 0x1C000F50C (DesktopFromDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     GreGetSpriteAttributes @ 0x1C0082C34 (GreGetSpriteAttributes.c)
 *     IsDesktopWindow @ 0x1C0091BB0 (IsDesktopWindow.c)
 *     GreDereferenceObject @ 0x1C00936F4 (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C0098F20 (GreReferenceObject.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009AB10 (GreCreateCompatibleBitmapInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GreSetRedirection @ 0x1C00C140C (GreSetRedirection.c)
 *     IsWindowContentProtected @ 0x1C00C9FF8 (IsWindowContentProtected.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C010FB6C (GreSetRedirectionBitmapOwner.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C01106AC (GetWindowMonitorAdapterLuid.c)
 *     GreGetDxSharedSurface @ 0x1C0110710 (GreGetDxSharedSurface.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(__int64 a1, int a2, int a3, HSURF *a4)
{
  __int64 v4; // r10
  int v5; // esi
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // r8
  HWND v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  HSURF CompatibleBitmapInternal; // rbx
  __int64 v20; // r15
  __int64 v21; // r13
  unsigned int v22; // r12d
  __int64 TopLevelWindow; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // [rsp+40h] [rbp-30h] BYREF
  struct _BLENDFUNCTION v27; // [rsp+44h] [rbp-2Ch] BYREF
  int v28; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v29; // [rsp+4Ch] [rbp-24h] BYREF
  __int64 v30; // [rsp+58h] [rbp-18h] BYREF
  __int64 v31; // [rsp+60h] [rbp-10h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+40h] BYREF
  HSURF *v33; // [rsp+C8h] [rbp+58h]

  v33 = a4;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  LODWORD(v32) = 0;
  v30 = 0LL;
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
  if ( (*(_BYTE *)(v4 + 26) & 8) == 0 || (unsigned int)IsDesktopWindow(a1) )
  {
    v10 |= 0x1000000u;
  }
  else
  {
    v12 = *(HWND *)a1;
    v27 = 0;
    v26 = 0;
    if ( (unsigned int)GreGetSpriteAttributes(
                         *(HDEV *)(gpDispInfo + 40LL),
                         (struct PDEVOBJ *)v12,
                         v11,
                         &v29,
                         &v27,
                         &v26,
                         1)
      && (v26 & 1) != 0 )
    {
      v10 |= 0x1000000u;
    }
  }
  if ( !a2 && (unsigned int)IsDesktopWindow(a1) )
  {
    CompatibleBitmapInternal = *(HSURF *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) + 120LL);
  }
  else
  {
    LOWORD(v32) = 96;
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0 )
        {
          v16 = *(_QWORD *)(a1 + 40);
          v17 = *(_DWORD *)(v16 + 288);
          if ( (v17 & 0xF) == 0 && (v17 & 0x40000000) != 0 )
          {
            v25 = *(unsigned __int16 *)(v16 + 284);
            if ( (_WORD)v25 != 96 )
              LOWORD(v32) = GreGetScaledLogPixels(v25, v13, v14, v15);
          }
        }
      }
    }
    if ( (v10 & 0x1000000) == 0 )
    {
      v18 = *(_QWORD *)(a1 + 40);
      v28 = 0;
      if ( (*(_DWORD *)(v18 + 232) & 0x80000) == 0
        || (int)GreGetDxSharedSurface(*(HWND *)a1, (__int64)&v28, (__int64)&v31) < 0 )
      {
        GetWindowMonitorAdapterLuid(a1, &v30);
      }
    }
    CompatibleBitmapInternal = (HSURF)GreCreateCompatibleBitmapInternal(
                                        *(HDC *)(gpDispInfo + 56LL),
                                        (__int64)&v30,
                                        (__int64)&v32);
    LODWORD(v32) = 1;
  }
  if ( !CompatibleBitmapInternal )
  {
    v5 = -2143354872;
    goto LABEL_35;
  }
  v20 = *(_QWORD *)(a1 + 16);
  v21 = 0LL;
  v22 = 0;
  TopLevelWindow = GetTopLevelWindow(a1);
  if ( (unsigned int)IsWindowContentProtected(a1) )
    goto LABEL_50;
  if ( !TopLevelWindow || a1 == TopLevelWindow || !(unsigned int)IsWindowContentProtected(TopLevelWindow) )
  {
LABEL_24:
    if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x29D )
    {
      v24 = DesktopFromDesktopWindow(a1);
      if ( v24 )
        v21 = ***(_QWORD ***)(v24 + 8);
    }
    else
    {
      v21 = ***(_QWORD ***)(*(_QWORD *)(v20 + 456) + 8LL);
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( (_DWORD)v32 )
    {
      v5 = GreReferenceObject(CompatibleBitmapInternal);
      if ( v5 < 0 )
        goto LABEL_33;
    }
    if ( (unsigned int)GreMarkUndeletableBitmap(CompatibleBitmapInternal) )
    {
      if ( (unsigned int)GreSetRedirection(CompatibleBitmapInternal, 1LL)
        && (unsigned int)GreSetRedirectionBitmapOwner(CompatibleBitmapInternal, v21, v22) )
      {
LABEL_31:
        if ( v5 < 0 )
          GreDereferenceObject(CompatibleBitmapInternal);
LABEL_33:
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
        if ( v5 < 0 )
        {
          GreDeleteObject(CompatibleBitmapInternal);
          CompatibleBitmapInternal = 0LL;
        }
        goto LABEL_35;
      }
      GreMarkDeletableBitmap(CompatibleBitmapInternal);
    }
    v5 = -2143354871;
    goto LABEL_31;
  }
  if ( *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 424LL) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
  {
LABEL_50:
    v22 = *(_DWORD *)(*(_QWORD *)(v20 + 424) + 56LL);
    goto LABEL_24;
  }
  GreDeleteObject(CompatibleBitmapInternal);
  CompatibleBitmapInternal = 0LL;
  v5 = -1073741790;
LABEL_35:
  *v33 = CompatibleBitmapInternal;
  return (unsigned int)v5;
}
