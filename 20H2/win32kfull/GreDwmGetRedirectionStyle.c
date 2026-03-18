/*
 * XREFs of GreDwmGetRedirectionStyle @ 0x1C026ED34
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C0090020 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C008CACC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C00C32E0 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00C3338 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00FBB40 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 */

__int64 __fastcall GreDwmGetRedirectionStyle(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rdx
  SFMLOGICALSURFACE *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a1;
  v5 = -1073741811;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v11, ghsemSprite);
  LODWORD(v12) = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v13, ghsemDwmState, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    v7 = 0LL;
    if ( a2 )
    {
      LOBYTE(v6) = 18;
      v8 = HmgShareLockCheck(a2, v6);
      v7 = (SFMLOGICALSURFACE *)v8;
      if ( v8 )
      {
        v9 = v8 + 256;
        if ( v8 != -256 )
        {
          KeEnterCriticalRegion();
          GreAcquirePushLockShared(v9);
        }
        SFMLOGICALSURFACE::GetRedirectionInfo(
          v7,
          (enum _HLSURF_REDIRECTIONSTYLE *)a3,
          (unsigned int *)(a3 + 4),
          (unsigned int *)(a3 + 8),
          (void **)(a3 + 24),
          (struct _LUID *)(a3 + 12));
        v5 = 0;
        if ( v9 )
        {
          GreReleasePushLockShared(v9);
          KeLeaveCriticalRegion();
        }
      }
    }
    if ( v7 )
      DEC_SHARE_REF_CNT(v7);
  }
  else
  {
    v5 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v13);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v12);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v11);
  return v5;
}
