/*
 * XREFs of ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C0320C50
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C03283C4 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall GetAllocationSize(struct DXGDEVICE *a1, __int64 a2, struct tagRECT *a3, __int64 a4)
{
  unsigned int v5; // edi
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v8; // r15
  char *v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned int v16; // r15d
  int v17; // edx
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // ebx
  struct _DXGKARG_DESCRIBEALLOCATION v21; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v22; // [rsp+B8h] [rbp+38h]
  struct _EX_RUNDOWN_REF *v23; // [rsp+C8h] [rbp+48h] BYREF

  v22 = a2;
  v5 = a2;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2, (__int64)a3, a4);
  v8 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 2556LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context.", 2556LL, 0LL, 0LL, 0LL, 0LL);
    return -1073741811LL;
  }
  v10 = (char *)Current + 248;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v13 = *((_DWORD *)v10 + 6);
      if ( v13 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)"g", v12, v13);
    }
    ExAcquirePushLockSharedEx(v10, 0LL);
  }
  v14 = (v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 >= *((_DWORD *)v8 + 74) )
  {
    v16 = v22;
  }
  else
  {
    v15 = *((_QWORD *)v8 + 35);
    v16 = v22;
    v17 = *(_DWORD *)(v15 + 16 * v14 + 8);
    if ( ((v22 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
    {
      if ( (v17 & 0x1F) == 5 )
      {
        v18 = *(struct _EX_RUNDOWN_REF **)(v15 + 16LL * (unsigned int)v14);
        goto LABEL_18;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v18 = 0LL;
LABEL_18:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v23, v18);
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  if ( !v23 )
  {
    WdLogSingleEntry1(2LL, v16);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source handle 0x%I64x", v16, 0LL, 0LL, 0LL, 0LL);
LABEL_24:
    v20 = -1073741823;
    goto LABEL_26;
  }
  v19 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v23[1].Count + 16) + 16LL) == *(_QWORD *)(v19 + 16) )
  {
    memset(&v21, 0, sizeof(v21));
    v21.hAllocation = *(HANDLE *)(v23[6].Count + 16);
    if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v19 + 16) + 2800LL), &v21, v19) >= 0 )
    {
      a3->right = v21.Width;
      a3->bottom = v21.Height;
      *(_QWORD *)&a3->left = 0LL;
      v20 = 0;
      goto LABEL_26;
    }
    WdLogSingleEntry2(2LL, v21.hAllocation, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to query source surface size for source 0x%I64x, device 0x%I64x",
      (__int64)v21.hAllocation,
      (__int64)a1,
      0LL,
      0LL,
      0LL);
    goto LABEL_24;
  }
  v20 = -1073741811;
  WdLogSingleEntry3(2LL, a1, v23, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
    (__int64)a1,
    (__int64)v23,
    -1073741811LL,
    0LL,
    0LL);
LABEL_26:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v23);
  return v20;
}
