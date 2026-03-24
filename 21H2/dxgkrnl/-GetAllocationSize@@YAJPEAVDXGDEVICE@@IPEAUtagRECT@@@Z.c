/*
 * XREFs of ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C0299C38
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C02A2508 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F73E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall GetAllocationSize(struct DXGDEVICE *a1, __int64 a2, struct tagRECT *a3)
{
  __int64 v4; // r15
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rdi
  __int64 v10; // rax
  char *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rax
  struct _EX_RUNDOWN_REF *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  unsigned int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  UINT Width; // eax
  struct _DXGKARG_DESCRIBEALLOCATION v33; // [rsp+20h] [rbp-30h] BYREF
  struct _EX_RUNDOWN_REF *v34; // [rsp+88h] [rbp+38h] BYREF

  v4 = (unsigned int)a2;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  v9 = Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = 2618LL;
    WdLogEvent5_WdError(v10);
    return -1073741811LL;
  }
  v12 = (char *)Current + 208;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v15 = *((_DWORD *)v12 + 6);
      if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventBlockThread, v14, v15);
    }
    ExAcquirePushLockSharedEx(v12, 0LL);
  }
  v16 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 >= *((_DWORD *)v9 + 64) )
    goto LABEL_15;
  v17 = *((_QWORD *)v9 + 30);
  v18 = *(_DWORD *)(v17 + 16 * v16 + 8);
  if ( (((unsigned int)v4 >> 25) & 0x60) != (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60)
    || (v18 & 0x2000) != 0
    || (v18 & 0x1F) == 0 )
  {
    goto LABEL_15;
  }
  v19 = v18 & 0x1F;
  if ( (_BYTE)v19 != 5 )
  {
    v20 = WdLogNewEntry5_WdError(((unsigned int)v4 >> 25) & 0x60, v19);
    *(_QWORD *)(v20 + 24) = 316LL;
    WdLogEvent5_WdError(v20);
LABEL_15:
    v21 = 0LL;
    goto LABEL_16;
  }
  v21 = *(struct _EX_RUNDOWN_REF **)(v17 + 16LL * (unsigned int)v16);
LABEL_16:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v34, v21);
  ExReleasePushLockSharedEx(v12, 0LL);
  KeLeaveCriticalRegion();
  if ( !v34 )
  {
    v24 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v24 + 24) = v4;
LABEL_23:
    WdLogEvent5_WdError(v24);
    v29 = -1073741823;
    goto LABEL_25;
  }
  v25 = *((_QWORD *)a1 + 2);
  v26 = *(_QWORD *)(v34[1].Count + 16);
  v27 = *(_QWORD *)(v25 + 16);
  if ( *(_QWORD *)(v26 + 16) == v27 )
  {
    memset(&v33, 0, sizeof(v33));
    v33.hAllocation = *(HANDLE *)(v34[6].Count + 16);
    if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v25 + 16) + 2704LL), &v33, v25) >= 0 )
    {
      Width = v33.Width;
      a3->left = 0;
      a3->top = 0;
      a3->right = Width;
      a3->bottom = v33.Height;
      v29 = 0;
      goto LABEL_25;
    }
    v24 = WdLogNewEntry5_WdError(v31, v30);
    *(_QWORD *)(v24 + 24) = v33.hAllocation;
    *(_QWORD *)(v24 + 32) = a1;
    goto LABEL_23;
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
  v29 = -1073741811;
  v28[3] = a1;
  v28[4] = v34;
  v28[5] = -1073741811LL;
  WdLogEvent5_WdError(v28);
LABEL_25:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v34, v30);
  return v29;
}
