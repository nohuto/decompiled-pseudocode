/*
 * XREFs of ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0331BE8
 * Callers:
 *     DxgkPresent @ 0x1C0181EB0 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0313260 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0009824 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009864 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
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
  struct _EX_RUNDOWN_REF *v14; // rdx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // ebx
  __int64 v19; // rsi
  const wchar_t *v20; // r9
  ULONG_PTR Count; // rdx
  ADAPTER_RENDER *v22; // rcx
  struct _EX_RUNDOWN_REF *v24; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v25; // [rsp+58h] [rbp-A8h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v26; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v27[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v28[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v29[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v30[88]; // [rsp+E8h] [rbp-18h] BYREF

  v5 = a3;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v27, (struct DXGDEVICE *)a2);
  v24 = 0LL;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a1 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v10 = *((_DWORD *)a1 + 68);
      if ( v10 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (const EVENT_DESCRIPTOR *)"g", v9, v10);
    }
    ExAcquirePushLockSharedEx((char *)a1 + 248, 0LL);
  }
  v11 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 >= *((_DWORD *)a1 + 74) )
    goto LABEL_13;
  v12 = *((_QWORD *)a1 + 35);
  v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
  if ( (((unsigned int)v5 >> 25) & 0x60) != (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60)
    || (v13 & 0x2000) != 0
    || (v13 & 0x1F) == 0 )
  {
    goto LABEL_13;
  }
  if ( (v13 & 0x1F) != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_13:
    v14 = 0LL;
    goto LABEL_14;
  }
  v14 = *(struct _EX_RUNDOWN_REF **)(v12 + 16LL * (unsigned int)v11);
LABEL_14:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v25, v14);
  ExReleasePushLockSharedEx((char *)a1 + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(&v24, &v25);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v25);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, (__int64)a2, 0, v15, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28, 0LL);
  v18 = v16;
  if ( v16 < 0 )
  {
    v19 = v16;
    WdLogSingleEntry1(2LL, v16);
    v20 = L"0x%I64x fails Present, failed to take adapter core access shared lock";
    v5 = 0LL;
LABEL_24:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, v19, v5, 0LL, 0LL, 0LL);
    goto LABEL_25;
  }
  if ( !v24 )
  {
    v18 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, v5);
    v20 = L"0x%I64x fails Present invalid hSource 0x%I64x";
LABEL_23:
    v19 = -1073741811LL;
    goto LABEL_24;
  }
  Count = v24[1].Count;
  if ( !Count || (v22 = a2[2], *(ADAPTER_RENDER **)(Count + 16) != v22) )
  {
    v18 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, v5);
    v20 = L"0x%I64x fails Present hSource is for the wrong adapter";
    goto LABEL_23;
  }
  memset(&v26, 0, sizeof(v26));
  v26.hAllocation = *(HANDLE *)(v24[6].Count + 16);
  v18 = ADAPTER_RENDER::DdiDescribeAllocation(v22, &v26, v17);
  *(_DWORD *)a4 = v26.Width;
  *((_DWORD *)a4 + 1) = v26.Height;
  *((_DWORD *)a4 + 2) = v26.Format;
LABEL_25:
  COREACCESS::~COREACCESS((COREACCESS *)v30);
  COREACCESS::~COREACCESS((COREACCESS *)v29);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v24);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v27);
  return v18;
}
