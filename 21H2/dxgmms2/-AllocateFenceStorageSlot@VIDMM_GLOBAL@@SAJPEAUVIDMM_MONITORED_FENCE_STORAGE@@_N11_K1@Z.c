/*
 * XREFs of ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x1C0099D3C
 * Callers:
 *     ?VidMmAllocateFenceStorageSlot@@YAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x1C0013FF0 (-VidMmAllocateFenceStorageSlot@@YAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
 *     VidSchCreateSyncObject @ 0x1C0099A90 (VidSchCreateSyncObject.c)
 * Callees:
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0001100 (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0014018 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
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
  __int64 v11; // r8
  KSPIN_LOCK *v12; // rcx
  __int64 result; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx

  if ( !DXGPROCESS::GetCurrent() )
  {
    v11 = 0LL;
LABEL_6:
    v10 = 0LL;
    goto LABEL_7;
  }
  v10 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
  if ( v10 )
    v10 = *(_QWORD *)(v10 + 8);
  v11 = v10;
  if ( !v10 || (*(_DWORD *)(*(_QWORD *)(v10 + 32) + 424LL) & 0x100) == 0 )
    goto LABEL_6;
LABEL_7:
  if ( !a4 && !a2 && !a3 && v11 )
  {
    v12 = *(KSPIN_LOCK **)(v11 + 40);
LABEL_12:
    if ( !*((_BYTE *)v12 + 64) )
    {
      LODWORD(result) = VIDMM_PROCESS_FENCE_STORAGE::AllocateFenceStorageSlot(v12, a1);
      goto LABEL_14;
    }
    goto LABEL_22;
  }
  if ( v10 && a2 && !a3 )
  {
    v15 = *(_QWORD *)(v11 + 32);
    v16 = *(_DWORD *)(v15 + 424);
    if ( (v16 & 0x100) != 0 )
      v17 = *(_QWORD *)(v15 + 608);
    else
      v17 = v15 & -(__int64)((v16 & 0x80u) != 0);
    v18 = *(_QWORD *)(v17 + 64);
    if ( v18 )
      v18 = *(_QWORD *)(v18 + 8);
    v12 = *(KSPIN_LOCK **)(v18 + 40);
    *((_BYTE *)v12 + 64) = 1;
    goto LABEL_22;
  }
  v12 = (KSPIN_LOCK *)VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage;
  if ( !a2 && !a3 )
    goto LABEL_12;
LABEL_22:
  LODWORD(result) = VIDMM_PROCESS_FENCE_STORAGE::AllocateSharedFenceStorageSlot(
                      v12,
                      a1,
                      (struct VIDMM_PROCESS *)(v10 & -(__int64)(a3 != 0)));
LABEL_14:
  if ( (int)result >= 0 )
  {
    v14 = (_QWORD *)*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 4) = a5;
    if ( a6 )
      *v14 = a5;
    else
      *(_DWORD *)v14 = a5;
  }
  return (unsigned int)result;
}
