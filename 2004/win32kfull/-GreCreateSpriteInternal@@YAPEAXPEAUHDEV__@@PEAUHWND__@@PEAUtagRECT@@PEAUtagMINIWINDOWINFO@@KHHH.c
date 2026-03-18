/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C0028F80
 * Callers:
 *     GreCreateSprite @ 0x1C0028EB8 (GreCreateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0052C4C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C001FBA8 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C001FC7C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C001FCC4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C002008C (DwmAsyncZorderSprite.c)
 *     DwmAsyncCreateSprite @ 0x1C0029350 (DwmAsyncCreateSprite.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1C00294AC (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0029534 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C002AE7C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C004C724 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C010ADC0 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0126880 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

unsigned __int16 *__fastcall GreCreateSpriteInternal(
        HDEV a1,
        struct PDEVOBJ *a2,
        struct tagRECT *a3,
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
  unsigned __int64 v16; // rdx
  HSPRITE DwmSpriteObj; // rax
  DWMSPRITE *v18; // rdi
  __int64 *v19; // rbx
  unsigned __int16 *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  HSPRITE NeighborSprite; // r13
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // ebx
  void *v28; // rax
  unsigned __int16 *v29; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  void *v35; // rax
  struct DWMSPRITE *v36; // r8
  int v37; // [rsp+20h] [rbp-E0h]
  unsigned __int16 *v38; // [rsp+48h] [rbp-B8h] BYREF
  struct PDEVOBJ *v39; // [rsp+50h] [rbp-B0h]
  DWMSPRITE *v40; // [rsp+58h] [rbp-A8h] BYREF
  char v41[8]; // [rsp+60h] [rbp-A0h] BYREF
  HDEV v42; // [rsp+68h] [rbp-98h]
  __int64 v43; // [rsp+70h] [rbp-90h] BYREF
  int v44; // [rsp+78h] [rbp-88h]
  _BYTE v45[144]; // [rsp+80h] [rbp-80h] BYREF

  v11 = 0LL;
  v39 = a2;
  v42 = a1;
  v38 = a11;
  if ( !a6 || !g_pDwmState )
    return (unsigned __int16 *)GdiCreateSprite(a1, (HWND)a2, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v41, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  memset(v45, 0, 0x88uLL);
  if ( a4 )
    v16 = *((_QWORD *)a4 + 6);
  else
    v16 = gdwRitInputDesktopId;
  DwmSpriteObj = hspCreateDwmSpriteObj((HWND)a2, v16, a1, a8);
  v40 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v40, DwmSpriteObj);
  v18 = v40;
  if ( v40 )
  {
    v19 = (__int64 *)*((_QWORD *)v40 + 21);
    *((_DWORD *)v40 + 29) = 0;
    if ( a3 )
      *(struct tagRECT *)((char *)v18 + 56) = *a3;
    v20 = v38;
    *((_DWORD *)v18 + 41) = (2 * (a8 & 1)) | *((_DWORD *)v18 + 41) & 0xFFFFFFFC | (a7 != 0);
    *((_DWORD *)v19 + 63) = (*((_DWORD *)v19 + 63) ^ (4 * a9)) & 4 ^ (*((_DWORD *)v19 + 63) & 0xFFFFFFEF | (16 * (a8 & 1)));
    *((_DWORD *)v18 + 41) ^= (*((_DWORD *)v18 + 41) ^ (8 * a10)) & 8;
    DWMSPRITE::vUpdateDpiScaling(v18, v20);
    v38 = *(unsigned __int16 **)v18;
    NeighborSprite = hspGetNeighborSprite((HSPRITE)v38, 0, 1);
    if ( !v39 && !a4 )
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v45, (char *)v18 + 56);
      a4 = (struct tagMINIWINDOWINFO *)v45;
    }
    if ( (*((_DWORD *)v19 + 63) & 4) != 0 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v43);
      v24 = *v19;
      v19[10] = v43;
      EtwTraceLifetimeAccum(v24, 1LL);
      if ( v44 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
    }
    v25 = *((_DWORD *)v18 + 41) & 1;
    v26 = *((_DWORD *)v19 + 63) & 1;
    v27 = v25 | *((_DWORD *)v19 + 63) & 0xC | (2
                                             * (*((_DWORD *)v19 + 63) & 1 | *((_DWORD *)v18 + 41) & 0x40 | (4 * (*((_DWORD *)v18 + 41) & 0xE))));
    v28 = (void *)UserReferenceDwmApiPort(v25, v26, v21, v22);
    v37 = v27;
    v29 = v38;
    if ( (int)DwmAsyncCreateSprite(v28, v37, (__int64)a4, a5) < 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
      v36 = v18;
      v18 = 0LL;
      v40 = 0LL;
      vspDestroyDwmSpriteObjInternal(v42, 0, v36);
    }
    else
    {
      if ( NeighborSprite )
      {
        if ( *((_QWORD *)g_pDwmState + 18) )
        {
          v38 = 0LL;
          DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v38, NeighborSprite);
          v35 = (void *)UserReferenceDwmApiPort(v32, v31, v33, v34);
          DwmAsyncZorderSprite(v35, (__int64)v29, (__int64)NeighborSprite);
          if ( v38 )
          {
            _InterlockedDecrement((volatile signed __int32 *)v38 + 3);
            v18 = v40;
          }
        }
      }
      v11 = v29;
      *((_DWORD *)v18 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    }
    if ( v18 )
      _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v41);
  return v11;
}
