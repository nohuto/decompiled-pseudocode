/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008CC7C
 * Callers:
 *     GreCopyVisRgn @ 0x1C0016B90 (GreCopyVisRgn.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0017398 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C001743C (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreSetDCOrg @ 0x1C00178A0 (GreSetDCOrg.c)
 *     GreMarkDCUnreadable @ 0x1C0050C48 (GreMarkDCUnreadable.c)
 *     DestroyCacheDC @ 0x1C006C4F0 (DestroyCacheDC.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     GreValidateVisrgn @ 0x1C008CBA0 (GreValidateVisrgn.c)
 *     GreSelectVisRgn @ 0x1C008CC10 (GreSelectVisRgn.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0090510 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIsRendering @ 0x1C0090860 (GreIsRendering.c)
 *     GreGetDCOrgEx @ 0x1C00B48E0 (GreGetDCOrgEx.c)
 *     GreSelectVisRgnShared @ 0x1C00C7530 (GreSelectVisRgnShared.c)
 *     GreIntersectVisRect @ 0x1C0155C90 (GreIntersectVisRect.c)
 * Callees:
 *     bDeleteDCInternalEx @ 0x1C006D2D0 (bDeleteDCInternalEx.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008034C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C0083090 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall XDCOBJ::vAltUnlockFast(XDCOBJ *this)
{
  __int64 v1; // rdi
  HDC v2; // rbp
  _DWORD *v3; // r14
  char v4; // al
  int v5; // esi
  GdiHandleManager *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // r9
  _DWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // r9
  unsigned int v16; // edx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  GdiHandleEntryTable *v19; // r9
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // [rsp+30h] [rbp-28h] BYREF
  int v23; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)this;
  v22 = 0LL;
  v23 = 0;
  v2 = *(HDC *)v1;
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v22,
    (unsigned __int16)*(_QWORD *)v1 | ((unsigned int)*(_QWORD *)v1 >> 8) & 0xFF0000,
    0,
    0,
    1);
  if ( !v23 )
    return;
  v3 = (_DWORD *)v22;
  v4 = *(_BYTE *)(v22 + 14);
  v5 = (*(unsigned __int8 *)(v22 + 15) >> 3) & 1;
  if ( v4 == 5 )
  {
    v20 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v1 + 680);
    v21 = 0;
  }
  else
  {
    if ( v4 != 16 )
      goto LABEL_4;
    v20 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v1 + 136);
    v21 = 2;
  }
  TrackObjectReferenceDecrement(v21, v20);
LABEL_4:
  --*(_DWORD *)(v1 + 8);
  v6 = gpHandleManager;
  v7 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v3 & 0xFFFFFF);
  v8 = *((_QWORD *)v6 + 2);
  v9 = v7;
  v10 = *(_DWORD *)(v8 + 2056);
  if ( v7 >= v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
    goto LABEL_23;
  if ( v7 >= v10 )
    v11 = ((v7 - v10) >> 16) + 1;
  else
    v11 = 0LL;
  v12 = *(_QWORD *)(v8 + 8 * v11 + 8);
  if ( (_DWORD)v11 )
    v9 = ((1 - (_DWORD)v11) << 16) - v10 + v7;
  if ( (unsigned int)v9 >= *(_DWORD *)(v12 + 20) )
LABEL_23:
    v13 = 0LL;
  else
    v13 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
  v14 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v6, (unsigned __int16)*v13 | (*v13 >> 8) & 0xFF0000u);
  v15 = *((_QWORD *)v6 + 2);
  v16 = v14;
  v17 = *(_DWORD *)(v15 + 2056);
  if ( v14 < v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
  {
    if ( v14 >= v17 )
      v18 = ((v14 - v17) >> 16) + 1;
    else
      v18 = 0LL;
    v19 = *(GdiHandleEntryTable **)(v15 + 8 * v18 + 8);
    if ( (_DWORD)v18 )
      v16 = ((1 - (_DWORD)v18) << 16) - v17 + v14;
    GdiHandleEntryTable::ReleaseEntryLock(v19, v16);
  }
  KeLeaveCriticalRegion();
  if ( v5 )
    bDeleteDCInternalEx(v2, 0LL);
}
