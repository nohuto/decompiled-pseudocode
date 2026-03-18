/*
 * XREFs of _GreSetRedirectionSurfaceSignaling@24 @ 0x21A20
 * Callers:
 *     _NtGdiHLSurfSetInformation@16 @ 0x21FD4 (_NtGdiHLSurfSetInformation@16.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ @ 0x25308 (-bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ.c)
 */

int __fastcall GreSetRedirectionSurfaceSignaling(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int v9; // edx
  int v10; // esi
  _DWORD *v11; // edi
  int v12; // eax
  char v14; // [esp+13h] [ebp-Dh] BYREF
  int v15; // [esp+14h] [ebp-Ch]
  int v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h] BYREF

  v6 = 0;
  v15 = a2;
  v16 = a1;
  if ( !g_pDwmState )
    return -1071775733;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
  GreAcquireSemaphoreSharedInternal(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", _ghsemDwmState);
  if ( UserIsCurrentProcessDwm() )
  {
    if ( *(_DWORD *)(a1 + 2284) )
    {
      v10 = 0;
      if ( a2 && (LOBYTE(v9) = 18, (v10 = HmgShareLockCheck(a2, v9)) != 0) )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v17, (struct _EX_PUSH_LOCK *)(v10 + 168));
        v11 = *(_DWORD **)(v10 + 112);
        if ( v11 && SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v10) )
        {
          if ( (*(int (__stdcall **)(_DWORD *, int, int, _DWORD, _DWORD))(v16 + 2284))(v11, a3, v15, v11[4], v11[5]) )
          {
            v12 = v15;
            *(_DWORD *)(v10 + 156) ^= (*(_DWORD *)(v10 + 156) ^ (2 * a4)) & 2;
            EtwLogicalSurfEnableDirtyNotificationEvent(v12, v12 >> 31, a3, a3 >> 31);
          }
          *(_DWORD *)(v10 + 116) = v11[97];
          *(_DWORD *)(v10 + 120) = v11[98];
          *(_DWORD *)(v10 + 124) = v11[99];
          *(_DWORD *)(v10 + 128) = v11[17];
          if ( (v11[15] & 0x400) != 0 )
            *(_DWORD *)(v10 + 156) |= 0x100u;
        }
        else
        {
          *(_DWORD *)(v10 + 116) = a3;
          *(_DWORD *)(v10 + 120) = a5;
          *(_DWORD *)(v10 + 124) = a6;
        }
        if ( v17 )
        {
          ExReleasePushLockExclusiveEx(v17, 0);
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        v6 = -1073741811;
      }
      if ( v10 )
        DEC_SHARE_REF_CNT(v10);
    }
    else
    {
      v6 = -1073741822;
    }
  }
  else
  {
    v6 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  return v6;
}
