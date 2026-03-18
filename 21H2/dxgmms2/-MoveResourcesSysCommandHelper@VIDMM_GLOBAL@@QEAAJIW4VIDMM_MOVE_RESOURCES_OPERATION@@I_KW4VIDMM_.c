/*
 * XREFs of ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C00D8710
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x1C002DCD4 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D6564 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D84EC (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00ED324 (-TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x1C00ED434 (-TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::MoveResourcesSysCommandHelper(
        VIDMM_GLOBAL *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned __int64 a5,
        int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9)
{
  __int64 v11; // rdi
  VIDMM_SEGMENT *v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // r12
  int v18; // ebp
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  VIDMM_SEGMENT *v22; // rdi
  unsigned __int64 ActiveVprEnd; // rbx
  __int64 v24; // rcx
  void (__fastcall *v25)(VIDMM_SEGMENT *, unsigned __int64, _QWORD); // rax
  unsigned __int64 v26; // rdx
  __int64 v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+60h] [rbp-38h] BYREF
  char v30; // [rsp+B0h] [rbp+18h] BYREF

  v29 = 0LL;
  v11 = a2;
  v30 = 0;
  if ( (unsigned int)(a3 - 3) <= 1 )
  {
    VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(a1);
    v17 = *((_QWORD *)a1 + 5028);
    v18 = 0;
    v19 = 1584 * v11;
    if ( !*(_DWORD *)(1584 * v11 + v17 + 24) )
      return 0;
    while ( 1 )
    {
      v20 = *((_QWORD *)a1 + 464);
      v21 = (unsigned int)(v18 + *(_DWORD *)(v19 + *((_QWORD *)a1 + 5028) + 20));
      v22 = *(VIDMM_SEGMENT **)(v20 + 8 * v21);
      if ( a3 == 3 )
      {
        VIDMM_SEGMENT::TrimAllMarkedForEvictionAllocations(*(VIDMM_SEGMENT **)(v20 + 8 * v21));
        if ( (*((_BYTE *)v22 + 82) & 1) == 0 )
        {
          v25 = *(void (__fastcall **)(VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)v22 + 128LL);
LABEL_13:
          v26 = 0LL;
          goto LABEL_14;
        }
        ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(v22);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 128LL))(v24, 0LL);
        v25 = *(void (__fastcall **)(VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)v22 + 128LL);
      }
      else
      {
        if ( (*((_BYTE *)v22 + 82) & 1) == 0 )
        {
          v25 = *(void (__fastcall **)(VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)v22 + 136LL);
          goto LABEL_13;
        }
        ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(*(VIDMM_SEGMENT **)(v20 + 8 * v21));
        (*(void (__fastcall **)(VIDMM_SEGMENT *, _QWORD))(*(_QWORD *)v22 + 136LL))(v22, 0LL);
        v25 = *(void (__fastcall **)(VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)v22 + 136LL);
      }
      v26 = ActiveVprEnd;
LABEL_14:
      v25(v22, v26, *((_QWORD *)v22 + 6));
      if ( (unsigned int)++v18 >= *(_DWORD *)(v19 + v17 + 24) )
        return 0;
    }
  }
  v13 = *(VIDMM_SEGMENT **)(*((_QWORD *)a1 + 464) + 8LL * a4);
  a5 = *((_QWORD *)v13 + 6);
  VIDMM_SEGMENT::TrimMarkedForEvictionAllocations(v13, &a5);
  v15 = VIDMM_GLOBAL::MoveResources(a1, v14, a3, a4, v28, a6, a7, a8, a9, &v30, (__int64)&v29);
  v16 = v15;
  if ( v15 < 0 )
    WdLogSingleEntry1(3LL, v15);
  return v16;
}
