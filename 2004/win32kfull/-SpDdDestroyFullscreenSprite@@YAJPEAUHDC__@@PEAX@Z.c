/*
 * XREFs of ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026EF9C
 * Callers:
 *     NtGdiDdDestroyFullscreenSprite @ 0x1C0278D30 (NtGdiDdDestroyFullscreenSprite.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C001FC7C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C001FCC4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreDeleteSprite @ 0x1C004ECD8 (GreDeleteSprite.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall SpDdDestroyFullscreenSprite(HDC a1, HSPRITE a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  HDEV v7; // rsi
  struct PDEVOBJ *v8; // rdx
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v11[1] = 0LL;
  v3 = -1073741811;
  XDCOBJ::vLock((XDCOBJ *)v11, a1);
  if ( v11[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12, v4, v5, v6);
    v13 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    v7 = *(HDEV *)(v11[0] + 48LL);
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v12, v8, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    if ( g_pDwmState && (unsigned int)GreDeleteSprite(v7, 0LL, a2, 1) )
      v3 = 0;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v12);
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
  }
  return v3;
}
