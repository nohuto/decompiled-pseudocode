/*
 * XREFs of ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E5FC0
 * Callers:
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C02E440C (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D9FC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C03798B4 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 */

__int64 __fastcall DXGDEVICE::MakeAllocationResident(DXGDEVICE *this, unsigned int a2, struct _EX_RUNDOWN_REF *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  struct DXGPROCESS *Current; // r15
  char *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // ecx
  struct _EX_RUNDOWN_REF *v18; // rdx
  int Resident; // eax
  __int64 v20; // rsi
  int v21; // eax
  __int64 v23; // [rsp+50h] [rbp-10h] BYREF
  __int64 v24; // [rsp+58h] [rbp-8h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+40h] BYREF
  struct _EX_RUNDOWN_REF *v26; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+58h] BYREF

  v26 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8707LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8707LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LODWORD(v9) = 0;
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v11 = (char *)Current + 248;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)Current + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v14 = *((_DWORD *)Current + 68);
      if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (const EVENT_DESCRIPTOR *)"g", v13, v14);
    }
    ExAcquirePushLockSharedEx(v11, 0LL);
  }
  v15 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 >= *((_DWORD *)Current + 74) )
    goto LABEL_15;
  v16 = *((_QWORD *)Current + 35);
  v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
  if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60) || (v17 & 0x2000) != 0 || (v17 & 0x1F) == 0 )
    goto LABEL_15;
  if ( (v17 & 0x1F) != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_15:
    v18 = 0LL;
    goto LABEL_16;
  }
  v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * (unsigned int)v15);
LABEL_16:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v26, v18);
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  if ( !v26 )
  {
    WdLogSingleEntry1(1LL, 8713LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"AllocRef.m_pAllocation != NULL", 8713LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( DXGDEVICE::UmdManagesResidency(this) && (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4344LL),
                 *((_DWORD *)Current + 126),
                 *((_DWORD *)this + 110),
                 0,
                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                 1u,
                 (const struct DXGALLOCATIONREFERENCE *)&v26,
                 0LL,
                 0LL);
    v9 = Resident;
    if ( Resident < 0 )
    {
      WdLogSingleEntry1(2LL, Resident);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendMakeResident failed: 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else if ( DXGDEVICE::UmdManagesResidency(this) )
  {
    v20 = *((_QWORD *)this + 2);
    v25 = 0LL;
    v23 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v20 + 648) + 8LL) + 992LL))(
      *((_QWORD *)this + 95),
      0LL,
      &v25,
      &v23);
    v27 = 0LL;
    v24 = 0LL;
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v20 + 648) + 8LL) + 784LL))(
            *(_QWORD *)(v20 + 656),
            v25,
            v26 + 3,
            1LL,
            3,
            &v27,
            &v24);
    LODWORD(v9) = v21;
    if ( v21 >= 0 )
    {
      if ( v21 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v20 + 648) + 8LL)
                                                                      + 1000LL))(
          *(_QWORD *)(v20 + 656),
          &v23,
          &v27,
          1LL);
        LODWORD(v9) = 0;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v21);
    }
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
  return (unsigned int)v9;
}
