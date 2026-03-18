/*
 * XREFs of ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00BD990
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C007FBC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C007FDB0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007FDF4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     PopThreadGuardedObject @ 0x1C0084420 (PopThreadGuardedObject.c)
 *     PushThreadGuardedObject @ 0x1C0086B80 (PushThreadGuardedObject.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     GreDeleteSemaphore @ 0x1C00A55E0 (GreDeleteSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 *     ldevUnloadImage @ 0x1C00BD4E0 (ldevUnloadImage.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x1C00BD934 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x1C00BD960 (IsUMPD_ldevUnloadImageSupported.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00BDD60 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     HmgSafeNextObjt @ 0x1C00BF210 (HmgSafeNextObjt.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00BF4C0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     bDeleteSurface @ 0x1C00C0E40 (bDeleteSurface.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C00C0F48 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00C1124 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C0141658 (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     IsPFTOBJ_bUnloadWorkhorseSupported @ 0x1C01F787C (IsPFTOBJ_bUnloadWorkhorseSupported.c)
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
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _ERESOURCE *v23; // rcx
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 *Objt; // rax
  int v28; // ecx
  int v29; // r8d
  _QWORD *v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  int v33; // eax
  __int64 v34; // rsi
  int v35; // eax
  __int64 v36; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v37[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v38; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v39; // [rsp+A8h] [rbp+48h] BYREF
  char v40; // [rsp+B0h] [rbp+50h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *((_DWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 2);
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  *((_DWORD *)a1 + 3) = 0;
  v5 = v4 & 0x8000;
  v38 = v1;
  memset(v37, 0, sizeof(v37));
  PushThreadGuardedObject(v37, (__int64)a1, (__int64)vUnreferencePdevWorker);
  v6 = -1073741637;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v1 + 1528);
    if ( !v7 )
      break;
    v39 = *(_QWORD *)(v1 + 1528);
    v36 = *(_QWORD *)(v7 + 128);
    if ( qword_1C02516D0 )
      v8 = qword_1C02516D0();
    else
      v8 = -1073741637;
    if ( v8 >= 0 )
    {
      if ( qword_1C02516D8 )
        qword_1C02516D8(&v39, &v38, &v36, v2);
    }
    v39 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v39);
  }
  PopThreadGuardedObject(v37);
  if ( *(_DWORD *)(v1 + 2104) && (*(_DWORD *)(v38 + 40) & 0x40) != 0 )
  {
    v32 = 0LL;
    v39 = 0LL;
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 15);
    DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)&v40);
    if ( qword_1C02516F0 )
      v33 = qword_1C02516F0();
    else
      v33 = -1073741637;
    if ( v33 >= 0 && qword_1C02516F8 )
      v32 = qword_1C02516F8(&v40, v38, &v39);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 && qword_1C0251708 )
      qword_1C0251708(&v40, v32, v39, 0LL);
  }
  v10 = *(_QWORD *)(v1 + 1712);
  while ( v10 )
  {
    *(_DWORD *)(v10 + 228) = 1;
    v34 = v10;
    if ( qword_1C0251710 )
      v35 = qword_1C0251710();
    else
      v35 = -1073741637;
    if ( v35 >= 0 && qword_1C0251718 )
      qword_1C0251718(v10 + 128);
    v10 = *(_QWORD *)(v10 + 248);
    Win32FreePool(v34);
  }
  if ( qword_1C0251720 )
    v6 = qword_1C0251720();
  if ( v6 >= 0 && qword_1C0251728 )
    qword_1C0251728(v1, v3);
  v11 = *(_QWORD *)(v1 + 1688);
  if ( v11 )
  {
    Win32FreePool(v11);
    *(_QWORD *)(v1 + 1688) = 0LL;
  }
  v12 = *(_QWORD *)(v1 + 1696);
  if ( v12 )
  {
    Win32FreePool(v12);
    *(_QWORD *)(v1 + 1696) = 0LL;
  }
  v13 = *(_QWORD *)(v1 + 1704);
  if ( v13 )
  {
    Win32FreePool(v13);
    *(_QWORD *)(v1 + 1704) = 0LL;
  }
  v14 = *(_QWORD *)(v1 + 2592);
  if ( v14 )
    Win32FreePool(v14);
  if ( (*(_DWORD *)(v38 + 40) & 0x80000) == 0 )
  {
    v15 = *(void **)(v1 + 1432);
    if ( v15 != gahStockObjects[13] && qword_1C0251160 )
      qword_1C0251160(v15, 1LL);
    v16 = *(void **)(v1 + 1440);
    if ( v16 != gahStockObjects[13] && qword_1C0251160 )
      qword_1C0251160(v16, 1LL);
    v17 = *(void **)(v1 + 1448);
    if ( v17 != gahStockObjects[16] && qword_1C0251160 )
      qword_1C0251160(v17, 1LL);
    if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    {
      v30 = (_QWORD *)(v1 + 1456);
      v31 = 6LL;
      do
      {
        bDeleteSurface(*v30++);
        --v31;
      }
      while ( v31 );
    }
  }
  LOBYTE(v9) = 1;
  PDEVOBJ::vDisableSurface(&v38, v3, v9);
  if ( *(_QWORD *)(v1 + 1512) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 && qword_1C02515D8 )
    qword_1C02515D8(&v38);
  if ( !v3 )
    PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v38);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v38 + 1544));
  v20 = v38;
  if ( (*(_DWORD *)(v38 + 40) & 0x80000) == 0 )
  {
    if ( v3 != 2 )
    {
      v21 = *(_QWORD *)(v1 + 1808);
      if ( v21 )
        HmgDecrementShareReferenceCountEx(v21, 0LL);
      v22 = *(_QWORD *)(v1 + 1816);
      if ( v22 )
      {
        HmgDecrementShareReferenceCountEx(*(_QWORD *)(v1 + 1816), 0LL);
        v22 = *(_QWORD *)(v1 + 1816);
      }
      v39 = v22;
      XEPALOBJ::bDeletePalette(&v39, 1LL);
      v20 = v38;
    }
    if ( *(_QWORD *)(v20 + 2704) != *(_QWORD *)(v20 + 2688) && (!v5 || !v3) && v2 )
      (*(void (__fastcall **)(_QWORD))(v20 + 2704))(*(_QWORD *)(v1 + 1800));
    if ( v5 )
    {
      if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 && qword_1C02515C8 )
        qword_1C02515C8(*(_QWORD *)(v1 + 1792));
    }
    else
    {
      ldevUnloadImage(*(_QWORD *)(v1 + 1792));
    }
  }
  v23 = *(struct _ERESOURCE **)(v1 + 56);
  if ( v23 )
    GreDeleteSemaphore(v23);
  v24 = *(_DWORD *)(v1 + 40);
  if ( (v24 & 0x10000) == 0 )
  {
    v23 = *(struct _ERESOURCE **)(v1 + 48);
    if ( v23 )
    {
      GreDeleteSemaphore(v23);
      v24 = *(_DWORD *)(v1 + 40);
    }
  }
  if ( (v24 & 1) != 0 )
    GreDeleteSemaphore(*(PERESOURCE *)(v1 + 64));
  v25 = 0LL;
  GreAcquireHmgrSemaphore((__int64)v23, v18, v19);
  while ( 1 )
  {
    LOBYTE(v26) = 5;
    Objt = (__int64 *)HmgSafeNextObjt(v25, v26);
    if ( !Objt )
      break;
    v25 = *Objt;
    if ( Objt[6] == v1 )
      Objt[6] = 0LL;
  }
  GreReleaseHmgrSemaphore(v28, v26, v29);
  PDEV::Free((struct PDEV *)v1, v5);
}
