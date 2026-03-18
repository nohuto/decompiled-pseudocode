/*
 * XREFs of NtGdiDeleteObjectApp @ 0x1C006C610
 * Callers:
 *     <none>
 * Callees:
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00063B0 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgFreeObjectAttr @ 0x1C00350CC (HmgFreeObjectAttr.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C006CC10 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     bDeleteDCInternalEx @ 0x1C006D2D0 (bDeleteDCInternalEx.c)
 *     bDeleteBrush @ 0x1C006D4D0 (bDeleteBrush.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C007EF80 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C007F290 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0083F70 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0084130 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C008A954 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C008B0D8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008BC60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     bDeletePalette @ 0x1C009AEF0 (bDeletePalette.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CE7FC (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0156780 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(HPALETTE a1)
{
  unsigned int v2; // r14d
  int v3; // edi
  unsigned int v4; // ebx
  unsigned int v5; // r15d
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r10
  int v11; // edi
  int v12; // edi
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // r8d
  int v16; // ecx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  REGION *v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rbx
  GdiHandleManager *v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // r14
  unsigned int v27; // r12d
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rbx
  __int64 v32; // rcx
  unsigned int v33; // ecx
  char v34; // al
  GdiHandleManager *v35; // r14
  unsigned int v36; // eax
  __int64 v37; // rsi
  unsigned int v38; // r9d
  unsigned int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // r10
  __int64 v42; // rbx
  unsigned int v43; // eax
  unsigned int v44; // r8d
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r9
  REGION *v48; // rdx
  int v49; // eax
  int v50; // ebx
  unsigned int v51; // ebx
  int v52; // edi
  int v53; // edi
  int v54; // edx
  GdiHandleManager *v55; // rbx
  unsigned int v56; // eax
  __int64 v57; // r9
  unsigned __int64 v58; // rdx
  unsigned int v59; // r8d
  __int64 v60; // rcx
  __int64 v61; // r10
  __int64 v62; // rdx
  __int64 v63; // [rsp+38h] [rbp-19h] BYREF
  int v64; // [rsp+40h] [rbp-11h]
  int v65; // [rsp+44h] [rbp-Dh]
  REGION *v66[2]; // [rsp+50h] [rbp-1h] BYREF
  int v67; // [rsp+60h] [rbp+Fh]
  __int64 v68; // [rsp+B8h] [rbp+67h]
  __int64 v69; // [rsp+C8h] [rbp+77h] BYREF
  __int64 v70; // [rsp+D0h] [rbp+7Fh] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = (unsigned int)a1 >> 16;
  v3 = BYTE2(a1) & 0x1F;
  v4 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a1,
                                  1)
           + 13) == ((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000) >> 16 )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)a1;
    }
  }
  v5 = 0;
  v6 = 1;
  v7 = *((_QWORD *)gpHandleManager + 2);
  LODWORD(v8) = *(_DWORD *)(v7 + 2056);
  if ( v4 >= (unsigned int)v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
    goto LABEL_17;
  v9 = ((v4 - (unsigned int)v8) >> 16) + 1;
  if ( v4 < (unsigned int)v8 )
    v9 = 0LL;
  v10 = *(_QWORD *)(v7 + 8 * v9 + 8);
  if ( (_DWORD)v9 )
    v4 += ((1 - (_DWORD)v9) << 16) - v8;
  v8 = 0LL;
  if ( v4 < *(_DWORD *)(v10 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v4 >> 8))
                 + 16LL * (unsigned __int8)v4
                 + 8) )
  {
    v8 = *(_QWORD *)v10 + 24LL * v4;
  }
  if ( !v8
    || *(unsigned __int8 *)(v8 + 14) != v3
    || *(_WORD *)(v8 + 12) != (_WORD)v2
    || (*(_DWORD *)(v8 + 8) & 0xFFFFFFFE) != 0 )
  {
LABEL_17:
    if ( v3 != 4 )
    {
      v11 = v3 - 1;
      if ( !v11 )
        return bDeleteDCInternalEx((HDC)a1);
      v12 = v11 - 4;
      if ( v12 )
      {
        v52 = v12 - 3;
        if ( v52 )
        {
          v53 = v52 - 2;
          if ( v53 )
          {
            if ( v53 == 6 )
              return bDeleteBrush((HBRUSH)a1);
            else
              return 0LL;
          }
          else
          {
            if ( qword_1C0257120 )
              return (unsigned int)qword_1C0257120(a1, 0LL);
            return v5;
          }
        }
        else
        {
          return bDeletePalette(a1);
        }
      }
      else
      {
        v13 = (int)ghsemDynamicModeChange;
        if ( ghsemDynamicModeChange )
          ExEnterPriorityRegionAndAcquireResourceShared();
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(v13, (unsigned int)&LockAcquireShared, v8, (__int64)ghsemDynamicModeChange);
        v69 = HmgShareLockCheckIgnoreStockBit((unsigned int)a1, 5);
        if ( v69 )
        {
          v14 = SURFREF::bDeleteSurface(&v69, 0LL, 0LL);
          v16 = v69;
          v17 = v14;
          if ( v69 )
            HmgDecrementShareReferenceCountEx(v69, 0LL);
          v5 = v17;
        }
        else
        {
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v69);
        }
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(v16, (unsigned int)&LockRelease, v15, (__int64)ghsemDynamicModeChange);
        if ( ghsemDynamicModeChange )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
          PsLeavePriorityRegion(v18);
        }
        return v5;
      }
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v66, (HRGN)a1, 0);
    v20 = v66[0];
    if ( !v66[0] || *((_DWORD *)v66[0] + 8) )
      goto LABEL_99;
    v21 = *(_QWORD *)v66[0];
    v22 = 0LL;
    v70 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v70);
    if ( !(unsigned int)IsThreadCrossSessionAttached()
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v69 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v69 = 0LL;
    }
    v24 = gpHandleManager;
    v64 = 1;
    v25 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)v21 | ((unsigned int)v21 >> 8) & 0xFF0000);
    v26 = *((_QWORD *)v24 + 2);
    v27 = v25;
    v28 = *(_DWORD *)(v26 + 2056);
    if ( v25 >= v28 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16) )
      goto LABEL_130;
    v29 = ((v25 - v28) >> 16) + 1;
    if ( v25 < v28 )
      v29 = 0LL;
    v30 = *(_QWORD *)(v26 + 8 * v29 + 8);
    if ( (_DWORD)v29 )
      v27 = ((1 - (_DWORD)v29) << 16) - v28 + v25;
    v31 = 0LL;
    if ( v27 < *(_DWORD *)(v30 + 20) )
    {
      v68 = *(_QWORD *)(**(_QWORD **)(v30 + 24) + 8 * ((unsigned __int64)v27 >> 8)) + 16LL * (unsigned __int8)v27;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v68, 0LL);
      if ( GdiHandleEntryTable::GetEntryObject((GdiHandleEntryTable *)v30, v27) )
      {
        v32 = 24LL * v27;
        *(_DWORD *)(v32 + *(_QWORD *)v30 + 8) |= 1u;
        v31 = v32 + *(_QWORD *)v30;
      }
      else
      {
        ExReleasePushLockExclusiveEx(v68, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    v63 = v31;
    if ( !v31 )
    {
LABEL_130:
      KeLeaveCriticalRegion();
      goto LABEL_88;
    }
    _m_prefetchw((const void *)(v31 + 8));
    v65 = *(_DWORD *)(v31 + 8);
    v33 = v65 & 0xFFFFFFFE;
    if ( (v65 & 0xFFFFFFFE) != (v70 & 0xFFFFFFFC) && v33 && (!v69 || v33 != *(_DWORD *)(v69 + 8)) )
      goto LABEL_125;
    v34 = *(_BYTE *)(v31 + 15);
    if ( (v34 & 0x20) != 0 )
      goto LABEL_125;
    if ( (v34 & 0x40) == 0 )
    {
LABEL_49:
      if ( *(_BYTE *)(v31 + 14) != 4 || *(_WORD *)(v31 + 12) != WORD1(v21) )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v63);
      if ( v64 )
      {
        v35 = gpHandleManager;
        v36 = GdiHandleManager::DecodeIndex(
                gpHandleManager,
                (unsigned __int16)*(_DWORD *)v20 | (*(_DWORD *)v20 >> 8) & 0xFF0000);
        v37 = *((_QWORD *)v35 + 2);
        v38 = v36;
        v39 = *(_DWORD *)(v37 + 2056);
        if ( v36 >= v39 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16) )
        {
          v42 = 0LL;
        }
        else
        {
          v40 = ((v36 - v39) >> 16) + 1;
          if ( v36 < v39 )
            v40 = 0LL;
          v41 = *(_QWORD *)(v37 + 8 * v40 + 8);
          if ( (_DWORD)v40 )
            v36 += ((1 - (_DWORD)v40) << 16) - v39;
          v42 = 0LL;
          if ( v36 < *(_DWORD *)(v41 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v41 + 24) + 8 * ((unsigned __int64)v36 >> 8))
                         + 16LL * (unsigned __int8)v36
                         + 8) )
          {
            v42 = *(_QWORD *)v41 + 24LL * v36;
          }
        }
        v43 = GdiHandleManager::DecodeIndex(v35, v38);
        v44 = *(_DWORD *)(v37 + 2056);
        v45 = v43;
        if ( v43 >= v44 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16) )
          goto LABEL_129;
        v46 = ((v43 - v44) >> 16) + 1;
        if ( v43 < v44 )
          v46 = 0LL;
        v47 = *(_QWORD *)(v37 + 8 * v46 + 8);
        if ( (_DWORD)v46 )
          v45 = ((1 - (_DWORD)v46) << 16) - v44 + v43;
        if ( (unsigned int)v45 >= *(_DWORD *)(v47 + 20) )
LABEL_129:
          v48 = 0LL;
        else
          v48 = *(REGION **)(*(_QWORD *)(**(_QWORD **)(v47 + 24) + 8 * (v45 >> 8)) + 16LL * (unsigned __int8)v45 + 8);
        if ( v48 != v20 )
          v42 = 0LL;
        v22 = *(_QWORD *)(v42 + 16);
        if ( v22 )
        {
          v49 = bPEBCacheHandle(2LL, v22, v42, &v63, v66);
          v20 = v66[0];
          v50 = v49;
          if ( v49 )
            goto LABEL_71;
        }
        else
        {
          v50 = 0;
        }
        HANDLELOCK::vUnlock((HANDLELOCK *)&v63);
LABEL_71:
        if ( v64 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v63);
        if ( v50 )
          goto LABEL_74;
      }
LABEL_88:
      if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v66) )
      {
        REGION::vDeleteREGION(v66[0]);
        v66[0] = 0LL;
        v20 = 0LL;
        if ( v22 )
          HmgFreeObjectAttr(v22);
LABEL_74:
        v51 = 1;
LABEL_75:
        if ( !v67 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v66);
        if ( v20 )
          _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
        return v51;
      }
      v20 = v66[0];
LABEL_99:
      v51 = 0;
      goto LABEL_75;
    }
    v54 = *(_DWORD *)v31;
    v55 = gpHandleManager;
    v56 = GdiHandleManager::DecodeIndex(gpHandleManager, v54 & 0xFFFFFF);
    v57 = *((_QWORD *)v55 + 2);
    v58 = v56;
    v59 = *(_DWORD *)(v57 + 2056);
    if ( v56 >= v59 + ((*(unsigned __int16 *)(v57 + 2) + 0xFFFF) << 16) )
      goto LABEL_122;
    v60 = ((v56 - v59) >> 16) + 1;
    if ( v56 < v59 )
      v60 = 0LL;
    v61 = *(_QWORD *)(v57 + 8 * v60 + 8);
    if ( (_DWORD)v60 )
      v58 = ((1 - (_DWORD)v60) << 16) - v59 + v56;
    if ( (unsigned int)v58 >= *(_DWORD *)(v61 + 20) )
LABEL_122:
      v62 = 0LL;
    else
      v62 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v61 + 24) + 8 * (v58 >> 8)) + 16LL * (unsigned __int8)v58 + 8);
    if ( !*(_WORD *)(v62 + 12) || (v20 = v66[0], *(struct _KTHREAD **)(v62 + 16) != KeGetCurrentThread()) )
    {
LABEL_125:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v63);
      if ( !v64 )
        goto LABEL_88;
    }
    v31 = v63;
    goto LABEL_49;
  }
  if ( !a1 )
    return 0;
  return v6;
}
