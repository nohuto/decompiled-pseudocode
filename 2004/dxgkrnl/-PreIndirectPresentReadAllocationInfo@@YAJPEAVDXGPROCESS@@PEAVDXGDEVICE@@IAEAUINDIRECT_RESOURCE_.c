/*
 * XREFs of ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C02811AC
 * Callers:
 *     DxgkPresent @ 0x1C0100670 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0271CB0 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007000 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F6970 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD140 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FE8C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C014FC8C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall PreIndirectPresentReadAllocationInfo(
        struct DXGPROCESS *a1,
        ADAPTER_RENDER **a2,
        unsigned int a3,
        struct INDIRECT_RESOURCE_INFO *a4)
{
  __int64 v5; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rax
  struct _EX_RUNDOWN_REF *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // eax
  ULONG_PTR Count; // rdx
  ADAPTER_RENDER *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  struct _EX_RUNDOWN_REF *v27; // [rsp+30h] [rbp-D0h] BYREF
  struct _EX_RUNDOWN_REF *v28; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  char v30; // [rsp+48h] [rbp-B8h]
  struct _DXGKARG_DESCRIBEALLOCATION v31; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v32[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v33[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v34[88]; // [rsp+C8h] [rbp-38h] BYREF

  v5 = a3;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v29, (struct DXGDEVICE *)a2);
  v27 = 0LL;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a1 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v10 = *((_DWORD *)a1 + 58);
      if ( v10 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, &EventBlockThread, v9, v10);
    }
    ExAcquirePushLockSharedEx((char *)a1 + 208, 0LL);
  }
  v11 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 >= *((_DWORD *)a1 + 64) )
    goto LABEL_13;
  v12 = *((_QWORD *)a1 + 30);
  v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
  if ( (((unsigned int)v5 >> 25) & 0x60) != (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60)
    || (v13 & 0x2000) != 0
    || (v13 & 0x1F) == 0 )
  {
    goto LABEL_13;
  }
  v14 = v13 & 0x1F;
  if ( (_BYTE)v14 != 5 )
  {
    v15 = WdLogNewEntry5_WdError(((unsigned int)v5 >> 25) & 0x60, v14);
    *(_QWORD *)(v15 + 24) = 267LL;
    WdLogEvent5_WdError(v15);
LABEL_13:
    v16 = 0LL;
    goto LABEL_14;
  }
  v16 = *(struct _EX_RUNDOWN_REF **)(v12 + 16LL * (unsigned int)v11);
LABEL_14:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v28, v16);
  ExReleasePushLockSharedEx((char *)a1 + 208, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(&v27, &v28);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28, v17);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, (__int64)a2, 0, v18, 0);
  v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32, 0LL);
  v23 = v19;
  if ( v19 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v21, Count);
LABEL_22:
    *(_QWORD *)(v24 + 24) = v23;
    WdLogEvent5_WdError(v24);
    goto LABEL_23;
  }
  if ( !v27 || (Count = v27[1].Count) == 0 || (v21 = a2[2], *(ADAPTER_RENDER **)(Count + 16) != v21) )
  {
    v24 = WdLogNewEntry5_WdError(v21, Count);
    v23 = -1073741811LL;
    *(_QWORD *)(v24 + 32) = v5;
    goto LABEL_22;
  }
  memset(&v31, 0, sizeof(v31));
  v31.hAllocation = *(HANDLE *)(v27[6].Count + 16);
  LODWORD(v23) = ADAPTER_RENDER::DdiDescribeAllocation(v21, &v31, v22);
  *(_DWORD *)a4 = v31.Width;
  *((_DWORD *)a4 + 1) = v31.Height;
  *((_DWORD *)a4 + 2) = v31.Format;
LABEL_23:
  COREACCESS::~COREACCESS((COREACCESS *)v34);
  COREACCESS::~COREACCESS((COREACCESS *)v33);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v27, v25);
  if ( v29 && v30 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v29 + 136));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v23;
}
