/*
 * XREFs of DxgkLock2Internal @ 0x1C0317934
 * Callers:
 *     DxgkLock2 @ 0x1C017D050 (DxgkLock2.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C03451D4 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?Lock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@IPEAPEAX@Z @ 0x1C0317280 (-Lock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@IPEAPEAX@Z.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0379004 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 */

__int64 __fastcall DxgkLock2Internal(struct DXGDEVICE *a1, __int64 a2, __int64 a3, struct _D3DKMT_LOCK2 *a4)
{
  D3DKMT_HANDLE hAllocation; // ebp
  __int64 v5; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // ecx
  struct _EX_RUNDOWN_REF *v16; // rdx
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // r8
  char v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // edx
  int v24; // edx
  int v25; // ecx
  unsigned int v26; // eax
  unsigned int v28; // [rsp+28h] [rbp-40h]
  unsigned int v29; // [rsp+30h] [rbp-38h]
  struct DXGALLOCATION *v30; // [rsp+80h] [rbp+18h] BYREF

  hAllocation = a4->hAllocation;
  v5 = a3 + 248;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v5, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v12 = *(_DWORD *)(v5 + 24);
      if ( v12 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (const EVENT_DESCRIPTOR *)"g", v11, v12);
    }
    ExAcquirePushLockSharedEx(v5, 0LL);
  }
  v13 = (hAllocation >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 >= *(_DWORD *)(a3 + 296) )
    goto LABEL_13;
  v14 = *(_QWORD *)(a3 + 280);
  v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
  if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60)
    || (v15 & 0x2000) != 0
    || (v15 & 0x1F) == 0 )
  {
    goto LABEL_13;
  }
  if ( (v15 & 0x1F) != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_13:
    v16 = 0LL;
    goto LABEL_14;
  }
  v16 = *(struct _EX_RUNDOWN_REF **)(v14 + 16LL * (unsigned int)v13);
LABEL_14:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v30, v16);
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( v30 )
  {
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 1) + 16LL) + 16LL) != v19 )
      goto LABEL_18;
    v20 = *(_BYTE *)(a2 + 209);
    if ( !v20 && !*((_QWORD *)v30 + 3) )
    {
      v21 = a4->hAllocation;
      v18 = -1073741811;
      WdLogSingleEntry3(3LL, v21, v30, -1073741811LL);
      goto LABEL_34;
    }
    v22 = *((_QWORD *)v30 + 5);
    if ( !v22
      || (v23 = *(_DWORD *)(v22 + 4), (v23 & 1) == 0)
      || (v23 & 2) != 0
      || (v24 = *(_DWORD *)(*(_QWORD *)(v22 + 56) + 12LL), (v24 & 0x200) != 0)
      || (v24 & 0x400) != 0
      || (v25 = *(_DWORD *)(v19 + 436), (v25 & 0x10) != 0)
      || (v25 & 8) != 0
      || (*(_DWORD *)(v19 + 2156) & 0x80u) != 0 )
    {
      if ( v20 )
        v26 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(a2 + 4344),
                (struct DXGPROCESS *)a3,
                a1,
                a4,
                0,
                v28,
                v29);
      else
        v26 = DXGDEVICE::Lock2(a1, v30, v19, &a4->pData);
      v18 = v26;
    }
    else
    {
LABEL_18:
      v18 = -1073741811;
      WdLogSingleEntry3(3LL, a1, v30, -1073741811LL);
    }
  }
  else
  {
    v17 = a4->hAllocation;
    v18 = -1073741811;
    WdLogSingleEntry2(3LL, v17, -1073741811LL);
  }
LABEL_34:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v30);
  return v18;
}
