/*
 * XREFs of _GreHLsurfSetUpdateId@16 @ 0x1CE54B
 * Callers:
 *     _NtGdiHLSurfSetInformation@16 @ 0x21FD4 (_NtGdiHLSurfSetInformation@16.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ @ 0x25308 (-bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ.c)
 */

int __fastcall GreHLsurfSetUpdateId(int a1, int a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // edx
  int v7; // esi
  int v9; // [esp+8h] [ebp-8h] BYREF
  char v10; // [esp+Fh] [ebp-1h] BYREF

  v5 = -1071775733;
  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
    GreAcquireSemaphoreSharedInternal(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", _ghsemDwmState);
    if ( UserIsCurrentProcessDwm() )
    {
      v7 = 0;
      v5 = -1073741811;
      if ( !a2 )
      {
LABEL_10:
        if ( v7 )
          DEC_SHARE_REF_CNT(v7);
        goto LABEL_13;
      }
      LOBYTE(v6) = 18;
      v7 = HmgShareLockCheck(a2, v6);
      if ( v7 )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v9, (struct _EX_PUSH_LOCK *)(v7 + 168));
        if ( *(_DWORD *)(v7 + 112) && SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v7) )
        {
          v5 = 0;
          *(_DWORD *)(v7 + 184) = a3;
          *(_DWORD *)(v7 + 188) = a4;
        }
        if ( v9 )
        {
          ExReleasePushLockExclusiveEx(v9, 0);
          KeLeaveCriticalRegion();
        }
        goto LABEL_10;
      }
    }
    else
    {
      v5 = -1073741790;
    }
LABEL_13:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
    GreReleaseSemaphoreInternal(_ghsemDwmState);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  }
  return v5;
}
