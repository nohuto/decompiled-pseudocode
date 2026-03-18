/*
 * XREFs of ?GreDeleteSpriteInternal@@YGJPAUHDEV__@@PAUHWND__@@PAXH@Z @ 0x1BBC6
 * Callers:
 *     _GreDeleteSprite@16 @ 0x1BB86 (_GreDeleteSprite@16.c)
 *     ?DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0xD014E (-DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YGXPAUHDEV__@@@Z @ 0xD07F2 (-vSpDwmDestroyCursorSprites@@YGXPAUHDEV__@@@Z.c)
 * Callees:
 *     _DwmAsyncDestroySprite@8 @ 0x1BD68 (_DwmAsyncDestroySprite@8.c)
 *     ??0DWMSPRITEREF@@QAE@PAUHWND__@@PAX@Z @ 0x245C4 (--0DWMSPRITEREF@@QAE@PAUHWND__@@PAX@Z.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 *     ?GdiDeleteSprite@@YGJPAUHDEV__@@PAUHWND__@@PAX@Z @ 0x9EAA8 (-GdiDeleteSprite@@YGJPAUHDEV__@@PAUHWND__@@PAX@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z @ 0xA3F2E (-vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z.c)
 *     ?vspRemoveStateReferencesForSprite@@YGXPAVDWMSPRITE@@@Z @ 0xA3FEA (-vspRemoveStateReferencesForSprite@@YGXPAVDWMSPRITE@@@Z.c)
 */

int __userpurge GreDeleteSpriteInternal@<eax>(
        HWND a1@<edx>,
        struct PDEVOBJ *a2@<ecx>,
        HDEV a3,
        HWND a4,
        void *a5,
        int a6)
{
  HWND v7; // esi
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  HWND v11; // eax
  int v12; // edi
  struct PDEVOBJ *v13; // eax
  int v14; // eax
  int v15; // ebx
  int v16; // ebx
  HDEV v18; // [esp-4h] [ebp-24h]
  struct DWMSPRITE *v19; // [esp+0h] [ebp-20h]
  void *v20; // [esp+4h] [ebp-1Ch]
  char v21[4]; // [esp+10h] [ebp-10h] BYREF
  int v22; // [esp+14h] [ebp-Ch]
  HWND v23; // [esp+18h] [ebp-8h]
  struct PDEVOBJ *v24; // [esp+1Ch] [ebp-4h]

  v22 = 1;
  v23 = a1;
  v24 = a2;
  if ( !a4 || !g_pDwmState )
    return GdiDeleteSprite(a3, (HWND)v19, v20);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v21, a2, 0, 0);
  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  v22 = 0;
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&a4, a1, a3);
  v7 = a4;
  if ( a4 )
  {
    v8 = *((_DWORD *)a4 + 34);
    v9 = *(_DWORD *)a4;
    v10 = UserReferenceDwmApiPort();
    v11 = (HWND)DwmAsyncDestroySprite(v10, v9);
    v12 = *(_DWORD *)(v8 + 112);
    a4 = v11;
    if ( !v12 || !*(_DWORD *)(v12 + 140) && (*(_BYTE *)(v12 + 60) & 1) == 0 )
      goto LABEL_12;
    W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v12 + 152));
    if ( !*(_DWORD *)(v12 + 192) || (*(_BYTE *)(v12 + 60) & 2) != 0 )
    {
      v15 = 1;
    }
    else
    {
      *((_DWORD *)v7 + 33) |= 0x10u;
      vspRemoveStateReferencesForSprite(v19);
      v13 = v24;
      *(_DWORD *)(v12 + 352) = 0;
      *(_DWORD *)(v12 + 348) = v13;
      v14 = *(_DWORD *)v7;
      *(_DWORD *)(v12 + 60) |= 2u;
      *(_DWORD *)(v12 + 360) = 1;
      v15 = 0;
      *(_DWORD *)(v12 + 356) = v14;
    }
    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v12 + 152));
    if ( v15 )
    {
LABEL_12:
      v7[10] = v7[8];
      v7[11] = v7[9];
      _InterlockedDecrement((volatile signed __int32 *)v7 + 2);
      v18 = (HDEV)v7;
      v7 = 0;
      vspDestroyDwmSpriteObjInternal(v18, (bool)v19, (struct DWMSPRITE *)v20);
    }
    v16 = (int)a4;
  }
  else
  {
    v16 = -2143354870;
  }
  if ( v7 )
    _InterlockedDecrement((volatile signed __int32 *)v7 + 2);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v21);
  if ( v22 )
    return GdiDeleteSprite(a3, (HWND)v19, v20);
  return v16;
}
