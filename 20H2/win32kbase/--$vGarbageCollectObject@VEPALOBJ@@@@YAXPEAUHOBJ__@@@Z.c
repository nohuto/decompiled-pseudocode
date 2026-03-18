/*
 * XREFs of ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0718
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C001783C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C001A718 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C003D898 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgShareLock @ 0x1C0044DC0 (HmgShareLock.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00460A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C004AA4C (--1EPALOBJ@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 */

void __fastcall vGarbageCollectObject<EPALOBJ>(unsigned int a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // [rsp+30h] [rbp-20h] BYREF
  int v5; // [rsp+38h] [rbp-18h]
  __int64 v6; // [rsp+68h] [rbp+18h] BYREF
  HSEMAPHORE v7; // [rsp+70h] [rbp+20h] BYREF

  v2 = HmgShareLock(a1, 8);
  v6 = v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
  {
    v4 = 0LL;
    v5 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v4, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v5 && (*(_DWORD *)(v4 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
      v7 = ghsemPalette;
      EngAcquireSemaphore(ghsemPalette);
      v3 = XEPALOBJ::bDeletePalette((XEPALOBJ *)&v6, 1, 3);
      SEMOBJ::vUnlock((PERESOURCE *)&v7);
      if ( v3 )
        _InterlockedDecrement(&gGarbageCollectionPendingCount);
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v6);
}
