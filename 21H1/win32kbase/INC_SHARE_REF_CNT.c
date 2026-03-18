/*
 * XREFs of INC_SHARE_REF_CNT @ 0x1C00806A0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00829C0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00CF550 (hbmSelectBitmapInternal.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C007FBF4 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0084160 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall INC_SHARE_REF_CNT(int *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  _DWORD *v4; // rdi
  char v5; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v6; // rdx
  unsigned int v7; // ecx
  GdiHandleManager *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // rdx
  unsigned int v16; // eax
  GdiHandleEntryDirectory *v17; // rcx
  unsigned __int8 v18; // r9
  struct GdiHandleEntryTable *v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // [rsp+30h] [rbp-28h] BYREF
  int v22; // [rsp+38h] [rbp-20h]
  unsigned int v23; // [rsp+60h] [rbp+8h] BYREF
  struct GdiHandleEntryTable *v24; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v2 = *a1;
  v21 = 0LL;
  v22 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v21, (unsigned __int16)v1 | (v2 >> 8) & 0xFF0000, 0, 0, 0);
  if ( !v22 )
    return;
  v4 = (_DWORD *)v21;
  v5 = *(_BYTE *)(v21 + 14);
  if ( v5 == 5 )
  {
    v6 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 85);
    v7 = 0;
LABEL_4:
    TrackObjectReferenceIncrement(v7, v6);
    goto LABEL_5;
  }
  if ( v5 == 16 )
  {
    v6 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 17);
    v7 = 2;
    goto LABEL_4;
  }
LABEL_5:
  ++a1[2];
  v8 = gpHandleManager;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, *v4 & 0xFFFFFF);
  v10 = *((_QWORD *)v8 + 2);
  v11 = v9;
  v12 = *(_DWORD *)(v10 + 2056);
  if ( v9 >= v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
    goto LABEL_18;
  v13 = ((v9 - v12) >> 16) + 1;
  if ( v9 < v12 )
    v13 = 0LL;
  v14 = *(_QWORD *)(v10 + 8 * v13 + 8);
  if ( (_DWORD)v13 )
    v11 = ((1 - (_DWORD)v13) << 16) - v12 + v9;
  if ( (unsigned int)v11 >= *(_DWORD *)(v14 + 20) )
LABEL_18:
    v15 = 0LL;
  else
    v15 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
  v16 = GdiHandleManager::DecodeIndex(v8, (unsigned __int16)*v15 | (*v15 >> 8) & 0xFF0000);
  v17 = (GdiHandleEntryDirectory *)*((_QWORD *)v8 + 2);
  v24 = 0LL;
  v23 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v17, v16, &v24, &v23) )
  {
    v18 = v23;
    v19 = v24;
    v20 = (unsigned __int64)v23 >> 8;
    *(_DWORD *)(*(_QWORD *)v24 + 24LL * v23 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(*(_QWORD *)(**((_QWORD **)v19 + 3) + 8 * v20) + 16LL * v18, 0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
}
