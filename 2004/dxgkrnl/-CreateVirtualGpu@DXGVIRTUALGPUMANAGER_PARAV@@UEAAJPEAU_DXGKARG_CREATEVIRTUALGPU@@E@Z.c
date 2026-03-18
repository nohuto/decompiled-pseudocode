/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C02355F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024918 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     ??0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C003F458 (--0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C0230164 (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v12; // rax
  ULONG PartitionId; // edx
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int IsEnabled; // eax
  POOL_TYPE v19; // r9d
  DXGK_VIRTUAL_GPU_PARAV *v20; // rax
  DXGK_VIRTUAL_GPU_PARAV *v21; // r10
  ULONG v22; // r14d
  _QWORD *v23; // r10
  char *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  unsigned int v30; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-CCh] BYREF
  struct _LUID Luid; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v33[8]; // [rsp+40h] [rbp-C0h] BYREF
  DXGPUSHLOCK *v34; // [rsp+48h] [rbp-B8h]
  int v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+68h] [rbp-98h]
  const wchar_t *v38; // [rsp+70h] [rbp-90h]
  unsigned int *v39; // [rsp+78h] [rbp-88h]
  int v40; // [rsp+80h] [rbp-80h]
  unsigned int *v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  int v44; // [rsp+A0h] [rbp-60h]
  __int128 v45; // [rsp+A8h] [rbp-58h]
  __int128 v46; // [rsp+B8h] [rbp-48h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  _BYTE v48[144]; // [rsp+D0h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v48,
    *(struct DXGADAPTER *const *)(*((_QWORD *)this + 4) + 16LL),
    0LL);
  LODWORD(v8) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v48, 0LL);
  if ( (int)v8 >= 0 )
  {
    Current = DXGPROCESS::GetCurrent(v7, v6);
    if ( !Current )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v12 + 24) = 743LL;
      WdLogEvent5_WdAssertion(v12);
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33, (struct _KTHREAD **)this + 5, 0);
    DXGPUSHLOCK::AcquireExclusive(v34);
    PartitionId = a2->PartitionId;
    v35 = 2;
    v31 = 0xFFFF;
    LODWORD(v8) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(this, PartitionId, &v31);
    if ( (int)v8 >= 0 )
    {
      Luid = 0LL;
      v14 = ZwAllocateLocallyUniqueId(&Luid);
      v8 = v14;
      if ( v14 >= 0 )
      {
        *((_BYTE *)Current + 347) |= 8u;
        IsEnabled = Feature_WSL_Device_GPU__private_IsEnabled();
        v19 = 512;
        if ( !IsEnabled )
          v19 = PagedPool;
        v20 = (DXGK_VIRTUAL_GPU_PARAV *)operator new(0x160uLL, 0x4B677844u, 1, v19);
        if ( v20 )
          v21 = DXGK_VIRTUAL_GPU_PARAV::DXGK_VIRTUAL_GPU_PARAV(v20, *((struct ADAPTER_RENDER **)this + 4));
        else
          v21 = 0LL;
        if ( v21 )
        {
          v22 = v31;
          *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v31) = v21;
          *((_BYTE *)v21 + 152) = 1;
          *((_QWORD *)v21 + 11) = Current;
          *((_BYTE *)v21 + 153) = a3;
          *((_DWORD *)v21 + 6) = v22;
          *(_OWORD *)((char *)v21 + 36) = DXGK_VRD_UMED_CLASID;
          *(struct _LUID *)((char *)v21 + 28) = Luid;
          v23 = (_QWORD *)((char *)v21 + 120);
          ++*((_DWORD *)this + 4);
          v24 = (char *)this + 72;
          v25 = *(_QWORD *)v24;
          if ( *(char **)(*(_QWORD *)v24 + 8LL) != v24 )
            __fastfail(3u);
          *v23 = v25;
          v23[1] = v24;
          *(_QWORD *)(v25 + 8) = v23;
          v36 = 0LL;
          v43 = 0LL;
          v44 = 0;
          v38 = L"GuestIoSpaceSizeInMb";
          v39 = &v30;
          v41 = &v30;
          *(_QWORD *)v24 = v23;
          v30 = 1;
          v37 = 288;
          v40 = 67108868;
          v42 = 4;
          v45 = 0LL;
          v47 = 0LL;
          v46 = 0LL;
          if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Paravirtualization", &v36, 0LL, 0LL) >= 0 )
          {
            v28 = (unsigned __int64)v30 << 20;
            *((_QWORD *)DXGGLOBAL::GetGlobal(v27, v26) + 203) = v28;
          }
          a2->PartitionId = v22;
          LODWORD(v8) = 0;
        }
        else
        {
          LODWORD(v8) = -1073741801;
        }
      }
      else
      {
        v17 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v17 + 24) = v8;
        WdLogEvent5_WdError(v17);
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48, v6);
  return (unsigned int)v8;
}
