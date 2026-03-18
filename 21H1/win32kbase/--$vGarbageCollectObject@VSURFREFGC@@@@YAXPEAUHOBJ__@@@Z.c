/*
 * XREFs of ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0248
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00D034C (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007B850 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgShareLock @ 0x1C0083780 (HmgShareLock.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0084A8C (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CE7FC (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFREFGC@@QEAA@XZ @ 0x1C00D0328 (--1SURFREFGC@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<SURFREFGC>(unsigned int a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp-20h] BYREF
  int v6; // [rsp+38h] [rbp-18h]
  __int64 v7; // [rsp+68h] [rbp+18h] BYREF
  char v8; // [rsp+70h] [rbp+20h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8, a2, a3);
  v4 = HmgShareLock(a1, 5);
  v7 = v4;
  if ( v4 && *(_DWORD *)(v4 + 8) <= 1u && (*(_WORD *)(v4 + 14) & 0x4000) != 0 )
  {
    v5 = 0LL;
    v6 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v5, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v6 && (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
      if ( (unsigned int)SURFREF::bDeleteSurface(&v7, 3) )
        _InterlockedDecrement(&gGarbageCollectionPendingCount);
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v5);
  }
  SURFREFGC::~SURFREFGC((SURFREFGC *)&v7);
}
