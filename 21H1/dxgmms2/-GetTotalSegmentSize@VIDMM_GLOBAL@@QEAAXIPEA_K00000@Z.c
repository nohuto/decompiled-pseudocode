/*
 * XREFs of ?GetTotalSegmentSize@VIDMM_GLOBAL@@QEAAXIPEA_K00000@Z @ 0x1C0061878
 * Callers:
 *     VidMmGetTotalSegmentSize @ 0x1C00010F0 (VidMmGetTotalSegmentSize.c)
 * Callees:
 *     ?GetCurrent@VIDMM_PARTITION@@SAPEAU1@XZ @ 0x1C0001134 (-GetCurrent@VIDMM_PARTITION@@SAPEAU1@XZ.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C0064AD4 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_GLOBAL::GetTotalSegmentSize(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  unsigned __int64 v8; // rbx
  unsigned int v11; // r12d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdi
  unsigned int v14; // ecx
  unsigned __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  int v21; // r9d
  int v22; // r9d
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbp
  struct VIDMM_PARTITION *Current; // rax
  struct VIDMM_PARTITION *v27; // r9
  unsigned __int64 v28; // rax
  int v29; // ecx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rbx
  struct VIDMM_PARTITION *v31; // r9

  v8 = 0LL;
  v11 = a2;
  v12 = 0LL;
  *a6 = 0LL;
  v13 = 0LL;
  *a7 = 0LL;
  *a8 = 0LL;
  v14 = *(_DWORD *)(1584LL * a2 + *((_QWORD *)this + 5027) + 24);
  v15 = 0LL;
  if ( v14 )
  {
    v16 = *((_QWORD *)this + 464);
    v17 = 0LL;
    v18 = v14;
    do
    {
      v19 = *(_QWORD *)(v17 + v16);
      v20 = *(_QWORD *)(v19 + 208);
      v21 = *(_DWORD *)(v19 + 80);
      if ( v20 >= *(_QWORD *)(v19 + 48) )
        v20 = *(_QWORD *)(v19 + 48);
      if ( (v21 & 0x1001) != 0 )
      {
        v22 = *(_DWORD *)(v19 + 80) & 1;
        v23 = v20 + v12;
        if ( !v22 )
          v23 = v12;
        v12 = v23;
        if ( !v22 )
          v15 += v20;
      }
      else if ( (v21 & 0x40) != 0 )
      {
        *a7 += v20;
      }
      else
      {
        *a6 += v20;
      }
      v16 = *((_QWORD *)this + 464);
      v24 = v20 + v13;
      if ( *(_DWORD *)(*(_QWORD *)(v17 + v16) + 476LL) != 2 )
        v24 = v13;
      v17 += 8LL;
      v13 = v24;
      --v18;
    }
    while ( v18 );
    v11 = a2;
  }
  if ( v12 <= v15 )
    v12 = v15;
  *a8 = v12;
  v25 = qword_1C00514F8;
  Current = VIDMM_PARTITION::GetCurrent();
  v27 = Current;
  if ( Current )
    v25 = *(_QWORD *)(376LL * *(unsigned int *)(*((_QWORD *)this + 3) + 232LL) + *((_QWORD *)Current + 5) + 16);
  v28 = *a8;
  if ( *a8 > v25 )
  {
    *a8 = v25;
    v28 = v25;
  }
  v29 = *((_DWORD *)this + 10232);
  if ( v28 > 1LL << v29 && (*((_BYTE *)this + 40936) & 2) != 0 )
    *a8 = 1LL << v29;
  if ( v27 )
  {
    SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(this, v11, D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL, v27);
    *a3 = *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(this, v11, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL, v31) + 1);
    v8 = *((_QWORD *)SegmentGroupState + 1);
  }
  else
  {
    *a3 = 0LL;
    v13 = 0LL;
  }
  *a4 = v8;
  *a5 = v13;
}
