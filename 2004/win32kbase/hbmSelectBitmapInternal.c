/*
 * XREFs of hbmSelectBitmapInternal @ 0x1C00CFF50
 * Callers:
 *     hbmSelectBitmap @ 0x1C003B7B0 (hbmSelectBitmap.c)
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C00159DC (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreGetObjectOwner @ 0x1C0023750 (GreGetObjectOwner.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0024CC0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     IsvMirrorIncludeNotifySupported @ 0x1C00290D8 (IsvMirrorIncludeNotifySupported.c)
 *     vMirrorIncludeNotifyWrap @ 0x1C00296AC (vMirrorIncludeNotifyWrap.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C003CFE0 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C008213C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0082170 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0082210 (GreReleaseSemaphoreInternal.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C0082240 (GreAcquireSemaphoreSharedInternal.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C008447C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00844C0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0086EC0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C0087720 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockCheck @ 0x1C0088B80 (HmgShareLockCheck.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0088E50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C00896E0 (DEC_SHARE_REF_CNT.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0091F88 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00922F0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5238 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00C0E8C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     bIsCompatible @ 0x1C00C1AE0 (bIsCompatible.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C32F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     bIsSurfaceAllowedInDC @ 0x1C00D1088 (bIsSurfaceAllowedInDC.c)
 */

