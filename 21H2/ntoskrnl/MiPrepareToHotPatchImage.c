/*
 * XREFs of MiPrepareToHotPatchImage @ 0x1408CD798
 * Callers:
 *     MiPerformImageHotPatch @ 0x1408CD024 (MiPerformImageHotPatch.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x140255B10 (RtlFindNextForwardRunClear.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     RtlSetAllBits @ 0x1402934B0 (RtlSetAllBits.c)
 *     RtlClearAllBits @ 0x1402F70D0 (RtlClearAllBits.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiCommitHotPatchTable @ 0x14053EB00 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EE0C (MiPrepareImagePagesForHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408CC9EC (MiMapHotPatchImageInSystemSpace.c)
 *     MiProcessHotPatchUndoTable @ 0x1408CDCD4 (MiProcessHotPatchUndoTable.c)
 *     RtlCheckCurrentPatchesApplied @ 0x14091ADA0 (RtlCheckCurrentPatchesApplied.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x14091AE08 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x14091AFF8 (RtlEnumerateHotPatchPatches.c)
 *     RtlFindHotPatchBase @ 0x14091B080 (RtlFindHotPatchBase.c)
 *     RtlHotPatchSynchronizationRequired @ 0x14091B1E4 (RtlHotPatchSynchronizationRequired.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPrepareToHotPatchImage(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // r14
  unsigned __int8 v6; // r15
  _RTL_BITMAP *Pool; // rax
  _RTL_BITMAP *v8; // rdx
  int v9; // esi
  unsigned int *v10; // r13
  _RTL_BITMAP *v11; // rdx
  int v12; // esi
  int v13; // r12d
  int v14; // r9d
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // r12d
  unsigned int v18; // r9d
  _BYTE *v19; // rax
  const void *v20; // rdx
  _RTL_BITMAP *v21; // rax
  _RTL_BITMAP *v22; // rcx
  int v23; // r9d
  ULONG i; // edx
  int v25; // r15d
  ULONG NextForwardRunClear; // eax
  ULONG v27; // r14d
  __int64 v28; // rcx
  int v30; // [rsp+38h] [rbp-E0h]
  _DWORD *v31; // [rsp+40h] [rbp-D8h]
  _DWORD v32[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-C0h]
  __int128 v34; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE *v35; // [rsp+70h] [rbp-A8h]
  _BYTE v36[152]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE *StartingRunIndex; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int8 v39; // [rsp+138h] [rbp+20h]

  StartingRunIndex = a3;
  v3 = a3;
  v34 = 0LL;
  memset(v36, 0, 0x60uLL);
  if ( v3 )
  {
    v6 = 0;
  }
  else
  {
    v3 = v36;
    StartingRunIndex = v36;
    v6 = 1;
  }
  v39 = v6;
  Pool = (_RTL_BITMAP *)MiAllocatePool(
                          256,
                          8 * ((unsigned int)((*(_DWORD *)(a1 + 32) & 0x3F000) != 0) + 2 + (*(_DWORD *)(a1 + 32) >> 18)),
                          0x20206D4Du);
  v8 = Pool;
  *(_QWORD *)(a1 + 48) = Pool;
  if ( Pool )
  {
    Pool->SizeOfBitMap = *(_DWORD *)(a1 + 32) >> 12;
    Pool->Buffer = &Pool[1].SizeOfBitMap;
    v8 = *(_RTL_BITMAP **)(a1 + 48);
  }
  if ( !v8 )
    return (unsigned int)-1073741670;
  RtlSetAllBits(v8);
  v10 = (unsigned int *)(v3 + 32);
  v35 = v3 + 32;
  *(_DWORD *)(a1 + 36) = 8 * *((_DWORD *)v3 + 8);
  if ( !a2 )
  {
    v11 = (_RTL_BITMAP *)MiAllocatePool(64, 8 * (((*v10 & 0x3F) != 0) + 2 + (*v10 >> 6)), 0x20206D4Du);
    *(_QWORD *)(a1 + 40) = v11;
    if ( v11 )
    {
      v11->SizeOfBitMap = *v10;
      v11->Buffer = &v11[1].SizeOfBitMap;
      v11 = *(_RTL_BITMAP **)(a1 + 40);
    }
    if ( !v11 )
      return (unsigned int)-1073741670;
    RtlClearAllBits(v11);
    MiProcessHotPatchUndoTable(a1, v3);
    v12 = 0;
    v13 = a2;
    goto LABEL_34;
  }
  v33 = a2 + *(unsigned int *)(RtlFindHotPatchBase(a2) + 24);
  v32[0] = 0;
  v31 = v32;
  v9 = RtlCountRequiredHotPatchAddressTableEntries(
         *(_QWORD *)(a1 + 8),
         *(_DWORD *)(a1 + 32),
         *(_DWORD *)(a1 + 32) + v14,
         a2,
         v33,
         v6);
  v32[1] = v9;
  if ( v9 < 0 )
    return (unsigned int)v9;
  v16 = *v10;
  if ( v32[0] )
  {
    v17 = v16 + v32[0];
    *(_DWORD *)(a1 + 36) = 8 * (v16 + v32[0]);
    v15 = ((8 * v17) >> 12) + (((8 * v17) & 0xFFF) != 0);
    LODWORD(StartingRunIndex) = v15;
    v18 = *((_DWORD *)v3 + 9);
    if ( (unsigned int)v15 > v18 )
    {
      if ( 8 * v17 + *(_DWORD *)(a1 + 32) > ((*(unsigned int *)(*(_QWORD *)a1 + 28LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)a1 + 33LL) << 32))
                                           - (*(unsigned int *)(*(_QWORD *)a1 + 24LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)a1 + 32LL) << 32))
                                           + 1) << 12 )
        return (unsigned int)-1073741671;
      v9 = MiCommitHotPatchTable(*(_QWORD *)a1, *(_QWORD *)(a1 + 24) + (v18 << 12), (unsigned int)v15 - v18);
      if ( v9 < 0 )
        return (unsigned int)v9;
      *((_DWORD *)v3 + 9) = (_DWORD)StartingRunIndex;
    }
  }
  else
  {
    v17 = *v10;
  }
  if ( !v6 )
  {
    if ( v17 > *v10 )
    {
      v19 = MiAllocatePool(256, 6 * v17, 0x48555048u);
      StartingRunIndex = v19;
      if ( !v19 )
        return (unsigned int)v9;
      v20 = (const void *)*((_QWORD *)v3 + 5);
      if ( v20 )
      {
        memmove(v19, v20, 6 * *v10);
        ExFreePoolWithTag(*((PVOID *)v3 + 5), 0);
        v19 = StartingRunIndex;
      }
      *((_QWORD *)v3 + 5) = v19;
    }
    v21 = (_RTL_BITMAP *)MiAllocatePool(64, 8 * ((v17 >> 6) + ((v17 & 0x3F) != 0) + 2), 0x20206D4Du);
    v22 = v21;
    *(_QWORD *)(a1 + 40) = v21;
    if ( v21 )
    {
      v21->SizeOfBitMap = v17;
      v21->Buffer = &v21[1].SizeOfBitMap;
      v22 = *(_RTL_BITMAP **)(a1 + 40);
    }
    if ( !v22 )
      return (unsigned int)-1073741670;
    RtlClearAllBits(v22);
    MiProcessHotPatchUndoTable(a1, v3);
  }
  if ( !*(_DWORD *)(a1 + 36)
    || (v9 = MiPrepareImagePagesForHotPatch(
               (__int64 *)a1,
               *(_QWORD *)(a1 + 24),
               (*(_DWORD *)(a1 + 36) >> 12) + (unsigned int)((*(_DWORD *)(a1 + 36) & 0xFFF) != 0)),
        v9 >= 0) )
  {
    *(_QWORD *)&v34 = a1;
    *((_QWORD *)&v34 + 1) = v6;
    v12 = v33;
    v13 = a2;
    RtlEnumerateHotPatchPatches(a2, v33, v15, &v34);
LABEL_34:
    if ( !v6 )
    {
      if ( !(unsigned int)RtlCheckCurrentPatchesApplied(
                            *(_QWORD *)(a1 + 8),
                            *(_QWORD *)(a1 + 24),
                            *((_QWORD *)v3 + 5),
                            *v10) )
        return (unsigned int)-1073740628;
      LOBYTE(StartingRunIndex) = 0;
      RtlHotPatchSynchronizationRequired(
        *(_QWORD *)(a1 + 8),
        v13,
        v12,
        v23,
        *(_QWORD *)(a1 + 24),
        *((_QWORD *)v3 + 5),
        *(PRTL_BITMAP *)(a1 + 40),
        v30,
        (int)v31,
        (__int64)&StartingRunIndex);
      RtlClearAllBits(*(PRTL_BITMAP *)(a1 + 40));
      if ( (_BYTE)StartingRunIndex )
        *(_DWORD *)(a1 + 136) |= 1u;
    }
    LODWORD(StartingRunIndex) = 0;
    for ( i = 0; ; i = v27 + v25 )
    {
      NextForwardRunClear = RtlFindNextForwardRunClear(*(PRTL_BITMAP *)(a1 + 48), i, (PULONG)&StartingRunIndex);
      v27 = NextForwardRunClear;
      if ( !NextForwardRunClear )
        break;
      v25 = (int)StartingRunIndex;
      v9 = MiPrepareImagePagesForHotPatch(
             (__int64 *)a1,
             *(_QWORD *)(a1 + 8) + (unsigned int)((_DWORD)StartingRunIndex << 12),
             NextForwardRunClear);
      if ( v9 < 0 )
        return (unsigned int)v9;
      LODWORD(StartingRunIndex) = v27 + v25;
    }
    v9 = MiMapHotPatchImageInSystemSpace((_QWORD *)a1);
    if ( v9 >= 0 )
    {
      v28 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL);
      *(_QWORD *)(a1 + 72) = v28;
      *(_QWORD *)(a1 + 80) = v28 + *(unsigned int *)(a1 + 32);
      return 0;
    }
  }
  return (unsigned int)v9;
}
