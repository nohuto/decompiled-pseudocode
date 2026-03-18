/*
 * XREFs of HmgFree @ 0x1C004BFE0
 * Callers:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C001A718 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004BE7C (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     FreeObject @ 0x1C003C6B0 (FreeObject.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C003E730 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0045660 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00460A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00CEC98 (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall HmgFree(unsigned int a1)
{
  __int64 v2; // rdi
  unsigned __int8 v3; // si
  _DWORD *v4; // rbx
  struct OBJECT *EntryObject; // rax
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d
  _DWORD *v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0;
  GreAcquireHmgrSemaphore();
  v9 = 0LL;
  v10 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v9, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v10 )
  {
    v4 = v9;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v9 & 0xFFFFFF);
    v3 = *((_BYTE *)v4 + 14);
    v2 = (__int64)EntryObject;
    HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v9);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v9);
  GreReleaseHmgrSemaphore(v7, v6, v8);
  if ( v2 )
  {
    if ( v3 == 8 )
    {
      v11 = v2;
      XEPALOBJ::FreePaletteMemory((XEPALOBJ *)&v11);
    }
    else
    {
      FreeObject(v2, v3);
    }
  }
}
