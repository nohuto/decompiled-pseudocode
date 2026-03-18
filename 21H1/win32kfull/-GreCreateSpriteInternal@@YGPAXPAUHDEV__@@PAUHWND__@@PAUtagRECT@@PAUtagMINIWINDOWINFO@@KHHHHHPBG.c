/*
 * XREFs of ?GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG@Z @ 0x1F714
 * Callers:
 *     _GreCreateSprite@44 @ 0x1F6C0 (_GreCreateSprite@44.c)
 *     ?DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0xD014E (-DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 * Callees:
 *     ?vUpdateDpiScaling@DWMSPRITE@@QAEXPBG@Z @ 0x1EDDC (-vUpdateDpiScaling@DWMSPRITE@@QAEXPBG@Z.c)
 *     _DwmAsyncCreateSprite@28 @ 0x1EE40 (_DwmAsyncCreateSprite@28.c)
 *     ?hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z @ 0x1EF6E (-hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z.c)
 *     ?DwmCombineDwmSpriteLogSurfFlags@@YG?AU_DWMREDIR_SPRITEFLAGS@@U_DWMSPRITEFLAGS@@U_LOGSURF_FLAGS@@@Z @ 0x2041A (-DwmCombineDwmSpriteLogSurfFlags@@YG-AU_DWMREDIR_SPRITEFLAGS@@U_DWMSPRITEFLAGS@@U_LOGSURF_FLAGS@.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QAEXPAVREGION@@@Z @ 0x24B32 (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QAEXPAVREGION@@@Z.c)
 *     _DwmAsyncZorderSprite@12 @ 0x24C1E (_DwmAsyncZorderSprite@12.c)
 *     ?GdiCreateSprite@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@@Z @ 0x9F0D4 (-GdiCreateSprite@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z @ 0xA3F2E (-vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z.c)
 *     ?hspGetNeighborSprite@@YGPAUHSPRITE__@@PAU1@_N1@Z @ 0xA5C84 (-hspGetNeighborSprite@@YGPAUHSPRITE__@@PAU1@_N1@Z.c)
 *     _vSpDwmGetMiniWinInfoForNonWindowSprite@8 @ 0xD2CCC (_vSpDwmGetMiniWinInfoForNonWindowSprite@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void *__userpurge GreCreateSpriteInternal@<eax>(
        struct SFMLOGICALSURFACE *a1@<edx>,
        struct PDEVOBJ *a2@<ecx>,
        HDEV a3,
        HWND a4,
        struct tagRECT *a5,
        struct tagMINIWINDOWINFO *a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        int a10,
        unsigned __int16 *a11,
        int a12,
        const unsigned __int16 *a13)
{
  HDEV v13; // esi
  unsigned int v14; // ebx
  HWND v15; // edi
  int v16; // edx
  int DwmSpriteObj; // eax
  int v18; // edx
  HSPRITE v19; // esi
  _DWORD *v20; // eax
  SFMLOGICALSURFACE *v21; // edx
  unsigned int v22; // eax
  SFMLOGICALSURFACE *v23; // eax
  void *v24; // eax
  int v25; // edx
  unsigned int CurrentProcessId; // eax
  HWND v28; // ecx
  int v29; // eax
  int v30; // edi
  struct SFMLOGICALSURFACE *v31; // [esp-14h] [ebp-E0h]
  _DWORD *v32; // [esp-10h] [ebp-DCh]
  int v33; // [esp-Ch] [ebp-D8h]
  unsigned __int16 *v34; // [esp-4h] [ebp-D0h]
  HSPRITE v35; // [esp-4h] [ebp-D0h]
  HDEV v36; // [esp-4h] [ebp-D0h]
  HDEV v37; // [esp+0h] [ebp-CCh]
  struct tagRECT *v38; // [esp+4h] [ebp-C8h]
  _BYTE v39[4]; // [esp+Ch] [ebp-C0h] BYREF
  HWND v40; // [esp+10h] [ebp-BCh]
  struct REGION *v41; // [esp+14h] [ebp-B8h] BYREF
  unsigned __int16 *v42; // [esp+18h] [ebp-B4h]
  int v43; // [esp+1Ch] [ebp-B0h]
  HWND v44; // [esp+20h] [ebp-ACh]
  HSPRITE NeighborSprite; // [esp+24h] [ebp-A8h]
  struct SFMLOGICALSURFACE *v46; // [esp+28h] [ebp-A4h]
  HDEV v47; // [esp+2Ch] [ebp-A0h]
  SFMLOGICALSURFACE *v48; // [esp+30h] [ebp-9Ch]
  unsigned int v49; // [esp+34h] [ebp-98h]
  _BYTE v50[140]; // [esp+38h] [ebp-94h] BYREF

  v13 = a3;
  v14 = 0;
  v15 = a4;
  v49 = a8;
  v46 = a1;
  v44 = (HWND)a2;
  v47 = a3;
  v40 = a4;
  v42 = a11;
  v43 = 1;
  if ( !a6 || !g_pDwmState )
    return GdiCreateSprite(v13, (HWND)v37, v38);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v39, a2, 0, 0);
  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  memset(v50, 0, 0x84u);
  v43 = 0;
  if ( a4 )
    v16 = *((_DWORD *)a4 + 12);
  else
    v16 = gdwRitInputDesktopId;
  DwmSpriteObj = hspCreateDwmSpriteObj(v16, v46, v44, v49, v37, (int)v38);
  v19 = 0;
  if ( DwmSpriteObj )
  {
    LOBYTE(v18) = 15;
    v19 = (HSPRITE)HmgLock(DwmSpriteObj, v18);
    NeighborSprite = v19;
    if ( !v19 )
      goto LABEL_20;
    v20 = v47;
    v21 = (SFMLOGICALSURFACE *)*((_DWORD *)v19 + 34);
    v48 = v21;
    *((_DWORD *)v19 + 19) = 0;
    if ( v20 )
    {
      *(_DWORD *)(v19 + 8) = *(_DWORD *)(HSPRITE)v20;
      v19[9] = (struct HSPRITE__)v20[1];
      v19[10] = (struct HSPRITE__)v20[2];
      v19[11] = (struct HSPRITE__)v20[3];
      v19 = NeighborSprite;
      v15 = v40;
    }
    v49 &= 1u;
    v22 = v49;
    v34 = v42;
    *((_DWORD *)v19 + 33) = (2 * v49) | (_DWORD)v19[33] & 0xFFFFFFFC | (a7 != 0);
    *((_DWORD *)v21 + 41) = (*((_DWORD *)v21 + 41) ^ (4 * a9)) & 4 ^ ((16 * v22) | *((_DWORD *)v21 + 41) & 0xFFFFFFEF);
    *((_DWORD *)v19 + 33) ^= (*((_DWORD *)v19 + 33) ^ (8 * a10)) & 8;
    DWMSPRITE::vUpdateDpiScaling((DWMSPRITE *)v19, v34);
    v49 = *(_DWORD *)v19;
    NeighborSprite = hspGetNeighborSprite((HSPRITE)1, (bool)v37, (bool)v38);
    if ( !v46 && !v15 )
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v50, v19 + 8);
      v15 = v28;
    }
    v23 = v48;
    if ( (*((_BYTE *)v48 + 164) & 4) != 0 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v41);
      SFMLOGICALSURFACE::vDirtyRegionAccum(v48, v41);
      if ( v42 == (unsigned __int16 *)1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
      v23 = v48;
    }
    v33 = DwmCombineDwmSpriteLogSurfFlags(*((_DWORD *)v19 + 33), *((_DWORD *)v23 + 41));
    v32 = v47;
    v31 = v46;
    v24 = (void *)UserReferenceDwmApiPort();
    if ( DwmAsyncCreateSprite(v24, v49, (int)v31, v32, v33, v15, (int)a5) < 0 )
    {
      v36 = (HDEV)v19;
      _InterlockedDecrement((volatile signed __int32 *)v19 + 2);
      v19 = 0;
      vspDestroyDwmSpriteObjInternal(v36, (bool)v37, (struct DWMSPRITE *)v38);
    }
    else
    {
      if ( NeighborSprite )
      {
        if ( *((_DWORD *)g_pDwmState + 20) )
        {
          LOBYTE(v25) = 15;
          v29 = HmgLock(NeighborSprite, v25);
          v35 = NeighborSprite;
          v30 = v29;
          UserReferenceDwmApiPort();
          DwmAsyncZorderSprite(v35);
          if ( v30 )
            _InterlockedDecrement((volatile signed __int32 *)(v30 + 8));
        }
      }
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v14 = v49;
      *((_DWORD *)v19 + 18) = CurrentProcessId & 0xFFFFFFFC;
    }
  }
  if ( v19 )
    _InterlockedDecrement((volatile signed __int32 *)v19 + 2);
LABEL_20:
  v13 = v47;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v39);
  if ( v43 )
    return GdiCreateSprite(v13, (HWND)v37, v38);
  return (void *)v14;
}
