/*
 * XREFs of ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C00B1548
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0093CB8 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_GLOBAL *a2,
        __int64 a3,
        struct VIDMM_SEGMENT *const *a4,
        const struct DXGADAPTER_GPUMMUCAPS *a5,
        const struct DXGK_PHYSICALADAPTERINFO *a6,
        unsigned int a7)
{
  unsigned int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // r14d
  unsigned int v20; // esi
  unsigned int v21; // r10d
  unsigned int v22; // r9d
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  int v28; // r15d
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // esi
  unsigned int v33; // ebp
  __int64 v34; // r10
  __int64 v35; // r9
  __int64 v36; // r8

  *((_BYTE *)this + 436) |= 0x20u;
  if ( (*((_BYTE *)a2 + 40936) & 2) != 0 )
  {
    v10 = 0;
    *((_QWORD *)this + 55) = a5;
    v11 = *((unsigned int *)a2 + 10232);
    v12 = *((_DWORD *)a5 + 2);
    if ( (_DWORD)v11 )
    {
      if ( v12 != (_DWORD)v11 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v11, a2, a3);
        *(_QWORD *)(v13 + 24) = 706LL;
        goto LABEL_6;
      }
    }
    else
    {
      *((_DWORD *)a2 + 10232) = v12;
      if ( v12 <= 0xC || v12 > 0x3F )
      {
        v13 = WdLogNewEntry5_WdAssertion(v11, a2, a3);
        *(_QWORD *)(v13 + 24) = 697LL;
LABEL_6:
        WdLogEvent5_WdAssertion(v13);
        return 3221225485LL;
      }
    }
    v16 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    v15 = 360LL * (unsigned int)a3;
    LOBYTE(v16) = (*((_BYTE *)this + 436) ^ (4 * *(_BYTE *)(*(_QWORD *)(v16 + 2560) + v15 + 48))) & 4;
    *((_BYTE *)this + 436) ^= v16;
    if ( (*(_DWORD *)a5 & 0x80u) != 0 )
    {
      v17 = *((_DWORD *)a5 + 3);
      if ( !v17 || (v17 & 0xFFF) != 0 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v15, v16, a3);
        *(_QWORD *)(v13 + 24) = 721LL;
        goto LABEL_6;
      }
    }
    v18 = *((_DWORD *)a5 + 9);
    v19 = *((_DWORD *)a2 + 10232) - 12;
    *((_DWORD *)this + 8) = v18;
    if ( !v18 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v15, v16, a3);
      *(_QWORD *)(v13 + 24) = 731LL;
      goto LABEL_6;
    }
    *((_DWORD *)this + 8) = (v18 + 4095) & 0xFFFFF000;
    v20 = *((_DWORD *)a5 + 7);
    *((_DWORD *)this + 10) = v20;
    v21 = *((_DWORD *)a5 + 12);
    *((_DWORD *)this + 14) = v21;
    v22 = *((_DWORD *)a5 + 8);
    *((_DWORD *)this + 12) = v22;
    v23 = *((unsigned int *)a5 + 13);
    *((_DWORD *)this + 16) = v23;
    if ( v20 > a7 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v15, v16, v23);
      *(_QWORD *)(v13 + 24) = 743LL;
      goto LABEL_6;
    }
    if ( v21 > a7 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v15, v16, v23);
      *(_QWORD *)(v13 + 24) = 748LL;
      goto LABEL_6;
    }
    if ( v22 > a7 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v15, v16, v23);
      *(_QWORD *)(v13 + 24) = 753LL;
      goto LABEL_6;
    }
    if ( (unsigned int)v23 > a7 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v15, v16, v23);
      *(_QWORD *)(v13 + 24) = 758LL;
      goto LABEL_6;
    }
    v24 = *((unsigned int *)a5 + 6);
    *((_DWORD *)this + 17) = v24;
    v25 = (unsigned int)(1 << v24);
    *((_DWORD *)this + 19) = v25;
    *((_DWORD *)this + 20) = (unsigned int)v25 >> 4;
    *((_DWORD *)this + 18) = v25 - 1;
    v26 = *((_DWORD *)a5 + 1);
    *((_DWORD *)this + 106) = v26;
    if ( !(_DWORD)v24 || (unsigned int)v24 >= v19 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v24, v25, v23);
      *(_QWORD *)(v13 + 24) = 770LL;
      goto LABEL_6;
    }
    if ( v26 && (unsigned int)(v26 - 1) > 1 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v24, v25, v23);
      *(_QWORD *)(v13 + 24) = 778LL;
      goto LABEL_6;
    }
    *((_DWORD *)this + 9) = v20;
    if ( v20 )
    {
      if ( (*((_BYTE *)a4[v20 - 1] + 80) & 1) != 0 )
        v20 = 0;
      *((_DWORD *)this + 9) = v20;
    }
    *((_DWORD *)this + 13) = v21;
    if ( v21 )
    {
      if ( (*((_BYTE *)a4[v21 - 1] + 80) & 1) != 0 )
        v21 = 0;
      *((_DWORD *)this + 13) = v21;
    }
    *((_DWORD *)this + 11) = v22;
    if ( v22 )
    {
      if ( (*((_BYTE *)a4[v22 - 1] + 80) & 1) != 0 )
        v22 = 0;
      *((_DWORD *)this + 11) = v22;
    }
    *((_DWORD *)this + 15) = v23;
    if ( (_DWORD)v23 )
    {
      if ( (*((_BYTE *)a4[(unsigned int)(v23 - 1)] + 80) & 1) != 0 )
        v23 = 0LL;
      *((_DWORD *)this + 15) = v23;
    }
    v27 = (unsigned int)(v25 - 1);
    v28 = v24;
    *((_DWORD *)this + 107) = *((_DWORD *)a5 + 4) - 1;
    *((_DWORD *)this + 23) = v24;
    *((_QWORD *)this + 13) = v27;
    *((_DWORD *)this + 22) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 24) = *((_DWORD *)this + 8);
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 1LL;
    if ( *((_DWORD *)this + 107) == 1 )
    {
      v29 = *((unsigned int *)this + 17);
      v30 = *((_DWORD *)a2 + 10232) - v29;
      *((_QWORD *)this + 21) = v27;
      *((_DWORD *)this + 35) = v30;
      *((_QWORD *)this + 20) = v29;
      *((_QWORD *)this + 22) = 1LL << v29;
      *((_QWORD *)this + 19) = ~v27;
      *((_DWORD *)this + 34) = 0;
      *((_DWORD *)this + 36) = 0;
    }
    else
    {
      v32 = 1;
      if ( *((_DWORD *)this + 107) )
      {
        while ( 1 )
        {
          v33 = *((_DWORD *)a5 + 5 * v32 + 6);
          if ( !v33 || v33 > v19 - v28 )
            break;
          v28 += v33;
          v34 = 6LL * v32;
          *((_DWORD *)this + 2 * v34 + 23) = v33;
          v35 = *((_QWORD *)this + 6 * v32 + 8) + *((unsigned int *)this + 12 * v32 + 11);
          *((_QWORD *)this + v34 + 14) = v35;
          v36 = *((_QWORD *)this + 6 * v32 + 7) | *((_QWORD *)this + 6 * v32 + 9);
          *((_QWORD *)this + v34 + 15) = v36;
          *((_QWORD *)this + v34 + 13) = ~v36 & ((1LL << v28) - 1);
          *((_DWORD *)this + 2 * v34 + 22) = 1LL << v33;
          v27 = 6 * (v32 + 2LL);
          v23 = *((unsigned int *)a5 + 5 * v32 + 9);
          v24 = v35;
          *((_DWORD *)this + 12 * v32 + 24) = v23;
          *((_QWORD *)this + v34 + 16) = 1LL << v35;
          if ( !(_DWORD)v23 )
          {
            v13 = WdLogNewEntry5_WdAssertion(v35, v27, v23);
            *(_QWORD *)(v13 + 24) = 857LL;
            goto LABEL_6;
          }
          ++v32;
          *((_DWORD *)this + 2 * v27) = (v23 + 4095) & 0xFFFFF000;
          if ( v32 > *((_DWORD *)this + 107) )
            goto LABEL_53;
        }
        v13 = WdLogNewEntry5_WdAssertion(v24, v27, v23);
        *(_QWORD *)(v13 + 24) = 842LL;
        goto LABEL_6;
      }
LABEL_53:
      if ( v28 != v19 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v24, v27, v23);
        *(_QWORD *)(v13 + 24) = 864LL;
        goto LABEL_6;
      }
    }
    do
    {
      v31 = v10++;
      *((_DWORD *)this + 12 * v31 + 25) = *((_DWORD *)a5 + 5 * v31 + 10);
    }
    while ( v10 <= *((_DWORD *)this + 107) );
  }
  return 0LL;
}
