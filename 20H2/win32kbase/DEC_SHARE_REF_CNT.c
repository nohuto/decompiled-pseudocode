/*
 * XREFs of DEC_SHARE_REF_CNT @ 0x1C00440A0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003DE00 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2190 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1C00CEC74 (-DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00CFCA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D0920 (GreRestoreDCInternal.c)
 * Callees:
 *     ?ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z @ 0x1C0044820 (-ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00475B4 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall DEC_SHARE_REF_CNT(unsigned int *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx
  _DWORD *v4; // rdi
  unsigned int v5; // ebp
  _DWORD *v6; // r14
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  GdiHandleEntryDirectory **v10; // rbx
  unsigned int v11; // eax
  GdiHandleEntryDirectory *v12; // r8
  unsigned __int64 v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  int v20; // [rsp+38h] [rbp-20h]

  v1 = *a1;
  v3 = *a1;
  v4 = 0LL;
  v19 = 0LL;
  v20 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v19, (unsigned __int16)v1 | (v3 >> 8) & 0xFF0000, 0, 0, 1);
  if ( !v20 )
    return 0LL;
  v5 = a1[2];
  v6 = (_DWORD *)v19;
  v7 = *(_BYTE *)(v19 + 14);
  if ( v7 == 5 )
  {
    v8 = *((_QWORD *)a1 + 85);
    v9 = 0LL;
  }
  else
  {
    if ( v7 != 16 )
      goto LABEL_5;
    v8 = *((_QWORD *)a1 + 17);
    v9 = 2LL;
  }
  TrackObjectReferenceDecrement(v9, v8);
LABEL_5:
  --a1[2];
  v10 = (GdiHandleEntryDirectory **)gpHandleManager;
  v11 = GdiHandleManager::DecodeIndex(gpHandleManager, *v6 & 0xFFFFFF);
  v12 = v10[2];
  v13 = v11;
  v14 = *((_DWORD *)v12 + 514);
  if ( v11 < v14 + ((*((unsigned __int16 *)v12 + 1) + 0xFFFF) << 16) )
  {
    v15 = ((v11 - v14) >> 16) + 1;
    if ( v11 < v14 )
      v15 = 0LL;
    v16 = *((_QWORD *)v12 + v15 + 1);
    if ( (_DWORD)v15 )
      v13 = ((1 - (_DWORD)v15) << 16) - v14 + (unsigned int)v13;
    if ( (unsigned int)v13 < *(_DWORD *)(v16 + 20) )
      v4 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
  }
  v17 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v10, (unsigned __int16)*v4 | (*v4 >> 8) & 0xFF0000);
  GdiHandleEntryDirectory::ReleaseEntryLock(v10[2], v17);
  KeLeaveCriticalRegion();
  return v5;
}
