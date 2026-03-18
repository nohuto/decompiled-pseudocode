/*
 * XREFs of ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x1C0082298
 * Callers:
 *     ?VidMmAllocateFenceStorageSlot@@YAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x1C00118A0 (-VidMmAllocateFenceStorageSlot@@YAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
 *     VidSchCreateSyncObject @ 0x1C0081FE0 (VidSchCreateSyncObject.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001A10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C00118C8 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0015430 (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AllocateFenceStorageSlot(
        struct VIDMM_MONITORED_FENCE_STORAGE *a1,
        char a2,
        char a3,
        char a4,
        unsigned __int64 a5,
        bool a6)
{
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r9
  VIDMM_PROCESS_FENCE_STORAGE *v13; // rcx
  __int64 result; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rcx

  if ( DXGPROCESS::GetCurrent() && (v10 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
    v11 = *(_QWORD *)(v10 + 8);
  else
    v11 = 0LL;
  if ( v11 && (*(_BYTE *)(*(_QWORD *)(v11 + 32) + 347LL) & 0x20) != 0 )
    v12 = v11;
  else
    v12 = 0LL;
  if ( a4 || a2 || a3 || !v11 )
  {
    if ( v12 && a2 && !a3 )
    {
      v16 = *(_QWORD *)(v11 + 32);
      v17 = *(_BYTE *)(v16 + 347);
      if ( (v17 & 0x20) != 0 )
        v18 = *(_QWORD *)(v16 + 496);
      else
        v18 = v16 & -(__int64)((v17 & 0x10) != 0);
      v19 = *(_QWORD *)(v18 + 64);
      if ( v19 )
        v19 = *(_QWORD *)(v19 + 8);
      v13 = *(VIDMM_PROCESS_FENCE_STORAGE **)(v19 + 40);
      *((_BYTE *)v13 + 64) = 1;
    }
    else
    {
      v13 = (VIDMM_PROCESS_FENCE_STORAGE *)VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage;
    }
    if ( a2 || a3 )
      goto LABEL_22;
  }
  else
  {
    v13 = *(VIDMM_PROCESS_FENCE_STORAGE **)(v11 + 40);
  }
  if ( !*((_BYTE *)v13 + 64) )
  {
    LODWORD(result) = VIDMM_PROCESS_FENCE_STORAGE::AllocateFenceStorageSlot(v13, a1);
    goto LABEL_14;
  }
LABEL_22:
  LODWORD(result) = VIDMM_PROCESS_FENCE_STORAGE::AllocateSharedFenceStorageSlot(
                      (KSPIN_LOCK *)v13,
                      a1,
                      (struct VIDMM_PROCESS *)(v12 & -(__int64)(a3 != 0)));
LABEL_14:
  if ( (int)result >= 0 )
  {
    v15 = (_QWORD *)*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 4) = a5;
    if ( a6 )
      *v15 = a5;
    else
      *(_DWORD *)v15 = a5;
  }
  return (unsigned int)result;
}
