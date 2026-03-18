/*
 * XREFs of ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0810
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C001783C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D91C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgShareLock @ 0x1C0044DC0 (HmgShareLock.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00460A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CEC10 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFREFGC@@QEAA@XZ @ 0x1C00D08F0 (--1SURFREFGC@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<SURFREFGC>(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+30h] [rbp-20h] BYREF
  int v4; // [rsp+38h] [rbp-18h]
  SURFACE *v5; // [rsp+68h] [rbp+18h] BYREF
  char v6; // [rsp+70h] [rbp+20h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
  v2 = HmgShareLock(a1, 5);
  v5 = (SURFACE *)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
  {
    v3 = 0LL;
    v4 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v3, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v4 && (*(_DWORD *)(v3 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
      if ( (unsigned int)SURFREF::bDeleteSurface(&v5, 3) )
        _InterlockedDecrement(&gGarbageCollectionPendingCount);
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v3);
  }
  SURFREFGC::~SURFREFGC((SURFREFGC *)&v5);
}
