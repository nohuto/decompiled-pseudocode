/*
 * XREFs of _GreDwmGetRedirectionStyle@12 @ 0x1CE113
 * Callers:
 *     _NtGdiHLSurfGetInformation@16 @ 0x2259C (_NtGdiHLSurfGetInformation@16.c)
 * Callees:
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QAEXPAW4_HLSURF_REDIRECTIONSTYLE@@PAK1PAPAXPAU_LUID@@@Z @ 0x20372 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QAEXPAW4_HLSURF_REDIRECTIONSTYLE@@PAK1PAPAXPAU_LUID@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QAE@PAUHSEMAPHORE__@@H@Z @ 0x2350A (--0SEMOBJEXORSHARED@@QAE@PAUHSEMAPHORE__@@H@Z.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 */

int __fastcall GreDwmGetRedirectionStyle(int a1, int a2, enum _HLSURF_REDIRECTIONSTYLE *a3)
{
  int v3; // edi
  int v4; // edx
  SFMLOGICALSURFACE *v5; // esi
  SFMLOGICALSURFACE *v6; // eax
  int v8; // [esp+Ch] [ebp-14h] BYREF
  int v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+14h] [ebp-Ch] BYREF
  int v11; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h]

  v9 = a2;
  v12 = -1073741811;
  GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  v3 = _ghsemSprite;
  v11 = _ghsemSprite;
  GreAcquireSemaphoreSharedInternal(_ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemSprite);
  v8 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v10, _ghsemDwmState, 1);
  if ( !UserIsCurrentProcessDwm() )
  {
    v12 = -1073741790;
    goto LABEL_12;
  }
  v5 = 0;
  if ( v9 )
  {
    LOBYTE(v4) = 18;
    v6 = (SFMLOGICALSURFACE *)HmgShareLockCheck(v9, v4);
    v5 = v6;
    if ( !v6 )
      goto LABEL_12;
    if ( v6 != (SFMLOGICALSURFACE *)-168 )
    {
      KeEnterCriticalRegion();
      GreAcquirePushLockShared((char *)v5 + 168);
    }
    SFMLOGICALSURFACE::GetRedirectionInfo(
      v5,
      a3,
      (unsigned int *)a3 + 1,
      (unsigned int *)a3 + 2,
      (void **)a3 + 5,
      (struct _LUID *)((char *)a3 + 12));
    v12 = 0;
    if ( v5 != (SFMLOGICALSURFACE *)-168 )
    {
      GreReleasePushLockShared((char *)v5 + 168);
      KeLeaveCriticalRegion();
    }
    v3 = v11;
  }
  if ( v5 )
    DEC_SHARE_REF_CNT(v5);
LABEL_12:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockReleaseSemaphore(L"hsem", v10);
  GreReleaseSemaphoreInternal(v10);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v8);
  EtwTraceGreLockReleaseSemaphore(L"hsem", v3);
  GreReleaseSemaphoreInternal(v3);
  return v12;
}
