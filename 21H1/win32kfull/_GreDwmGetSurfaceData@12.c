/*
 * XREFs of _GreDwmGetSurfaceData@12 @ 0x2320E
 * Callers:
 *     _NtGdiHLSurfGetInformation@16 @ 0x2259C (_NtGdiHLSurfGetInformation@16.c)
 * Callees:
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QAEJPAUtagDWMSURFACEDATA@@@Z @ 0x2335A (-GetSoSurfaceData@SFMLOGICALSURFACE@@QAEJPAUtagDWMSURFACEDATA@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QAE@PAUHSEMAPHORE__@@H@Z @ 0x2350A (--0SEMOBJEXORSHARED@@QAE@PAUHSEMAPHORE__@@H@Z.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 */

int __fastcall GreDwmGetSurfaceData(int a1, int a2, struct tagDWMSURFACEDATA *a3)
{
  int v3; // edi
  SFMLOGICALSURFACE *v4; // esi
  int v5; // edx
  SFMLOGICALSURFACE *v6; // eax
  int v8; // [esp+Ch] [ebp-14h] BYREF
  int v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+14h] [ebp-Ch]
  int v11; // [esp+18h] [ebp-8h] BYREF
  int v12; // [esp+1Ch] [ebp-4h]
  int SoSurfaceData; // [esp+28h] [ebp+8h]

  v10 = a1;
  v9 = a2;
  GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  v3 = _ghsemSprite;
  v12 = _ghsemSprite;
  GreAcquireSemaphoreSharedInternal(_ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemSprite);
  v4 = 0;
  v8 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v11, _ghsemDwmState, 1);
  if ( UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v10 + 1820) + 60) == 6 )
      {
        if ( v9 && (LOBYTE(v5) = 18, v6 = (SFMLOGICALSURFACE *)HmgShareLockCheck(v9, v5), (v4 = v6) != 0) )
        {
          if ( v6 != (SFMLOGICALSURFACE *)-168 )
          {
            KeEnterCriticalRegion();
            GreAcquirePushLockShared((char *)v4 + 168);
          }
          SoSurfaceData = SFMLOGICALSURFACE::GetSoSurfaceData(v4, a3);
          if ( v4 != (SFMLOGICALSURFACE *)-168 )
          {
            GreReleasePushLockShared((char *)v4 + 168);
            KeLeaveCriticalRegion();
          }
          v3 = v12;
        }
        else
        {
          SoSurfaceData = -1073741816;
        }
        if ( v4 )
          DEC_SHARE_REF_CNT(v4);
      }
      else
      {
        SoSurfaceData = -1073741811;
      }
    }
    else
    {
      SoSurfaceData = -1071775733;
    }
  }
  else
  {
    SoSurfaceData = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockReleaseSemaphore(L"hsem", v11);
  GreReleaseSemaphoreInternal(v11);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v8);
  EtwTraceGreLockReleaseSemaphore(L"hsem", v3);
  GreReleaseSemaphoreInternal(v3);
  return SoSurfaceData;
}
