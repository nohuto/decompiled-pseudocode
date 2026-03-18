/*
 * XREFs of ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00189F0
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C004BD80 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ldevUnloadImage @ 0x1C0017DD0 (ldevUnloadImage.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C0018DC0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     HmgSafeNextObjt @ 0x1C001A270 (HmgSafeNextObjt.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C001A520 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     bDeleteSurface @ 0x1C001A650 (bDeleteSurface.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C001A718 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C001A8C4 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x1C001A8EC (IsUMPD_ldevUnloadImageSupported.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x1C001A918 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     PopThreadGuardedObject @ 0x1C003E4B0 (PopThreadGuardedObject.c)
 *     PushThreadGuardedObject @ 0x1C0040A70 (PushThreadGuardedObject.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C004BF70 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C004BFB4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     GreDeleteSemaphore @ 0x1C005E3E0 (GreDeleteSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C013F198 (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     IsPFTOBJ_bUnloadWorkhorseSupported @ 0x1C01F5F4C (IsPFTOBJ_bUnloadWorkhorseSupported.c)
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
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _ERESOURCE *v21; // rcx
  int v22; // eax
  struct _ERESOURCE *v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 *Objt; // rax
  _QWORD *v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  int v30; // eax
  __int64 v31; // rsi
  int v32; // eax
  __int64 v33; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v34[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v35; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+48h] BYREF
  char v37; // [rsp+B0h] [rbp+50h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *((_DWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 2);
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  *((_DWORD *)a1 + 3) = 0;
  v5 = v4 & 0x8000;
  v35 = v1;
  memset(v34, 0, sizeof(v34));
  PushThreadGuardedObject(v34, a1, vUnreferencePdevWorker);
  v6 = -1073741637;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v1 + 1528);
    if ( !v7 )
      break;
    v36 = *(_QWORD *)(v1 + 1528);
    v33 = *(_QWORD *)(v7 + 128);
    if ( qword_1C024F6D0 )
      v8 = qword_1C024F6D0();
    else
      v8 = -1073741637;
    if ( v8 >= 0 )
    {
      if ( qword_1C024F6D8 )
        qword_1C024F6D8(&v36, &v35, &v33, v2);
    }
    v36 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v36);
  }
  PopThreadGuardedObject(v34);
  if ( *(_DWORD *)(v1 + 2104) && (*(_DWORD *)(v35 + 40) & 0x40) != 0 )
  {
    v29 = 0LL;
    v36 = 0LL;
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
    DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)&v37);
    if ( qword_1C024F6F0 )
      v30 = qword_1C024F6F0();
    else
      v30 = -1073741637;
    if ( v30 >= 0 && qword_1C024F6F8 )
      v29 = qword_1C024F6F8(&v37, v35, &v36);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 && qword_1C024F708 )
      qword_1C024F708(&v37, v29, v36, 0LL);
  }
  v10 = *(_QWORD *)(v1 + 1712);
  while ( v10 )
  {
    *(_DWORD *)(v10 + 228) = 1;
    v31 = v10;
    if ( qword_1C024F710 )
      v32 = qword_1C024F710();
    else
      v32 = -1073741637;
    if ( v32 >= 0 && qword_1C024F718 )
      qword_1C024F718(v10 + 128);
    v10 = *(_QWORD *)(v10 + 248);
    Win32FreePool(v31);
  }
  if ( qword_1C024F720 )
    v6 = qword_1C024F720();
  if ( v6 >= 0 && qword_1C024F728 )
    qword_1C024F728(v1, v3);
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
  if ( (*(_DWORD *)(v35 + 40) & 0x80000) == 0 )
  {
    v15 = *(void **)(v1 + 1432);
    if ( v15 != gahStockObjects[13] && qword_1C024F160 )
      qword_1C024F160(v15, 1LL);
    v16 = *(void **)(v1 + 1440);
    if ( v16 != gahStockObjects[13] && qword_1C024F160 )
      qword_1C024F160(v16, 1LL);
    v17 = *(void **)(v1 + 1448);
    if ( v17 != gahStockObjects[16] && qword_1C024F160 )
      qword_1C024F160(v17, 1LL);
    if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    {
      v27 = (_QWORD *)(v1 + 1456);
      v28 = 6LL;
      do
      {
        bDeleteSurface(*v27++);
        --v28;
      }
      while ( v28 );
    }
  }
  LOBYTE(v9) = 1;
  PDEVOBJ::vDisableSurface(&v35, v3, v9);
  if ( *(_QWORD *)(v1 + 1512) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 && qword_1C024F5D8 )
    qword_1C024F5D8(&v35);
  if ( !v3 )
    PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v35);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v35 + 1544));
  v18 = v35;
  if ( (*(_DWORD *)(v35 + 40) & 0x80000) == 0 )
  {
    if ( v3 != 2 )
    {
      v19 = *(_QWORD *)(v1 + 1808);
      if ( v19 )
        HmgDecrementShareReferenceCountEx(v19, 0LL);
      v20 = *(_QWORD *)(v1 + 1816);
      if ( v20 )
      {
        HmgDecrementShareReferenceCountEx(*(_QWORD *)(v1 + 1816), 0LL);
        v20 = *(_QWORD *)(v1 + 1816);
      }
      v36 = v20;
      XEPALOBJ::bDeletePalette(&v36, 1LL);
      v18 = v35;
    }
    if ( *(_QWORD *)(v18 + 2704) != *(_QWORD *)(v18 + 2688) && (!v5 || !v3) && v2 )
      (*(void (__fastcall **)(_QWORD))(v18 + 2704))(*(_QWORD *)(v1 + 1800));
    if ( v5 )
    {
      if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 && qword_1C024F5C8 )
        qword_1C024F5C8(*(_QWORD *)(v1 + 1792));
    }
    else
    {
      ldevUnloadImage(*(__int64 **)(v1 + 1792));
    }
  }
  v21 = *(struct _ERESOURCE **)(v1 + 56);
  if ( v21 )
    GreDeleteSemaphore(v21);
  v22 = *(_DWORD *)(v1 + 40);
  if ( (v22 & 0x10000) == 0 )
  {
    v23 = *(struct _ERESOURCE **)(v1 + 48);
    if ( v23 )
    {
      GreDeleteSemaphore(v23);
      v22 = *(_DWORD *)(v1 + 40);
    }
  }
  if ( (v22 & 1) != 0 )
    GreDeleteSemaphore(*(PERESOURCE *)(v1 + 64));
  v24 = 0LL;
  GreAcquireHmgrSemaphore();
  while ( 1 )
  {
    LOBYTE(v25) = 5;
    Objt = (__int64 *)HmgSafeNextObjt(v24, v25);
    if ( !Objt )
      break;
    v24 = *Objt;
    if ( Objt[6] == v1 )
      Objt[6] = 0LL;
  }
  GreReleaseHmgrSemaphore();
  PDEV::Free((struct PDEV *)v1, v5);
}
