/*
 * XREFs of ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C014DA80
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C014DBF8 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 */

void __fastcall pConvertDfbSurfaceToDibNKAPC(void *a1, void *a2, void *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  UserEnterUserCritSec(a1, a2, a3);
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v10);
  LOBYTE(v4) = 5;
  v5 = HmgShareLockCheck(a1, v4);
  v7 = v5;
  if ( v5 )
  {
    v8 = *(_DWORD *)(v5 + 116);
    if ( (v8 & 0x20) != 0 )
    {
      ++glpConvertDfbSurfaceToDibNKAPC;
      *(_DWORD *)(v7 + 116) = v8 & 0xFFFFFFDF;
      if ( *(_WORD *)(v7 + 100) == 3 )
      {
        v11 = ghsemGreLock;
        GreAcquireSemaphore(ghsemGreLock);
        GreAcquireSemaphore(ghsemDCVisRgn);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
        v10 = ghsemSprite;
        GreAcquireSemaphore(ghsemSprite);
        v9 = v7;
        DEC_SHARE_REF_CNT(v7);
        v7 = 0LL;
        pProcessDfbSurfaces2(v9, 1LL, 1LL, 0LL, 0LL);
        SEMOBJ::vUnlock((SEMOBJ *)&v10);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        SEMOBJ::vUnlock((SEMOBJ *)&v11);
      }
    }
    if ( v7 )
      DEC_SHARE_REF_CNT(v7);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
  UserLeaveUserCritSec();
}
