/*
 * XREFs of ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0A78
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00BCF4C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00820E8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgShareLock @ 0x1C008A850 (HmgShareLock.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C008BB60 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0091F88 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C00C0F48 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall vGarbageCollectObject<EPALOBJ>(unsigned int a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  int v7; // [rsp+38h] [rbp-18h]
  __int64 v8; // [rsp+68h] [rbp+18h] BYREF
  PERESOURCE v9; // [rsp+70h] [rbp+20h] BYREF

  v2 = HmgShareLock(a1, 8);
  v8 = v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
  {
    v6 = 0LL;
    v7 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v6, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v7 && (*(_DWORD *)(v6 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
      v9 = ghsemPalette;
      EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
      v3 = XEPALOBJ::bDeletePalette((XEPALOBJ *)&v8, 1, 3);
      SEMOBJ::vUnlock((SEMOBJ *)&v9, v4, v5);
      if ( v3 )
        _InterlockedDecrement(&gGarbageCollectionPendingCount);
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v6);
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v8);
}
