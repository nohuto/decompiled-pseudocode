/*
 * XREFs of ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C022CEF8
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022B880 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022BC40 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C014AF44 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0248A90 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 */

__int64 __fastcall MapGpuVirtualAddressToAllocation(struct ADAPTER_RENDER *a1, struct DXGALLOCATION *a2)
{
  DXGADAPTER *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r15
  int v9; // r14d
  int v10; // ebp
  __int64 v11; // rsi
  struct DXGPROCESS *Current; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  struct DXGPROCESS *v20; // rax
  int v21; // eax
  __int64 v22; // rax
  unsigned int v24; // [rsp+20h] [rbp-C8h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v25; // [rsp+40h] [rbp-A8h] BYREF

  memset(&v25, 0, sizeof(v25));
  v4 = (DXGADAPTER *)*((_QWORD *)a1 + 2);
  v25.Protection.Value = 1LL;
  if ( DXGADAPTER::ReplicateGdiContent(v4, v5) )
  {
    v8 = *((_QWORD *)a2 + 5);
    v9 = 0;
    v10 = 0;
    v11 = *(_QWORD *)(v8 + 24);
    while ( v11 )
    {
      if ( *(_BYTE *)(*((_QWORD *)a1 + 2) + 209LL) )
      {
        Current = DXGPROCESS::GetCurrent(v7, v6);
        v13 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4240LL),
                *((_DWORD *)Current + 106),
                *(const struct DXGDEVICE **)(v8 + 8),
                0,
                *(_DWORD *)(v11 + 96),
                &v25);
      }
      else
      {
        LOBYTE(v24) = 0;
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, unsigned int, int))(*(_QWORD *)(*((_QWORD *)a1 + 80) + 8LL) + 800LL))(
                *((_QWORD *)a1 + 81),
                0LL,
                *(_QWORD *)(v11 + 24),
                &v25,
                v24,
                (*(_DWORD *)(v11 + 72) >> 12) & 0x3F);
      }
      v17 = v13;
      if ( v13 < 0 )
        goto LABEL_18;
      v25.BaseAddress = v25.VirtualAddress;
      v7 = (*(_DWORD *)(v11 + 72) >> 12) & 0x3F;
      v6 = (unsigned int)(1 << ((*(_DWORD *)(v11 + 72) >> 12) & 0x3F));
      if ( ((unsigned int)v6 & v9) != 0 )
      {
        v18 = WdLogNewEntry5_WdError(v7, v6);
        *(_QWORD *)(v18 + 24) = 1681LL;
        goto LABEL_13;
      }
      v11 = *(_QWORD *)(v11 + 64);
      v9 |= v6;
      ++v10;
    }
    if ( v10 == *(_DWORD *)(*((_QWORD *)a1 + 2) + 280LL) )
      return 0LL;
    v18 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v18 + 24) = 1690LL;
LABEL_13:
    WdLogEvent5_WdError(v18);
    return (unsigned int)-1073741811;
  }
  v19 = *((_QWORD *)a1 + 2);
  if ( *(_BYTE *)(v19 + 209) )
  {
    v20 = DXGPROCESS::GetCurrent(v7, v6);
    v21 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4240LL),
            *((_DWORD *)v20 + 106),
            *(const struct DXGDEVICE **)(*((_QWORD *)a2 + 5) + 8LL),
            0,
            *((_DWORD *)a2 + 24),
            &v25);
  }
  else
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, _BYTE, _DWORD))(*(_QWORD *)(*((_QWORD *)a1 + 80) + 8LL) + 800LL))(
            *((_QWORD *)a1 + 81),
            0LL,
            *((_QWORD *)a2 + 3),
            &v25,
            0,
            *(_DWORD *)(v19 + 2724));
  }
  v17 = v21;
  if ( v21 < 0 )
  {
LABEL_18:
    v22 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v22 + 24) = v17;
    WdLogEvent5_WdWarning(v22);
    return (unsigned int)v17;
  }
  return 0LL;
}
