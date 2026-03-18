/*
 * XREFs of NtGdiDeleteObjectApp @ 0x1C0092CA0
 * Callers:
 *     <none>
 * Callees:
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C001BDC0 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0081030 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0085F30 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0086240 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C008B200 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C00919A4 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0091F88 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C00932A0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     bDeleteDCInternalEx @ 0x1C0093960 (bDeleteDCInternalEx.c)
 *     bDeleteBrush @ 0x1C00C08E0 (bDeleteBrush.c)
 *     HmgFreeObjectAttr @ 0x1C00C0D68 (HmgFreeObjectAttr.c)
 *     bDeletePalette @ 0x1C00C0ED0 (bDeletePalette.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CF18C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0150430 (McTemplateK0pz_EtwWriteTransfer.c)
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
  __int64 v24; // rcx
  GdiHandleManager *v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // r14
  unsigned int v28; // r12d
  unsigned int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // rcx
  unsigned int v34; // ecx
  char v35; // al
  GdiHandleManager *v36; // r14
  unsigned int v37; // eax
  __int64 v38; // rsi
  unsigned int v39; // r9d
  unsigned int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // r10
  __int64 v43; // rbx
  unsigned int v44; // eax
  unsigned int v45; // r8d
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r9
  REGION *v49; // rdx
  int v50; // eax
  int v51; // ebx
  unsigned int v52; // ebx
  int v53; // edi
  int v54; // edi
  int v55; // edx
  GdiHandleManager *v56; // rbx
  unsigned int v57; // eax
  __int64 v58; // r9
  unsigned __int64 v59; // rdx
  unsigned int v60; // r8d
  __int64 v61; // rcx
  __int64 v62; // r10
  __int64 v63; // rdx
  __int64 v64; // [rsp+38h] [rbp-19h] BYREF
  int v65; // [rsp+40h] [rbp-11h]
  int v66; // [rsp+44h] [rbp-Dh]
  REGION *v67[2]; // [rsp+50h] [rbp-1h] BYREF
  int v68; // [rsp+60h] [rbp+Fh]
  __int64 v69; // [rsp+B8h] [rbp+67h]
  __int64 v70; // [rsp+C8h] [rbp+77h] BYREF
  __int64 v71; // [rsp+D0h] [rbp+7Fh] BYREF

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
        v53 = v12 - 3;
        if ( v53 )
        {
          v54 = v53 - 2;
          if ( v54 )
          {
            if ( v54 == 6 )
              return bDeleteBrush((HBRUSH)a1);
            else
              return 0LL;
          }
          else
          {
            if ( qword_1C0251160 )
              return (unsigned int)qword_1C0251160(a1, 0LL);
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
          ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(v13, (unsigned int)&LockAcquireShared, v8, (__int64)ghsemDynamicModeChange);
        v70 = HmgShareLockCheckIgnoreStockBit((unsigned int)a1, 5);
        if ( v70 )
        {
          v14 = SURFREF::bDeleteSurface(&v70, 0LL, 0LL);
          v16 = v70;
          v17 = v14;
          if ( v70 )
            HmgDecrementShareReferenceCountEx(v70, 0LL);
          v5 = v17;
        }
        else
        {
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v70);
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
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v67, (HRGN)a1, 0);
    v20 = v67[0];
    if ( !v67[0] || *((_DWORD *)v67[0] + 8) )
      goto LABEL_99;
    v21 = *(_QWORD *)v67[0];
    v22 = 0LL;
    v71 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v71);
    if ( !IsThreadCrossSessionAttached(v24)
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v70 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v70 = 0LL;
    }
    v25 = gpHandleManager;
    v65 = 1;
    v26 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)gpHandleManager,
            (unsigned __int16)v21 | ((unsigned int)v21 >> 8) & 0xFF0000);
    v27 = *((_QWORD *)v25 + 2);
    v28 = v26;
    v29 = *(_DWORD *)(v27 + 2056);
    if ( v26 >= v29 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16) )
      goto LABEL_130;
    v30 = ((v26 - v29) >> 16) + 1;
    if ( v26 < v29 )
      v30 = 0LL;
    v31 = *(_QWORD *)(v27 + 8 * v30 + 8);
    if ( (_DWORD)v30 )
      v28 = ((1 - (_DWORD)v30) << 16) - v29 + v26;
    v32 = 0LL;
    if ( v28 < *(_DWORD *)(v31 + 20) )
    {
      v69 = *(_QWORD *)(**(_QWORD **)(v31 + 24) + 8 * ((unsigned __int64)v28 >> 8)) + 16LL * (unsigned __int8)v28;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v69, 0LL);
      if ( GdiHandleEntryTable::GetEntryObject((GdiHandleEntryTable *)v31, v28) )
      {
        v33 = 24LL * v28;
        *(_DWORD *)(v33 + *(_QWORD *)v31 + 8) |= 1u;
        v32 = v33 + *(_QWORD *)v31;
      }
      else
      {
        ExReleasePushLockExclusiveEx(v69, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    v64 = v32;
    if ( !v32 )
    {
LABEL_130:
      KeLeaveCriticalRegion();
      goto LABEL_88;
    }
    _m_prefetchw((const void *)(v32 + 8));
    v66 = *(_DWORD *)(v32 + 8);
    v34 = v66 & 0xFFFFFFFE;
    if ( (v66 & 0xFFFFFFFE) != (v71 & 0xFFFFFFFC) && v34 && (!v70 || v34 != *(_DWORD *)(v70 + 8)) )
      goto LABEL_125;
    v35 = *(_BYTE *)(v32 + 15);
    if ( (v35 & 0x20) != 0 )
      goto LABEL_125;
    if ( (v35 & 0x40) == 0 )
    {
LABEL_49:
      if ( *(_BYTE *)(v32 + 14) != 4 || *(_WORD *)(v32 + 12) != WORD1(v21) )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v64);
      if ( v65 )
      {
        v36 = gpHandleManager;
        v37 = GdiHandleManager::DecodeIndex(
                (GdiHandleEntryDirectory **)gpHandleManager,
                (unsigned __int16)*(_DWORD *)v20 | (*(_DWORD *)v20 >> 8) & 0xFF0000u);
        v38 = *((_QWORD *)v36 + 2);
        v39 = v37;
        v40 = *(_DWORD *)(v38 + 2056);
        if ( v37 >= v40 + ((*(unsigned __int16 *)(v38 + 2) + 0xFFFF) << 16) )
        {
          v43 = 0LL;
        }
        else
        {
          v41 = ((v37 - v40) >> 16) + 1;
          if ( v37 < v40 )
            v41 = 0LL;
          v42 = *(_QWORD *)(v38 + 8 * v41 + 8);
          if ( (_DWORD)v41 )
            v37 += ((1 - (_DWORD)v41) << 16) - v40;
          v43 = 0LL;
          if ( v37 < *(_DWORD *)(v42 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v42 + 24) + 8 * ((unsigned __int64)v37 >> 8))
                         + 16LL * (unsigned __int8)v37
                         + 8) )
          {
            v43 = *(_QWORD *)v42 + 24LL * v37;
          }
        }
        v44 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v36, v39);
        v45 = *(_DWORD *)(v38 + 2056);
        v46 = v44;
        if ( v44 >= v45 + ((*(unsigned __int16 *)(v38 + 2) + 0xFFFF) << 16) )
          goto LABEL_129;
        v47 = ((v44 - v45) >> 16) + 1;
        if ( v44 < v45 )
          v47 = 0LL;
        v48 = *(_QWORD *)(v38 + 8 * v47 + 8);
        if ( (_DWORD)v47 )
          v46 = ((1 - (_DWORD)v47) << 16) - v45 + v44;
        if ( (unsigned int)v46 >= *(_DWORD *)(v48 + 20) )
LABEL_129:
          v49 = 0LL;
        else
          v49 = *(REGION **)(*(_QWORD *)(**(_QWORD **)(v48 + 24) + 8 * (v46 >> 8)) + 16LL * (unsigned __int8)v46 + 8);
        if ( v49 != v20 )
          v43 = 0LL;
        v22 = *(_QWORD *)(v43 + 16);
        if ( v22 )
        {
          v50 = bPEBCacheHandle(2LL, v22, v43, &v64, v67);
          v20 = v67[0];
          v51 = v50;
          if ( v50 )
            goto LABEL_71;
        }
        else
        {
          v51 = 0;
        }
        HANDLELOCK::vUnlock((HANDLELOCK *)&v64);
LABEL_71:
        if ( v65 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v64);
        if ( v51 )
          goto LABEL_74;
      }
LABEL_88:
      if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v67) )
      {
        REGION::vDeleteREGION(v67[0]);
        v67[0] = 0LL;
        v20 = 0LL;
        if ( v22 )
          HmgFreeObjectAttr(v22);
LABEL_74:
        v52 = 1;
LABEL_75:
        if ( !v68 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v67);
        if ( v20 )
          _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
        return v52;
      }
      v20 = v67[0];
LABEL_99:
      v52 = 0;
      goto LABEL_75;
    }
    v55 = *(_DWORD *)v32;
    v56 = gpHandleManager;
    v57 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v55 & 0xFFFFFF);
    v58 = *((_QWORD *)v56 + 2);
    v59 = v57;
    v60 = *(_DWORD *)(v58 + 2056);
    if ( v57 >= v60 + ((*(unsigned __int16 *)(v58 + 2) + 0xFFFF) << 16) )
      goto LABEL_122;
    v61 = ((v57 - v60) >> 16) + 1;
    if ( v57 < v60 )
      v61 = 0LL;
    v62 = *(_QWORD *)(v58 + 8 * v61 + 8);
    if ( (_DWORD)v61 )
      v59 = ((1 - (_DWORD)v61) << 16) - v60 + v57;
    if ( (unsigned int)v59 >= *(_DWORD *)(v62 + 20) )
LABEL_122:
      v63 = 0LL;
    else
      v63 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v62 + 24) + 8 * (v59 >> 8)) + 16LL * (unsigned __int8)v59 + 8);
    if ( !*(_WORD *)(v63 + 12) || (v20 = v67[0], *(struct _KTHREAD **)(v63 + 16) != KeGetCurrentThread()) )
    {
LABEL_125:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v64);
      if ( !v65 )
        goto LABEL_88;
    }
    v32 = v64;
    goto LABEL_49;
  }
  if ( !a1 )
    return 0;
  return v6;
}
