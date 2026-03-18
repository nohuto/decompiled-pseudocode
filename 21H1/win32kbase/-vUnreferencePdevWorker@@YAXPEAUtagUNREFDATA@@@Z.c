/*
 * XREFs of ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00990B0
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C008B8E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C00735F0 (GreDeleteSemaphore.c)
 *     PopThreadGuardedObject @ 0x1C0075770 (PopThreadGuardedObject.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C008BAD0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008BB14 (--1RFONTOBJ@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C0099480 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     HmgSafeNextObjt @ 0x1C009A930 (HmgSafeNextObjt.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C009ABE0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     PushThreadGuardedObject @ 0x1C009ADD0 (PushThreadGuardedObject.c)
 *     bDeleteSurface @ 0x1C009AEA0 (bDeleteSurface.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C009AF68 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C009B144 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x1C009B16C (IsUMPD_ldevUnloadImageSupported.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x1C009B198 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     ldevUnloadImage @ 0x1C00AD180 (ldevUnloadImage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C01479A8 (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     IsPFTOBJ_bUnloadWorkhorseSupported @ 0x1C01FD2AC (IsPFTOBJ_bUnloadWorkhorseSupported.c)
 */

void __fastcall vUnreferencePdevWorker(struct tagUNREFDATA *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r13d
  unsigned int v3; // r15d
  int v4; // r12d
  int v5; // r12d
  int v6; // r14d
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  struct _ERESOURCE *v24; // rcx
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 *Objt; // rax
  int v29; // ecx
  int v30; // r8d
  _QWORD *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // rsi
  int v36; // eax
  __int64 v37; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v38[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+48h] BYREF
  char v41; // [rsp+B0h] [rbp+50h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *((_DWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 2);
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  *((_DWORD *)a1 + 3) = 0;
  v5 = v4 & 0x8000;
  v39 = v1;
  memset(v38, 0, sizeof(v38));
  PushThreadGuardedObject(v38, a1, vUnreferencePdevWorker);
  v6 = -1073741637;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v1 + 1528);
    if ( !v7 )
      break;
    v40 = *(_QWORD *)(v1 + 1528);
    v37 = *(_QWORD *)(v7 + 128);
    if ( qword_1C0257690 )
      v8 = qword_1C0257690();
    else
      v8 = -1073741637;
    if ( v8 >= 0 )
    {
      if ( qword_1C0257698 )
        qword_1C0257698(&v40, &v39, &v37, v2);
    }
    v40 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v40);
  }
  PopThreadGuardedObject(v38);
  if ( *(_DWORD *)(v1 + 2104) && (*(_DWORD *)(v39 + 40) & 0x40) != 0 )
  {
    v33 = 0LL;
    v40 = 0LL;
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 15);
    DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)&v41);
    if ( qword_1C02576B0 )
      v34 = qword_1C02576B0();
    else
      v34 = -1073741637;
    if ( v34 >= 0 && qword_1C02576B8 )
      v33 = qword_1C02576B8(&v41, v39, &v40);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 && qword_1C02576C8 )
      qword_1C02576C8(&v41, v33, v40, 0LL);
  }
  v11 = *(_QWORD *)(v1 + 1712);
  while ( v11 )
  {
    *(_DWORD *)(v11 + 228) = 1;
    v35 = v11;
    if ( qword_1C02576D0 )
      v36 = qword_1C02576D0();
    else
      v36 = -1073741637;
    if ( v36 >= 0 && qword_1C02576D8 )
      qword_1C02576D8(v11 + 128);
    v11 = *(_QWORD *)(v11 + 248);
    Win32FreePool(v35, v9, v10);
  }
  if ( qword_1C02576E0 )
    v6 = qword_1C02576E0();
  if ( v6 >= 0 && qword_1C02576E8 )
    qword_1C02576E8(v1, v3);
  v12 = *(_QWORD *)(v1 + 1688);
  if ( v12 )
  {
    Win32FreePool(v12, v9, v10);
    *(_QWORD *)(v1 + 1688) = 0LL;
  }
  v13 = *(_QWORD *)(v1 + 1696);
  if ( v13 )
  {
    Win32FreePool(v13, v9, v10);
    *(_QWORD *)(v1 + 1696) = 0LL;
  }
  v14 = *(_QWORD *)(v1 + 1704);
  if ( v14 )
  {
    Win32FreePool(v14, v9, v10);
    *(_QWORD *)(v1 + 1704) = 0LL;
  }
  v15 = *(_QWORD *)(v1 + 2592);
  if ( v15 )
    Win32FreePool(v15, v9, v10);
  if ( (*(_DWORD *)(v39 + 40) & 0x80000) == 0 )
  {
    v16 = *(void **)(v1 + 1432);
    if ( v16 != gahStockObjects[13] && qword_1C0257120 )
      qword_1C0257120(v16, 1LL);
    v17 = *(void **)(v1 + 1440);
    if ( v17 != gahStockObjects[13] && qword_1C0257120 )
      qword_1C0257120(v17, 1LL);
    v18 = *(void **)(v1 + 1448);
    if ( v18 != gahStockObjects[16] && qword_1C0257120 )
      qword_1C0257120(v18, 1LL);
    if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    {
      v31 = (_QWORD *)(v1 + 1456);
      v32 = 6LL;
      do
      {
        bDeleteSurface(*v31++);
        --v32;
      }
      while ( v32 );
    }
  }
  LOBYTE(v10) = 1;
  PDEVOBJ::vDisableSurface(&v39, v3, v10);
  if ( *(_QWORD *)(v1 + 1512) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 && qword_1C0257598 )
    qword_1C0257598(&v39);
  if ( !v3 )
    PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v39);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v39 + 1544));
  v21 = v39;
  if ( (*(_DWORD *)(v39 + 40) & 0x80000) == 0 )
  {
    if ( v3 != 2 )
    {
      v22 = *(_QWORD *)(v1 + 1808);
      if ( v22 )
        HmgDecrementShareReferenceCountEx(v22, 0LL);
      v23 = *(_QWORD *)(v1 + 1816);
      if ( v23 )
      {
        HmgDecrementShareReferenceCountEx(*(_QWORD *)(v1 + 1816), 0LL);
        v23 = *(_QWORD *)(v1 + 1816);
      }
      v40 = v23;
      XEPALOBJ::bDeletePalette(&v40, 1LL);
      v21 = v39;
    }
    if ( *(_QWORD *)(v21 + 2704) != *(_QWORD *)(v21 + 2688) && (!v5 || !v3) && v2 )
      (*(void (__fastcall **)(_QWORD))(v21 + 2704))(*(_QWORD *)(v1 + 1800));
    if ( v5 )
    {
      if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 && qword_1C0257588 )
        qword_1C0257588(*(_QWORD *)(v1 + 1792));
    }
    else
    {
      ldevUnloadImage(*(_QWORD *)(v1 + 1792));
    }
  }
  v24 = *(struct _ERESOURCE **)(v1 + 56);
  if ( v24 )
    GreDeleteSemaphore(v24);
  v25 = *(_DWORD *)(v1 + 40);
  if ( (v25 & 0x10000) == 0 )
  {
    v24 = *(struct _ERESOURCE **)(v1 + 48);
    if ( v24 )
    {
      GreDeleteSemaphore(v24);
      v25 = *(_DWORD *)(v1 + 40);
    }
  }
  if ( (v25 & 1) != 0 )
    GreDeleteSemaphore(*(PERESOURCE *)(v1 + 64));
  v26 = 0LL;
  GreAcquireHmgrSemaphore((__int64)v24, v19, v20);
  while ( 1 )
  {
    LOBYTE(v27) = 5;
    Objt = (__int64 *)HmgSafeNextObjt(v26, v27);
    if ( !Objt )
      break;
    v26 = *Objt;
    if ( Objt[6] == v1 )
      Objt[6] = 0LL;
  }
  GreReleaseHmgrSemaphore(v29, v27, v30);
  PDEV::Free((struct PDEV *)v1, v5);
}
