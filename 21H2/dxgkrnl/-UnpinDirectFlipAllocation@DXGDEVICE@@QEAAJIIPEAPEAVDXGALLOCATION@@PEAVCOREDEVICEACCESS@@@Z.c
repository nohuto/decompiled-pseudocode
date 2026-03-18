/*
 * XREFs of ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D8AD4
 * Callers:
 *     ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C01D88EC (-UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C01EFD14 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C02D5C7C (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C01890DC (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C01959C8 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C01D8B68 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02E7B7C (-UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipAllocation(
        DXGDEVICE *this,
        unsigned int a2,
        __int64 a3,
        struct DXGALLOCATION **a4,
        struct COREDEVICEACCESS *a5)
{
  struct DXGALLOCATION *v5; // rdi
  __int64 v8; // rbx

  v5 = *a4;
  LODWORD(v8) = 0;
  if ( DXGDEVICE::RemoveDirectFlipAllocationFromList(this, a2, *a4) )
  {
    if ( !*((_QWORD *)v5 + 5) )
    {
      WdLogSingleEntry1(1LL, 7082LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"NULL != pCurrentAlloc->m_pOwningResource",
        7082LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v5);
    DxgkReferenceDxgResource(*((struct _EX_RUNDOWN_REF **)v5 + 5));
    LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD, struct DXGALLOCATION *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL)
                                                                                        + 8LL)
                                                                            + 248LL))(
                    *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
                    v5);
    if ( (int)v8 < 0 )
    {
      v8 = (int)DXGDEVICE::UnpinDirectFlipAllocationSynchronous(this, a2, v5, a5);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v5 + 5) + 72LL));
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)v5 + 11);
      WdLogSingleEntry1(3LL, v8);
    }
  }
  return (unsigned int)v8;
}
