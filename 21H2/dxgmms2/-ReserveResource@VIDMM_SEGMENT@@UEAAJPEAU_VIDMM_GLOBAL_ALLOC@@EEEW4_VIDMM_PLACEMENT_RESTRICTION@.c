/*
 * XREFs of ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C009BD90
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C009BCF0 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C002DCFC (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C002EDC8 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     McTemplateK0qpxxtqqq_EtwWriteTransfer @ 0x1C0032EA8 (McTemplateK0qpxxtqqq_EtwWriteTransfer.c)
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z @ 0x1C009C1A8 (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C009C224 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00ECA28 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00ED5DC (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  unsigned __int8 v7; // r15
  char v8; // bp
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  int v15; // r14d
  unsigned __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r10
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r11
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // rsi
  unsigned int v28; // r10d
  unsigned int v29; // r12d
  unsigned int v30; // r8d
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rsi
  _QWORD *v43; // rax
  unsigned __int64 v44; // [rsp+20h] [rbp-98h]
  int v45; // [rsp+28h] [rbp-90h]
  int v46; // [rsp+30h] [rbp-88h]
  int v47; // [rsp+40h] [rbp-78h]
  unsigned __int64 v48; // [rsp+68h] [rbp-50h]
  unsigned __int64 v49; // [rsp+70h] [rbp-48h]
  unsigned int v50; // [rsp+C0h] [rbp+8h]
  __int64 v51; // [rsp+C8h] [rbp+10h]
  char v52; // [rsp+D8h] [rbp+20h]

  v52 = a4;
  v7 = a3;
  v8 = a4;
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
    v36 = WdLogNewEntry5_WdTrace(v33, v32, v34, v35);
    *(_QWORD *)(v36 + 24) = a1;
    *(_QWORD *)(v36 + 32) = a2;
  }
  if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
    McTemplateK0qpxxtqqq_EtwWriteTransfer(a1, a2, a3, *(_DWORD *)(a1 + 16) + 1, a2, v45, v46, v8, v47, a6);
  if ( (*(_DWORD *)(a1 + 80) & 0x20) != 0 )
    v11 = *(_QWORD *)(a2 + 24);
  else
    v11 = *(_QWORD *)(a2 + 16);
  v51 = *(unsigned int *)(a2 + 32);
  if ( *(_DWORD *)(a1 + 412) == 1 && (a6 == 5 || (*(_DWORD *)(a2 + 68) & 0x800) != 0) )
  {
    v15 = VIDMM_SEGMENT::ReserveVPRResource((VIDMM_SEGMENT *)a1, (struct _VIDMM_GLOBAL_ALLOC *)a2, v8, a5);
LABEL_14:
    if ( v15 >= 0 )
    {
LABEL_15:
      v13 = *(unsigned int *)(a1 + 380);
      v18 = *(_QWORD *)(a1 + 8);
      v19 = *(int *)(a1 + 476);
      v20 = **(_QWORD **)(a2 + 504);
      v21 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a1 + 216) += v21;
      v22 = *(_QWORD *)(v18 + 40224);
      if ( (*(_BYTE *)(v22 + 24 * (v19 + 66 * v13) + 512) & 1) != 0 )
        v16 = *(_QWORD *)(376LL * *(unsigned int *)(*(_QWORD *)(v18 + 24) + 240LL) + *(_QWORD *)(v20 + 40) + 24)
            + 336 * v13;
      else
        v16 = v22 + 1584 * v13 + 336 * v19 + 544;
      *(_QWORD *)(v16 + 120) += v21;
      *(_QWORD *)(a1 + 224) += *(_QWORD *)(a2 + 16);
      v23 = *(unsigned int *)(a1 + 368);
      if ( (_DWORD)v23 != -1 && (*(_DWORD *)(a2 + 68) & 0x200) == 0 )
      {
        v42 = *(_QWORD *)(a1 + 232);
        v16 = v42 + *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a1 + 232) = v16;
        if ( v42 <= qword_1C006E508 && v16 > qword_1C006E508 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 8) + 40088LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 40152LL));
        if ( !v42 )
          VIDMM_GLOBAL::NotifyMemorySegmentActive(*(VIDMM_GLOBAL **)(a1 + 8), (struct VIDMM_SEGMENT *)a1);
      }
      if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
      {
        LODWORD(v44) = *(_DWORD *)(a1 + 16) + 1;
        McTemplateK0pqx_EtwWriteTransfer(
          (unsigned int)v44,
          &TotalBytesResidentInSegment,
          v13,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
          v44,
          *(_QWORD *)(a1 + 224));
      }
      ++*(_DWORD *)(a1 + 320);
      ++*(_DWORD *)(a1 + 324);
      if ( (*(_DWORD *)(a1 + 80) & 0x1001) == 0 )
        goto LABEL_26;
      v24 = *(_QWORD *)(a2 + 512);
      if ( v24 )
      {
        if ( _InterlockedIncrement((volatile signed __int32 *)(v24 + 44)) == 1 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 504) + 56LL), *(_QWORD *)(a2 + 16));
        if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 512) + 40LL)) != 1 )
          goto LABEL_25;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 504) + 56LL), *(_QWORD *)(a2 + 16));
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 504) + 64LL), *(_QWORD *)(a2 + 16));
LABEL_25:
      v16 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v16 + 40208) += *(_QWORD *)(a2 + 16);
LABEL_26:
      *(_QWORD *)(a2 + 200) = a1;
      if ( g_IsInternalReleaseOrDbg )
      {
        v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v23, v13, v22);
        v43[3] = *(_QWORD *)(a2 + 184);
        v43[4] = *(int *)(a2 + 196);
        v16 = *(unsigned int *)(a2 + 192);
        v43[5] = v16;
      }
      goto LABEL_28;
    }
LABEL_67:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v12, v13, v14) + 24) = v15;
    goto LABEL_28;
  }
  v15 = VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, *(struct VIDMM_PARTITION_ADAPTER_INFO **)(a2 + 504), v11);
  if ( v15 < 0 )
  {
    v15 = VIDMM_SEGMENT::TrimOfferLists(a1, 2LL, v11, *(unsigned int *)(a2 + 32));
    if ( v15 < 0 )
    {
      if ( !g_IsInternalReleaseOrDbg )
      {
LABEL_28:
        if ( bTracingEnabled )
        {
          if ( (byte_1C006E941 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventEndReserveResource, v13, v15);
        }
        return (unsigned int)v15;
      }
      WdLogNewEntry5_WdTrace(v16, v12, v13, v14);
      goto LABEL_67;
    }
  }
  v16 = 5LL;
  v17 = *(_DWORD *)(a1 + 80);
  if ( (*(_DWORD *)(a2 + 68) & 0x800) == 0 )
    v16 = a6;
  v50 = v16;
  if ( (v17 & 0x1000) != 0 )
  {
    *(_QWORD *)(a2 + 192) = 0LL;
    *(_QWORD *)(a2 + 184) = 1LL;
    goto LABEL_14;
  }
  v26 = *(_QWORD *)(a1 + 48);
  v27 = 0LL;
  switch ( (_DWORD)v16 )
  {
    case 3:
      v7 = 1;
      goto LABEL_37;
    case 4:
      v30 = dword_1C006E26C;
      if ( (v17 & 0x1001) == 0 )
        v30 = dword_1C006E268;
      if ( (*(_DWORD *)(a2 + 72) & 0x400) != 0 )
      {
        v7 = 0;
        if ( a7 != -1LL )
        {
          v27 = a7;
          v26 = a7 + v11;
        }
        goto LABEL_37;
      }
      v28 = v51;
      v31 = v26 / 0x64;
      if ( *(_BYTE *)(a1 + 449) )
      {
        v7 = 1;
        v26 = (v31 * v30 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_60;
      }
      v27 = (v31 * (100 - v30) + 4095) & 0xFFFFFFFFFFFFF000uLL;
LABEL_59:
      v7 = 0;
LABEL_60:
      v16 = v50;
      goto LABEL_38;
    case 7:
LABEL_49:
      v7 = 0;
      goto LABEL_37;
    case 5:
      v27 = *(_QWORD *)(a1 + 384);
      v26 = v27 + *(_QWORD *)(a1 + 392);
      goto LABEL_49;
  }
  if ( (_DWORD)v16 != 6 )
  {
LABEL_37:
    v28 = v51;
LABEL_38:
    v12 = v26;
    v49 = v27;
    v48 = v26;
    v14 = v27;
    v13 = v27;
    v15 = -1073741823;
    v29 = 0;
    while ( 1 )
    {
      if ( v15 >= 0 )
        goto LABEL_15;
      if ( (_DWORD)v16 == 7 && *(_DWORD *)(a1 + 412) == 1 )
      {
        v39 = *(_QWORD *)(a1 + 384);
        if ( v29 )
        {
          v26 = *(_QWORD *)(a1 + 384);
          v27 = v13;
          if ( v12 < v39 )
            v26 = v12;
        }
        else
        {
          v40 = *(_QWORD *)(a1 + 392) + v39;
          v27 = v14;
          if ( v13 <= v40 )
            v27 = v40;
        }
        goto LABEL_100;
      }
      if ( (**(_DWORD **)(a2 + 528) & 0x20000) != 0 || *(_DWORD *)(a1 + 412) != 1 || !*(_QWORD *)(a1 + 432) )
      {
        if ( v29 )
          goto LABEL_67;
LABEL_44:
        v15 = VIDMM_LINEAR_POOL::Allocate(
                *(VIDMM_LINEAR_POOL **)(a1 + 152),
                v11,
                v28,
                v7,
                v27,
                v26,
                v52,
                a5,
                (void *)a2,
                (union _LARGE_INTEGER *)(a2 + 192),
                (void **)(a2 + 184));
        if ( v15 < 0 )
        {
          v15 = VIDMM_SEGMENT::TrimOfferLists(a1, 1LL, v11, *(unsigned int *)(a2 + 32));
          if ( v15 >= 0 )
            v15 = VIDMM_LINEAR_POOL::Allocate(
                    *(VIDMM_LINEAR_POOL **)(a1 + 152),
                    v11,
                    v51,
                    v7,
                    v27,
                    v26,
                    v52,
                    a5,
                    (void *)a2,
                    (union _LARGE_INTEGER *)(a2 + 192),
                    (void **)(a2 + 184));
        }
        v13 = v49;
        v12 = v48;
        v14 = v49;
        goto LABEL_46;
      }
      if ( v7 )
        break;
      if ( v29 )
      {
        v27 = v13;
LABEL_95:
        v41 = *(_QWORD *)(a1 + 416);
        if ( v41 >= v26 )
          v41 = v26;
        v26 = v41;
        goto LABEL_100;
      }
      if ( v27 <= *(_QWORD *)(a1 + 424) )
        v27 = *(_QWORD *)(a1 + 424);
LABEL_100:
      if ( v27 < v26 )
        goto LABEL_44;
LABEL_46:
      v16 = v50;
      ++v29;
      v28 = v51;
      if ( v29 >= 2 )
        goto LABEL_14;
    }
    if ( v29 )
    {
      v26 = v12;
      if ( v27 <= *(_QWORD *)(a1 + 424) )
        v27 = *(_QWORD *)(a1 + 424);
      goto LABEL_100;
    }
    goto LABEL_95;
  }
  v37 = *(_QWORD *)(a1 + 384);
  v28 = v51;
  if ( *(_DWORD *)(a1 + 412) != 1 )
  {
    v27 = *(_QWORD *)(a1 + 384);
    v26 = v37 + *(_QWORD *)(a1 + 392);
    goto LABEL_38;
  }
  v27 = (*(_QWORD *)(a1 + 416) - v11) & ~((v51 - 1) | *(_QWORD *)(a1 + 400));
  v38 = *(_QWORD *)(a1 + 416) - v37;
  if ( v38 >= v11 )
  {
    v26 = *(_QWORD *)(a1 + 424);
    goto LABEL_59;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v38, v37, v13, v14);
  return 3221225473LL;
}
