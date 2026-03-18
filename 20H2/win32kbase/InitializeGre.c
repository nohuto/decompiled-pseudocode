/*
 * XREFs of InitializeGre @ 0x1C0293010
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003DA14 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0040820 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreCreateSemaphoreInternal @ 0x1C005E4B4 (GreCreateSemaphoreInternal.c)
 *     ?InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ @ 0x1C0072240 (-InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ.c)
 *     HmgCreate @ 0x1C007227C (HmgCreate.c)
 *     ?bUseActualGDIScale@@YAHXZ @ 0x1C0090BD8 (-bUseActualGDIScale@@YAHXZ.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x1C0090C7C (-Initialize@SfmState@@QEAAHXZ.c)
 *     GreCreateRectRgn @ 0x1C0090EC0 (GreCreateRectRgn.c)
 *     bLockEtwEnabled @ 0x1C0090FD0 (bLockEtwEnabled.c)
 *     GreCreateSemaphoreNonTracked @ 0x1C0091084 (GreCreateSemaphoreNonTracked.c)
 *     ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1C00910D8 (-InitializeDefaultDCAttributes@@YAXXZ.c)
 *     ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1C009124C (-UMPDInitializeSecurityLevel@@YA-AW4UMPDSecurityLevel@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     bInitBRUSHOBJ @ 0x1C02911B0 (bInitBRUSHOBJ.c)
 *     bInitICM @ 0x1C0293518 (bInitICM.c)
 *     bInitBMOBJ @ 0x1C0293798 (bInitBMOBJ.c)
 *     vInitXLATE @ 0x1C0293838 (vInitXLATE.c)
 *     bInitPALOBJ @ 0x1C02938C4 (bInitPALOBJ.c)
 */

