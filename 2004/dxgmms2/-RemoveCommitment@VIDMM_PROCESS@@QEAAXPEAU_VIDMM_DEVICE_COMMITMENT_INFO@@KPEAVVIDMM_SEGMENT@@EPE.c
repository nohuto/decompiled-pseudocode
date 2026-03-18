/*
 * XREFs of ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006FE04
 * Callers:
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C006FCE4 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     McTemplateK0xxpqhu_EtwWriteTransfer @ 0x1C0025D5C (McTemplateK0xxpqhu_EtwWriteTransfer.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C0086ED8 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_PROCESS::RemoveCommitment(
        VIDMM_PROCESS *this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        unsigned __int8 a5,
        struct _VIDMM_GLOBAL_ALLOC *a6)
{
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
  __int64 v19; // r8
  _QWORD *v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 PriorityClass; // r8

  v8 = a3;
  v10 = *((_QWORD *)a6 + 2);
  if ( g_IsInternalReleaseOrDbg )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v23[3] = this;
    v23[4] = v8;
    v23[5] = a4;
    v23[6] = a5;
    v23[7] = v10;
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
  v14 = (__int64)a2 + 16;
  v19 = *((_QWORD *)a2 + 2);
  if ( *(struct _VIDMM_DEVICE_COMMITMENT_INFO **)(v19 + 8) != (struct _VIDMM_DEVICE_COMMITMENT_INFO *)((char *)a2 + 16) )
    goto LABEL_22;
  v20 = (_QWORD *)*((_QWORD *)a2 + 3);
  if ( *v20 != v14 )
    goto LABEL_22;
  *v20 = v19;
  v15 = 1;
  *(_QWORD *)(v19 + 8) = v20;
  *(_QWORD *)v14 = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  if ( *(_DWORD *)(v13 + 8) )
LABEL_6:
    v15 = 0;
  v16 = (_QWORD *)(v13 + 24);
  if ( g_IsInternalReleaseOrDbg )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
    v24[3] = v16;
    v24[4] = a4;
    v24[5] = v15;
    v24[6] = v10;
  }
  if ( v15 )
  {
    v21 = *v16;
    if ( *(_QWORD **)(*v16 + 8LL) == v16 )
    {
      v22 = (_QWORD *)v16[1];
      if ( (_QWORD *)*v22 == v16 )
      {
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
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
  v18 = v17[6] + 296 * (*((_DWORD *)a6 + 19) & 0x3FLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 8LL * *((int *)a4 + 119) + 200), -v10);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    McTemplateK0xxpqhu_EtwWriteTransfer(v17[5], &EventVidMmProcessCommitmentChange, *v17);
  if ( (*((_DWORD *)a4 + 20) & 0x1001) != 0 && (*((_DWORD *)a6 + 19) & 0x400) == 0 )
  {
    PriorityClass = (int)VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a6 + 92));
    *(_QWORD *)(v18 + 8 * PriorityClass + 256) -= v10;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      McTemplateK0xxpqhu_EtwWriteTransfer(
        *((_WORD *)a6 + 38) & 0x3F,
        &EventVidMmProcessDemotedCommitmentChange,
        PriorityClass);
  }
}
