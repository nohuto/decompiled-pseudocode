/*
 * XREFs of ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C000AD60 (EngUpdateDeviceSurface.c)
 *     NtGdiCreateRectRgn @ 0x1C001CC30 (NtGdiCreateRectRgn.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C001D190 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C001D230 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0037960 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0039050 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0039CD0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A380 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C003A900 (NtGdiDeleteObjectApp.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C003AF00 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C344 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C003C4D0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C003C800 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C003C950 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003CAC0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     GreCreateRectRgnIndirect @ 0x1C003DA50 (GreCreateRectRgnIndirect.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C003ECA0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C004BBCC (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C005A410 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C005B540 (GreExtCreateRegion.c)
 *     vRestoreRegion @ 0x1C00962A0 (vRestoreRegion.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0097D00 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?SetEmpty@CRegion@@UEAAXXZ @ 0x1C009B330 (-SetEmpty@CRegion@@UEAAXXZ.c)
 *     ?SetFullRegion@CRegion@@UEAAXXZ @ 0x1C00AAA60 (-SetFullRegion@CRegion@@UEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00B0344 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00C4A24 (GreCreatePolyPolygonRgnInternal.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C0140340 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0141EE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C01422A4 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     EngCreateClip @ 0x1C014D2B0 (EngCreateClip.c)
 *     EngDeleteClip @ 0x1C014D370 (EngDeleteClip.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0120E14 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
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
        if ( qword_1C0250C60 && (int)qword_1C0250C60() >= 0 && qword_1C0250C68 )
          qword_1C0250C68(v3, v2);
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
