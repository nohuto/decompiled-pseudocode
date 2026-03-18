/*
 * XREFs of ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C00B3370
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z @ 0x1C00B1204 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *const *a4,
        const struct DXGADAPTER_GPUMMUCAPS *a5,
        const struct DXGK_PHYSICALADAPTERINFO *a6,
        unsigned int a7)
{
  unsigned int v10; // ebx
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // r15d
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  unsigned int v17; // edx
  unsigned int v18; // ecx
  __int64 v19; // rbp
  int v20; // r14d
  int v21; // eax
  int v22; // edx
  __int64 v23; // rcx
  int v24; // edx
  unsigned int v25; // r14d
  __int64 v26; // r12
  unsigned int v27; // r13d
  __int64 v28; // r10
  __int64 v29; // r9
  __int64 v30; // r8
  int v31; // r8d
  __int64 v32; // rax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax

  *((_BYTE *)this + 436) |= 0x20u;
  if ( (*((_BYTE *)a2 + 40936) & 2) == 0 )
    return 0LL;
  v10 = 0;
  *((_QWORD *)this + 55) = a5;
  v11 = *((_DWORD *)a2 + 10232);
  v12 = *((_DWORD *)a5 + 2);
  if ( v11 )
  {
    if ( v12 != v11 )
    {
      WdLogSingleEntry1(1LL, 712LL);
      goto LABEL_41;
    }
  }
  else
  {
    *((_DWORD *)a2 + 10232) = v12;
    if ( v12 <= 0xC || v12 > 0x3F )
    {
      WdLogSingleEntry1(1LL, 703LL);
      goto LABEL_41;
    }
  }
  *((_BYTE *)this + 436) ^= (*((_BYTE *)this + 436) ^ (4
                                                     * *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL)
                                                                            + 2680LL)
                                                                + 344LL * a3
                                                                + 48))) & 4;
  if ( (*(_DWORD *)a5 & 0x80u) != 0 )
  {
    v35 = *((_DWORD *)a5 + 3);
    if ( !v35 || (v35 & 0xFFF) != 0 )
    {
      WdLogSingleEntry1(1LL, 727LL);
      goto LABEL_41;
    }
  }
  v13 = *((_DWORD *)a5 + 9);
  v14 = *((_DWORD *)a2 + 10232) - 12;
  *((_DWORD *)this + 8) = v13;
  if ( !v13 )
  {
    WdLogSingleEntry1(1LL, 737LL);
    goto LABEL_41;
  }
  *((_DWORD *)this + 8) = (v13 + 4095) & 0xFFFFF000;
  v15 = *((_DWORD *)a5 + 7);
  *((_DWORD *)this + 10) = v15;
  v16 = *((_DWORD *)a5 + 12);
  *((_DWORD *)this + 14) = v16;
  v17 = *((_DWORD *)a5 + 8);
  *((_DWORD *)this + 12) = v17;
  v18 = *((_DWORD *)a5 + 13);
  *((_DWORD *)this + 16) = v18;
  if ( v15 > a7 )
  {
    WdLogSingleEntry1(1LL, 749LL);
    goto LABEL_41;
  }
  if ( v16 > a7 )
  {
    WdLogSingleEntry1(1LL, 754LL);
    goto LABEL_41;
  }
  if ( v17 > a7 )
  {
    WdLogSingleEntry1(1LL, 759LL);
    goto LABEL_41;
  }
  if ( v18 > a7 )
  {
    WdLogSingleEntry1(1LL, 764LL);
    goto LABEL_41;
  }
  v19 = *((unsigned int *)a5 + 6);
  *((_DWORD *)this + 17) = v19;
  v20 = 1 << v19;
  *((_DWORD *)this + 19) = 1 << v19;
  *((_DWORD *)this + 20) = (unsigned int)(1 << v19) >> 4;
  *((_DWORD *)this + 18) = (1 << v19) - 1;
  v21 = *((_DWORD *)a5 + 1);
  *((_DWORD *)this + 106) = v21;
  if ( (_DWORD)v19 && (unsigned int)v19 < v14 )
  {
    if ( v21 && (unsigned int)(v21 - 1) > 1 )
    {
      WdLogSingleEntry1(1LL, 784LL);
      goto LABEL_41;
    }
    *((_DWORD *)this + 9) = v15;
    if ( v15 )
    {
      if ( (*((_BYTE *)a4[v15 - 1] + 80) & 1) != 0 )
        v15 = 0;
      *((_DWORD *)this + 9) = v15;
    }
    *((_DWORD *)this + 13) = v16;
    if ( v16 )
    {
      if ( (*((_BYTE *)a4[v16 - 1] + 80) & 1) != 0 )
        v16 = 0;
      *((_DWORD *)this + 13) = v16;
    }
    *((_DWORD *)this + 11) = v17;
    if ( v17 )
    {
      if ( (*((_BYTE *)a4[v17 - 1] + 80) & 1) != 0 )
        v17 = 0;
      *((_DWORD *)this + 11) = v17;
    }
    v22 = *((_DWORD *)this + 16);
    *((_DWORD *)this + 15) = v22;
    if ( v22 )
    {
      if ( (*((_BYTE *)a4[v22 - 1] + 80) & 1) != 0 )
        v22 = 0;
      *((_DWORD *)this + 15) = v22;
    }
    v23 = (unsigned int)(v20 - 1);
    v24 = *((_DWORD *)a5 + 4) - 1;
    *((_DWORD *)this + 107) = v24;
    *((_DWORD *)this + 23) = v19;
    *((_QWORD *)this + 13) = v23;
    *((_DWORD *)this + 24) = *((_DWORD *)this + 8);
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_DWORD *)this + 22) = v20;
    *((_QWORD *)this + 16) = 1LL;
    if ( v24 == 1 )
    {
      v36 = *((_DWORD *)a2 + 10232) - v19;
      *((_QWORD *)this + 21) = v23;
      *((_DWORD *)this + 35) = v36;
      *((_QWORD *)this + 19) = ~v23;
      *((_QWORD *)this + 20) = v19;
      *((_QWORD *)this + 22) = 1LL << v19;
      *((_DWORD *)this + 34) = 0;
      *((_DWORD *)this + 36) = 0;
    }
    else
    {
      v25 = 1;
      if ( v24 )
      {
        while ( 1 )
        {
          v26 = v25;
          v27 = *((_DWORD *)a5 + 5 * v25 + 6);
          if ( !v27 || v27 > v14 - (unsigned int)v19 )
            break;
          LODWORD(v19) = v27 + v19;
          v28 = 6LL * v25;
          *((_DWORD *)this + 2 * v28 + 23) = v27;
          v29 = *((_QWORD *)this + 6 * v25 + 8) + *((unsigned int *)this + 12 * v25 + 11);
          *((_QWORD *)this + v28 + 14) = v29;
          v30 = *((_QWORD *)this + 6 * v25 + 7) | *((_QWORD *)this + 6 * v25 + 9);
          *((_QWORD *)this + v28 + 15) = v30;
          *((_QWORD *)this + v28 + 13) = ~v30 & ((1LL << v19) - 1);
          *((_DWORD *)this + 2 * v28 + 22) = 1LL << v27;
          v31 = *((_DWORD *)a5 + 5 * v25 + 9);
          *((_DWORD *)this + 12 * v25 + 24) = v31;
          *((_QWORD *)this + v28 + 16) = 1LL << v29;
          if ( !v31 )
          {
            WdLogSingleEntry1(1LL, 863LL);
            goto LABEL_41;
          }
          ++v25;
          *((_DWORD *)this + 12 * v26 + 24) = (v31 + 4095) & 0xFFFFF000;
          if ( v25 > *((_DWORD *)this + 107) )
            goto LABEL_36;
        }
        WdLogSingleEntry1(1LL, 848LL);
        goto LABEL_41;
      }
LABEL_36:
      if ( (_DWORD)v19 != v14 )
      {
        WdLogSingleEntry1(1LL, 870LL);
        goto LABEL_41;
      }
    }
    do
    {
      v32 = v10++;
      *((_DWORD *)this + 12 * v32 + 25) = *((_DWORD *)a5 + 5 * v32 + 10);
    }
    while ( v10 <= *((_DWORD *)this + 107) );
    return 0LL;
  }
  WdLogSingleEntry1(1LL, 776LL);
LABEL_41:
  DxgkLogInternalTriageEvent(v34, 0x40000LL);
  return 3221225485LL;
}
