/*
 * XREFs of HmgRemoveObject @ 0x1C00897F0
 * Callers:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C009AF68 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2860 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C007F600 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0080048 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C0082F10 (-ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0083120 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgRemoveObject(__int64 a1, int a2, int a3, int a4, char a5, _DWORD *a6)
{
  __int16 v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  _DWORD *v14; // rdi
  GdiHandleManager *v15; // r13
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned int v19; // r10d
  __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // edx
  GdiHandleManager *v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rax
  struct OBJECT *v30; // rdx
  int v31; // r8d
  __int64 v32; // rcx
  struct _ENTRY *EntryFromObject; // rax
  __int64 v35; // rdx
  int v36; // ecx
  int v37; // r8d
  _DWORD *v38; // [rsp+30h] [rbp-48h] BYREF
  int v39; // [rsp+38h] [rbp-40h]

  v8 = a2;
  v9 = a1;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v10 = 0LL;
  v38 = 0LL;
  v39 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v38, (unsigned __int16)v9 | (v9 >> 8) & 0xFF0000, 1, 0, 0);
  if ( !v39 )
  {
    GreReleaseHmgrSemaphore(v12, v11, v13);
    return 0LL;
  }
  v14 = v38;
  v15 = gpHandleManager;
  v16 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v38 & 0xFFFFFF);
  v17 = *((_QWORD *)v15 + 2);
  v18 = v16;
  v19 = *(_DWORD *)(v17 + 2056);
  if ( v16 < v19 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
  {
    v20 = ((v16 - v19) >> 16) + 1;
    if ( v16 < v19 )
      v20 = 0LL;
    v21 = *(_QWORD *)(v17 + 8 * v20 + 8);
    if ( (_DWORD)v20 )
      v18 = ((1 - (_DWORD)v20) << 16) - v19 + v16;
    if ( (unsigned int)v18 < *(_DWORD *)(v21 + 20) )
      v10 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * (v18 >> 8)) + 16LL * (unsigned __int8)v18 + 8);
  }
  if ( *((_BYTE *)v14 + 14) == a5 && *((_WORD *)v14 + 6) == HIWORD(v9) )
  {
    v22 = *(_DWORD *)(v10 + 8);
    if ( v22 == a3 && *(_WORD *)(v10 + 12) == v8 )
    {
      if ( a4 || (*((_BYTE *)v14 + 15) & 1) == 0 )
      {
        EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)v15, (struct OBJECT *)v10);
        TrackHmgrReferenceDecrement(*((_BYTE *)EntryFromObject + 14), (struct OBJECT *)v10);
        HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v38);
        if ( v39 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v38);
        GreReleaseHmgrSemaphore(v36, v35, v37);
        return v10;
      }
    }
    else
    {
      *((_BYTE *)v14 + 15) |= 8u;
      if ( a6 )
        *a6 = v22;
    }
  }
  v23 = gpHandleManager;
  v24 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v14 & 0xFFFFFF);
  v25 = *((_QWORD *)v23 + 2);
  v26 = v24;
  v27 = *(_DWORD *)(v25 + 2056);
  v28 = v27 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16);
  if ( v24 >= (unsigned int)v28 )
    goto LABEL_31;
  v28 = ((v24 - v27) >> 16) + 1;
  if ( v24 < v27 )
    v28 = 0LL;
  v29 = *(_QWORD *)(v25 + 8 * v28 + 8);
  if ( (_DWORD)v28 )
    v26 = ((1 - (_DWORD)v28) << 16) - v27 + (unsigned int)v26;
  if ( (unsigned int)v26 >= *(_DWORD *)(v29 + 20) )
  {
LABEL_31:
    v30 = 0LL;
  }
  else
  {
    v28 = 2LL * (unsigned __int8)v26;
    v30 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * (v26 >> 8)) + 16LL * (unsigned __int8)v26 + 8);
  }
  GdiHandleManager::ReleaseEntryLock((GdiHandleManager *)v28, v30);
  KeLeaveCriticalRegion();
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHmgr", (int)ghsemHmgr, v31);
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v32);
  }
  return 0LL;
}
