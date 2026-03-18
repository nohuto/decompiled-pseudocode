/*
 * XREFs of _GreProtectSpriteContent@16 @ 0x1CE69D
 * Callers:
 *     ?ProtectWindowBitmap@@YGHPAUtagWND@@K@Z @ 0xF5722 (-ProtectWindowBitmap@@YGHPAUtagWND@@K@Z.c)
 * Callees:
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QAEXPAW4_HLSURF_REDIRECTIONSTYLE@@PAK1PAPAXPAU_LUID@@@Z @ 0x20372 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QAEXPAW4_HLSURF_REDIRECTIONSTYLE@@PAK1PAPAXPAU_LUID@@@Z.c)
 *     ?DwmCombineDwmSpriteLogSurfFlags@@YG?AU_DWMREDIR_SPRITEFLAGS@@U_DWMSPRITEFLAGS@@U_LOGSURF_FLAGS@@@Z @ 0x2041A (-DwmCombineDwmSpriteLogSurfFlags@@YG-AU_DWMREDIR_SPRITEFLAGS@@U_DWMSPRITEFLAGS@@U_LOGSURF_FLAGS@.c)
 *     _DwmAsyncUpdateSprite@44 @ 0x2044E (_DwmAsyncUpdateSprite@44.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 */

int __fastcall GreProtectSpriteContent(int a1, void *a2, int a3, unsigned int a4)
{
  int v4; // esi
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  unsigned int v10; // ecx
  SFMLOGICALSURFACE *v11; // edx
  int v12; // eax
  int v13; // ebx
  void *v14; // eax
  int v16; // [esp-24h] [ebp-44h]
  int v17; // [esp-20h] [ebp-40h]
  int v18; // [esp-14h] [ebp-34h]
  unsigned int v19; // [esp-10h] [ebp-30h]
  unsigned int v20; // [esp-Ch] [ebp-2Ch]
  BOOL v21; // [esp-8h] [ebp-28h]
  int v22; // [esp-4h] [ebp-24h]
  char v23[4]; // [esp+Ch] [ebp-14h] BYREF
  void *v24; // [esp+10h] [ebp-10h]
  int v25; // [esp+14h] [ebp-Ch] BYREF
  unsigned int v26; // [esp+18h] [ebp-8h] BYREF
  int v27; // [esp+1Ch] [ebp-4h]
  int *v28; // [esp+28h] [ebp+8h]

  v24 = a2;
  v4 = 0;
  v5 = a4 & 1;
  v27 = 0;
  v6 = (a4 & 0x11) != 0;
  v25 = 0;
  v26 = 0;
  a4 = 0;
  if ( a3 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v23, 0, 0, 0);
    GreAcquireSemaphore(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
    v7 = DWMALTSPRITEREF::hspLookupWindow(v24);
    if ( v7 )
    {
      LOBYTE(v8) = 15;
      v9 = HmgLock(v7, v8);
      v4 = v9;
      if ( !v9 )
      {
LABEL_10:
        v4 = v27;
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
        GreReleaseSemaphoreInternal(_ghsemDwmState);
        DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v23);
        return v4;
      }
      v10 = *(_DWORD *)(v9 + 132);
      v11 = *(SFMLOGICALSURFACE **)(v9 + 136);
      v28 = (int *)v11;
      v27 = 1;
      if ( ((v10 >> 3) & 1) != v5 || ((v10 >> 6) & 1) != v6 )
      {
        *(_DWORD *)(v9 + 132) = (v6 << 6) | v10 & 0xFFFFFFB7 | (8 * v5) & 0xFFFFFFBF;
        SFMLOGICALSURFACE::GetRedirectionInfo(v11, (enum _HLSURF_REDIRECTIONSTYLE *)&v25, &v26, &a4, 0, 0);
        v12 = DwmCombineDwmSpriteLogSurfFlags(*(_DWORD *)(v4 + 132), v28[41]);
        v22 = *(_DWORD *)(v4 + 68);
        *(_DWORD *)(v4 + 68) = 0;
        v13 = *(_DWORD *)v4;
        v21 = *(_DWORD *)(v4 + 76) >= 1;
        v20 = a4;
        v19 = v26;
        v18 = v25;
        v17 = v12;
        v16 = *v28;
        v14 = (void *)UserReferenceDwmApiPort();
        DwmAsyncUpdateSprite(v14, v13, v16, v17, (_DWORD *)(v4 + 48), 0, v18, v19, v20, v21, v22);
      }
    }
    if ( v4 )
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 8));
    goto LABEL_10;
  }
  return v4;
}
