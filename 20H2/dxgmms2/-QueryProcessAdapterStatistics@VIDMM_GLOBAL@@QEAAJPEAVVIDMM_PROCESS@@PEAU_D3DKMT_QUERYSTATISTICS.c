/*
 * XREFs of ?QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C00254E4
 * Callers:
 *     ?VidMmQueryProcessAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C0022030 (-VidMmQueryProcessAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYST.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00115BC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011A88 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00123C8 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C006D7E8 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C0070734 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0070760 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryProcessAdapterStatistics(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  unsigned int v11; // eax
  unsigned int v12; // r8d
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  int v14; // r8d
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // r11
  _BYTE v19[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v20; // [rsp+28h] [rbp-30h]
  int v21; // [rsp+30h] [rbp-28h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, this + 5130, 0LL);
  DXGPUSHLOCK::AcquireShared(v20);
  v21 = 1;
  v6 = 0;
  v7 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * VIDMM_GLOBAL::AdapterId((VIDMM_GLOBAL *)this));
  if ( v7 )
  {
    *(_DWORD *)a3 = *((_DWORD *)this[5027] + 6);
    *((_QWORD *)a3 + 3) = *(_QWORD *)(v7 + 456);
    *((_DWORD *)a3 + 4) = *(_DWORD *)(v7 + 448);
    *((_DWORD *)a3 + 8) = *(_DWORD *)(v7 + 464);
    *((_DWORD *)a3 + 9) = *(_DWORD *)(v7 + 468);
    *((_QWORD *)a3 + 23) = 1LL;
    *((_QWORD *)a3 + 22) = *(int *)(v7 + 484);
    *((_QWORD *)a3 + 21) = (int)VIDMM_POLICY::IsActive((VIDMM_POLICY *)(v7 + 472));
    *(_OWORD *)((char *)a3 + 40) = 0LL;
    *(_OWORD *)((char *)a3 + 56) = 0LL;
    *(_OWORD *)((char *)a3 + 72) = 0LL;
    if ( *(_DWORD *)a3 )
    {
      v8 = 0LL;
      v9 = 0LL;
      v10 = 0LL;
      do
      {
        v11 = VIDMM_GLOBAL::AdapterId((VIDMM_GLOBAL *)this);
        CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(a2, v11, v12);
        *((_QWORD *)a3 + 5) = *((_QWORD *)CommitmentInformation + 20) + v15;
        *((_QWORD *)a3 + 6) = *((_QWORD *)CommitmentInformation + 9) + v16;
        *((_QWORD *)a3 + 7) = *((_QWORD *)CommitmentInformation + 11) + v17;
        v8 += *((_QWORD *)CommitmentInformation + 13);
        *((_QWORD *)a3 + 8) = v8;
        v9 += *((_QWORD *)CommitmentInformation + 15);
        *((_QWORD *)a3 + 9) = v9;
        v10 += *((_QWORD *)CommitmentInformation + 17);
        *((_QWORD *)a3 + 10) = v10;
      }
      while ( (unsigned int)(v14 + 1) < *(_DWORD *)a3 );
    }
  }
  else
  {
    v6 = -1073741811;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return v6;
}
