/*
 * XREFs of RtlRbRemoveNode @ 0x14028B370
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x140256F00 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegFreeRangeRemove @ 0x14025A1A0 (RtlpHpSegFreeRangeRemove.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     IoStopDiskIoAttributionForContext @ 0x14027A6A8 (IoStopDiskIoAttributionForContext.c)
 *     KiRemoveTimer2 @ 0x14027F880 (KiRemoveTimer2.c)
 *     RtlpHpVsChunkSplit @ 0x140289C90 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkCoalesce @ 0x14028B080 (RtlpHpVsChunkCoalesce.c)
 *     PfSnNameRemove @ 0x1402CD6CC (PfSnNameRemove.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1402D4890 (MiCoalescePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1402D4CE8 (MiBitmapsCachedEntryLengthChanged.c)
 *     RtlpHpVaMgrAlloc @ 0x1402D8F3C (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x1402DA120 (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpLargeFree @ 0x1402DA540 (RtlpHpLargeFree.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1402F14D0 (KiRemoveSchedulingGroupQueue.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14030FA80 (MiInvalidatePageFileBitmapsCache.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14032A2B0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14032A618 (KiAbEntryUpdateWaiterTreePosition.c)
 *     RtlpHpVsFreeChunkRemove @ 0x140339E08 (RtlpHpVsFreeChunkRemove.c)
 *     MiRescanPageFileBitmapPortion @ 0x1403438F4 (MiRescanPageFileBitmapPortion.c)
 *     KiSetClockInterval @ 0x14034BAAC (KiSetClockInterval.c)
 *     HalFreeCommonBufferV3 @ 0x1404BF700 (HalFreeCommonBufferV3.c)
 *     HalFreeCommonBufferThin @ 0x1404C5E80 (HalFreeCommonBufferThin.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14051B4E4 (KiSetVirtualHeteroClockIntervalRequest.c)
 *     MiRemoveSlabEntry @ 0x14054DED0 (MiRemoveSlabEntry.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x14057CF00 (PspJobIoRateVolumeEntryRemove.c)
 *     VmpFaultEntryRemove @ 0x14059DDA0 (VmpFaultEntryRemove.c)
 *     VmpMergeMemoryRanges @ 0x14059EE70 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x14059F984 (VmpRemoveMemoryRange.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406376C4 (HvpViewMapPromoteRangeToMapping.c)
 *     EtwpSetProviderTraitsCommon @ 0x14066B740 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1406E9238 (EtwpReleaseProviderTraitsReference.c)
 *     HvpViewMapShrinkStorage @ 0x1408701EC (HvpViewMapShrinkStorage.c)
 *     MiDeleteImageHotPatchState @ 0x1408C651C (MiDeleteImageHotPatchState.c)
 *     EtwpDeleteSessionDemuxObject @ 0x14093B950 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x14093BDA8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbRemoveNode(unsigned __int64 *a1, unsigned __int64 a2)
{
  char v2; // r10
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r14
  char v8; // r10
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  BOOL v13; // esi
  __int64 v14; // r8
  char v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  char v21; // al
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 *v24; // r15
  __int64 v25; // r10
  unsigned __int64 v26; // rax
  char v27; // r9
  unsigned __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  char v31; // r10
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r8
  char v34; // al
  unsigned __int64 v35; // rax
  char v36; // cl
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  char v41; // r10
  unsigned __int64 v42; // rbp
  __int64 v43; // rax
  unsigned __int64 *v44; // r15
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  char v48; // cl
  char v49; // cl
  unsigned __int64 v50; // rbp
  __int64 v51; // r10
  __int64 v52; // r8
  unsigned __int64 v53; // rdx
  __int64 v54; // r8
  char v55; // cl
  __int64 v56; // r8
  char v57; // al
  char v58; // cl
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // rax
  int v62; // r8d
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  unsigned __int64 *v68; // r9
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rax
  __int64 v71; // rax
  unsigned __int64 v72; // r15
  unsigned __int64 v73; // rax
  int v74; // r9d
  unsigned __int64 v75; // rcx
  __int64 v76; // rax
  unsigned __int64 v77; // rax
  __int64 v78; // rcx
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // r9
  _BOOL8 v83; // rcx
  unsigned __int64 v84; // rax
  int v85; // r8d
  __int64 *v86; // r15
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rdi
  unsigned __int64 v91; // rax
  unsigned __int64 v92; // rax
  unsigned __int64 *v93; // rdi
  unsigned __int64 v94; // rcx
  unsigned __int64 v95; // rcx
  bool v96; // zf
  unsigned __int64 v97; // rax
  __int64 v98; // rsi
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rax
  __int64 v101; // rax
  unsigned __int64 v102; // rax
  __int64 v103; // r8
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rax
  __int64 v106; // rax
  unsigned __int64 v107; // rax
  __int64 v108; // rbp
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // r10
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rcx

  v2 = *((_BYTE *)a1 + 8);
  v4 = *(_QWORD *)a2;
  if ( (v2 & 1) != 0 && v4 )
    v4 ^= a2;
  v5 = *(_QWORD *)(a2 + 8);
  if ( (v2 & 1) != 0 && v5 )
    v5 ^= a2;
  v6 = v5;
  if ( v4 )
    v6 = v4;
  v7 = 0LL;
  v8 = v2 & 1;
  v9 = 0LL;
  if ( v4 )
    v9 = v5;
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v8 && v10 )
      v10 ^= a2;
    v11 = a2;
    if ( !v10 )
    {
      if ( v6 )
        *(_QWORD *)(v6 + 16) = 0LL;
      v17 = a1[1];
      v47 = *a1;
      if ( (v17 & 1) != 0 )
      {
        if ( v47 )
          v47 ^= (unsigned __int64)a1;
        else
          v47 = 0LL;
      }
      if ( v47 != a2 )
        goto LABEL_322;
      if ( (v17 & 1) != 0 )
      {
        v114 = 0LL;
        LOBYTE(v17) = (unsigned __int8)a1 ^ v6;
        if ( v6 )
          v114 = (unsigned __int64)a1 ^ v6;
        a1[1] = v114;
        v48 = v114 | 1;
        *((_BYTE *)a1 + 8) = v48;
      }
      else
      {
        a1[1] = v6;
        v48 = v6;
      }
      if ( (v48 & 1) != 0 )
      {
        LOBYTE(v17) = (unsigned __int8)a1 ^ v6;
        if ( v6 )
          v7 = (unsigned __int64)a1 ^ v6;
        *a1 = v7;
      }
      else
      {
        *a1 = v6;
      }
      return v17;
    }
    v12 = *(_QWORD *)(v10 + 8);
    if ( v8 && v12 )
      v12 ^= v10;
    if ( v12 == a2 )
    {
      v13 = 1;
    }
    else
    {
      v18 = *(_QWORD *)v10;
      if ( v8 && v18 )
        v18 ^= v10;
      if ( v18 != a2 )
        goto LABEL_322;
      v19 = a1[1];
      v13 = 0;
      if ( (v19 & 1) != 0 )
      {
        if ( v19 == 1 )
          v20 = 0LL;
        else
          v20 = v19 ^ ((unsigned __int64)a1 | 1);
      }
      else
      {
        v20 = a1[1];
      }
      if ( v20 == a2 )
      {
        v21 = v19 & 1;
        if ( v6 )
        {
          if ( v21 )
          {
            a1[1] = (unsigned __int64)a1 ^ v6;
            *((_BYTE *)a1 + 8) = (unsigned __int8)a1 ^ v6 | 1;
          }
          else
          {
            a1[1] = v6;
          }
        }
        else if ( v21 )
        {
          a1[1] = (unsigned __int64)a1 ^ v10;
          *((_BYTE *)a1 + 8) = (unsigned __int8)a1 ^ v10 | 1;
        }
        else
        {
          a1[1] = v10;
        }
      }
    }
    LOBYTE(v14) = *(_BYTE *)(a2 + 16);
    goto LABEL_14;
  }
  v22 = *(_QWORD *)v5;
  v11 = v5;
  v10 = v5;
  v13 = 1;
  if ( *(_QWORD *)v5 )
  {
    v13 = 0;
    do
    {
      v10 = v11;
      if ( v8 && v22 )
        v11 ^= v22;
      else
        v11 = v22;
      v22 = *(_QWORD *)v11;
    }
    while ( *(_QWORD *)v11 );
  }
  if ( v8 && v4 )
    v23 = v4 ^ v11;
  else
    v23 = v4;
  *(_QWORD *)v11 = v23;
  v24 = (unsigned __int64 *)(v4 + 16);
  v25 = *(_QWORD *)(v4 + 16);
  v26 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
  v27 = a1[1] & 1;
  if ( v27 && v26 )
    v26 ^= v4;
  if ( v26 != a2 )
    goto LABEL_322;
  v28 = v11 ^ v4;
  if ( !v27 )
    v28 = v11;
  *v24 = v25 & 3 | v28;
  v29 = *(_QWORD *)(v5 + 16);
  v30 = v29 & 0xFFFFFFFFFFFFFFFCuLL;
  v31 = a1[1] & 1;
  if ( v31 && v30 )
    v30 ^= v5;
  if ( v30 != a2 )
    goto LABEL_322;
  v32 = v5 ^ v11;
  v33 = v5 ^ v11;
  if ( !v31 )
    v32 = v11;
  *(_QWORD *)(v5 + 16) = v29 & 3 | v32;
  v6 = *(_QWORD *)(v11 + 8);
  v34 = a1[1] & 1;
  if ( v34 && v6 )
    v6 ^= v11;
  if ( !v34 )
    v33 = v5;
  *(_QWORD *)(v11 + 8) = v33;
  v14 = *(_QWORD *)(v11 + 16);
  v35 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
  v36 = a1[1] & 1;
  if ( v36 && v35 )
    v37 = v11 ^ v35;
  else
    v37 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v37 != v10 )
  {
    if ( v36 )
    {
      if ( !v35 )
        goto LABEL_227;
      v35 ^= v11;
    }
    if ( v35 )
      goto LABEL_322;
LABEL_227:
    if ( v11 != v10 )
      goto LABEL_322;
  }
  v38 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v36 )
  {
    if ( v38 )
      v38 ^= a2;
    if ( v38 )
      v38 ^= v11;
  }
  v39 = v38 | v14 & 3;
  *(_QWORD *)(v11 + 16) = v39;
  *(_BYTE *)(v11 + 16) = v39 ^ (v39 ^ *(_BYTE *)(a2 + 16)) & 1;
  v40 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v40 )
  {
    v41 = a1[1] & 1;
    if ( v41 )
      v40 ^= a2;
    v42 = *(_QWORD *)(v40 + 8);
    if ( v41 && v42 )
      v42 ^= v40;
    v43 = 0LL;
    if ( v42 == a2 )
      v43 = 8LL;
    v44 = (unsigned __int64 *)(v43 + v40);
    v45 = *(_QWORD *)(v43 + v40);
    if ( v41 && v45 )
      v45 ^= v40;
    if ( v45 != a2 )
      goto LABEL_322;
    v46 = v11 ^ v40;
    if ( !v41 )
      v46 = v11;
    *v44 = v46;
  }
  else
  {
    v111 = a1[1];
    v112 = *a1;
    if ( (v111 & 1) != 0 )
    {
      if ( v112 )
        v112 ^= (unsigned __int64)a1;
      else
        v112 = 0LL;
    }
    if ( v112 != a2 )
      goto LABEL_322;
    v113 = v11;
    if ( (v111 & 1) != 0 )
      v113 = (unsigned __int64)a1 ^ v11;
    *a1 = v113;
  }
LABEL_14:
  v15 = v14 & 1;
  if ( (a1[1] & 1) != 0 && v6 )
    v16 = v6 ^ v10;
  else
    v16 = v6;
  LOBYTE(v17) = v13;
  *(_QWORD *)(v10 + 8LL * v13) = v16;
  if ( v6 )
  {
    v17 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v58 = a1[1] & 1;
    if ( v58 && v17 )
      v17 ^= v6;
    if ( v17 != v11 )
      goto LABEL_322;
    if ( v58 && v10 )
      v10 ^= v6;
    *(_QWORD *)(v6 + 16) = v10;
    return v17;
  }
  if ( v15 )
    return v17;
  v49 = *((_BYTE *)a1 + 8);
  while ( 1 )
  {
    v50 = v10;
    v51 = !v13;
    v52 = *(_QWORD *)(v10 + 8 * v51);
    if ( (v49 & 1) != 0 && v52 )
      v53 = v10 ^ v52;
    else
      v53 = *(_QWORD *)(v10 + 8 * v51);
    if ( (*(_BYTE *)(v53 + 16) & 1) == 0 )
      goto LABEL_72;
    v72 = *a1;
    if ( (a1[1] & 1) != 0 )
    {
      if ( v72 )
        v72 ^= (unsigned __int64)a1;
      else
        v72 = 0LL;
    }
    v73 = *(_QWORD *)(v53 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v74 = a1[1] & 1;
    if ( (a1[1] & 1) != 0 && v73 )
      v73 ^= v53;
    if ( v73 != v10 )
      goto LABEL_322;
    if ( (a1[1] & 1) != 0 && v52 )
      v52 ^= v10;
    if ( v52 != v53 )
      goto LABEL_322;
    v75 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (a1[1] & 1) != 0 )
    {
      if ( !v75 )
      {
LABEL_194:
        if ( v72 != v10 )
          goto LABEL_322;
        v72 = v53;
        goto LABEL_132;
      }
      v75 ^= v10;
    }
    if ( !v75 )
      goto LABEL_194;
    v76 = *(_QWORD *)(v75 + 8);
    if ( (a1[1] & 1) != 0 && v76 )
      v76 ^= v75;
    if ( v76 == v10 )
    {
      v77 = v75 ^ v53;
      if ( (a1[1] & 1) == 0 )
        v77 = v53;
      *(_QWORD *)(v75 + 8) = v77;
    }
    else
    {
      v106 = *(_QWORD *)v75;
      if ( (a1[1] & 1) != 0 && v106 )
        v106 ^= v75;
      if ( v106 != v10 )
        goto LABEL_322;
      v107 = v75 ^ v53;
      if ( (a1[1] & 1) == 0 )
        v107 = v53;
      *(_QWORD *)v75 = v107;
    }
LABEL_132:
    if ( v74 && v75 )
      v75 ^= v53;
    *(_QWORD *)(v53 + 16) = v75 | *(_DWORD *)(v53 + 16) & 3;
    v78 = *(_QWORD *)(v53 + 8LL * v13);
    if ( !v74 )
      goto LABEL_134;
    if ( v78 )
    {
      v78 ^= v53;
LABEL_134:
      if ( v78 )
      {
        v103 = *(_QWORD *)(v78 + 16);
        v104 = v103 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v74 && v104 )
          v104 ^= v78;
        if ( v104 != v53 )
          goto LABEL_322;
        v105 = v78 ^ v10;
        if ( !v74 )
          v105 = v10;
        *(_QWORD *)(v78 + 16) = v103 & 3 | v105;
      }
    }
    if ( v74 && v78 )
      v78 ^= v10;
    *(_QWORD *)(v10 + 8 * v51) = v78;
    v79 = v10 ^ v53;
    v80 = v10 ^ v53;
    if ( !v74 )
    {
      v80 = v10;
      v79 = v53;
    }
    *(_QWORD *)(v53 + 8LL * v13) = v80;
    v81 = v72;
    *(_QWORD *)(v10 + 16) = *(_DWORD *)(v10 + 16) & 3 | v79;
    if ( (a1[1] & 1) != 0 )
    {
      v81 = (unsigned __int64)a1 ^ v72;
      if ( !v72 )
        v81 = 0LL;
    }
    *a1 = v81;
    *(_BYTE *)(v53 + 16) &= ~1u;
    *(_BYTE *)(v10 + 16) |= 1u;
    v49 = *((_BYTE *)a1 + 8);
    v53 = *(_QWORD *)(v10 + 8 * v51);
    if ( (v49 & 1) != 0 && v53 )
      v53 ^= v10;
LABEL_72:
    v54 = *(_QWORD *)v53;
    v55 = v49 & 1;
    if ( *(_QWORD *)v53 )
    {
      if ( v55 )
        v54 ^= v53;
      if ( (*(_BYTE *)(v54 + 16) & 1) != 0 )
        break;
    }
    v56 = *(_QWORD *)(v53 + 8);
    if ( v56 )
    {
      if ( v55 )
        v56 ^= v53;
      if ( (*(_BYTE *)(v56 + 16) & 1) != 0 )
        break;
    }
    v57 = *(_BYTE *)(v10 + 16);
    if ( (v57 & 1) != 0 )
    {
      LOBYTE(v17) = v57 & 0xFE;
      *(_BYTE *)(v10 + 16) = v17;
      *(_BYTE *)(v53 + 16) |= 1u;
      return v17;
    }
    *(_BYTE *)(v53 + 16) |= 1u;
    v49 = *((_BYTE *)a1 + 8);
    v17 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v49 & 1) != 0 && v17 )
      v10 ^= v17;
    else
      v10 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v10 )
      return v17;
    v71 = *(_QWORD *)(v10 + 8);
    if ( (v49 & 1) != 0 && v71 )
      v71 ^= v10;
    v13 = v71 == v50;
  }
  v59 = *(_QWORD *)(v53 + 8 * v51);
  if ( v55 )
  {
    if ( v59 )
    {
      v59 ^= v53;
      goto LABEL_93;
    }
  }
  else
  {
LABEL_93:
    if ( v59 && (*(_BYTE *)(v59 + 16) & 1) != 0 )
      goto LABEL_95;
  }
  v82 = *(_QWORD *)(v53 + 8LL * v13);
  if ( v55 && v82 )
    v82 ^= v53;
  *(_BYTE *)(v82 + 16) &= ~1u;
  v83 = !v13;
  v84 = *(_QWORD *)(v82 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v85 = a1[1] & 1;
  if ( (a1[1] & 1) != 0 && v84 )
    v84 ^= v82;
  if ( v84 != v53 )
    goto LABEL_322;
  v86 = (__int64 *)(v53 + 8LL * v13);
  v87 = *v86;
  if ( (a1[1] & 1) != 0 && v87 )
    v87 ^= v53;
  if ( v87 != v82 )
    goto LABEL_322;
  v88 = *(_QWORD *)(v10 + 8 * v83);
  if ( (a1[1] & 1) != 0 && v88 )
    v88 ^= v10;
  if ( v88 != v53 )
    goto LABEL_322;
  v89 = *(_QWORD *)(v53 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (a1[1] & 1) != 0 && v89 )
    v89 ^= v53;
  if ( v89 != v10 )
    goto LABEL_322;
  v90 = v82 ^ v10;
  v91 = v82 ^ v10;
  if ( (a1[1] & 1) == 0 )
    v91 = v82;
  *(_QWORD *)(v10 + 8 * v83) = v91;
  if ( !v85 || !v10 )
    v90 = v10;
  v92 = v90 | *(_DWORD *)(v82 + 16) & 3;
  v93 = (unsigned __int64 *)(v82 + 8 * v83);
  *(_QWORD *)(v82 + 16) = v92;
  v94 = *v93;
  if ( !v85 )
  {
LABEL_158:
    if ( !v94 )
      goto LABEL_159;
    v108 = *(_QWORD *)(v94 + 16);
    v109 = v108 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v85 && v109 )
      v109 ^= v94;
    if ( v109 == v82 )
    {
      v110 = v94 ^ v53;
      if ( !v85 )
        v110 = v53;
      *(_QWORD *)(v94 + 16) = v108 & 3 | v110;
      goto LABEL_159;
    }
    goto LABEL_322;
  }
  if ( v94 )
  {
    v94 ^= v82;
    goto LABEL_158;
  }
LABEL_159:
  if ( v85 && v94 )
    v94 ^= v53;
  *v86 = v94;
  v95 = v53 ^ v82;
  v96 = v85 == 0;
  v97 = v53 ^ v82;
  v59 = v53;
  if ( v96 )
  {
    v97 = v53;
    v95 = v82;
  }
  *v93 = v97;
  *(_QWORD *)(v53 + 16) = *(_DWORD *)(v53 + 16) & 3 | v95;
  v53 = v82;
LABEL_95:
  *(_BYTE *)(v53 + 16) ^= (*(_BYTE *)(v10 + 16) ^ *(_BYTE *)(v53 + 16)) & 1;
  *(_BYTE *)(v10 + 16) &= ~1u;
  *(_BYTE *)(v59 + 16) &= ~1u;
  v60 = *a1;
  if ( (a1[1] & 1) != 0 )
  {
    if ( v60 )
      v60 ^= (unsigned __int64)a1;
    else
      v60 = 0LL;
  }
  v61 = *(_QWORD *)(v53 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v62 = a1[1] & 1;
  if ( (a1[1] & 1) != 0 && v61 )
    v61 ^= v53;
  if ( v61 != v10 )
    goto LABEL_322;
  v63 = *(_QWORD *)(v10 + 8 * v51);
  if ( (a1[1] & 1) != 0 && v63 )
    v63 ^= v10;
  if ( v63 != v53 )
LABEL_322:
    __fastfail(0x1Du);
  v64 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (a1[1] & 1) != 0 )
  {
    if ( v64 )
    {
      v64 ^= v10;
      goto LABEL_101;
    }
    goto LABEL_183;
  }
LABEL_101:
  if ( !v64 )
  {
LABEL_183:
    if ( v60 != v10 )
      goto LABEL_322;
    v60 = v53;
    goto LABEL_107;
  }
  v65 = *(_QWORD *)(v64 + 8);
  if ( (a1[1] & 1) != 0 && v65 )
    v65 ^= v64;
  if ( v65 == v10 )
  {
    v66 = v64 ^ v53;
    if ( (a1[1] & 1) == 0 )
      v66 = v53;
    *(_QWORD *)(v64 + 8) = v66;
  }
  else
  {
    v101 = *(_QWORD *)v64;
    if ( (a1[1] & 1) != 0 && v101 )
      v101 ^= v64;
    if ( v101 != v10 )
      goto LABEL_322;
    v102 = v64 ^ v53;
    if ( (a1[1] & 1) == 0 )
      v102 = v53;
    *(_QWORD *)v64 = v102;
  }
LABEL_107:
  if ( v62 && v64 )
    v64 ^= v53;
  *(_QWORD *)(v53 + 16) = v64 | *(_DWORD *)(v53 + 16) & 3;
  v67 = *(_QWORD *)(v53 + 8LL * v13);
  v68 = (unsigned __int64 *)(v53 + 8LL * v13);
  if ( v62 )
  {
    if ( v67 )
    {
      v67 ^= v53;
      goto LABEL_109;
    }
  }
  else
  {
LABEL_109:
    if ( v67 )
    {
      v98 = *(_QWORD *)(v67 + 16);
      v99 = v98 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v62 && v99 )
        v99 ^= v67;
      if ( v99 != v53 )
        goto LABEL_322;
      v100 = v10 ^ v67;
      if ( !v62 )
        v100 = v10;
      *(_QWORD *)(v67 + 16) = v98 & 3 | v100;
    }
  }
  if ( v62 && v67 )
    v67 ^= v10;
  *(_QWORD *)(v10 + 8 * v51) = v67;
  v69 = v10 ^ v53;
  v70 = v10 ^ v53;
  if ( !v62 )
  {
    v70 = v10;
    v69 = v53;
  }
  *v68 = v70;
  v17 = v60;
  *(_QWORD *)(v10 + 16) = *(_DWORD *)(v10 + 16) & 3 | v69;
  if ( (a1[1] & 1) != 0 )
  {
    v17 = (unsigned __int64)a1 ^ v60;
    if ( !v60 )
      v17 = 0LL;
  }
  *a1 = v17;
  return v17;
}
