/*
 * XREFs of VidSchCreateSyncObject @ 0x1C0099A90
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008F230 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1C0099788 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B7E9C (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     DxgkAcquireGuestCpuEvent @ 0x1C002D10C (DxgkAcquireGuestCpuEvent.c)
 *     McTemplateK0ppqqpx_EtwWriteTransfer @ 0x1C002E810 (McTemplateK0ppqqpx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqppqi_EtwWriteTransfer @ 0x1C002E8C8 (McTemplateK0ppqqppqi_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpqq_EtwWriteTransfer @ 0x1C002E9A0 (McTemplateK0ppqqpqq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpt_EtwWriteTransfer @ 0x1C002EA5C (McTemplateK0ppqqpt_EtwWriteTransfer.c)
 *     VidSchiAddSyncObjectToAdapterList @ 0x1C003870C (VidSchiAddSyncObjectToAdapterList.c)
 *     VidSchiAddSyncObjectToCrossAdapterInfo @ 0x1C0038794 (VidSchiAddSyncObjectToCrossAdapterInfo.c)
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x1C0099D3C (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
 */

__int64 __fastcall VidSchCreateSyncObject(
        __int64 a1,
        __int64 a2,
        int *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *Object,
        _OWORD *a8)
{
  __int64 *v8; // r15
  __int64 Pool2; // rax
  __int64 v14; // rdi
  int v15; // ecx
  char v16; // al
  struct DXGPROCESS *Current; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // edx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int64 v24; // xmm0_8
  char v25; // al
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // r9
  bool v30; // al
  unsigned __int64 v31; // r8
  int FenceStorageSlot; // ebx
  __int64 v33; // rcx
  void *v34; // rcx
  NTSTATUS v35; // eax
  NTSTATUS v36; // ebp
  unsigned int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rcx
  const EVENT_DESCRIPTOR *v41; // rdx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-60h]

  v8 = Object;
  *Object = 0LL;
  Pool2 = ExAllocatePool2(64LL, (a3[1] & 4) != 0 ? 224LL : 144LL, 945908054LL);
  v14 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    return 3221225495LL;
  }
  v15 = a3[1];
  *(_DWORD *)Pool2 = 945908054;
  *(_DWORD *)(Pool2 + 36) = 1;
  *(_QWORD *)(Pool2 + 8) = a1;
  *(_QWORD *)(Pool2 + 16) = a2;
  *(_DWORD *)(Pool2 + 40) = 0;
  v16 = a3[1] & 1;
  *(_DWORD *)(v14 + 52) = a4;
  *(_BYTE *)(v14 + 24) = v16;
  *(_BYTE *)(v14 + 27) = (v15 & 4) != 0;
  *(_BYTE *)(v14 + 26) = v15 < 0;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v18 = *((_DWORD *)Current + 106);
    if ( (v18 & 0x100) != 0 )
    {
      *(_BYTE *)(v14 + 31) = 1;
      v18 = *((_DWORD *)Current + 106);
    }
    if ( (v18 & 0x10) != 0 )
      *(_WORD *)(v14 + 31) = 257;
  }
  v19 = *a3;
  if ( *a3 == 1 )
  {
    *(_DWORD *)(v14 + 48) = 0;
    *(_BYTE *)(v14 + 25) = 0;
    if ( a3[2] )
    {
      *(_QWORD *)(v14 + 56) = 0LL;
      *(_QWORD *)(v14 + 64) = 0LL;
      goto LABEL_17;
    }
    v26 = -1LL;
    goto LABEL_16;
  }
  if ( v19 != 2 )
  {
    if ( v19 != 3 )
    {
      if ( v19 != 4 )
      {
        if ( (unsigned int)(v19 - 5) <= 1 )
        {
          v20 = a3[1];
          *(_BYTE *)(v14 + 25) = 1;
          v21 = v20 & 0x80;
          *(_DWORD *)(v14 + 48) = 5 - (v19 != 6);
          *(_BYTE *)(v14 + 30) = v21 != 0;
          v22 = a8;
          if ( a8 )
          {
            v23 = a8[1];
            *(_OWORD *)(v14 + 56) = *a8;
            v24 = *((_QWORD *)v22 + 4);
            v25 = *(_BYTE *)(a2 + 284) & 1;
            *(_OWORD *)(v14 + 72) = v23;
            *(_BYTE *)(v14 + 29) = v25;
            *(_QWORD *)(v14 + 88) = v24;
            goto LABEL_17;
          }
          if ( *(_BYTE *)(a1 + 48) || (v30 = 0, v21) )
            v30 = 1;
          *(_BYTE *)(v14 + 29) = v30;
          v31 = 0LL;
          if ( v19 != 6 )
            v31 = *((_QWORD *)a3 + 1);
          FenceStorageSlot = VIDMM_GLOBAL::AllocateFenceStorageSlot(
                               (struct VIDMM_MONITORED_FENCE_STORAGE *)(v14 + 56),
                               *(_BYTE *)(v14 + 24) != 0,
                               0,
                               a2 == 0,
                               v31,
                               v30);
          if ( FenceStorageSlot >= 0 )
          {
            *(_QWORD *)(v14 + 80) = a6;
            goto LABEL_17;
          }
          goto LABEL_49;
        }
        WdLogSingleEntry0(3LL);
        goto LABEL_43;
      }
      if ( (a3[1] & 1) != 0 )
      {
        WdLogSingleEntry1(1LL, -1073741811LL);
        DxgkLogInternalTriageEvent(v33, 0x40000LL);
LABEL_43:
        FenceStorageSlot = -1073741811;
LABEL_49:
        ExFreePoolWithTag((PVOID)v14, 0);
        return (unsigned int)FenceStorageSlot;
      }
      v34 = (void *)*((_QWORD *)a3 + 1);
      *(_DWORD *)(v14 + 48) = 3;
      *(_BYTE *)(v14 + 25) = 0;
      if ( *(_BYTE *)(v14 + 31) )
      {
        *(_QWORD *)(v14 + 64) = v34;
        DxgkAcquireGuestCpuEvent();
      }
      else
      {
        Object = 0LL;
        v35 = ObReferenceObjectByHandle(v34, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, (PVOID *)&Object, 0LL);
        *(_QWORD *)(v14 + 56) = Object;
        v36 = v35;
        if ( v35 < 0 )
        {
          WdLogSingleEntry1(3LL, v35);
          FenceStorageSlot = v36;
          goto LABEL_49;
        }
      }
LABEL_17:
      *(_QWORD *)(v14 + 104) = v14 + 96;
      *(_QWORD *)(v14 + 96) = v14 + 96;
      *(_QWORD *)(v14 + 120) = v14 + 112;
      *(_QWORD *)(v14 + 112) = v14 + 112;
      if ( *(_BYTE *)(v14 + 27) )
      {
        *(_QWORD *)(v14 + 208) = a5;
        *(_QWORD *)(v14 + 216) = VidSchPostSignalCrossAdapter;
        VidSchiAddSyncObjectToAdapterList(a1, v14);
        VidSchiAddSyncObjectToCrossAdapterInfo(v14);
      }
      v27 = bTracingEnabled == 0;
      *v8 = v14;
      if ( v27 )
        return 0LL;
      v28 = *(_QWORD *)(a1 + 16);
      if ( *a3 == 1 )
      {
        if ( (byte_1C006E941 & 1) != 0 )
        {
          LODWORD(HandleInformation) = 0;
          McTemplateK0ppqqpt_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventCreateSynchronizationMutex,
            0LL,
            v28,
            v14,
            HandleInformation,
            a3[1],
            (unsigned int)a3[18],
            a3[2]);
        }
        return 0LL;
      }
      if ( *a3 == 2 )
      {
        if ( (byte_1C006E941 & 1) != 0 )
        {
          LODWORD(HandleInformation) = 0;
          McTemplateK0ppqqpqq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventCreateSemaphore,
            0LL,
            v28,
            v14,
            HandleInformation,
            a3[1],
            (unsigned int)a3[18],
            a3[2],
            a3[3]);
        }
        return 0LL;
      }
      if ( *a3 == 3 )
      {
        if ( (byte_1C006E941 & 1) == 0 )
          return 0LL;
        v41 = (const EVENT_DESCRIPTOR *)&EventCreateFence;
      }
      else
      {
        if ( *a3 == 4 )
        {
          if ( (byte_1C006E941 & 1) != 0 )
          {
            LODWORD(HandleInformation) = 0;
            McTemplateK0ppqqpx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              &EventCreateCPUNotification,
              0LL,
              v28,
              v14,
              HandleInformation,
              a3[1],
              (unsigned int)a3[18],
              *((_QWORD *)a3 + 1));
          }
          return 0LL;
        }
        if ( *a3 != 5 )
        {
          if ( *a3 == 6 )
          {
            if ( (byte_1C006E941 & 1) != 0 )
            {
              LODWORD(HandleInformation) = 0;
              McTemplateK0ppqqppqi_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                &EventCreatePeriodicMonitoredFence,
                0LL,
                v28,
                v14,
                HandleInformation,
                a3[1],
                (unsigned int)a3[18],
                (unsigned int)a3[2],
                a3[3],
                *((_QWORD *)a3 + 2));
            }
          }
          else
          {
            WdLogSingleEntry1(1LL, 1032LL);
            DxgkLogInternalTriageEvent(v40, 262146LL);
          }
          return 0LL;
        }
        if ( (byte_1C006E941 & 1) == 0 )
          return 0LL;
        v41 = (const EVENT_DESCRIPTOR *)&EventCreateMonitoredFence;
      }
      LODWORD(HandleInformation) = 0;
      McTemplateK0ppqqpx_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v41,
        0LL,
        v28,
        v14,
        HandleInformation,
        a3[1],
        (unsigned int)a3[18],
        *((_QWORD *)a3 + 1));
      return 0LL;
    }
    v26 = *((_QWORD *)a3 + 1);
    *(_QWORD *)(v14 + 72) = v26;
    *(_DWORD *)(v14 + 48) = 2;
    *(_BYTE *)(v14 + 25) = 1;
LABEL_16:
    *(_QWORD *)(v14 + 64) = v26;
    *(_QWORD *)(v14 + 56) = v26;
    goto LABEL_17;
  }
  v37 = a3[3];
  v38 = a3[2];
  if ( v37 <= v38 )
  {
    *(_DWORD *)(v14 + 48) = 1;
    *(_BYTE *)(v14 + 25) = 0;
    *(_DWORD *)(v14 + 56) = v37;
    *(_DWORD *)(v14 + 64) = v37;
    *(_DWORD *)(v14 + 60) = v38;
    goto LABEL_17;
  }
  WdLogSingleEntry0(1LL);
  DxgkLogInternalTriageEvent(v39, 0x40000LL);
  ExFreePoolWithTag((PVOID)v14, 0);
  return 3221225485LL;
}
