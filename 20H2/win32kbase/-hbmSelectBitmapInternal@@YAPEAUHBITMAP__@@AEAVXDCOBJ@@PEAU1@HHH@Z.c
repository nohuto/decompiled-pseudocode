/*
 * XREFs of ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00CFCA0
 * Callers:
 *     hbmSelectBitmap @ 0x1C009AF40 (hbmSelectBitmap.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001BB44 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C001F1DC (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D8E8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D91C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003D9C0 (GreReleaseSemaphoreInternal.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C003D9F0 (GreAcquireSemaphoreSharedInternal.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C003E50C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C003ECA0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00411F0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     HmgShareLockCheck @ 0x1C00438E0 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C00440A0 (DEC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C00442F0 (HmgPentryFromPobj.c)
 *     INC_SHARE_REF_CNT @ 0x1C00460C0 (INC_SHARE_REF_CNT.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C004AA4C (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C004C630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     bIsCompatible @ 0x1C004D530 (bIsCompatible.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C008B010 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     IsvMirrorIncludeNotifySupported @ 0x1C0093088 (IsvMirrorIncludeNotifySupported.c)
 *     vMirrorIncludeNotifyWrap @ 0x1C00934FC (vMirrorIncludeNotifyWrap.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C00A0480 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CEC10 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     bIsSurfaceAllowedInDC @ 0x1C00D0D60 (bIsSurfaceAllowedInDC.c)
 */

