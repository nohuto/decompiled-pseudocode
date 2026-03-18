/*
 * XREFs of ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C01EFD14
 * Callers:
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C01EFC88 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 *     ?UnpinDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C01EFD70 (-UnpinDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D8AD4 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DisablePinnedAllocation(DXGDEVICE *this, struct DXGALLOCATION *a2)
{
  __int64 v4; // r8
  unsigned int v5; // edx
  struct DXGALLOCATION *v6; // [rsp+68h] [rbp+10h] BYREF

  v6 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 469LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      469LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)a2 + 18) & 0x800) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 240LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
      *((_QWORD *)a2 + 3));
    *((_DWORD *)a2 + 18) &= ~0x800u;
  }
  v5 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v5 & 0x2000) != 0 )
  {
    if ( *((_QWORD *)a2 + 3) )
      DXGDEVICE::UnpinDirectFlipAllocation(this, (v5 >> 6) & 0xF, v4, &v6, 0LL);
  }
}
