/*
 * XREFs of ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C02DD700
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C02DBAC0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C02DBF00 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01D0438 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0379B34 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 */

__int64 __fastcall MapGpuVirtualAddressToAllocation(struct ADAPTER_RENDER *a1, struct DXGALLOCATION *a2)
{
  DXGADAPTER *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  int v13; // r14d
  int v14; // ebp
  __int64 v15; // rsi
  struct DXGPROCESS *Current; // rax
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rbx
  const wchar_t *v20; // r9
  __int64 v21; // rax
  struct DXGPROCESS *v22; // rax
  int v23; // eax
  int v25; // [rsp+20h] [rbp-D8h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v26; // [rsp+50h] [rbp-A8h] BYREF

  memset(&v26, 0, sizeof(v26));
  v4 = (DXGADAPTER *)*((_QWORD *)a1 + 2);
  v26.Protection.Value = 1LL;
  if ( DXGADAPTER::ReplicateGdiContent(v4, v5, v6, v7) )
  {
    v12 = *((_QWORD *)a2 + 5);
    v13 = 0;
    v14 = 0;
    v15 = *(_QWORD *)(v12 + 24);
    while ( v15 )
    {
      if ( *(_BYTE *)(*((_QWORD *)a1 + 2) + 209LL) )
      {
        Current = DXGPROCESS::GetCurrent(v9, v8, v10, v11);
        v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4344LL),
                *((_DWORD *)Current + 126),
                *(const struct DXGDEVICE **)(v12 + 8),
                0,
                *(_DWORD *)(v15 + 20),
                &v26);
      }
      else
      {
        LOBYTE(v25) = 0;
        v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(*((_QWORD *)a1 + 81) + 8LL) + 808LL))(
                *((_QWORD *)a1 + 82),
                0LL,
                *(_QWORD *)(v15 + 24),
                &v26,
                v25,
                (*(_DWORD *)(v15 + 72) >> 12) & 0x3F);
      }
      v18 = v17;
      if ( v17 < 0 )
        goto LABEL_18;
      v26.BaseAddress = v26.VirtualAddress;
      v9 = (*(_DWORD *)(v15 + 72) >> 12) & 0x3F;
      v8 = (unsigned int)(1 << ((*(_DWORD *)(v15 + 72) >> 12) & 0x3F));
      if ( ((unsigned int)v8 & v13) != 0 )
      {
        v19 = 1741LL;
        WdLogSingleEntry1(2LL, 1741LL);
        v20 = L"For GDI replication a resource should have only one allocation per physical adapter";
        goto LABEL_13;
      }
      v15 = *(_QWORD *)(v15 + 64);
      v13 |= v8;
      ++v14;
    }
    if ( v14 == *(_DWORD *)(*((_QWORD *)a1 + 2) + 288LL) )
      return 0LL;
    v19 = 1750LL;
    WdLogSingleEntry1(2LL, 1750LL);
    v20 = L"For GDI replication a resource must have one allocation per physical adapter";
LABEL_13:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, v19, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1073741811;
  }
  v21 = *((_QWORD *)a1 + 2);
  if ( *(_BYTE *)(v21 + 209) )
  {
    v22 = DXGPROCESS::GetCurrent(v9, v8, v10, v11);
    v23 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4344LL),
            *((_DWORD *)v22 + 126),
            *(const struct DXGDEVICE **)(*((_QWORD *)a2 + 5) + 8LL),
            0,
            *((_DWORD *)a2 + 5),
            &v26);
  }
  else
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, _BYTE, _DWORD))(*(_QWORD *)(*((_QWORD *)a1 + 81) + 8LL) + 808LL))(
            *((_QWORD *)a1 + 82),
            0LL,
            *((_QWORD *)a2 + 3),
            &v26,
            0,
            *(_DWORD *)(v21 + 2820));
  }
  v18 = v23;
  if ( v23 < 0 )
  {
LABEL_18:
    WdLogSingleEntry1(3LL, v18);
    return (unsigned int)v18;
  }
  return 0LL;
}
