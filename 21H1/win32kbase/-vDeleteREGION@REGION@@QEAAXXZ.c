/*
 * XREFs of ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008BC60
 * Callers:
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C0008D54 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     vRestoreRegion @ 0x1C0008D90 (vRestoreRegion.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C00295E0 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?SetEmpty@CRegion@@UEAAXXZ @ 0x1C002D660 (-SetEmpty@CRegion@@UEAAXXZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C0031888 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?SetFullRegion@CRegion@@UEAAXXZ @ 0x1C003C5B0 (-SetFullRegion@CRegion@@UEAAXXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C004A300 (EngUpdateDeviceSurface.c)
 *     NtGdiDeleteObjectApp @ 0x1C006C610 (NtGdiDeleteObjectApp.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0074B60 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0074EF0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00751E0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C00757F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C0075EA8 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0075FA0 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0076090 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     GreExtCreateRegion @ 0x1C0076840 (GreExtCreateRegion.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0078690 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0079500 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C007A650 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C007CB20 (GreCreateRectRgnIndirect.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C007D510 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008B250 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C008B734 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C008BC0C (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0092310 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C00A9630 (NtGdiCreateRectRgn.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00C5024 (GreCreatePolyPolygonRgnInternal.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C0148B70 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C014A6C0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C014AA84 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     EngCreateClip @ 0x1C0155A90 (EngCreateClip.c)
 *     EngDeleteClip @ 0x1C0155B50 (EngDeleteClip.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0129144 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall REGION::vDeleteREGION(REGION *this)
{
  __int64 v2; // rdi
  void *v3; // rsi
  unsigned __int8 *v4; // rcx

  if ( this && this != prgnDefault )
  {
    v2 = *((_QWORD *)this + 11);
    if ( v2 )
    {
      if ( *((_DWORD *)this + 6) == 112 )
      {
        v3 = RGNMEMOBJ::s_pSCANLookAsideList;
        if ( qword_1C0258C20 && (int)qword_1C0258C20() >= 0 && qword_1C0258C28 )
          qword_1C0258C28(v3, v2);
      }
      else if ( *((_DWORD *)this + 6) > 0x70u )
      {
        Win32FreePool(v2);
      }
      *((_QWORD *)this + 11) = 0LL;
    }
    v4 = gpTypeIsolation[7];
    if ( v4 )
      NSInstrumentation::CTypeIsolation<28672,112>::Free(v4, this);
  }
}
