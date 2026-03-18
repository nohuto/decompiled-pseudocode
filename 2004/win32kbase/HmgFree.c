/*
 * XREFs of HmgFree @ 0x1C007FE20
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C007FCBC (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C00C0F48 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     FreeObject @ 0x1C0080F60 (FreeObject.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C00865B0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C008B0F0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C008BB60 (--1HANDLELOCK@@QEAA@XZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00CF4EC (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall HmgFree(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct OBJECT *v3; // rdi
  unsigned __int8 v4; // si
  _DWORD *v5; // rbx
  struct OBJECT *EntryObject; // rax
  _DWORD *v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]
  struct OBJECT *v9; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1;
  v3 = 0LL;
  v4 = 0;
  GreAcquireHmgrSemaphore(a1, a2);
  v7 = 0LL;
  v8 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v7, (unsigned __int16)v2 | (v2 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v8 )
  {
    v5 = v7;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v7 & 0xFFFFFF);
    v4 = *((_BYTE *)v5 + 14);
    v3 = EntryObject;
    HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v7);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v7);
  GreReleaseHmgrSemaphore();
  if ( v3 )
  {
    if ( v4 == 8 )
    {
      v9 = v3;
      XEPALOBJ::FreePaletteMemory((XEPALOBJ *)&v9);
    }
    else
    {
      FreeObject(v3, v4);
    }
  }
}
