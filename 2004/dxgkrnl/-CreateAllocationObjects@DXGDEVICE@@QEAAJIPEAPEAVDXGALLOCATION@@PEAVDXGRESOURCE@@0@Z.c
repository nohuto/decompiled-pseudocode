/*
 * XREFs of ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C010B450
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F28E0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C003E7D8 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C003E848 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C010B768 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010B7A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C0111284 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0127A6C (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ??0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0227760 (--0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocationObjects(
        DXGDEVICE *this,
        int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        struct DXGALLOCATION **a5)
{
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // ebp
  struct _EX_RUNDOWN_REF *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  DXGALLOCATION *v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  DXGADAPTERALLOCATION_VGPU *v28; // rax
  struct DXGALLOCATION **v30; // rax
  int v31; // r9d
  __int64 v32; // rax
  DXGALLOCATION *PoolWithQuotaTag; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  DXGADAPTERALLOCATION_VGPU *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  DXGADAPTERALLOCATION **v39; // rdi
  DXGADAPTERALLOCATION *v40; // rsi
  __int64 v41; // [rsp+70h] [rbp+8h]
  char v42; // [rsp+78h] [rbp+10h]
  struct DXGALLOCATION **v43; // [rsp+90h] [rbp+28h]

  v9 = 0;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v32 + 24) = 2815LL;
    WdLogEvent5_WdAssertion(v32);
  }
  *a3 = 0LL;
  *a5 = 0LL;
  if ( a4 && (*((_DWORD *)a4 + 1) & 1) != 0 )
  {
    v42 = 1;
    v43 = *(struct DXGALLOCATION ***)(*((_QWORD *)a4 + 7) + 144LL);
  }
  else
  {
    v43 = 0LL;
    v42 = 0;
  }
  v14 = a2 - 1;
  if ( a2 - 1 >= 0 )
  {
    while ( 1 )
    {
      if ( (*((_BYTE *)this + 1869) & 1) != 0 )
      {
        PoolWithQuotaTag = (DXGALLOCATION *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x88uLL, 0x4B677844u);
        v19 = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          goto LABEL_42;
        DXGALLOCATION::DXGALLOCATION(PoolWithQuotaTag, this);
        *((_DWORD *)v19 + 18) |= 0x40000u;
        *((_DWORD *)v19 + 24) = 0;
        *((_DWORD *)v19 + 26) = 0;
        *((_QWORD *)v19 + 14) = 0LL;
        *((_QWORD *)v19 + 15) = 0LL;
        *((_QWORD *)v19 + 16) = 0LL;
      }
      else
      {
        v15 = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x60uLL, 0x4B677844u);
        v19 = (DXGALLOCATION *)v15;
        if ( !v15 )
          goto LABEL_42;
        v15[1].Count = (ULONG_PTR)this;
        LODWORD(v15[2].Count) = 0;
        v15[3].Count = 0LL;
        v15[4].Count = 0LL;
        v15[5].Count = 0LL;
        v15[6].Count = 0LL;
        v15[7].Count = 0LL;
        v15[8].Count = 0LL;
        LODWORD(v15[9].Count) = 0;
        v15[10].Count = 0LL;
        ExInitializeRundownProtection(v15 + 11);
      }
      if ( !v19 )
        goto LABEL_42;
      v41 = *((_QWORD *)this + 5);
      v20 = v41 + 208;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v41 + 208, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v31 = *(_DWORD *)(v41 + 232);
          if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v21, &EventBlockThread, v22, v31);
        }
        ExAcquirePushLockExclusiveEx(v20, 0LL);
      }
      *(_QWORD *)(v41 + 216) = KeGetCurrentThread();
      *((_DWORD *)v19 + 4) = HMGRTABLE::AllocHandle(v41 + 240, v19, 5LL);
      DxgkReferenceDxgAllocation(v19);
      *(_QWORD *)(v41 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v20, 0LL);
      KeLeaveCriticalRegion();
      if ( !*((_DWORD *)v19 + 4) )
        break;
      *((_QWORD *)v19 + 5) = a4;
      if ( !*a5 )
        *a5 = v19;
      v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 168)) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v17, v26);
        *(_QWORD *)(v35 + 24) = 8102LL;
        WdLogEvent5_WdAssertion(v35);
      }
      *((_QWORD *)v19 + 7) = 0LL;
      v27 = (__int64)*a3;
      *((_QWORD *)v19 + 8) = *a3;
      if ( v27 )
        *(_QWORD *)(v27 + 56) = v19;
      *a3 = v19;
      if ( v42 )
      {
        v30 = v43 - 6;
        v43 = (struct DXGALLOCATION **)v43[1];
        *((_QWORD *)v19 + 6) = v30;
      }
      else
      {
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 209LL) )
        {
          v36 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x70uLL, 0x4B677844u, PagedPool);
          if ( !v36 )
          {
LABEL_42:
            v37 = WdLogNewEntry5_WdWarning(v17, v16, v18);
            *(_QWORD *)(v37 + 24) = this;
            *(_QWORD *)(v37 + 32) = -1073741801LL;
            WdLogEvent5_WdWarning(v37);
            goto LABEL_43;
          }
          v28 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v36);
        }
        else
        {
          v28 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
          if ( !v28 )
            goto LABEL_42;
          *((_DWORD *)v28 + 1) = 0;
          *((_QWORD *)v28 + 1) = 0LL;
          *((_QWORD *)v28 + 2) = 0LL;
          *((_QWORD *)v28 + 4) = 0LL;
          *((_DWORD *)v28 + 10) = 0;
          *((_QWORD *)v28 + 7) = 0LL;
          *((_QWORD *)v28 + 6) = 0LL;
        }
        if ( !v28 )
          goto LABEL_42;
        *((_QWORD *)v19 + 6) = v28;
      }
LABEL_26:
      if ( --v14 < 0 )
      {
        if ( v9 < 0 )
        {
          v38 = (__int64)*a3;
          if ( *a3 )
          {
            do
            {
              v39 = (DXGADAPTERALLOCATION **)v38;
              v38 = *(_QWORD *)(v38 + 64);
              ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(
                (ADAPTER_RENDER *)v17,
                (struct DXGALLOCATION *)v39,
                0LL);
              v40 = v39[6];
              if ( v40 && (!a4 || (*((_DWORD *)a4 + 1) & 1) == 0) )
              {
                DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(v39[6]);
                operator delete(v40);
              }
              DXGALLOCATION::`scalar deleting destructor'((DXGALLOCATION *)v39);
            }
            while ( v38 );
          }
          *a3 = 0LL;
        }
        return (unsigned int)v9;
      }
    }
    v34 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v34 + 24) = this;
    *(_QWORD *)(v34 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v34);
    DXGALLOCATION::`scalar deleting destructor'(v19);
LABEL_43:
    v9 = -1073741801;
    goto LABEL_26;
  }
  return (unsigned int)v9;
}
