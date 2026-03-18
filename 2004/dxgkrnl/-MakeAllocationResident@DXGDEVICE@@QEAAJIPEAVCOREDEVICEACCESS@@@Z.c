/*
 * XREFs of ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C02558F4
 * Callers:
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C0254004 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D8EC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD140 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FE8C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C0249948 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 */

__int64 __fastcall DXGDEVICE::MakeAllocationResident(DXGDEVICE *this, unsigned int a2, struct _EX_RUNDOWN_REF *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  struct DXGPROCESS *Current; // r15
  char *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int Resident; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v33; // [rsp+50h] [rbp-10h] BYREF
  __int64 v34; // [rsp+58h] [rbp-8h] BYREF
  __int64 v35; // [rsp+90h] [rbp+30h] BYREF
  struct _EX_RUNDOWN_REF *v36; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v37; // [rsp+A8h] [rbp+48h] BYREF

  v36 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v7 + 24) = 8594LL;
    WdLogEvent5_WdAssertion(v7);
  }
  LODWORD(v8) = 0;
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v10 = (char *)Current + 208;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)Current + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v13 = *((_DWORD *)Current + 58);
      if ( v13 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventBlockThread, v12, v13);
    }
    ExAcquirePushLockSharedEx(v10, 0LL);
  }
  v14 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 >= *((_DWORD *)Current + 64) )
    goto LABEL_15;
  v15 = *((_QWORD *)Current + 30);
  v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
  if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60) || (v16 & 0x2000) != 0 || (v16 & 0x1F) == 0 )
    goto LABEL_15;
  v17 = v16 & 0x1F;
  if ( (_BYTE)v17 != 5 )
  {
    v18 = WdLogNewEntry5_WdError(v17, 2LL * (unsigned int)v14);
    *(_QWORD *)(v18 + 24) = 267LL;
    WdLogEvent5_WdError(v18);
LABEL_15:
    v19 = 0LL;
    goto LABEL_16;
  }
  v19 = *(struct _EX_RUNDOWN_REF **)(v15 + 16LL * (unsigned int)v14);
LABEL_16:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v36, v19);
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  if ( !v36 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v21, v20);
    *(_QWORD *)(v22 + 24) = 8600LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( DXGDEVICE::UmdManagesResidency(this) && (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4240LL),
                 *((unsigned int *)Current + 106),
                 *((_DWORD *)this + 110),
                 0,
                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                 1u,
                 (const struct DXGALLOCATIONREFERENCE *)&v36,
                 0LL,
                 0LL);
    v8 = Resident;
    if ( Resident < 0 )
    {
      v26 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v26 + 24) = v8;
      WdLogEvent5_WdError(v26);
    }
  }
  else if ( DXGDEVICE::UmdManagesResidency(this) )
  {
    v35 = 0LL;
    v33 = 0LL;
    v27 = *((_QWORD *)this + 2);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v27 + 640) + 8LL) + 984LL))(
      *((_QWORD *)this + 95),
      0LL,
      &v35,
      &v33);
    v37 = 0LL;
    v34 = 0LL;
    v28 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v27 + 640) + 8LL) + 776LL))(
            *(_QWORD *)(v27 + 648),
            v35,
            v36 + 3,
            1LL,
            3,
            &v37,
            &v34);
    v8 = v28;
    if ( v28 >= 0 )
    {
      if ( v28 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v27 + 640) + 8LL) + 992LL))(
          *(_QWORD *)(v27 + 648),
          &v33,
          &v37,
          1LL);
        LODWORD(v8) = 0;
      }
    }
    else
    {
      v31 = WdLogNewEntry5_WdWarning(v29, v24, v30);
      *(_QWORD *)(v31 + 24) = v8;
      WdLogEvent5_WdWarning(v31);
    }
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v36, v24);
  return (unsigned int)v8;
}
