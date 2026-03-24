/*
 * XREFs of ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C0061B80
 * Callers:
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C0061AB4 (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001160 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     VidSchSuspendResumeDevice @ 0x1C0012580 (VidSchSuspendResumeDevice.c)
 *     VidSchMarkDeviceAsError @ 0x1C0015CB0 (VidSchMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0024A48 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C0061CE8 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 */

struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::TransferOwnershipToProcess(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3,
        struct _VIDMM_LOCAL_ALLOC *a4)
{
  __int64 v4; // rax
  int v5; // edi
  struct _VIDMM_LOCAL_ALLOC *v6; // rbp
  VIDMM_GLOBAL *v9; // r12
  PRKPROCESS *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v15; // rax
  struct _VIDMM_GLOBAL_ALLOC *v16; // r13
  struct _VIDMM_GLOBAL_ALLOC *v17; // r14
  char *v18; // rax
  _QWORD *v19; // r12
  _QWORD *v20; // rax
  _QWORD *v21; // r13
  struct _VIDSCH_DEVICE *v22; // rbx
  _KAPC_STATE ApcState; // [rsp+40h] [rbp-88h] BYREF

  v4 = *((_QWORD *)a2 + 16);
  v5 = 0;
  v6 = a4;
  v9 = this;
  if ( v4
    && (*(_DWORD *)(v4 + 80) & 0x1001) != 0
    && *((int *)a2 + 85) > 0
    && (v10 = (PRKPROCESS *)*((_QWORD *)a4 + 1),
        memset(&ApcState, 0, sizeof(ApcState)),
        KeStackAttachProcess(*v10, &ApcState),
        v11 = (int)VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(v9, a3, v6),
        KeUnstackDetachProcess(&ApcState),
        (int)v11 < 0) )
  {
    _InterlockedIncrement(&dword_1C0050674);
    v15 = (_QWORD *)WdLogNewEntry5_WdLowResource(v12);
    v15[3] = a2;
    v15[4] = *((_QWORD *)a2 + 1);
    v15[5] = v11;
    WdLogEvent5_WdLowResource(v15);
    v16 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 288);
    v17 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 36);
    if ( v17 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 288) )
    {
      do
      {
        v18 = (char *)v17 - 56;
        if ( (struct _VIDMM_GLOBAL_ALLOC *)((char *)v17 - 56) != a3 )
        {
          v19 = v18 + 40;
          v20 = (_QWORD *)*((_QWORD *)v18 + 5);
          if ( v20 != v19 )
          {
            v21 = v20;
            do
            {
              v22 = *(struct _VIDSCH_DEVICE **)(*(v21 - 4) + 32LL);
              VidSchMarkDeviceAsError((__int64)v22);
              VidSchSuspendResumeDevice(v22, 1, 0, 0);
              VidSchSuspendResumeDevice(v22, 0, 0, 0);
              v21 = (_QWORD *)*v21;
            }
            while ( v21 != v19 );
            v16 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 288);
          }
        }
        v17 = *(struct _VIDMM_GLOBAL_ALLOC **)v17;
      }
      while ( v17 != v16 );
      v9 = this;
    }
    VidMmRecordAlloc(v9, (__int64)a2, (__int64)a3, *((_QWORD *)a2 + 16), *((_QWORD *)a2 + 2), 0);
    VidMmRecordAlloc(v9, (__int64)a2, (__int64)v6, *((_QWORD *)a2 + 16), *((_QWORD *)a2 + 2), 1);
    *((_DWORD *)a2 + 19) |= 0x20000000u;
    v6 = 0LL;
    *((_DWORD *)a2 + 20) ^= (*((_DWORD *)a2 + 20) ^ *(_DWORD *)(*((_QWORD *)a2 + 16) + 20LL)) & 0x1F;
  }
  else if ( bTracingEnabled )
  {
    if ( v6 )
      v5 = *(_DWORD *)(*((_QWORD *)v6 + 1) + 8LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      v13 = *(unsigned int *)(*((_QWORD *)a3 + 1) + 8LL);
      McTemplateK0pqq_EtwWriteTransfer(v13, &EventTransferAllocationOwnership, (__int64)a3, a2, v13, v5);
    }
  }
  return v6;
}
