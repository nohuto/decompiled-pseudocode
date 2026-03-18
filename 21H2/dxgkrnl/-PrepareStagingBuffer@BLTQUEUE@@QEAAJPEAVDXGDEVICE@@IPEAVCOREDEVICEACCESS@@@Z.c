/*
 * XREFs of ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C03BC8A4
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03BD184 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01996EC (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01CF87C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0379004 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C03798B4 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C03BBD90 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall BLTQUEUE::PrepareStagingBuffer(
        BLTQUEUE *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  struct COREDEVICEACCESS *v5; // r13
  __int64 v6; // r12
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // r9
  int v15; // edx
  struct _EX_RUNDOWN_REF *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rsi
  int v20; // eax
  int v21; // eax
  struct ADAPTER_RENDER *v22; // r8
  int v23; // eax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct DXGPROCESS *Current; // rax
  unsigned int v33; // esi
  struct DXGPROCESS *v34; // r13
  char *v35; // r14
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // ecx
  struct _EX_RUNDOWN_REF *v42; // rdx
  struct COREDEVICEACCESS *v43; // rax
  int Resident; // eax
  D3DKMT_HANDLE v45; // eax
  int v46; // eax
  UINT Width; // ecx
  UINT Height; // eax
  unsigned int v50[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v51; // [rsp+58h] [rbp-A8h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v52; // [rsp+60h] [rbp-A0h] BYREF
  struct _D3DKMT_LOCK2 v53; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v54[12]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v55[54]; // [rsp+110h] [rbp+10h] BYREF
  DXGSYNCOBJECT *v56; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v57; // [rsp+2C8h] [rbp+1C8h]

  *(_QWORD *)v50 = a4;
  v5 = a4;
  v6 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 4363LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      4363LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LODWORD(v8) = 0;
  v9 = *((_QWORD *)a2 + 5);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v12 = *(_DWORD *)(v9 + 272);
      if ( v12 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (const EVENT_DESCRIPTOR *)"g", v11, v12);
    }
    ExAcquirePushLockSharedEx(v9 + 248, 0LL);
  }
  v13 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 >= *(_DWORD *)(v9 + 296) )
    goto LABEL_15;
  v14 = *(_QWORD *)(v9 + 280);
  v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
  if ( (((unsigned int)v6 >> 25) & 0x60) != (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60)
    || (v15 & 0x2000) != 0
    || (v15 & 0x1F) == 0 )
  {
    goto LABEL_15;
  }
  if ( (v15 & 0x1F) != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_15:
    v16 = 0LL;
    goto LABEL_16;
  }
  v16 = *(struct _EX_RUNDOWN_REF **)(v14 + 16LL * (unsigned int)v13);
LABEL_16:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v51, v16);
  ExReleasePushLockSharedEx(v9 + 248, 0LL);
  KeLeaveCriticalRegion();
  memset(&v52, 0, sizeof(v52));
  if ( !v51 )
  {
    WdLogSingleEntry3(3LL, -1073741811LL, this, v6);
    goto LABEL_24;
  }
  v17 = *((_QWORD *)a2 + 2);
  v18 = *(_QWORD *)(v51[1].Count + 16);
  if ( *(_QWORD *)(v18 + 16) == *(_QWORD *)(v17 + 16) )
  {
    v52.hAllocation = *(HANDLE *)(v51[6].Count + 16);
    v20 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v17 + 16) + 2800LL), &v52, v18);
    v19 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry1(2LL, v20);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DdiDescribeAllocation failed: 0x%I64x",
        v19,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_65;
    }
LABEL_24:
    if ( !*((_DWORD *)this + 704) )
    {
      *((_QWORD *)this + 354) = 0LL;
      memset(v54, 0, sizeof(v54));
      v21 = *((_DWORD *)a2 + 109);
      v22 = (struct ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
      HIDWORD(v54[1]) |= 0x80u;
      LODWORD(v54[0]) = v21;
      LODWORD(v54[1]) = 5;
      v23 = CreateSynchronizationObjectInternal(
              (__int64)a2,
              0,
              v22,
              (__int64)v54,
              0xCu,
              0,
              &v56,
              (struct DXGDEVICESYNCOBJECT **)this + 353,
              0LL);
      v8 = v23;
      if ( v23 < 0 )
      {
        WdLogSingleEntry2(2LL, v23, 4422LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DxgkCreateSynchronizationObjectInternal failed: 0x%I64x",
          v8,
          4422LL,
          0LL,
          0LL,
          0LL);
LABEL_64:
        LODWORD(v19) = v8;
        goto LABEL_65;
      }
      v24 = *((_QWORD *)a2 + 5);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v24 + 248));
      v25 = (LODWORD(v54[11]) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v25 < *(_DWORD *)(v24 + 296) )
      {
        v26 = *(_QWORD *)(v24 + 280);
        if ( ((LODWORD(v54[11]) >> 25) & 0x60) == (*(_BYTE *)(v26 + 16 * v25 + 8) & 0x60)
          && (*(_DWORD *)(v26 + 16 * v25 + 8) & 0x1F) != 0 )
        {
          v27 = 2 * ((v54[11] >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v26 + 16 * ((v54[11] >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v26 = *(_QWORD *)(v24 + 280);
          }
          *(_DWORD *)(v26 + 8 * v27 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v24 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v24 + 248, 0LL);
      KeLeaveCriticalRegion();
      v5 = *(struct COREDEVICEACCESS **)v50;
      *((_DWORD *)this + 704) = v54[11];
    }
    if ( *((_DWORD *)this + 698) )
    {
      if ( v52.Width == *((_DWORD *)this + 700) && v52.Height == *((_DWORD *)this + 701) )
        goto LABEL_64;
      BLTQUEUE::DestroyStagingBuffer(this);
      if ( *((_DWORD *)this + 698) )
        goto LABEL_64;
    }
    memset(v55, 0, 0x1A8uLL);
    v56 = *(DXGSYNCOBJECT **)&v52.Width;
    v57 = 0;
    v55[3] = &v56;
    HIDWORD(v55[0]) = 0;
    LODWORD(v55[2]) = 3;
    LODWORD(v8) = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v55, v5);
    if ( (int)v8 < 0 )
      goto LABEL_64;
    *((_DWORD *)this + 696) = HIDWORD(v55[6]);
    *((_DWORD *)this + 698) = v55[1];
    Current = DXGPROCESS::GetCurrent(v29, v28, v30, v31);
    v33 = HIDWORD(v55[6]);
    v34 = Current;
    v35 = (char *)Current + 248;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v35, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v38 = *((_DWORD *)v35 + 6);
        if ( v38 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, (const EVENT_DESCRIPTOR *)"g", v37, v38);
      }
      ExAcquirePushLockSharedEx(v35, 0LL);
    }
    v39 = (v33 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v39 < *((_DWORD *)v34 + 74) )
    {
      v40 = *((_QWORD *)v34 + 35);
      v41 = *(_DWORD *)(v40 + 16 * v39 + 8);
      if ( ((v33 >> 25) & 0x60) == (*(_BYTE *)(v40 + 16 * v39 + 8) & 0x60) && (v41 & 0x2000) == 0 && (v41 & 0x1F) != 0 )
      {
        if ( (v41 & 0x1F) == 5 )
        {
          v42 = *(struct _EX_RUNDOWN_REF **)(v40 + 16LL * (unsigned int)v39);
          goto LABEL_52;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v42 = 0LL;
LABEL_52:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v50, v42);
    ExReleasePushLockSharedEx(v35, 0LL);
    KeLeaveCriticalRegion();
    v43 = *(struct COREDEVICEACCESS **)v50;
    if ( !*(_QWORD *)v50 )
    {
      WdLogSingleEntry1(1LL, 4467LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"AllocRef.m_pAllocation != NULL",
        4467LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v43 = *(struct COREDEVICEACCESS **)v50;
    }
    *((_DWORD *)this + 697) = *((_DWORD *)v43 + 5);
    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4344LL),
                 *((_DWORD *)v34 + 126),
                 *((_DWORD *)a2 + 110),
                 0,
                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                 1u,
                 (const struct DXGALLOCATIONREFERENCE *)v50,
                 0LL,
                 0LL);
    v8 = Resident;
    if ( Resident >= 0 )
    {
      v45 = *((_DWORD *)this + 696);
      memset(&v53, 0, sizeof(v53));
      v53.hAllocation = v45;
      LODWORD(v8) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4344LL),
                      v34,
                      a2,
                      &v53,
                      0);
      if ( (int)v8 < 0 )
      {
        WdLogSingleEntry1(2LL, 4493LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VmBusSendLock2 failed", 4493LL, 0LL, 0LL, 0LL, 0LL);
      }
      *((_QWORD *)this + 351) = v53.pData;
      if ( (int)v8 >= 0 )
      {
        v46 = v57;
        if ( !v57 )
        {
          WdLogSingleEntry1(1LL, 4499LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"0 != StagingSurfaceData.Pitch",
            4499LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v46 = v57;
        }
        Width = v52.Width;
        *((_QWORD *)this + 355) = 0LL;
        *((_DWORD *)this + 699) = v46;
        Height = v52.Height;
        *((_DWORD *)this + 701) = v52.Height;
        *((_DWORD *)this + 713) = Height;
        *((_DWORD *)this + 700) = Width;
        *((_DWORD *)this + 712) = Width;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, Resident);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendMakeResident failed: 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v50);
    goto LABEL_64;
  }
  LODWORD(v19) = -1073741811;
  WdLogSingleEntry3(2LL, a2, v51, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
    (__int64)a2,
    (__int64)v51,
    -1073741811LL,
    0LL,
    0LL);
LABEL_65:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v51);
  return (unsigned int)v19;
}
