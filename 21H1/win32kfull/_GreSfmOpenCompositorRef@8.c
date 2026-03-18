/*
 * XREFs of _GreSfmOpenCompositorRef@8 @ 0x2212A
 * Callers:
 *     _NtGdiHLSurfSetInformation@16 @ 0x21FD4 (_NtGdiHLSurfSetInformation@16.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     _SFMLOGICALSURFACEREF_vDestructor@4 @ 0x2443A (_SFMLOGICALSURFACEREF_vDestructor@4.c)
 */

int __fastcall GreSfmOpenCompositorRef(int a1, int a2)
{
  int v3; // edx
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v9; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD v10[2]; // [esp+10h] [ebp-8h] BYREF

  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  if ( UserIsCurrentProcessDwm() )
  {
    v4 = 0;
    if ( g_pDwmState )
    {
      v10[0] = 0;
      v10[1] = 0;
      if ( a2 && (LOBYTE(v3) = 18, v5 = HmgLock(a2, v3), v6 = v5, (v10[0] = v5) != 0) )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v9, (struct _EX_PUSH_LOCK *)(v5 + 168));
        v7 = *(_DWORD *)(v6 + 156);
        if ( (v7 & 8) != 0 )
        {
          if ( (v7 & 0x10) != 0 )
            *(_DWORD *)(v6 + 156) = v7 & 0xFFFFFFEF;
          ++*(_DWORD *)(v6 + 160);
        }
        else
        {
          v4 = -2147020579;
        }
        if ( v9 )
        {
          ExReleasePushLockExclusiveEx(v9, 0);
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        v4 = -1073741816;
      }
      SFMLOGICALSURFACEREF_vDestructor(v10);
    }
    else
    {
      v4 = -1071775733;
    }
  }
  else
  {
    v4 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  return v4;
}
