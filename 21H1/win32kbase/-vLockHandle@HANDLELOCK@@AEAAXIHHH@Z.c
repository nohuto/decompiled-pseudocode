/*
 * XREFs of ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290
 * Callers:
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00063B0 (HmgShareLockCheckIgnoreStockBit.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C000FF20 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0017078 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C001758C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgLockIgnoreOwner @ 0x1C0017C00 (HmgLockIgnoreOwner.c)
 *     HmgShareUnlockRemoveObject @ 0x1C001D770 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkDeletable @ 0x1C0029BC0 (HmgMarkDeletable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0034898 (HmgShareLockIgnoreStockBit.c)
 *     HmgMarkUnXferable @ 0x1C0034FA0 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C0035800 (HmgMarkXferable.c)
 *     HmgUnlock @ 0x1C003F794 (HmgUnlock.c)
 *     HmgReplaceObject @ 0x1C00755D0 (HmgReplaceObject.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0079A60 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C008030C (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0080370 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00804F0 (HmgIncrementShareReferenceCount.c)
 *     INC_SHARE_REF_CNT @ 0x1C00806A0 (INC_SHARE_REF_CNT.c)
 *     EngUnlockSurface @ 0x1C0080860 (EngUnlockSurface.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0080AA0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgShareLockEx @ 0x1C0080DE0 (HmgShareLockEx.c)
 *     GreGetBounds @ 0x1C00811F0 (GreGetBounds.c)
 *     HmgLock @ 0x1C00818B0 (HmgLock.c)
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0081D80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C0082180 (HmgDecrementExclusiveReferenceCountEx.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0082610 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C0083780 (HmgShareLock.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00854A0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     EngLockSurface @ 0x1C0086390 (EngLockSurface.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     HmgRemoveObject @ 0x1C00897F0 (HmgRemoveObject.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008CC7C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C008F8F0 (--1SURFMEM@@QEAA@XZ.c)
 *     GreSetBitmapOwnerEx @ 0x1C0091070 (GreSetBitmapOwnerEx.c)
 *     HmgSwapLockedHandleContents @ 0x1C009BE90 (HmgSwapLockedHandleContents.c)
 *     GreSetBrushOwner @ 0x1C00A8CA0 (GreSetBrushOwner.c)
 *     HmgMarkUndeletable @ 0x1C00A9F30 (HmgMarkUndeletable.c)
 *     HmgFree @ 0x1C00C3E20 (HmgFree.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0078 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0170 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0248 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0149400 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0083F70 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall HANDLELOCK::vLockHandle(HANDLELOCK *this, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v6; // rbp
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  GdiHandleManager *v15; // rdi
  __int64 v16; // rdi
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  int v23; // ecx
  unsigned int v24; // ecx
  int v25; // edx
  GdiHandleManager *v26; // rbx
  unsigned int v27; // eax
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v35; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v37; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]
  __int64 v39; // [rsp+30h] [rbp-38h]
  __int64 v40; // [rsp+70h] [rbp+8h]

  v6 = 0LL;
  v37 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v37);
  if ( (!(unsigned __int8)KeIsAttachedProcess(v11)
     || (CurrentProcess = PsGetCurrentProcess(v13, v12),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(v35),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v14 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v14 = 0LL;
  }
  *((_DWORD *)this + 2) = 1;
  v15 = gpHandleManager;
  if ( a2 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a2,
                                  1)
           + 13) == HIWORD(a2) )
        a2 = (unsigned __int16)a2;
    }
    else
    {
      a2 = (unsigned __int16)a2;
    }
  }
  v16 = *((_QWORD *)v15 + 2);
  v17 = *(_DWORD *)(v16 + 2056);
  if ( a2 >= v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
  {
    *(_QWORD *)this = 0LL;
LABEL_29:
    *((_DWORD *)this + 2) = 0;
    KeLeaveCriticalRegion();
    return;
  }
  v18 = ((a2 - v17) >> 16) + 1;
  if ( a2 < v17 )
    v18 = 0LL;
  v19 = *(_QWORD *)(v16 + 8 * v18 + 8);
  if ( (_DWORD)v18 )
    a2 += ((1 - (_DWORD)v18) << 16) - v17;
  v20 = 0LL;
  if ( a2 < *(_DWORD *)(v19 + 20) )
  {
    v39 = 16LL * (unsigned __int8)a2;
    v21 = *(_QWORD **)(v19 + 24);
    v38 = 8 * ((unsigned __int64)a2 >> 8);
    v40 = v39 + *(_QWORD *)(*v21 + v38);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v40, 0LL);
    if ( a2 < *(_DWORD *)(v19 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + v38) + v39 + 8) )
    {
      v22 = 24LL * a2;
      *(_DWORD *)(*(_QWORD *)v19 + v22 + 8) |= 1u;
      v20 = v22 + *(_QWORD *)v19;
    }
    else
    {
      ExReleasePushLockExclusiveEx(v40, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  *(_QWORD *)this = v20;
  if ( !v20 )
    goto LABEL_29;
  _m_prefetchw((const void *)(v20 + 8));
  v23 = *(_DWORD *)(v20 + 8);
  *((_DWORD *)this + 3) = v23;
  if ( !a4 )
  {
    if ( a3 )
    {
      v24 = v23 & 0xFFFFFFFE;
      if ( v24 != (v37 & 0xFFFFFFFC) && v24 && (!v14 || v24 != *(_DWORD *)(v14 + 8)) )
        goto LABEL_27;
    }
    if ( (*(_BYTE *)(v20 + 15) & 0x20) != 0 )
      goto LABEL_27;
  }
  if ( !a5 && (*(_BYTE *)(v20 + 15) & 0x40) != 0 )
  {
    v25 = *(_DWORD *)v20;
    v26 = gpHandleManager;
    v27 = GdiHandleManager::DecodeIndex(gpHandleManager, v25 & 0xFFFFFF);
    v28 = *((_QWORD *)v26 + 2);
    v29 = v27;
    v30 = *(_DWORD *)(v28 + 2056);
    if ( v27 < v30 + ((*(unsigned __int16 *)(v28 + 2) + 0xFFFF) << 16) )
    {
      v31 = ((v27 - v30) >> 16) + 1;
      if ( v27 < v30 )
        v31 = 0LL;
      v32 = *(_QWORD *)(v28 + 8 * v31 + 8);
      if ( (_DWORD)v31 )
        v29 = ((1 - (_DWORD)v31) << 16) - v30 + v27;
      if ( (unsigned int)v29 < *(_DWORD *)(v32 + 20) )
        v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v32 + 24) + 8 * (v29 >> 8)) + 16LL * (unsigned __int8)v29 + 8);
    }
    if ( !*(_WORD *)(v6 + 12) || *(struct _KTHREAD **)(v6 + 16) != KeGetCurrentThread() )
LABEL_27:
      HANDLELOCK::vUnlock(this);
  }
}
