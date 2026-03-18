/*
 * XREFs of GreHLsurfSetPresentFlags @ 0x1C02707F0
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C002BC30 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001ED40 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001ED74 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreHLsurfSetPresentFlags(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  DYNAMICMODECHANGESHARELOCK *v13; // rcx
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = a1;
  v4 = a3;
  v6 = -1071775733;
  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15, a2, a3, a4);
    GreAcquireSemaphoreSharedInternal(ghsemDwmState, v7, v8, v9);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    if ( (unsigned int)UserIsCurrentProcessDwm() )
    {
      v11 = 0LL;
      v6 = -1073741811;
      if ( a2 )
      {
        LOBYTE(v10) = 18;
        v12 = HmgShareLockCheck(a2, v10);
        v11 = v12;
        if ( v12 )
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v15, (struct _EX_PUSH_LOCK *)(v12 + 256));
          *(_DWORD *)(v11 + 212) = v4;
          v6 = 0;
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v15);
        }
      }
      if ( v11 )
        DEC_SHARE_REF_CNT(v11);
    }
    else
    {
      v6 = -1073741790;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
  }
  return v6;
}