char InitializeGre()
{
  int v0; // ebx
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  void *v5; // rcx
  HRGN RectRgn; // rax
  SfmState *v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _QWORD v13[4]; // [rsp+30h] [rbp-49h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-29h] BYREF
  __int64 v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  PULONG BitMapBuffer; // [rsp+E0h] [rbp+67h] BYREF
  void *v19; // [rsp+E8h] [rbp+6Fh] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+F0h] [rbp+77h] BYREF
  _QWORD *v21; // [rsp+F8h] [rbp+7Fh] BYREF

  G_fServiceSession = gbNonServiceSession == 0;
  gUMPDSecurityLevel = UMPDInitializeSecurityLevel();
  if ( _InterlockedExchangeAdd(&CountInit, 0xFFFFFFFF) != 1 )
    return 1;
  InitializeDefaultDCAttributes();
  RtlGetSuiteMask();
  qword_1C024E250 = (__int64)&MultiUserGreEngAllocList;
  MultiUserGreEngAllocList.Flink = &MultiUserGreEngAllocList;
  MultiUserEngAllocListLock = (HSEMAPHORE)GreCreateSemaphoreNonTracked();
  if ( MultiUserEngAllocListLock )
  {
    v0 = -1073741637;
    if ( qword_1C024F4F0 )
      v1 = qword_1C024F4F0();
    else
      v1 = -1073741637;
    if ( v1 >= 0 && qword_1C024F4F8 )
      qword_1C024F4F8();
    qword_1C024E240 = (__int64)&GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocList.Flink = &GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocListLock = GreCreateSemaphoreNonTracked();
    if ( GreEngLoadModuleAllocListLock )
    {
      v2 = qword_1C024F500 ? qword_1C024F500() : -1073741637;
      if ( v2 < 0 || (!qword_1C024F508 ? (v3 = 0) : (v3 = qword_1C024F508()), v3) )
      {
        gbLockEtw = bLockEtwEnabled();
        if ( (unsigned int)HmgCreate() )
        {
          if ( RGNMEMOBJ::InitializeScanLookAsideList() )
          {
            REGION::ulUniqueREGION = 1;
            if ( qword_1C024F510 )
              v4 = qword_1C024F510();
            else
              v4 = -1073741637;
            if ( v4 >= 0 )
            {
              v5 = 0LL;
              v19 = 0LL;
              BitMapBuffer = 0LL;
              BitMapHeader = 0LL;
              v21 = 0LL;
              if ( qword_1C024F518 )
              {
                qword_1C024F518(&v19, &BitMapBuffer, &BitMapHeader, &v21);
                v5 = v19;
              }
              memset(v5, 0, 0x200uLL);
              *(_QWORD *)BitMapBuffer = 0LL;
              RtlInitializeBitMap(BitMapHeader, BitMapBuffer, 0x40u);
              *v21 = 0LL;
            }
            ghsemDriverMgmt = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
            if ( ghsemDriverMgmt )
            {
              PATHALLOC::hsemFreelist = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
              if ( PATHALLOC::hsemFreelist )
              {
                PATHALLOC::freelist = 0LL;
                PATHALLOC::cFree = 0;
                PATHALLOC::cAllocated = 0;
                ghsemRFONTList = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                if ( ghsemRFONTList )
                {
                  ghsemCLISERV = GreCreateSemaphoreInternal(0);
                  if ( ghsemCLISERV )
                  {
                    ghsemAtmfdInit = GreCreateSemaphoreInternal(0);
                    if ( ghsemAtmfdInit )
                    {
                      ghsemWndobj = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                      if ( ghsemWndobj )
                      {
                        ghsemFntCache = GreCreateSemaphoreInternal(0);
                        if ( ghsemFntCache )
                        {
                          ghsemDwmState = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                          if ( ghsemDwmState )
                          {
                            ghsemDynamicModeChange = (PERESOURCE)GreCreateSemaphoreInternal(0);
                            if ( ghsemDynamicModeChange )
                            {
                              ghsemDCVisRgn = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                              if ( ghsemDCVisRgn )
                              {
                                ghsemVisRgnUniqueness = (PERESOURCE)GreCreateSemaphoreInternal(0);
                                if ( ghsemVisRgnUniqueness )
                                {
                                  ghsemVisRgnPublish = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                  if ( ghsemVisRgnPublish )
                                  {
                                    ghsemSprite = (PERESOURCE)GreCreateSemaphoreInternal(0);
                                    if ( ghsemSprite )
                                    {
                                      ghsemMapRot = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                      if ( ghsemMapRot )
                                      {
                                        ghsemGreLock = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                        if ( ghsemGreLock )
                                        {
                                          ghsemHT = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                          if ( ghsemHT )
                                          {
                                            RectRgn = (HRGN)GreCreateRectRgn(0, 0, 0, 0);
                                            hrgnDefault = RectRgn;
                                            if ( RectRgn )
                                            {
                                              RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v13, RectRgn, 1);
                                              if ( v13[0] )
                                              {
                                                prgnDefault = (struct REGION *)v13[0];
                                                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v13);
                                                if ( (unsigned int)bInitPALOBJ() )
                                                {
                                                  vInitXLATE();
                                                  if ( (unsigned int)bInitBMOBJ() )
                                                  {
                                                    if ( (unsigned int)bInitBRUSHOBJ() && (unsigned int)bInitICM() )
                                                    {
                                                      v8 = qword_1C024F520 ? qword_1C024F520() : -1073741637;
                                                      if ( v8 < 0
                                                        || (!qword_1C024F528 ? (v9 = 0) : (v9 = qword_1C024F528()), v9) )
                                                      {
                                                        v10 = qword_1C024F530 ? qword_1C024F530() : -1073741637;
                                                        if ( v10 < 0
                                                          || (!qword_1C024F538 ? (v11 = 0) : (v11 = qword_1C024F538()),
                                                              v11) )
                                                        {
                                                          if ( qword_1C024F540 )
                                                            v0 = qword_1C024F540();
                                                          if ( v0 >= 0 )
                                                          {
                                                            if ( qword_1C024F548 )
                                                              qword_1C024F548();
                                                          }
                                                          if ( (unsigned int)SfmState::Initialize(v7) )
                                                          {
                                                            QueryTable.Flags = 0;
                                                            QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)LpkShapeQueryRoutine;
                                                            memset(&QueryTable.Name, 0, 20);
                                                            QueryTable.DefaultData = 0LL;
                                                            QueryTable.DefaultLength = 0;
                                                            v15 = 0LL;
                                                            v16 = 0;
                                                            v17 = 0LL;
                                                            *((_DWORD *)gpGdiSharedMemory + 393253) = 0;
                                                            RtlQueryRegistryValues(
                                                              0x80000003,
                                                              L"LanguagePack",
                                                              &QueryTable,
                                                              0LL,
                                                              0LL);
                                                            *((_DWORD *)gpGdiSharedMemory + 393254) = 1;
                                                            gbUseActualGDIScale = bUseActualGDIScale();
                                                            return 1;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                              else
                                              {
                                                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v13);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
