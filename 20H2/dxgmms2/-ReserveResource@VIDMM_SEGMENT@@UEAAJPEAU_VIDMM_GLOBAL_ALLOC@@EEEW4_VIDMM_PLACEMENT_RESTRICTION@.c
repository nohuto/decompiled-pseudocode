/*
 * XREFs of ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C006E280
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C006DE20 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00232C0 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C0024A28 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024BB4 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qpxxtqqq_EtwWriteTransfer @ 0x1C00286B8 (McTemplateK0qpxxtqqq_EtwWriteTransfer.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C006E7D4 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z @ 0x1C006E840 (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C006EA40 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00C9CE4 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00CA894 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  unsigned __int8 v7; // r15
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r8
  int v13; // r14d
  unsigned __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rbx
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v17; // r8d
  unsigned int v18; // edx
  struct VIDMM_PARTITION *v19; // r9
  VIDMM_GLOBAL *v20; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v22; // rcx
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rbx
  unsigned int v26; // r10d
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r9
  unsigned int v29; // r12d
  unsigned int v30; // r8d
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rbx
  _QWORD *v40; // rax
  unsigned __int64 v41; // [rsp+20h] [rbp-98h]
  int v42; // [rsp+28h] [rbp-90h]
  int v43; // [rsp+30h] [rbp-88h]
  int v44; // [rsp+40h] [rbp-78h]
  unsigned __int64 v45; // [rsp+68h] [rbp-50h]
  unsigned __int64 v46; // [rsp+70h] [rbp-48h]
  unsigned int v47; // [rsp+C0h] [rbp+8h]
  __int64 v48; // [rsp+C8h] [rbp+10h]

  v7 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(a1);
    v33 = WdLogNewEntry5_WdTrace(v32);
    *(_QWORD *)(v33 + 24) = a1;
    *(_QWORD *)(v33 + 32) = a2;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qpxxtqqq_EtwWriteTransfer(a1, a2, a3, *(_DWORD *)(a1 + 16) + 1, a2, v42, v43, a4, v44, a6);
  if ( (*(_DWORD *)(a1 + 80) & 0x20) != 0 )
    v11 = *(_QWORD *)(a2 + 24);
  else
    v11 = *(_QWORD *)(a2 + 16);
  v48 = *(unsigned int *)(a2 + 32);
  if ( *(_DWORD *)(a1 + 412) == 1 && (a6 == 5 || (*(_DWORD *)(a2 + 76) & 0x800) != 0) )
  {
    v13 = VIDMM_SEGMENT::ReserveVPRResource((VIDMM_SEGMENT *)a1, (struct _VIDMM_GLOBAL_ALLOC *)a2, a4, a5);
LABEL_14:
    if ( v13 >= 0 )
    {
LABEL_15:
      v16 = *(_QWORD *)(a2 + 16);
      v17 = *(_DWORD *)(a1 + 476);
      v18 = *(_DWORD *)(a1 + 380);
      v19 = **(struct VIDMM_PARTITION ***)(a2 + 480);
      v20 = *(VIDMM_GLOBAL **)(a1 + 8);
      *(_QWORD *)(a1 + 216) += v16;
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(v20, v18, v17, v19);
      *((_QWORD *)SegmentGroupState + 15) += v16;
      *(_QWORD *)(a1 + 224) += *(_QWORD *)(a2 + 16);
      if ( *(_DWORD *)(a1 + 368) != -1 && (*(_DWORD *)(a2 + 76) & 0x200) == 0 )
      {
        v39 = *(_QWORD *)(a1 + 232);
        v14 = v39 + *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a1 + 232) = v14;
        if ( v39 <= qword_1C0051498 && v14 > qword_1C0051498 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 8) + 40080LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 40144LL));
        if ( !v39 )
          VIDMM_GLOBAL::NotifyMemorySegmentActive(*(VIDMM_GLOBAL **)(a1 + 8), (struct VIDMM_SEGMENT *)a1);
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v41) = *(_DWORD *)(a1 + 16) + 1;
        McTemplateK0pqx_EtwWriteTransfer(
          (unsigned int)v41,
          &TotalBytesResidentInSegment,
          v12,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
          v41,
          *(_QWORD *)(a1 + 224));
      }
      ++*(_DWORD *)(a1 + 320);
      ++*(_DWORD *)(a1 + 324);
      if ( (*(_DWORD *)(a1 + 80) & 0x1001) == 0 )
        goto LABEL_24;
      v22 = *(_QWORD *)(a2 + 488);
      if ( v22 )
      {
        if ( _InterlockedIncrement((volatile signed __int32 *)(v22 + 44)) == 1 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 480) + 56LL), *(_QWORD *)(a2 + 16));
        if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 488) + 40LL)) != 1 )
          goto LABEL_23;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 480) + 56LL), *(_QWORD *)(a2 + 16));
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 480) + 64LL), *(_QWORD *)(a2 + 16));
LABEL_23:
      v14 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v14 + 40200) += *(_QWORD *)(a2 + 16);
LABEL_24:
      *(_QWORD *)(a2 + 216) = a1;
      if ( g_IsInternalReleaseOrDbg )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
        v40[3] = *(_QWORD *)(a2 + 200);
        v40[4] = *(int *)(a2 + 212);
        v14 = *(unsigned int *)(a2 + 208);
        v40[5] = v14;
      }
      goto LABEL_26;
    }
LABEL_63:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v14) + 24) = v13;
    goto LABEL_26;
  }
  v13 = VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, *(struct VIDMM_PARTITION_ADAPTER_INFO **)(a2 + 480), v11);
  if ( v13 < 0 )
  {
    v13 = VIDMM_SEGMENT::TrimOfferLists(a1, 2LL, v11, *(unsigned int *)(a2 + 32));
    if ( v13 < 0 )
    {
      if ( !g_IsInternalReleaseOrDbg )
      {
LABEL_26:
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v14, &EventEndReserveResource, v12, v13);
        }
        return (unsigned int)v13;
      }
      WdLogNewEntry5_WdTrace(v14);
      goto LABEL_63;
    }
  }
  v14 = 5LL;
  v15 = *(_DWORD *)(a1 + 80);
  if ( (*(_DWORD *)(a2 + 76) & 0x800) == 0 )
    v14 = a6;
  v47 = v14;
  if ( (v15 & 0x1000) != 0 )
  {
    *(_QWORD *)(a2 + 208) = 0LL;
    *(_QWORD *)(a2 + 200) = 1LL;
    goto LABEL_14;
  }
  v24 = *(_QWORD *)(a1 + 48);
  v25 = 0LL;
  switch ( (_DWORD)v14 )
  {
    case 3:
      v7 = 1;
      goto LABEL_35;
    case 4:
      v30 = dword_1C00511F8;
      if ( (v15 & 0x1001) != 0 )
        v30 = dword_1C00511FC;
      if ( (*(_DWORD *)(a2 + 80) & 0x400) != 0 )
      {
        v7 = 0;
        if ( a7 != -1LL )
        {
          v25 = a7;
          v24 = a7 + v11;
        }
        goto LABEL_35;
      }
      v26 = v48;
      v31 = v24 / 0x64;
      if ( *(_BYTE *)(a1 + 449) )
      {
        v7 = 1;
        v24 = (v31 * v30 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_55;
      }
      v25 = (v31 * (100 - v30) + 4095) & 0xFFFFFFFFFFFFF000uLL;
LABEL_54:
      v7 = 0;
LABEL_55:
      v14 = v47;
      goto LABEL_36;
    case 7:
LABEL_46:
      v7 = 0;
      goto LABEL_35;
    case 5:
      v25 = *(_QWORD *)(a1 + 384);
      v24 = v25 + *(_QWORD *)(a1 + 392);
      goto LABEL_46;
  }
  if ( (_DWORD)v14 != 6 )
  {
LABEL_35:
    v26 = v48;
LABEL_36:
    v27 = v24;
    v46 = v25;
    v45 = v24;
    v28 = v25;
    v12 = v25;
    v13 = -1073741823;
    v29 = 0;
    while ( 1 )
    {
      if ( v13 >= 0 )
        goto LABEL_15;
      if ( (_DWORD)v14 == 7 && *(_DWORD *)(a1 + 412) == 1 )
      {
        v36 = *(_QWORD *)(a1 + 384);
        if ( v29 )
        {
          v24 = *(_QWORD *)(a1 + 384);
          v25 = v12;
          if ( v27 < v36 )
            v24 = v27;
        }
        else
        {
          v37 = *(_QWORD *)(a1 + 392) + v36;
          v25 = v28;
          if ( v12 <= v37 )
            v25 = v37;
        }
        goto LABEL_97;
      }
      if ( (**(_DWORD **)(a2 + 496) & 0x20000) != 0 || *(_DWORD *)(a1 + 412) != 1 || !*(_QWORD *)(a1 + 432) )
      {
        if ( v29 )
          goto LABEL_14;
LABEL_42:
        v13 = VIDMM_LINEAR_POOL::Allocate(
                *(VIDMM_LINEAR_POOL **)(a1 + 152),
                v11,
                v26,
                v7,
                v25,
                v24,
                a4,
                a5,
                (void *)a2,
                (union _LARGE_INTEGER *)(a2 + 208),
                (void **)(a2 + 200));
        if ( v13 < 0 )
        {
          v13 = VIDMM_SEGMENT::TrimOfferLists(a1, 1LL, v11, *(unsigned int *)(a2 + 32));
          if ( v13 >= 0 )
            v13 = VIDMM_LINEAR_POOL::Allocate(
                    *(VIDMM_LINEAR_POOL **)(a1 + 152),
                    v11,
                    v48,
                    v7,
                    v25,
                    v24,
                    a4,
                    a5,
                    (void *)a2,
                    (union _LARGE_INTEGER *)(a2 + 208),
                    (void **)(a2 + 200));
        }
        v12 = v46;
        v27 = v45;
        v28 = v46;
        goto LABEL_44;
      }
      if ( v7 )
        break;
      if ( v29 )
      {
        v25 = v12;
LABEL_92:
        v38 = *(_QWORD *)(a1 + 416);
        if ( v38 >= v24 )
          v38 = v24;
        v24 = v38;
        goto LABEL_97;
      }
      if ( v25 <= *(_QWORD *)(a1 + 424) )
        v25 = *(_QWORD *)(a1 + 424);
LABEL_97:
      if ( v25 < v24 )
        goto LABEL_42;
LABEL_44:
      v14 = v47;
      ++v29;
      v26 = v48;
      if ( v29 >= 2 )
        goto LABEL_14;
    }
    if ( v29 )
    {
      v24 = v27;
      if ( v25 <= *(_QWORD *)(a1 + 424) )
        v25 = *(_QWORD *)(a1 + 424);
      goto LABEL_97;
    }
    goto LABEL_92;
  }
  v34 = *(_QWORD *)(a1 + 384);
  v26 = v48;
  if ( *(_DWORD *)(a1 + 412) != 1 )
  {
    v25 = *(_QWORD *)(a1 + 384);
    v24 = v34 + *(_QWORD *)(a1 + 392);
    goto LABEL_36;
  }
  v25 = (*(_QWORD *)(a1 + 416) - v11) & ~((v48 - 1) | *(_QWORD *)(a1 + 400));
  v35 = *(_QWORD *)(a1 + 416) - v34;
  if ( v35 >= v11 )
  {
    v24 = *(_QWORD *)(a1 + 424);
    goto LABEL_54;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v35);
  return 3221225473LL;
}
