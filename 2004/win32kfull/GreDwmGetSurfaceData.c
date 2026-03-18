/*
 * XREFs of GreDwmGetSurfaceData @ 0x1C002D294
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C001E6F0 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C001FC7C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C002D488 (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C002D58C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0069E5C (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 */

__int64 __fastcall GreDwmGetSurfaceData(__int64 a1, __int64 a2, struct tagDWMSURFACEDATA *a3, __int64 a4)
{
  __int64 v7; // rdx
  SFMLOGICALSURFACE *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int SoSurfaceData; // esi
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+40h] [rbp+8h] BYREF
  char v15; // [rsp+58h] [rbp+20h] BYREF

  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, a2, a3, a4);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v13, ghsemSprite);
  v14 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v15, ghsemDwmState, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 2552) + 96LL) == 6 )
      {
        v8 = 0LL;
        if ( a2 && (LOBYTE(v7) = 18, v9 = HmgShareLockCheck(a2, v7), (v8 = (SFMLOGICALSURFACE *)v9) != 0LL) )
        {
          v10 = v9 + 256;
          if ( v9 != -256 )
          {
            KeEnterCriticalRegion();
            GreAcquirePushLockShared(v10);
          }
          SoSurfaceData = SFMLOGICALSURFACE::GetSoSurfaceData(v8, a3);
          if ( v10 )
          {
            GreReleasePushLockShared(v10);
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          SoSurfaceData = -1073741816;
        }
        if ( v8 )
          DEC_SHARE_REF_CNT(v8);
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
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v15);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v14);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v13);
  return SoSurfaceData;
}
