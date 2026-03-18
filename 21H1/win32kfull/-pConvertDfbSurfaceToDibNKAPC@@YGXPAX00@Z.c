/*
 * XREFs of ?pConvertDfbSurfaceToDibNKAPC@@YGXPAX00@Z @ 0x220CFB
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QAE@XZ @ 0x21F4B8 (--0DYNAMICMODECHANGELOCK@@QAE@XZ.c)
 *     ??0DCVISRGNLOCK@@QAE@XZ @ 0x220CB7 (--0DCVISRGNLOCK@@QAE@XZ.c)
 */

void __stdcall pConvertDfbSurfaceToDibNKAPC(void *a1, void *a2, void *a3)
{
  int v3; // edx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  bool v7; // zf
  int v8; // edi
  int v9; // [esp+4h] [ebp-8h] BYREF
  char v10; // [esp+Bh] [ebp-1h] BYREF

  UserEnterUserCritSec();
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v10);
  LOBYTE(v3) = 5;
  v4 = HmgShareLockCheck(a1, v3);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_DWORD *)(v4 + 76);
    if ( (v6 & 0x20) != 0 )
    {
      ++glpConvertDfbSurfaceToDibNKAPC;
      v7 = *(_WORD *)(v5 + 64) == 3;
      *(_DWORD *)(v5 + 76) = v6 & 0xFFFFFFDF;
      if ( v7 )
      {
        v9 = _ghsemGreLock;
        GreAcquireSemaphore(_ghsemGreLock);
        DCVISRGNLOCK::DCVISRGNLOCK((DCVISRGNLOCK *)((char *)&a1 + 3));
        a1 = (void *)_ghsemSprite;
        GreAcquireSemaphore(_ghsemSprite);
        v8 = v5;
        DEC_SHARE_REF_CNT(v5);
        v5 = 0;
        pProcessDfbSurfaces2(v8, 1, 1, 0, 0);
        SEMOBJ::vUnlock((SEMOBJ *)&a1);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
        SEMOBJ::vUnlock((SEMOBJ *)&v9);
      }
    }
    if ( v5 )
      DEC_SHARE_REF_CNT(v5);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  UserLeaveUserCritSec();
}
