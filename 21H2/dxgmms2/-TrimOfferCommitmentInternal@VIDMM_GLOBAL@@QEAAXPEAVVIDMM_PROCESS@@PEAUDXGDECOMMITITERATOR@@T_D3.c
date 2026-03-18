/*
 * XREFs of ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00DA24C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0014F50 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D5C58 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00D7A08 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::TrimOfferCommitmentInternal(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  char v6; // bl
  unsigned __int64 v7; // r15
  unsigned __int64 v11; // r12
  struct _KTHREAD *v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  char v16; // bl
  bool v17; // r14
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // [rsp+20h] [rbp-58h]
  _BYTE v23[8]; // [rsp+28h] [rbp-50h] BYREF
  DXGPUSHLOCK *v24; // [rsp+30h] [rbp-48h]
  int v25; // [rsp+38h] [rbp-40h]
  struct _VIDMM_GLOBAL_ALLOC *v26; // [rsp+80h] [rbp+8h]
  _QWORD *v27; // [rsp+88h] [rbp+10h]

  v6 = (char)a4.0;
  v7 = a5;
  v11 = 0LL;
  v22 = *(_BYTE *)&a4.0 & 1;
  WdLogSingleEntry1(4LL, v22);
  if ( (v6 & 1) != 0 )
  {
    v7 = (unsigned int)(dword_1C006E530 << 20);
    if ( a5 < v7 )
      v7 = a5;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23, this + 5130, 0);
  DXGPUSHLOCK::AcquireShared(v24);
  v12 = this[3];
  v25 = 1;
  v13 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *((unsigned int *)v12 + 60));
  if ( v13 && *(_QWORD *)(v13 + 520) == *(_QWORD *)a3 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4997));
    v14 = (_QWORD *)(v13 + 424);
    v15 = (_QWORD *)*((_QWORD *)a3 + 3);
    v27 = v14;
    if ( v15 != v14 )
    {
      v16 = (v6 & 2) != 0;
      do
      {
        v26 = (struct _VIDMM_GLOBAL_ALLOC *)(v15 - 54);
        *((_QWORD *)a3 + 3) = *v15;
        v17 = 0;
        if ( VIDMM_GLOBAL::IsAllocationDecommitCandidate(
               (VIDMM_GLOBAL *)this,
               (struct _VIDMM_GLOBAL_ALLOC *)(v15 - 54),
               v16) )
        {
          this[5589] = (struct _KTHREAD *)(v15 - 54);
          v18 = *v15;
          if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v19 = (_QWORD *)v15[1], (_QWORD *)*v19 != v15) )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
          *v15 = 0LL;
          this[4998] = 0LL;
          ExReleasePushLockExclusiveEx(this + 4997, 0LL);
          KeLeaveCriticalRegion();
          if ( VIDMM_GLOBAL::DecommitGlobalAllocation(
                 (VIDMM_GLOBAL *)this,
                 (struct _VIDMM_GLOBAL_ALLOC **)v26,
                 v20,
                 v21) )
          {
            v11 += *((_QWORD *)v26 + 1);
            v17 = v11 >= v7;
          }
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4997));
          this[5589] = 0LL;
          if ( v17 )
            break;
        }
        v15 = (_QWORD *)*((_QWORD *)a3 + 3);
      }
      while ( v15 != v27 );
    }
    this[4998] = 0LL;
    ExReleasePushLockExclusiveEx(this + 4997, 0LL);
    KeLeaveCriticalRegion();
    *a6 = v11;
    WdLogSingleEntry3(4LL, a5, v11, v22);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
}
