/*
 * XREFs of _GreHLsurfSetPresentFlags@12 @ 0x1CE44E
 * Callers:
 *     _NtGdiHLSurfSetInformation@16 @ 0x21FD4 (_NtGdiHLSurfSetInformation@16.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 */

int __fastcall GreHLsurfSetPresentFlags(int a1, int a2, int a3)
{
  int v4; // ebx
  int v5; // edx
  int v6; // esi
  int v7; // ecx
  int v9; // [esp+8h] [ebp-8h] BYREF
  char v10; // [esp+Fh] [ebp-1h] BYREF

  v4 = -1071775733;
  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
    GreAcquireSemaphoreSharedInternal(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", _ghsemDwmState);
    if ( UserIsCurrentProcessDwm() )
    {
      v6 = 0;
      v4 = -1073741811;
      if ( !a2 )
      {
LABEL_7:
        if ( v6 )
          DEC_SHARE_REF_CNT(v6);
        goto LABEL_10;
      }
      LOBYTE(v5) = 18;
      v6 = HmgShareLockCheck(a2, v5);
      if ( v6 )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v9, (struct _EX_PUSH_LOCK *)(v6 + 168));
        v7 = v9;
        v4 = 0;
        *(_DWORD *)(v6 + 132) = a3;
        if ( v7 )
        {
          ExReleasePushLockExclusiveEx(v7, 0);
          KeLeaveCriticalRegion();
        }
        goto LABEL_7;
      }
    }
    else
    {
      v4 = -1073741790;
    }
LABEL_10:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
    GreReleaseSemaphoreInternal(_ghsemDwmState);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  }
  return v4;
}