void *__fastcall hbmSelectBitmapInternal(HDC a1, void *a2, int a3, int a4, int a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  void *v9; // rdi
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // rdx
  DYNAMICMODECHANGESHARELOCK *v13; // rcx
  int v14; // r8d
  __int64 v15; // rbx
  struct _ERESOURCE *v16; // rsi
  int v17; // edi
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rcx
  int v21; // r8d
  DC *v22; // r14
  __int64 v23; // rdx
  int *v24; // rcx
  int v25; // r8d
  int ObjectOwner; // r15d
  DC *v27; // r9
  SURFACE *v28; // r14
  unsigned int v29; // r13d
  __int64 v30; // r12
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  BOOL v34; // r8d
  unsigned int v35; // ecx
  int v36; // edx
  bool v37; // al
  unsigned int v38; // edx
  int v39; // eax
  unsigned int *v40; // rdx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // ecx
  int v45; // r8d
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rbx
  char v50[4]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v51; // [rsp+34h] [rbp-3Ch]
  void *v52; // [rsp+38h] [rbp-38h]
  __int64 v53; // [rsp+40h] [rbp-30h] BYREF
  int *v54; // [rsp+48h] [rbp-28h] BYREF
  __int64 v55; // [rsp+50h] [rbp-20h]
  __int64 v56; // [rsp+58h] [rbp-18h] BYREF
  DC *v57[2]; // [rsp+60h] [rbp-10h] BYREF

  v5 = (unsigned int)a2;
  v52 = 0LL;
  v6 = (unsigned int)a1;
  v56 = 0LL;
  v53 = 0LL;
  v57[0] = 0LL;
  v57[1] = 0LL;
  v9 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v57, a1);
  if ( v57[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v50, v10, v11);
    v53 = HmgShareLockCheck(v5, 5);
    v15 = v53;
    if ( v53 )
    {
      v16 = (struct _ERESOURCE *)ghsemGreLock;
      v17 = 1;
      if ( a4 == 1 )
      {
        GreAcquireSemaphoreSharedInternal((__int64)ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem", (int)v16, v18);
      }
      else
      {
        EngAcquireSemaphore(ghsemGreLock);
      }
      GreAcquireHmgrSemaphore(v20, v19, v21);
      v22 = v57[0];
      v54 = 0LL;
      v55 = *((_QWORD *)v57[0] + 6);
      ObjectOwner = GreGetObjectOwner(v6, 1);
      if ( *((_DWORD *)v22 + 8) != 1 )
        goto LABEL_78;
      v23 = 512LL;
      if ( *(_DWORD *)(v15 + 168)
        && ((*(_DWORD *)v15 & 0x800000) == 0 || (*(_WORD *)(v15 + 102) & 0x200) == 0)
        && *(_QWORD *)(v15 + 160) != *(_QWORD *)v22 )
      {
        goto LABEL_78;
      }
      if ( !(unsigned int)bIsCompatible(&v54, *(_QWORD *)(v15 + 128), v15, v55, 1)
        || !(unsigned int)bIsSurfaceAllowedInDC(v15, *((_QWORD *)v57[0] + 6))
        || ObjectOwner && (*(_DWORD *)(v15 + 112) & 0x800) != 0
        || !a5 && !ObjectOwner )
      {
        goto LABEL_78;
      }
      v28 = (SURFACE *)*((_QWORD *)v27 + 62);
      LODWORD(v24) = 0x4000000;
      if ( !v28 )
        v28 = SURFACE::pdibDefault;
      if ( ((*((_DWORD *)v28 + 28) & 0x4000000) == 0
         || (*(_DWORD *)(v15 + 112) & 0x4000000) == 0
         || (*((_DWORD *)v28 + 29) & 0x200) != 0)
        && !a4
        && !a3 )
      {
        goto LABEL_78;
      }
      v51 = *(_DWORD *)(*((_QWORD *)v27 + 122) + 108LL);
      v29 = v51 & 7;
      if ( (v51 & 7) != 0 )
      {
        DC::dwSetLayout(v27, -1, 0);
        v27 = v57[0];
      }
      v24 = v54;
      if ( *(int **)(v15 + 128) != v54 )
      {
        *(_DWORD *)(v15 + 112) |= 0x8000000u;
        *(_QWORD *)(v15 + 128) = v24;
        if ( v24 )
          INC_SHARE_REF_CNT(v24);
        v27 = v57[0];
      }
      if ( (*((_DWORD *)v28 + 28) & 0x1000000) != 0 )
        v30 = *(_QWORD *)v28;
      else
        v30 = v56;
      v52 = (void *)*((_QWORD *)v28 + 4);
      if ( a2 != v52 )
      {
        if ( (SURFACE *)v15 == SURFACE::pdibDefault )
        {
          DC::pSurface(v27, 0LL);
        }
        else
        {
          DC::pSurface(v27, (struct SURFACE *)v15);
          if ( (*(_DWORD *)v15 & 0x800000) != 0 && (*(_WORD *)(v15 + 102) & 0x200) != 0
            || !*(_WORD *)(v15 + 100) && *(_DWORD *)(v15 + 216) )
          {
            *((_DWORD *)v57[0] + 9) |= 0x10000u;
          }
          else
          {
            *((_DWORD *)v57[0] + 9) &= ~0x10000u;
          }
        }
        *((_QWORD *)v57[0] + 64) = *(_QWORD *)(v15 + 56);
        *(_DWORD *)(*((_QWORD *)v57[0] + 122) + 152LL) |= 0xFu;
        if ( v28 != SURFACE::pdibDefault )
        {
          if ( (*((_DWORD *)v28 + 28) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported() >= 0 )
            vMirrorIncludeNotifyWrap();
          SURFACE::vDec_cRef(v28);
          if ( !*((_DWORD *)v28 + 42) )
          {
            if ( v30 )
              v30 = *(_QWORD *)v28;
            v31 = *((_DWORD *)v28 + 28);
            if ( (v31 & 0x8000000) != 0 )
            {
              v32 = *((_QWORD *)v28 + 16);
              *((_QWORD *)v28 + 16) = 0LL;
              v56 = v32;
              XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v56);
              v31 = *((_DWORD *)v28 + 28);
            }
            *((_DWORD *)v28 + 28) = v31 & 0xF7FFFFFF;
          }
        }
        if ( (int)IsvMirrorIncludeNotifySupported() >= 0 )
          vMirrorIncludeNotifyWrap();
        v33 = *(_DWORD *)(v15 + 112);
        v34 = (v33 & 0x4000) != 0 || (v33 & 0x800010) != 0 && (*(_DWORD *)(v55 + 40) & 1) != 0;
        v35 = *((_DWORD *)v57[0] + 9) | 0x200;
        if ( !v34 )
          v35 = *((_DWORD *)v57[0] + 9) & 0xFFFFFDFF;
        *((_DWORD *)v57[0] + 9) = v35;
        v36 = *((_DWORD *)v57[0] + 9);
        v37 = (v36 & *(_DWORD *)(v15 + 112) & 0x200) != 0;
        v38 = v36 | 0x8000;
        if ( !v37 )
          v38 = *((_DWORD *)v57[0] + 9) & 0xFFFF7FFF;
        *((_DWORD *)v57[0] + 9) = v38;
        if ( (SURFACE *)v15 != SURFACE::pdibDefault )
        {
          INC_SHARE_REF_CNT((int *)v15);
          ++*(_DWORD *)(v15 + 168);
          if ( (*(_DWORD *)v15 & 0x800000) == 0 || (*(_WORD *)(v15 + 102) & 0x200) == 0 )
          {
            *(_QWORD *)(v15 + 160) = *(_QWORD *)v57[0];
            *(_QWORD *)(v15 + 48) = *((_QWORD *)v57[0] + 6);
          }
        }
        v39 = SURFACE::bDIBSection((SURFACE *)v15);
        *v40 = *v40 & 0xFFFFFFFE | (v39 != 0);
        v41 = SURFACE::bDIBSection((SURFACE *)v15);
        v42 = *((_QWORD *)v57[0] + 122);
        if ( v41 )
          *(_QWORD *)(v42 + 24) = *(_QWORD *)(v15 + 200);
        else
          *(_QWORD *)(v42 + 24) = 0LL;
        DEC_SHARE_REF_CNT((unsigned int *)v15);
        v53 = 0LL;
        GreReleaseHmgrSemaphore(v44, v43, v45);
        v17 = 0;
        DC::bSetDefaultRegion(v57[0], v46, v47);
        DC::vUpdate_VisRect(v57[0], *((__m128i **)v57[0] + 140));
        if ( v30 )
        {
          v48 = HmgShareLockCheck(v30, 5);
          if ( (unsigned int)SURFACE::bDeleteSurface(v48, 0, 0) )
            v48 = 0LL;
          v56 = v48;
          v52 = gahStockObjects[21];
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v56);
        }
        v27 = v57[0];
      }
      if ( v29 )
        DC::dwSetLayout(v27, -1, v51);
      if ( v17 )
LABEL_78:
        GreReleaseHmgrSemaphore((int)v24, v23, v25);
      EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", (int)v16, v25);
      GreReleaseSemaphoreInternal(v16);
      v9 = v52;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13, v12, v14);
    if ( v57[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v57);
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v53);
  return v9;
}
