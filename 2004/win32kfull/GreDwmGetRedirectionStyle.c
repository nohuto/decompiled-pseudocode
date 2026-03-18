/*
 * XREFs of GreDwmGetRedirectionStyle @ 0x1C0270354
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C001E6F0 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C001FC7C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C002D58C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0054360 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0069E5C (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 */

__int64 __fastcall GreDwmGetRedirectionStyle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // rdx
  SFMLOGICALSURFACE *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  char v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = a1;
  v6 = -1073741811;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, a2, a3, a4);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v15, ghsemSprite, v7, v8);
  LODWORD(v16) = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v17, ghsemDwmState, 1LL, v9);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    v11 = 0LL;
    if ( a2 )
    {
      LOBYTE(v10) = 18;
      v12 = HmgShareLockCheck(a2, v10);
      v11 = (SFMLOGICALSURFACE *)v12;
      if ( v12 )
      {
        v13 = v12 + 256;
        if ( v12 != -256 )
        {
          KeEnterCriticalRegion();
          GreAcquirePushLockShared(v13);
        }
        SFMLOGICALSURFACE::GetRedirectionInfo(
          v11,
          (enum _HLSURF_REDIRECTIONSTYLE *)a3,
          (unsigned int *)(a3 + 4),
          (unsigned int *)(a3 + 8),
          (void **)(a3 + 24),
          (struct _LUID *)(a3 + 12));
        v6 = 0;
        if ( v13 )
        {
          GreReleasePushLockShared(v13);
          KeLeaveCriticalRegion();
        }
      }
    }
    if ( v11 )
      DEC_SHARE_REF_CNT(v11);
  }
  else
  {
    v6 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v17);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v16);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v15);
  return v6;
}
