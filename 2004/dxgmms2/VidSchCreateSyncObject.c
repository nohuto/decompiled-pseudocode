/*
 * XREFs of VidSchCreateSyncObject @ 0x1C0081FE0
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006BD90 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1C0081CDC (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0095A50 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001A10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     McTemplateK0ppqqpx_EtwWriteTransfer @ 0x1C00246BC (McTemplateK0ppqqpx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqppqi_EtwWriteTransfer @ 0x1C0024774 (McTemplateK0ppqqppqi_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpqq_EtwWriteTransfer @ 0x1C002484C (McTemplateK0ppqqpqq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpt_EtwWriteTransfer @ 0x1C0024908 (McTemplateK0ppqqpt_EtwWriteTransfer.c)
 *     VidSchiAddSyncObjectToAdapterList @ 0x1C002EFE8 (VidSchiAddSyncObjectToAdapterList.c)
 *     VidSchiAddSyncObjectToCrossAdapterInfo @ 0x1C002F060 (VidSchiAddSyncObjectToCrossAdapterInfo.c)
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x1C0082298 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
 */

__int64 __fastcall VidSchCreateSyncObject(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *Object,
        _OWORD *a8)
{
  __int64 *v8; // r12
  __int64 v13; // rbp
  PVOID PoolWithTag; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  bool v18; // bp
  bool v19; // al
  struct DXGPROCESS *Current; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // r9
  int v28; // ecx
  _OWORD *v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  void *v35; // rcx
  NTSTATUS v36; // eax
  __int64 *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  const EVENT_DESCRIPTOR *v41; // rdx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-60h]

  v8 = Object;
  *Object = 0LL;
  v13 = (a3[1] & 4) != 0 ? 0x50 : 0;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v13 + 144, 0x38616956u);
  v17 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v32 = WdLogNewEntry5_WdWarning(v16, v15);
    WdLogEvent5_WdWarning(v32);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, v13 + 144);
  *(_DWORD *)v17 = 945908054;
  v18 = 1;
  *(_QWORD *)(v17 + 8) = a1;
  *(_QWORD *)(v17 + 16) = a2;
  *(_QWORD *)(v17 + 32) = 1LL;
  *(_BYTE *)(v17 + 24) = a3[1] & 1;
  *(_BYTE *)(v17 + 26) = (a3[1] & 0x80000000) != 0;
  v19 = (a3[1] & 4) != 0;
  *(_DWORD *)(v17 + 48) = a4;
  *(_BYTE *)(v17 + 27) = v19;
  Current = DXGPROCESS::GetCurrent();
  if ( Current && (*((_BYTE *)Current + 347) & 0x20) != 0 )
    *(_BYTE *)(v17 + 31) = 1;
  v23 = *a3;
  if ( (_DWORD)v23 == 1 )
  {
    *(_DWORD *)(v17 + 44) = 0;
    *(_BYTE *)(v17 + 25) = 0;
    if ( !a3[2] )
    {
      v24 = -1LL;
      goto LABEL_8;
    }
    *(_QWORD *)(v17 + 56) = 0LL;
    *(_QWORD *)(v17 + 64) = 0LL;
    goto LABEL_10;
  }
  if ( (_DWORD)v23 == 3 )
  {
    *(_DWORD *)(v17 + 44) = 2;
    *(_BYTE *)(v17 + 25) = 1;
    v24 = *((_QWORD *)a3 + 1);
    *(_QWORD *)(v17 + 72) = v24;
LABEL_8:
    *(_QWORD *)(v17 + 56) = v24;
LABEL_9:
    *(_QWORD *)(v17 + 64) = v24;
    goto LABEL_10;
  }
  if ( (_DWORD)v23 != 2 )
  {
    if ( (_DWORD)v23 != 4 )
    {
      if ( (unsigned int)(v23 - 5) <= 1 )
      {
        *(_BYTE *)(v17 + 25) = 1;
        *(_DWORD *)(v17 + 44) = 5 - ((_DWORD)v23 != 6);
        v28 = a3[1] & 0x80;
        *(_BYTE *)(v17 + 30) = v28 != 0;
        v29 = a8;
        if ( a8 )
        {
          *(_OWORD *)(v17 + 56) = *a8;
          *(_OWORD *)(v17 + 72) = v29[1];
          *(_QWORD *)(v17 + 88) = *((_QWORD *)v29 + 4);
          *(_BYTE *)(v17 + 29) = *(_BYTE *)(a2 + 276);
          goto LABEL_10;
        }
        if ( !*(_BYTE *)(a1 + 48) && !v28 )
          v18 = 0;
        *(_BYTE *)(v17 + 29) = v18;
        v30 = 0LL;
        if ( *a3 != 6 )
          v30 = *((_QWORD *)a3 + 1);
        LODWORD(v31) = VIDMM_GLOBAL::AllocateFenceStorageSlot(
                         (struct VIDMM_MONITORED_FENCE_STORAGE *)(v17 + 56),
                         *(_BYTE *)(v17 + 24) != 0,
                         0,
                         a2 == 0,
                         v30,
                         v18);
        if ( (int)v31 >= 0 )
        {
          *(_QWORD *)(v17 + 80) = a6;
          goto LABEL_10;
        }
        goto LABEL_48;
      }
      v33 = WdLogNewEntry5_WdWarning(v23, v21);
      WdLogEvent5_WdWarning(v33);
      goto LABEL_42;
    }
    if ( (a3[1] & 1) != 0 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v23, v21, v22);
      *(_QWORD *)(v34 + 24) = -1073741811LL;
      WdLogEvent5_WdAssertion(v34);
LABEL_42:
      LODWORD(v31) = -1073741811;
LABEL_48:
      ExFreePoolWithTag((PVOID)v17, 0);
      return (unsigned int)v31;
    }
    *(_DWORD *)(v17 + 44) = 3;
    *(_BYTE *)(v17 + 25) = 0;
    if ( *(_BYTE *)(v17 + 31) )
    {
      v24 = *((_QWORD *)a3 + 1);
      goto LABEL_9;
    }
    v35 = (void *)*((_QWORD *)a3 + 1);
    Object = 0LL;
    v36 = ObReferenceObjectByHandle(v35, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, (PVOID *)&Object, 0LL);
    v37 = Object;
    *(_QWORD *)(v17 + 56) = Object;
    v31 = v36;
    if ( v36 < 0 )
    {
      v38 = WdLogNewEntry5_WdWarning(v37, v21);
      *(_QWORD *)(v38 + 24) = v31;
      WdLogEvent5_WdWarning(v38);
      goto LABEL_48;
    }
