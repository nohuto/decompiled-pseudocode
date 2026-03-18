/*
 * XREFs of DxgkUnlock2Internal @ 0x1C0317BFC
 * Callers:
 *     DxgkUnlock2 @ 0x1C017CC60 (DxgkUnlock2.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C03451D4 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C03172F0 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C037EA44 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 */

__int64 __fastcall DxgkUnlock2Internal(DXGDEVICE *this, __int64 a2, __int64 a3, struct _D3DKMT_UNLOCK2 *a4)
{
  D3DKMT_HANDLE hAllocation; // r14d
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // ecx
  struct _EX_RUNDOWN_REF *v16; // rdx
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // rdi
  struct DXGALLOCATION *v20; // [rsp+78h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a2 + 209) )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(a2 + 4344),
             (struct DXGPROCESS *)a3,
             this,
             a4,
             0);
  hAllocation = a4->hAllocation;
  v9 = a3 + 248;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v12 = *(_DWORD *)(v9 + 24);
      if ( v12 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (const EVENT_DESCRIPTOR *)"g", v11, v12);
    }
    ExAcquirePushLockSharedEx(v9, 0LL);
  }
  v13 = (hAllocation >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 < *(_DWORD *)(a3 + 296) )
  {
    v14 = *(_QWORD *)(a3 + 280);
    v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
    if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60)
      && (v15 & 0x2000) == 0
      && (v15 & 0x1F) != 0 )
    {
      if ( (v15 & 0x1F) == 5 )
      {
        v16 = *(struct _EX_RUNDOWN_REF **)(v14 + 16LL * (unsigned int)v13);
        goto LABEL_16;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v16 = 0LL;
LABEL_16:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v20, v16);
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  v17 = -1073741811;
  if ( v20 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 1) + 16LL) + 16LL) == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
    {
      if ( *((_QWORD *)v20 + 3) )
      {
        v18 = DXGDEVICE::Unlock2(this, v20, 1);
        v19 = v18;
        if ( v18 >= 0 )
        {
          v17 = 0;
        }
        else
        {
          WdLogSingleEntry2(2LL, v20, v18);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to unlock allocation 0x%p, returning 0x%x",
            (__int64)v20,
            v19,
            0LL,
            0LL,
            0LL);
          v17 = v19;
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, a4->hAllocation, v20);
      }
    }
    else
    {
      WdLogSingleEntry3(3LL, this, v20, -1073741811LL);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, a4->hAllocation);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v20);
  return v17;
}
