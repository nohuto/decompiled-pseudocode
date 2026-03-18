/*
 * XREFs of InitializeGre @ 0x1C029CF90
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ @ 0x1C001EE50 (-InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ.c)
 *     HmgCreate @ 0x1C001EE8C (HmgCreate.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x1C003FD28 (-Initialize@SfmState@@QEAAHXZ.c)
 *     GreCreateSemaphoreNonTracked @ 0x1C004FADC (GreCreateSemaphoreNonTracked.c)
 *     ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1C0050280 (-UMPDInitializeSecurityLevel@@YA-AW4UMPDSecurityLevel@@XZ.c)
 *     bLockEtwEnabled @ 0x1C005060C (bLockEtwEnabled.c)
 *     ?bUseActualGDIScale@@YAHXZ @ 0x1C0050894 (-bUseActualGDIScale@@YAHXZ.c)
 *     GreCreateSemaphoreInternal @ 0x1C00737B0 (GreCreateSemaphoreInternal.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007B944 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C007F290 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?UMPDAllowPrinterSurfaceInDisplayDC@@YAHXZ @ 0x1C00CFA60 (-UMPDAllowPrinterSurfaceInDisplayDC@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1C0146C48 (-InitializeDefaultDCAttributes@@YAXXZ.c)
 *     GreCreateRectRgn @ 0x1C0155B80 (GreCreateRectRgn.c)
 *     bInitPALOBJ @ 0x1C02991B0 (bInitPALOBJ.c)
 *     bInitICM @ 0x1C029ABA8 (bInitICM.c)
 *     vInitXLATE @ 0x1C029B064 (vInitXLATE.c)
 *     bInitBMOBJ @ 0x1C029B3F4 (bInitBMOBJ.c)
 *     bInitBRUSHOBJ @ 0x1C029B520 (bInitBRUSHOBJ.c)
 */

char InitializeGre()
{
  int v1; // ebx
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  void *v6; // rcx
  HRGN RectRgn; // rax
  SfmState *v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
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
  gAllowPrinterSurfaceInDisplayDC = UMPDAllowPrinterSurfaceInDisplayDC();
  if ( _InterlockedExchangeAdd(&CountInit, 0xFFFFFFFF) != 1 )
    return 1;
  InitializeDefaultDCAttributes();
  RtlGetSuiteMask();
  qword_1C02561E0 = (__int64)&MultiUserGreEngAllocList;
  MultiUserGreEngAllocList.Flink = &MultiUserGreEngAllocList;
  MultiUserEngAllocListLock = GreCreateSemaphoreNonTracked();
  if ( MultiUserEngAllocListLock )
  {
    v1 = -1073741637;
    if ( qword_1C02574B0 )
      v2 = qword_1C02574B0();
    else
      v2 = -1073741637;
    if ( v2 >= 0 && qword_1C02574B8 )
      qword_1C02574B8();
    qword_1C02561D0 = (__int64)&GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocList.Flink = &GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocListLock = GreCreateSemaphoreNonTracked();
    if ( GreEngLoadModuleAllocListLock )
    {
      v3 = qword_1C02574C0 ? qword_1C02574C0() : -1073741637;
      if ( v3 < 0 || (!qword_1C02574C8 ? (v4 = 0) : (v4 = qword_1C02574C8()), v4) )
      {
        gbLockEtw = bLockEtwEnabled();
        if ( (unsigned int)HmgCreate() )
        {
          if ( RGNMEMOBJ::InitializeScanLookAsideList() )
          {
            REGION::ulUniqueREGION = 1;
            if ( qword_1C02574D0 )
              v5 = qword_1C02574D0();
            else
              v5 = -1073741637;
            if ( v5 >= 0 )
            {
              v6 = 0LL;
              v19 = 0LL;
              BitMapBuffer = 0LL;
              BitMapHeader = 0LL;
              v21 = 0LL;
              if ( qword_1C02574D8 )
              {
                qword_1C02574D8(&v19, &BitMapBuffer, &BitMapHeader, &v21);
                v6 = v19;
              }
              memset(v6, 0, 0x200uLL);
              *(_QWORD *)BitMapBuffer = 0LL;
              RtlInitializeBitMap(BitMapHeader, BitMapBuffer, 0x40u);
              *v21 = 0LL;
            }
            ghsemDriverMgmt = (PERESOURCE)GreCreateSemaphoreInternal(0);
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
                          ghsemDwmState = (PERESOURCE)GreCreateSemaphoreInternal(0);
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
                                  ghsemVisRgnPublish = (PERESOURCE)GreCreateSemaphoreInternal(0);
                                  if ( ghsemVisRgnPublish )
                                  {
                                    ghsemSprite = (PERESOURCE)GreCreateSemaphoreInternal(0);
                                    if ( ghsemSprite )
                                    {
                                      ghsemMapRot = (PERESOURCE)GreCreateSemaphoreInternal(0);
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
                                                      v9 = qword_1C02574E0 ? qword_1C02574E0() : -1073741637;
                                                      if ( v9 < 0
                                                        || (!qword_1C02574E8 ? (v10 = 0) : (v10 = qword_1C02574E8()), v10) )
                                                      {
                                                        v11 = qword_1C02574F0 ? qword_1C02574F0() : -1073741637;
                                                        if ( v11 < 0
                                                          || (!qword_1C02574F8 ? (v12 = 0) : (v12 = qword_1C02574F8()),
                                                              v12) )
                                                        {
                                                          if ( qword_1C0257500 )
                                                            v1 = qword_1C0257500();
                                                          if ( v1 >= 0 )
                                                          {
                                                            if ( qword_1C0257508 )
                                                              qword_1C0257508();
                                                          }
                                                          if ( (unsigned int)SfmState::Initialize(v8) )
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
