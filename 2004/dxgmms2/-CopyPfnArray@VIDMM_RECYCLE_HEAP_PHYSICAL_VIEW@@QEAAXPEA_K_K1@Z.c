/*
 * XREFs of ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C0077CD8
 * Callers:
 *     ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C007C394 (-GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C0087860 (-GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z.c)
 *     ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1C0089FE0 (-GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z.c)
 * Callees:
 *     memmove @ 0x1C0016B00 (memmove.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C0077DF4 (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v6; // r8
  char v7; // r9
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v8; // rax
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v9; // rdi
  char v11; // r12
  unsigned __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbx
  struct VIDMM_MDL_RANGE *NextRange; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax

  v6 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8);
  v7 = 0;
  v8 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)*((_QWORD *)this + 1);
  v9 = 0LL;
  if ( v8 == (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8) )
    goto LABEL_16;
  do
  {
    if ( v7 )
      break;
    this = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v8 - 24);
    v8 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v8;
    if ( *((_QWORD *)this + 2) > a3 )
    {
      v7 = 1;
      v9 = this;
    }
  }
  while ( v8 != v6 );
  if ( !v9 || *((_QWORD *)v9 + 1) > a3 )
  {
LABEL_16:
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v21[7] = 0LL;
    v21[3] = 270LL;
    v21[4] = 52LL;
    v21[5] = 17LL;
    v21[6] = v9;
    WdLogEvent5_WdCriticalError(v21);
  }
  v11 = 0;
  v12 = a3;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = *((_QWORD *)v9 + 1);
    v15 = *((_QWORD *)v9 + 2);
    v16 = (v12 - v14) >> 12;
    if ( a4 <= v15 )
    {
      v15 = a4;
      v11 = 1;
    }
    v17 = ((v15 - v14) >> 12) - v16;
    memmove(&a2[v13], (const void *)(*(_QWORD *)v9 + 8 * (v16 + 6)), 8 * v17);
    v12 = *((_QWORD *)v9 + 2);
    v13 += v17;
    NextRange = VIDMM_MDL_RANGE::GetNextRange(v9);
    v9 = NextRange;
    if ( v11 )
      break;
    if ( *((_QWORD *)NextRange + 1) != v12 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
      v22[7] = 0LL;
      v22[3] = 270LL;
      v22[4] = 52LL;
      v22[5] = 18LL;
      v22[6] = v9;
      WdLogEvent5_WdCriticalError(v22);
    }
  }
  if ( v13 != (a4 - a3) >> 12 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
    v23[7] = 0LL;
    v23[3] = 270LL;
    v23[4] = 52LL;
    v23[5] = 19LL;
    v23[6] = v13;
    WdLogEvent5_WdCriticalError(v23);
  }
}
