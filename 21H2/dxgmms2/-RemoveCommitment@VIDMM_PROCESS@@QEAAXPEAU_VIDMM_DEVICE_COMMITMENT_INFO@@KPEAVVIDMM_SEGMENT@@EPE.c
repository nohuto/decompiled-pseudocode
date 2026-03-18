/*
 * XREFs of ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A0C94
 * Callers:
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00A0B78 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     McTemplateK0xxpqhu_EtwWriteTransfer @ 0x1C002FE90 (McTemplateK0xxpqhu_EtwWriteTransfer.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00A5584 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_PROCESS::RemoveCommitment(
        VIDMM_PROCESS *this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        __int64 a3,
        struct VIDMM_SEGMENT *a4,
        unsigned __int8 a5,
        struct _VIDMM_GLOBAL_ALLOC *a6)
{
  struct _VIDMM_DEVICE_COMMITMENT_INFO *v7; // r15
  __int64 v8; // rbx
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int8 v15; // si
  _QWORD *v16; // rbx
  __int64 *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 PriorityClass; // r8

  v7 = a2;
  v8 = (unsigned int)a3;
  v10 = *((_QWORD *)a6 + 2);
  if ( g_IsInternalReleaseOrDbg )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, 0LL);
    v21[3] = this;
    v21[4] = v8;
    v21[5] = a4;
    v21[6] = a5;
    v21[7] = v10;
  }
  v11 = v8;
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v8);
  if ( v12 )
    v13 = *(_QWORD *)(v12 + 16) + 184LL * *((unsigned int *)a4 + 5);
  else
    v13 = 0LL;
  *(_QWORD *)(v13 + 16) -= v10;
  v14 = 0xFFFFFFFFLL;
  --*(_DWORD *)(v13 + 56);
  if ( !a5 )
    goto LABEL_6;
  --*(_DWORD *)(v13 + 8);
  v14 = (__int64)v7 + 16;
  a3 = *((_QWORD *)v7 + 2);
  if ( *(struct _VIDMM_DEVICE_COMMITMENT_INFO **)(a3 + 8) != (struct _VIDMM_DEVICE_COMMITMENT_INFO *)((char *)v7 + 16) )
    goto LABEL_22;
  a2 = (struct _VIDMM_DEVICE_COMMITMENT_INFO *)*((_QWORD *)v7 + 3);
  if ( *(_QWORD *)a2 != v14 )
    goto LABEL_22;
  *(_QWORD *)a2 = a3;
  v15 = 1;
  *(_QWORD *)(a3 + 8) = a2;
  *(_QWORD *)v14 = 0LL;
  *((_QWORD *)v7 + 3) = 0LL;
  if ( *(_DWORD *)(v13 + 8) )
LABEL_6:
    v15 = 0;
  v16 = (_QWORD *)(v13 + 24);
  if ( g_IsInternalReleaseOrDbg )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, a2, a3, 0LL);
    v22[3] = v16;
    v22[4] = a4;
    v22[5] = v15;
    v22[6] = v10;
  }
  if ( v15 )
  {
    v19 = *v16;
    if ( *(_QWORD **)(*v16 + 8LL) == v16 )
    {
      v20 = (_QWORD *)v16[1];
      if ( (_QWORD *)*v20 == v16 )
      {
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        *v16 = 0LL;
        v16[1] = 0LL;
        goto LABEL_10;
      }
    }
LABEL_22:
    __fastfail(3u);
  }
LABEL_10:
  v17 = *(__int64 **)(*((_QWORD *)this + 2) + 8 * v11);
  v18 = v17[6] + 296 * (*((_DWORD *)a6 + 17) & 0x3FLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 8LL * *((int *)a4 + 119) + 200), -v10);
  if ( (byte_1C006E941 & 0x10) != 0 )
    McTemplateK0xxpqhu_EtwWriteTransfer(v17[5], &EventVidMmProcessCommitmentChange, *v17);
  if ( (*((_DWORD *)a4 + 20) & 0x1001) != 0 && (*((_DWORD *)a6 + 17) & 0x400) == 0 )
  {
    PriorityClass = (int)VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a6 + 98));
    *(_QWORD *)(v18 + 8 * PriorityClass + 256) -= v10;
    if ( (byte_1C006E941 & 0x10) != 0 )
      McTemplateK0xxpqhu_EtwWriteTransfer(
        *((_WORD *)a6 + 34) & 0x3F,
        &EventVidMmProcessDemotedCommitmentChange,
        PriorityClass);
  }
}
