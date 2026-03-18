/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C02313B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000AE64 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C003E4A8 (--0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C022BF24 (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
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
  DXGK_VIRTUAL_GPU_PARAV *v18; // rax
  DXGK_VIRTUAL_GPU_PARAV *v19; // r10
  ULONG v20; // r14d
  _QWORD *v21; // r10
  char *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  unsigned int v28; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-CCh] BYREF
  struct _LUID Luid; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v31[8]; // [rsp+40h] [rbp-C0h] BYREF
  DXGPUSHLOCK *v32; // [rsp+48h] [rbp-B8h]
  int v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+68h] [rbp-98h]
  const wchar_t *v36; // [rsp+70h] [rbp-90h]
  unsigned int *v37; // [rsp+78h] [rbp-88h]
  int v38; // [rsp+80h] [rbp-80h]
  unsigned int *v39; // [rsp+88h] [rbp-78h]
  int v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+A0h] [rbp-60h]
  __int128 v43; // [rsp+A8h] [rbp-58h]
  __int128 v44; // [rsp+B8h] [rbp-48h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  _BYTE v46[144]; // [rsp+D0h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v46,
    *(struct DXGADAPTER *const *)(*((_QWORD *)this + 4) + 16LL),
    0LL);
  LODWORD(v8) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v46, 0LL);
  if ( (int)v8 >= 0 )
  {
    Current = DXGPROCESS::GetCurrent(v7, v6);
    if ( !Current )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v12 + 24) = 682LL;
      WdLogEvent5_WdAssertion(v12);
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31, (struct _KTHREAD **)this + 5, 0);
    DXGPUSHLOCK::AcquireExclusive(v32);
    PartitionId = a2->PartitionId;
    v33 = 2;
    v29 = 0xFFFF;
    LODWORD(v8) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(this, PartitionId, &v29);
    if ( (int)v8 >= 0 )
    {
      Luid = 0LL;
      v14 = ZwAllocateLocallyUniqueId(&Luid);
      v8 = v14;
      if ( v14 >= 0 )
      {
        *((_BYTE *)Current + 347) |= 8u;
        v18 = (DXGK_VIRTUAL_GPU_PARAV *)operator new(0x158uLL, 0x4B677844u, 1, PagedPool);
        if ( v18 )
          v19 = DXGK_VIRTUAL_GPU_PARAV::DXGK_VIRTUAL_GPU_PARAV(v18, *((struct ADAPTER_RENDER **)this + 4));
        else
          v19 = 0LL;
        if ( v19 )
        {
          v20 = v29;
          *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v29) = v19;
          *((_BYTE *)v19 + 152) = 1;
          *((_QWORD *)v19 + 11) = Current;
          *((_BYTE *)v19 + 153) = a3;
          *((_DWORD *)v19 + 6) = v20;
          *(_OWORD *)((char *)v19 + 36) = DXGK_VRD_UMED_CLASID;
          *(struct _LUID *)((char *)v19 + 28) = Luid;
          v21 = (_QWORD *)((char *)v19 + 120);
          ++*((_DWORD *)this + 4);
          v22 = (char *)this + 72;
          v23 = *(_QWORD *)v22;
          if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 )
            __fastfail(3u);
          *v21 = v23;
          v21[1] = v22;
          *(_QWORD *)(v23 + 8) = v21;
          v34 = 0LL;
          v41 = 0LL;
          v42 = 0;
          v36 = L"GuestIoSpaceSizeInMb";
          v37 = &v28;
          v39 = &v28;
          *(_QWORD *)v22 = v21;
          v28 = 1;
          v35 = 288;
          v38 = 67108868;
          v40 = 4;
          v43 = 0LL;
          v45 = 0LL;
          v44 = 0LL;
          if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Paravirtualization", &v34, 0LL, 0LL) >= 0 )
          {
            v26 = (unsigned __int64)v28 << 20;
            *((_QWORD *)DXGGLOBAL::GetGlobal(v25, v24) + 189) = v26;
          }
          a2->PartitionId = v20;
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
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46, v6);
  return (unsigned int)v8;
}
