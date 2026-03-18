/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00C6A5C
 * Callers:
 *     GreCreateSprite @ 0x1C00C6994 (GreCreateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C010786C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C0082E38 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C008C834 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C008CACC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0097118 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00C4868 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00C57E0 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1C00C63D4 (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C00C645C (DwmAsyncCreateSprite.c)
 *     DwmAsyncZorderSprite @ 0x1C00FE26C (DwmAsyncZorderSprite.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C010CD60 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C01281E0 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

struct SPRITE *__fastcall GreCreateSpriteInternal(
        HDEV a1,
        struct PDEVOBJ *a2,
        struct _RECTL *a3,
        struct tagMINIWINDOWINFO *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned __int16 *a11)
{
  unsigned __int16 *v11; // r15
  __int64 v16; // rdx
  HSPRITE DwmSpriteObj; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  DWMSPRITE *v20; // rdi
  __int64 *v21; // rbx
  unsigned __int16 *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  HSPRITE NeighborSprite; // r13
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // ebx
  void *v30; // rax
  unsigned __int16 *v31; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  void *v37; // rax
  struct DWMSPRITE *v38; // r8
  int v39; // [rsp+20h] [rbp-E0h]
  unsigned __int16 *v40; // [rsp+48h] [rbp-B8h] BYREF
  HWND v41; // [rsp+50h] [rbp-B0h]
  DWMSPRITE *v42; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v43[8]; // [rsp+60h] [rbp-A0h] BYREF
  HDEV v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  int v46; // [rsp+78h] [rbp-88h]
  _BYTE v47[144]; // [rsp+80h] [rbp-80h] BYREF

  v11 = 0LL;
  v41 = (HWND)a2;
  v44 = a1;
  v40 = a11;
  if ( !a6 || !g_pDwmState )
    return GdiCreateSprite(a1, (HWND)a2, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v43, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  memset(v47, 0, 0x88uLL);
  if ( a4 )
    v16 = *((_QWORD *)a4 + 6);
  else
    v16 = gdwRitInputDesktopId;
  DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj((HWND)a2, v16, a1, a8);
  v42 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v42, DwmSpriteObj);
  v20 = v42;
  if ( v42 )
  {
    v21 = (__int64 *)*((_QWORD *)v42 + 21);
    *((_DWORD *)v42 + 29) = 0;
    if ( a3 )
      *(struct _RECTL *)((char *)v20 + 56) = *a3;
    v22 = v40;
    *((_DWORD *)v20 + 41) = (2 * (a8 & 1)) | *((_DWORD *)v20 + 41) & 0xFFFFFFFC | (a7 != 0);
    *((_DWORD *)v21 + 63) = (*((_DWORD *)v21 + 63) ^ (4 * a9)) & 4 ^ (*((_DWORD *)v21 + 63) & 0xFFFFFFEF | (16 * (a8 & 1)));
    *((_DWORD *)v20 + 41) ^= (*((_DWORD *)v20 + 41) ^ (8 * a10)) & 8;
    DWMSPRITE::vUpdateDpiScaling(v20, v22, v18, v19);
    v40 = *(unsigned __int16 **)v20;
    NeighborSprite = hspGetNeighborSprite((HSPRITE)v40, 0, 1);
    if ( !v41 && !a4 )
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v47, (char *)v20 + 56);
      a4 = (struct tagMINIWINDOWINFO *)v47;
    }
    if ( (*((_DWORD *)v21 + 63) & 4) != 0 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v45);
      v26 = *v21;
      v21[10] = v45;
      EtwTraceLifetimeAccum(v26, 1LL);
      if ( v46 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v45);
    }
    v27 = *((_DWORD *)v20 + 41) & 1;
    v28 = *((_DWORD *)v21 + 63) & 1;
    v29 = v27 | *((_DWORD *)v21 + 63) & 0xC | (2
                                             * (*((_DWORD *)v21 + 63) & 1 | *((_DWORD *)v20 + 41) & 0x40 | (4 * (*((_DWORD *)v20 + 41) & 0xE))));
    v30 = (void *)UserReferenceDwmApiPort(v27, v28, v23, v24);
    v39 = v29;
    v31 = v40;
    if ( (int)DwmAsyncCreateSprite(v30, (__int64)v40, (__int64)v41, a3, v39, (__int64)a4, a5) < 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
      v38 = v20;
      v20 = 0LL;
      v42 = 0LL;
      vspDestroyDwmSpriteObjInternal(v44, 0LL, v38);
    }
    else
    {
      if ( NeighborSprite )
      {
        if ( *((_QWORD *)g_pDwmState + 18) )
        {
          v40 = 0LL;
          DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v40, NeighborSprite);
          v37 = (void *)UserReferenceDwmApiPort(v34, v33, v35, v36);
          DwmAsyncZorderSprite(v37);
          if ( v40 )
          {
            _InterlockedDecrement((volatile signed __int32 *)v40 + 3);
            v20 = v42;
          }
        }
      }
      v11 = v31;
      *((_DWORD *)v20 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    }
    if ( v20 )
      _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v43);
  return (struct SPRITE *)v11;
}
