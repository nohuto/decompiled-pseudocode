/*
 * XREFs of EngLockSurface @ 0x1C008D410
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C0145A80 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C001BDC0 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgIncrementShareReferenceCount @ 0x1C0087570 (HmgIncrementShareReferenceCount.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C008B230 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008D624 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C0151198 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

SURFOBJ *__stdcall EngLockSurface(HSURF hsurf)
{
  int *v1; // rax
  int *v2; // rbx
  SURFOBJ *v3; // rbp
  int v4; // edx
  int v5; // eax
  int *v6; // rsi
  char v7; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v8; // rdx
  int v9; // edx
  GdiHandleManager *v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // r10
  _DWORD *v17; // rdx
  unsigned int v18; // ebx
  unsigned int v19; // eax
  __int64 v20; // rsi
  unsigned int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+38h] [rbp-30h]
  unsigned int v27; // [rsp+78h] [rbp+10h] BYREF
  struct GdiHandleEntryTable *v28; // [rsp+80h] [rbp+18h] BYREF

  v1 = (int *)HmgShareLockCheckIgnoreStockBit((unsigned int)hsurf, 5);
  v2 = v1;
  if ( !v1 )
    return 0LL;
  HmgIncrementShareReferenceCount(v1);
  v3 = (SURFOBJ *)(v2 + 6);
  v4 = ((unsigned int)*v2 >> 8) & 0xFF0000;
  v5 = (unsigned __int16)*v2;
  v25 = 0LL;
  v26 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, v5 | v4, 0, 0, 1);
  if ( !v26 )
    return (SURFOBJ *)(v2 + 6);
  v6 = (int *)v25;
  v7 = *(_BYTE *)(v25 + 14);
  if ( v7 == 5 )
  {
    v8 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v2 + 85);
    if ( v8 && qword_1C02473D8 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C02473D8, v8, 0);
  }
  else if ( v7 == 16 )
  {
    TrackObjectReferenceDecrement(2LL, *((_QWORD *)v2 + 17));
  }
  --v2[2];
  v9 = *v6;
  v10 = gpHandleManager;
  v11 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v9 & 0xFFFFFF);
  v12 = *((_QWORD *)v10 + 2);
  v13 = v11;
  v14 = *(_DWORD *)(v12 + 2056);
  if ( v11 >= v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
    goto LABEL_24;
  v15 = ((v11 - v14) >> 16) + 1;
  if ( v11 < v14 )
    v15 = 0LL;
  v16 = *(_QWORD *)(v12 + 8 * v15 + 8);
  if ( (_DWORD)v15 )
    v13 = ((1 - (_DWORD)v15) << 16) - v14 + v11;
  if ( (unsigned int)v13 >= *(_DWORD *)(v16 + 20) )
LABEL_24:
    v17 = 0LL;
  else
    v17 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
  v18 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v10, (unsigned __int16)*v17 | (*v17 >> 8) & 0xFF0000u);
  v19 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v10, v18);
  v20 = *((_QWORD *)v10 + 2);
  GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex((GdiHandleEntryDirectory *)v20, v19, &v28, &v27);
  v21 = *(_DWORD *)(v20 + 2056);
  if ( v18 < v21 + ((*(unsigned __int16 *)(v20 + 2) + 0xFFFF) << 16) )
  {
    v22 = ((v18 - v21) >> 16) + 1;
    if ( v18 < v21 )
      v22 = 0LL;
    v23 = *(_QWORD *)(v20 + 8 * v22 + 8);
    if ( (_DWORD)v22 )
      v18 += ((1 - (_DWORD)v22) << 16) - v21;
    *(_DWORD *)(*(_QWORD *)v23 + 24LL * v18 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * ((unsigned __int64)v18 >> 8)) + 16LL * (unsigned __int8)v18,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v3;
}
