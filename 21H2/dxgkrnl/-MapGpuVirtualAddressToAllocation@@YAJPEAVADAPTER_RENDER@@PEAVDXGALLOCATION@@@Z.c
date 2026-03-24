/*
 * XREFs of ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C022DE08
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022C790 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022CB50 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C014F964 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C02499A0 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 */

__int64 __fastcall MapGpuVirtualAddressToAllocation(struct ADAPTER_RENDER *a1, struct DXGALLOCATION *a2)
{
  DXGADAPTER *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r13
  int v9; // r15d
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  struct DXGPROCESS *Current; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // rax
  struct DXGPROCESS *v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned int v30; // [rsp+20h] [rbp-79h]
  _BYTE v31[16]; // [rsp+40h] [rbp-59h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v32; // [rsp+50h] [rbp-49h] BYREF

  memset(&v32, 0, sizeof(v32));
  v4 = (DXGADAPTER *)*((_QWORD *)a1 + 2);
  v32.Protection.Value = 1LL;
  if ( DXGADAPTER::ReplicateGdiContent(v4, v5) )
  {
    v8 = *((_QWORD *)a2 + 5);
    v9 = 0;
    v10 = 0;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, (struct DXGFASTMUTEX *const)(v8 + 80), 0);
    if ( (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
    v13 = *(_QWORD *)(v8 + 24);
    while ( v13 )
    {
      if ( *(_BYTE *)(*((_QWORD *)a1 + 2) + 209LL) )
      {
        Current = DXGPROCESS::GetCurrent(v12, v11);
        v15 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4240LL),
                *((_DWORD *)Current + 106),
                *(const struct DXGDEVICE **)(v8 + 8),
                0,
                *(_DWORD *)(v13 + 96),
                &v32);
      }
      else
      {
        LOBYTE(v30) = 0;
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, unsigned int, int))(*(_QWORD *)(*((_QWORD *)a1 + 80) + 8LL) + 800LL))(
                *((_QWORD *)a1 + 81),
                0LL,
                *(_QWORD *)(v13 + 24),
                &v32,
                v30,
                (*(_DWORD *)(v13 + 72) >> 12) & 0x3F);
      }
      v19 = v15;
      if ( v15 < 0 )
      {
        v21 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        *(_QWORD *)(v21 + 24) = v19;
        WdLogEvent5_WdWarning(v21);
        goto LABEL_17;
      }
      v32.BaseAddress = v32.VirtualAddress;
      v12 = (*(_DWORD *)(v13 + 72) >> 12) & 0x3F;
      v11 = (unsigned int)(1 << ((*(_DWORD *)(v13 + 72) >> 12) & 0x3F));
      if ( ((unsigned int)v11 & v9) != 0 )
      {
        v20 = WdLogNewEntry5_WdError(v12, v11);
        *(_QWORD *)(v20 + 24) = 1688LL;
        goto LABEL_15;
      }
      v13 = *(_QWORD *)(v13 + 64);
      v9 |= v11;
      ++v10;
    }
    if ( v10 != *(_DWORD *)(*((_QWORD *)a1 + 2) + 280LL) )
    {
      v20 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v20 + 24) = 1697LL;
LABEL_15:
      WdLogEvent5_WdError(v20);
      v19 = -1073741811;
LABEL_17:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
      return (unsigned int)v19;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
    return 0LL;
  }
  v23 = *((_QWORD *)a1 + 2);
  if ( *(_BYTE *)(v23 + 209) )
  {
    v24 = DXGPROCESS::GetCurrent(v7, v6);
    v25 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4240LL),
            *((_DWORD *)v24 + 106),
            *(const struct DXGDEVICE **)(*((_QWORD *)a2 + 5) + 8LL),
            0,
            *((_DWORD *)a2 + 24),
            &v32);
  }
  else
  {
    v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, _BYTE, _DWORD))(*(_QWORD *)(*((_QWORD *)a1 + 80) + 8LL) + 800LL))(
            *((_QWORD *)a1 + 81),
            0LL,
            *((_QWORD *)a2 + 3),
            &v32,
            0,
            *(_DWORD *)(v23 + 2724));
  }
  v19 = v25;
  if ( v25 >= 0 )
    return 0LL;
  v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
  *(_QWORD *)(v29 + 24) = v19;
  WdLogEvent5_WdWarning(v29);
  return (unsigned int)v19;
}
