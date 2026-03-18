/*
 * XREFs of ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E7898
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C66CC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C7E74 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BFF14 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C02D5C7C (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01962B0 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C02E65E4 (-PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinAllDirectFlipAllocations(
        DXGDEVICE *this,
        unsigned int a2,
        int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rdi
  int v6; // eax
  struct DXGALLOCATION *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rsi
  __int64 v9; // rcx
  int v11; // [rsp+90h] [rbp+18h] BYREF
  struct COREDEVICEACCESS *v12; // [rsp+98h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a3;
  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 464) )
  {
    WdLogSingleEntry1(1LL, 7148LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      7148LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 7149LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      7149LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 231)) )
  {
    WdLogSingleEntry1(1LL, 7150LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceExclusiveOwner()",
      7150LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    WdLogSingleEntry1(1LL, 7151LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGDEVICECLIENT_USER == GetClientType()",
      7151LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *((_DWORD *)this + v4 + 302);
  if ( (v6 & 0x100) != 0 )
  {
    WdLogSingleEntry1(1LL, 7152LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_PrimaryDescription[VidPnSourceId].Pinned == FALSE",
      7152LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v6 = *((_DWORD *)this + v4 + 302);
  }
  if ( (v6 & 0x200) != 0 )
  {
    WdLogSingleEntry1(1LL, 7153LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_PrimaryDescription[VidPnSourceId].DisplayModeSet == FALSE",
      7153LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LODWORD(v12) = 0;
  LOBYTE(v11) = 0;
  do
  {
    v7 = DXGDEVICE::PopDirectFlipAllocationFromList(
           (struct _KTHREAD **)this,
           v4,
           (unsigned int *)&v12,
           (unsigned __int8 *)&v11);
    v8 = (struct _EX_RUNDOWN_REF *)v7;
    if ( v7 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 240LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
        *((_QWORD *)v7 + 3));
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v8[5].Count + 72));
      ExReleaseRundownProtection(v8 + 11);
    }
  }
  while ( !(_BYTE)v11 );
  v9 = *((_QWORD *)this + 231);
  if ( v9 == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
    ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v9 + 2792), v4);
  return 0LL;
}
