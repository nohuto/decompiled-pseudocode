/*
 * XREFs of ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B2B5C
 * Callers:
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C00B2D94 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B3650 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 * Callees:
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x1C0023798 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0083600 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00C7D40 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C8D78 (-MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00CB01C (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::MoveResources(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        void *a10,
        __int64 a11)
{
  char v11; // si
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rdx
  bool v18; // r15
  _QWORD *v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r8
  unsigned __int64 ActiveVprEnd; // rax
  int v23; // edx
  __int64 v24; // rax

  v11 = 1;
  v14 = *(_QWORD *)(*((_QWORD *)a1 + 464) + 8LL * a4);
  v15 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 2560LL);
  v16 = *(unsigned int *)(v14 + 380);
  v17 = 360 * v16;
  v18 = (*(_DWORD *)(v15 + 360 * v16 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v15 + 360 * v16 + 16) & 8) != 0 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, v16, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(a1, v16);
  }
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v20 = a7;
      VIDMM_SEGMENT::MoveResourcesForAllocationPlacement(v14, v17, a7, a8, a9, a10, a11);
    }
    else
    {
      if ( g_IsInternalRelease )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v17);
        v19[5] = 0LL;
        v19[6] = 0LL;
        v19[7] = 0LL;
        v19[3] = 270LL;
        v19[4] = 9LL;
        WdLogEvent5_WdCriticalError(v19);
      }
      v20 = a7;
    }
  }
  else
  {
    v21 = a8;
    v20 = a7;
    if ( !a8 && !a7 && a6 )
    {
      ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd((VIDMM_SEGMENT *)v14);
      if ( v23 == 1 )
      {
        v20 = 0LL;
      }
      else if ( v23 == 2 )
      {
        v20 = v21;
        v21 = ActiveVprEnd;
      }
      else
      {
        v21 = *(_QWORD *)(v14 + 48);
        v20 = ActiveVprEnd;
      }
    }
    VIDMM_SEGMENT::DefragmentResourcesOverRange(v14, v20, v21, a9, a10, a11);
  }
  if ( v18 )
  {
    if ( *(_DWORD *)(v14 + 412) == 1 )
      v24 = *(_QWORD *)(v14 + 416);
    else
      v24 = *(_QWORD *)(v14 + 384);
    if ( v20 != v24 || v20 == VIDMM_SEGMENT::GetActiveVprEnd((VIDMM_SEGMENT *)v14) )
      v11 = 0;
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, v16, 0, 0LL, 0LL, 0, v11);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(a1, v16);
  }
  return VIDMM_SEGMENT::UpdateActiveVPRAfterMove((VIDMM_SEGMENT *)v14);
}