LABEL_10:
    *(_QWORD *)(v17 + 104) = v17 + 96;
    *(_QWORD *)(v17 + 96) = v17 + 96;
    *(_QWORD *)(v17 + 120) = v17 + 112;
    *(_QWORD *)(v17 + 112) = v17 + 112;
    if ( *(_BYTE *)(v17 + 27) )
    {
      *(_QWORD *)(v17 + 208) = a5;
      *(_QWORD *)(v17 + 216) = VidSchPostSignalCrossAdapter;
      VidSchiAddSyncObjectToAdapterList(a1, v17);
      VidSchiAddSyncObjectToCrossAdapterInfo(v17);
    }
    v25 = bTracingEnabled == 0;
    *v8 = v17;
    if ( v25 )
      return 0LL;
    v26 = *(_QWORD *)(a1 + 16);
    if ( *a3 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(HandleInformation) = 0;
        McTemplateK0ppqqpt_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          &EventCreateSynchronizationMutex,
          0LL,
          v26,
          v17,
          HandleInformation,
          a3[1],
          a3[18],
          a3[2]);
      }
      return 0LL;
    }
    if ( *a3 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(HandleInformation) = 0;
        McTemplateK0ppqqpqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          &EventCreateSemaphore,
          0LL,
          v26,
          v17,
          HandleInformation,
          a3[1],
          a3[18],
          a3[2],
          a3[3]);
      }
      return 0LL;
    }
    if ( *a3 == 3 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        return 0LL;
      v41 = (const EVENT_DESCRIPTOR *)&EventCreateFence;
    }
    else
    {
      if ( *a3 == 4 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(HandleInformation) = 0;
          McTemplateK0ppqqpx_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventCreateCPUNotification,
            0LL,
            v26,
            v17,
            HandleInformation,
            a3[1],
            a3[18],
            *((_QWORD *)a3 + 1));
        }
        return 0LL;
      }
      if ( *a3 != 5 )
      {
        if ( *a3 == 6 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(HandleInformation) = 0;
            McTemplateK0ppqqppqi_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              &EventCreatePeriodicMonitoredFence,
              0LL,
              v26,
              v17,
              HandleInformation,
              a3[1],
              a3[18],
              a3[2],
              a3[3],
              *((_QWORD *)a3 + 2));
          }
        }
        else
        {
          v40 = WdLogNewEntry5_WdAssertion(*a3 - 5, v21, v22);
          *(_QWORD *)(v40 + 24) = 984LL;
          WdLogEvent5_WdAssertion(v40);
        }
        return 0LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        return 0LL;
      v41 = (const EVENT_DESCRIPTOR *)&EventCreateMonitoredFence;
    }
    LODWORD(HandleInformation) = 0;
    McTemplateK0ppqqpx_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      v41,
      0LL,
      v26,
      v17,
      HandleInformation,
      a3[1],
      a3[18],
      *((_QWORD *)a3 + 1));
    return 0LL;
  }
  if ( a3[3] <= a3[2] )
  {
    *(_DWORD *)(v17 + 44) = 1;
    *(_BYTE *)(v17 + 25) = 0;
    *(_DWORD *)(v17 + 56) = a3[3];
    *(_DWORD *)(v17 + 64) = a3[3];
    *(_DWORD *)(v17 + 60) = a3[2];
    goto LABEL_10;
  }
  v39 = WdLogNewEntry5_WdAssertion(v23, v21, v22);
  WdLogEvent5_WdAssertion(v39);
  ExFreePoolWithTag((PVOID)v17, 0);
  return 3221225485LL;
}
