/*
 * XREFs of ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C008E370
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008F230 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00DA7C4 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00A9AD4 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        bool a7,
        struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *a8)
{
  __int64 v8; // r10
  unsigned int v10; // ebx
  __int64 v11; // r15
  __int64 v13; // r12
  __int64 v14; // r13
  int v15; // r11d
  unsigned int v16; // edi
  unsigned int v17; // r9d
  int v18; // edx
  char v19; // bp
  unsigned int v20; // edx
  unsigned __int8 v21; // di
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *v22; // r11
  __int64 v23; // r9
  unsigned int v24; // eax
  unsigned int v25; // r10d
  unsigned int v26; // r8d
  struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *v27; // rdx
  UINT Value; // r8d
  int v29; // r11d
  int v30; // r9d
  unsigned __int8 result; // al
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned int v40; // r8d
  unsigned int v41; // edx
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx

  v8 = *((_QWORD *)this + 5028);
  v10 = a3;
  v11 = 1584LL * a2;
  v13 = a2;
  v14 = v8 + v11;
  if ( (~*(_DWORD *)(v8 + v11 + 16) & a3) != 0 )
  {
    WdLogSingleEntry1(1LL, 12523LL);
    DxgkLogInternalTriageEvent(v32, 0x40000LL);
    return 0;
  }
  v15 = 0;
  v16 = *(_DWORD *)(v14 + 20);
  v17 = v16;
  if ( (~*(_DWORD *)(v8 + 16) & a3) != 0 )
  {
    v19 = 0;
  }
  else
  {
    if ( a3 )
    {
      v18 = 1;
      do
      {
        if ( (a3 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v17) + 80LL) & 0x1001) == 0 )
          v15 |= v18;
        v18 = __ROL4__(v18, 1);
        ++v17;
        a3 >>= 1;
      }
      while ( a3 );
      if ( v15 )
      {
        v19 = 0;
        goto LABEL_12;
      }
    }
    v19 = 1;
  }
  if ( !v10 )
  {
LABEL_42:
    v21 = 0;
    goto LABEL_16;
  }
LABEL_12:
  v20 = v10;
  while ( (v20 & 1) == 0 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v16) + 80LL) & 0x1001) == 0 )
  {
    ++v16;
    v20 >>= 1;
    if ( !v20 )
      goto LABEL_42;
  }
  v21 = 1;
LABEL_16:
  if ( (a4->Value & 0x40000) != 0 && !v19 )
  {
    WdLogSingleEntry1(1LL, 12537LL);
    DxgkLogInternalTriageEvent(v33, 0x40000LL);
    return 0;
  }
  if ( (a4->Value & 0x20000) == 0 )
  {
LABEL_18:
    v22 = a4;
    goto LABEL_19;
  }
  if ( VIDMM_GLOBAL::VerifySegmentSet(this, a2, v10, 0x10000u, 0LL) )
  {
    if ( v21 )
    {
      WdLogSingleEntry1(1LL, 12584LL);
      DxgkLogInternalTriageEvent(v39, 0x40000LL);
      return 0;
    }
    v40 = *(_DWORD *)(v14 + 20);
    v41 = v10;
    if ( v10 )
    {
      while ( 1 )
      {
        if ( (v41 & 1) != 0 )
        {
          v42 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v40);
          if ( a5 > *(_QWORD *)(v42 + 392) )
          {
            WdLogSingleEntry1(1LL, 12597LL);
            DxgkLogInternalTriageEvent(v44, 0x40000LL);
            return 0;
          }
          if ( (*(_DWORD *)(v42 + 80) & 0x20) != 0 )
          {
            WdLogSingleEntry1(1LL, 12602LL);
            DxgkLogInternalTriageEvent(v43, 0x40000LL);
            return 0;
          }
        }
        ++v40;
        v41 >>= 1;
        if ( !v41 )
          goto LABEL_18;
      }
    }
    goto LABEL_18;
  }
  v36 = *((_QWORD *)this + 3);
  v37 = *(unsigned int *)(*(_QWORD *)(v36 + 2680) + 344 * v13 + 16);
  if ( (v37 & 0x10) == 0 )
  {
    WdLogSingleEntry1(1LL, 12576LL);
    DxgkLogInternalTriageEvent(v38, 0x40000LL);
    return 0;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v37, v36, v34, v35);
    v36 = *((_QWORD *)this + 3);
  }
  v22 = a4;
  if ( *(_DWORD *)(v36 + 412) != 1297040209 )
    a4->Value &= ~0x20000u;
LABEL_19:
  v23 = *((_QWORD *)this + 5028);
  v24 = v10;
  v25 = *(_DWORD *)(v23 + v11 + 20);
  v26 = v25;
  if ( (~*(_DWORD *)(v23 + v11 + 16) & v10) != 0 || !v10 )
  {
LABEL_24:
    v27 = a8;
    *(_DWORD *)a8 &= ~4u;
  }
  else
  {
    while ( (v24 & 1) == 0 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v26) + 80LL) & 0x20) == 0 )
    {
      ++v26;
      v24 >>= 1;
      if ( !v24 )
        goto LABEL_24;
    }
    if ( !a6 )
    {
      WdLogSingleEntry1(1LL, 12624LL);
      DxgkLogInternalTriageEvent(v45, 0x40000LL);
      return 0;
    }
    if ( a6 < a5 )
    {
      WdLogSingleEntry1(1LL, 12630LL);
      DxgkLogInternalTriageEvent(v46, 0x40000LL);
      return 0;
    }
    v27 = a8;
    *(_DWORD *)a8 |= 4u;
  }
  Value = v22->Value;
  if ( (v22->Value & 0x800004) == 4 )
  {
    if ( *((_BYTE *)this + 7089) )
    {
      v29 = 0;
      if ( (~*(_DWORD *)(v23 + 16) & v10) != 0 )
        goto LABEL_74;
      if ( v10 )
      {
        v30 = 1;
        do
        {
          if ( (v10 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v25) + 80LL) & 0x10) == 0 )
            v29 |= v30;
          v30 = __ROL4__(v30, 1);
          ++v25;
          v10 >>= 1;
        }
        while ( v10 );
        if ( v29 )
        {
LABEL_74:
          WdLogSingleEntry1(1LL, 12660LL);
          DxgkLogInternalTriageEvent(v47, 0x40000LL);
          return 0;
        }
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 8) == 0 && !v19 )
    {
      WdLogSingleEntry1(1LL, 12667LL);
      DxgkLogInternalTriageEvent(v48, 0x40000LL);
      return 0;
    }
  }
  if ( (Value & 0x20000001) != 0x20000001 || v19 || (Value & 0x200) != 0 )
  {
    if ( (Value & 0x100000) == 0 || v19 )
    {
      if ( (Value & 0x4000) == 0 || v19 )
      {
        if ( a7 && (Value & 1) != 0 && !v19 )
        {
          WdLogSingleEntry1(1LL, 12704LL);
          DxgkLogInternalTriageEvent(v52, 0x40000LL);
          return 0;
        }
        else
        {
          result = 1;
          *(_DWORD *)v27 = (2 * v21) | v19 & 0xFD | *(_DWORD *)v27 & 0xFFFFFFFC;
        }
      }
      else
      {
        WdLogSingleEntry1(1LL, 12692LL);
        DxgkLogInternalTriageEvent(v51, 0x40000LL);
        return 0;
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, 12685LL);
      DxgkLogInternalTriageEvent(v50, 0x40000LL);
      return 0;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, 12678LL);
    DxgkLogInternalTriageEvent(v49, 0x40000LL);
    return 0;
  }
  return result;
}