HBITMAP __fastcall hbmSelectBitmapInternal(DC **a1, HBITMAP a2, int a3, int a4, int a5)
{
  unsigned int v7; // ebx
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  __int64 v9; // rbx
  struct _ERESOURCE *v10; // rsi
  int v11; // edi
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  DC *v16; // r14
  __int64 v17; // rdx
  unsigned int *v18; // rcx
  int v19; // r8d
  unsigned int v20; // r12d
  DC *v21; // r10
  SURFACE *v22; // r14
  __int64 v23; // r13
  DC *v24; // rcx
  int v25; // eax
  int v26; // eax
  BOOL v27; // r8d
  unsigned int v28; // ecx
  int v29; // edx
  bool v30; // al
  unsigned int v31; // edx
  int v32; // eax
  unsigned int *v33; // rdx
  __int64 v34; // rdx
  unsigned int *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // ecx
  int v39; // r8d
  _BYTE v41[4]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v42; // [rsp+34h] [rbp-3Ch]
  unsigned int v43; // [rsp+38h] [rbp-38h]
  HBITMAP v44; // [rsp+40h] [rbp-30h]
  unsigned int *v45; // [rsp+48h] [rbp-28h] BYREF
  SURFACE *v46; // [rsp+50h] [rbp-20h] BYREF
  __int64 v47; // [rsp+58h] [rbp-18h] BYREF
  __int64 v48; // [rsp+60h] [rbp-10h] BYREF

  v44 = 0LL;
  v48 = 0LL;
  v7 = (unsigned int)a2;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v41);
  v47 = HmgShareLockCheck(v7, 5);
  v9 = v47;
  if ( v47 )
  {
    v10 = (struct _ERESOURCE *)ghsemGreLock;
    v11 = 1;
    if ( a4 == 1 )
    {
      GreAcquireSemaphoreSharedInternal((__int64)ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem", (int)v10, v12);
    }
    else
    {
      EngAcquireSemaphore(ghsemGreLock);
    }
    GreAcquireHmgrSemaphore(v14, v13, v15);
    v16 = *a1;
    v45 = 0LL;
    v46 = (SURFACE *)*((_QWORD *)v16 + 6);
    v20 = *(_DWORD *)(HmgPentryFromPobj(v16) + 8) & 0xFFFFFFFE;
    if ( *((_DWORD *)v16 + 8) != 1 )
      goto LABEL_73;
    LODWORD(v18) = 512;
    if ( *(_DWORD *)(v9 + 168)
      && ((*(_DWORD *)v9 & 0x800000) == 0 || (*(_WORD *)(v9 + 102) & 0x200) == 0)
      && *(_QWORD *)(v9 + 160) != *(_QWORD *)v16 )
    {
      goto LABEL_73;
    }
    if ( !(unsigned int)bIsCompatible(&v45, *(_QWORD *)(v9 + 128), v9, (__int64)v46, 1)
      || !(unsigned int)bIsSurfaceAllowedInDC(v9, *((_QWORD *)*a1 + 6))
      || v20 && (*(_DWORD *)(v9 + 112) & 0x800) != 0
      || !a5 && !v20 )
    {
      goto LABEL_73;
    }
    v22 = (SURFACE *)*((_QWORD *)v21 + 62);
    LODWORD(v18) = 0x4000000;
    if ( !v22 )
      v22 = SURFACE::pdibDefault;
    if ( ((*((_DWORD *)v22 + 28) & 0x4000000) == 0
       || (*(_DWORD *)(v9 + 112) & 0x4000000) == 0
       || (*((_DWORD *)v22 + 29) & 0x200) != 0)
      && !a4
      && !a3 )
    {
      goto LABEL_73;
    }
    v43 = *(_DWORD *)(*((_QWORD *)v21 + 122) + 108LL);
    v42 = v43 & 7;
    if ( (v43 & 7) != 0 )
      DC::dwSetLayout(v21, -1, 0);
    v18 = v45;
    if ( *(unsigned int **)(v9 + 128) != v45 )
    {
      *(_DWORD *)(v9 + 112) |= 0x8000000u;
      *(_QWORD *)(v9 + 128) = v18;
      if ( v18 )
        INC_SHARE_REF_CNT(v18);
    }
    if ( (*((_DWORD *)v22 + 28) & 0x1000000) != 0 )
      v23 = *(_QWORD *)v22;
    else
      v23 = v48;
    v44 = (HBITMAP)*((_QWORD *)v22 + 4);
    if ( a2 != v44 )
    {
      v24 = *a1;
      if ( (SURFACE *)v9 == SURFACE::pdibDefault )
      {
        DC::pSurface(v24, 0LL);
      }
      else
      {
        DC::pSurface(v24, (struct SURFACE *)v9);
        if ( (*(_DWORD *)v9 & 0x800000) != 0 && (*(_WORD *)(v9 + 102) & 0x200) != 0
          || !*(_WORD *)(v9 + 100) && *(_DWORD *)(v9 + 216) )
        {
          *((_DWORD *)*a1 + 9) |= 0x10000u;
        }
        else
        {
          *((_DWORD *)*a1 + 9) &= ~0x10000u;
        }
      }
      *((_QWORD *)*a1 + 64) = *(_QWORD *)(v9 + 56);
      *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL) |= 0xFu;
      if ( v22 != SURFACE::pdibDefault )
      {
        if ( (*((_DWORD *)v22 + 28) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported() >= 0 )
          vMirrorIncludeNotifyWrap();
        SURFACE::vDec_cRef(v22);
        if ( !*((_DWORD *)v22 + 42) )
        {
          if ( v23 )
            v23 = *(_QWORD *)v22;
          v25 = *((_DWORD *)v22 + 28);
          if ( (v25 & 0x8000000) != 0 )
          {
            v48 = *((_QWORD *)v22 + 16);
            *((_QWORD *)v22 + 16) = 0LL;
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v48);
            v25 = *((_DWORD *)v22 + 28);
          }
          *((_DWORD *)v22 + 28) = v25 & 0xF7FFFFFF;
        }
      }
      if ( (int)IsvMirrorIncludeNotifySupported() >= 0 )
        vMirrorIncludeNotifyWrap();
      v26 = *(_DWORD *)(v9 + 112);
      v27 = (v26 & 0x4000) != 0 || (v26 & 0x800010) != 0 && (*((_DWORD *)v46 + 10) & 1) != 0;
      v28 = *((_DWORD *)*a1 + 9) | 0x200;
      if ( !v27 )
        v28 = *((_DWORD *)*a1 + 9) & 0xFFFFFDFF;
      *((_DWORD *)*a1 + 9) = v28;
      v29 = *((_DWORD *)*a1 + 9);
      v30 = (v29 & *(_DWORD *)(v9 + 112) & 0x200) != 0;
      v31 = v29 | 0x8000;
      if ( !v30 )
        v31 = *((_DWORD *)*a1 + 9) & 0xFFFF7FFF;
      *((_DWORD *)*a1 + 9) = v31;
      if ( (SURFACE *)v9 != SURFACE::pdibDefault )
      {
        INC_SHARE_REF_CNT((unsigned int *)v9);
        ++*(_DWORD *)(v9 + 168);
        if ( (*(_DWORD *)v9 & 0x800000) == 0 || (*(_WORD *)(v9 + 102) & 0x200) == 0 )
        {
          *(_QWORD *)(v9 + 160) = *(_QWORD *)*a1;
          *(_QWORD *)(v9 + 48) = *((_QWORD *)*a1 + 6);
        }
      }
      v32 = SURFACE::bDIBSection((SURFACE *)v9);
      *v33 = *v33 & 0xFFFFFFFE | (v32 != 0);
      if ( (unsigned int)SURFACE::bDIBSection((SURFACE *)v9) )
        v36 = *(_QWORD *)(v9 + 200);
      else
        v36 = 0LL;
      *(_QWORD *)(v34 + 24) = v36;
      DEC_SHARE_REF_CNT(v35);
      v47 = 0LL;
      GreReleaseHmgrSemaphore(v38, v37, v39);
      v11 = 0;
      DC::bSetDefaultRegion(*a1);
      DC::vUpdate_VisRect(*a1, *((__m128i **)*a1 + 140));
      if ( v23 )
      {
        v46 = (SURFACE *)HmgShareLockCheck(v23, 5);
        SURFREF::bDeleteSurface(&v46, 0);
        v44 = (HBITMAP)gahStockObjects[21];
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v46);
      }
    }
    if ( v42 )
      DC::dwSetLayout(*a1, -1, v43);
    if ( v11 )
LABEL_73:
      GreReleaseHmgrSemaphore((int)v18, v17, v19);
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", (int)v10, v19);
    GreReleaseSemaphoreInternal(v10);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v47);
  return v44;
}
