/*
 * XREFs of EngUnlockSurface @ 0x1C00878E0
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0145200 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z @ 0x1C008A230 (-ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008D624 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __stdcall EngUnlockSurface(SURFOBJ *pso)
{
  _DWORD *v1; // rbx
  unsigned int hsurf; // esi
  PVOID *p_pvScan0; // rdi
  GdiHandleManager *v4; // r13
  char *v5; // r15
  unsigned int v6; // ebp
  unsigned int v7; // eax
  __int64 v8; // r14
  struct _ENTRY *Entry; // rax
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // edx
  _DWORD *v17; // rsi
  char v18; // al
  PVOID v19; // rdx
  __int64 v20; // rcx
  GdiHandleEntryDirectory **v21; // rdi
  unsigned int v22; // eax
  GdiHandleEntryDirectory *v23; // r9
  unsigned __int64 v24; // rdx
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // [rsp+30h] [rbp-48h] BYREF
  int v30; // [rsp+38h] [rbp-40h]

  if ( pso )
  {
    v1 = 0LL;
    hsurf = (unsigned int)pso->hsurf;
    p_pvScan0 = &pso[-1].pvScan0;
    v4 = gpHandleManager;
    v5 = 0LL;
    v6 = (unsigned __int16)hsurf | (hsurf >> 8) & 0xFF0000;
    v7 = GdiHandleManager::DecodeIndex(gpHandleManager, v6);
    v8 = *((_QWORD *)v4 + 2);
    Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v8, v7, 0);
    if ( Entry )
    {
      if ( *((_BYTE *)Entry + 14) == 5 && *((_WORD *)Entry + 6) == HIWORD(hsurf) )
      {
        v10 = GdiHandleManager::DecodeIndex(v4, v6);
        v11 = *(_DWORD *)(v8 + 2056);
        v12 = v10;
        if ( v10 < v11 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
        {
          v13 = ((v10 - v11) >> 16) + 1;
          if ( v10 < v11 )
            v13 = 0LL;
          v14 = *(_QWORD *)(v8 + 8 * v13 + 8);
          if ( (_DWORD)v13 )
            v12 = ((1 - (_DWORD)v13) << 16) - v11 + v10;
          if ( (unsigned int)v12 < *(_DWORD *)(v14 + 20) )
            v5 = *(char **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
        }
      }
    }
    if ( p_pvScan0 == (PVOID *)v5 )
    {
      v15 = *(_DWORD *)p_pvScan0;
      v16 = *(_DWORD *)p_pvScan0;
      v29 = 0LL;
      v30 = 0;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v29, (unsigned __int16)v15 | (v16 >> 8) & 0xFF0000, 0, 0, 1);
      if ( v30 )
      {
        v17 = (_DWORD *)v29;
        v18 = *(_BYTE *)(v29 + 14);
        if ( v18 == 5 )
        {
          v19 = p_pvScan0[85];
          v20 = 0LL;
        }
        else
        {
          if ( v18 != 16 )
            goto LABEL_17;
          v19 = p_pvScan0[17];
          v20 = 2LL;
        }
        TrackObjectReferenceDecrement(v20, v19);
LABEL_17:
        --*((_DWORD *)p_pvScan0 + 2);
        v21 = (GdiHandleEntryDirectory **)gpHandleManager;
        v22 = GdiHandleManager::DecodeIndex(gpHandleManager, *v17 & 0xFFFFFF);
        v23 = v21[2];
        v24 = v22;
        v25 = *((_DWORD *)v23 + 514);
        if ( v22 < v25 + ((*((unsigned __int16 *)v23 + 1) + 0xFFFF) << 16) )
        {
          v26 = ((v22 - v25) >> 16) + 1;
          if ( v22 < v25 )
            v26 = 0LL;
          v27 = *((_QWORD *)v23 + v26 + 1);
          if ( (_DWORD)v26 )
            v24 = ((1 - (_DWORD)v26) << 16) - v25 + (unsigned int)v24;
          if ( (unsigned int)v24 < *(_DWORD *)(v27 + 20) )
            v1 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * (v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8);
        }
        v28 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v21, (unsigned __int16)*v1 | (*v1 >> 8) & 0xFF0000);
        GdiHandleEntryDirectory::ReleaseEntryLock(v21[2], v28);
        KeLeaveCriticalRegion();
      }
    }
  }
}
