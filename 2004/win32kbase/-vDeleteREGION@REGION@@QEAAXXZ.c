/*
 * XREFs of ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0081030
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C0014A40 (NtGdiCreateRectRgn.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C0014FA0 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0015040 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C001C070 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     vRestoreRegion @ 0x1C00303E0 (vRestoreRegion.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0032410 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?SetEmpty@CRegion@@UEAAXXZ @ 0x1C003BD30 (-SetEmpty@CRegion@@UEAAXXZ.c)
 *     ?SetFullRegion@CRegion@@UEAAXXZ @ 0x1C0049620 (-SetFullRegion@CRegion@@UEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C004F3B4 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C0058010 (EngUpdateDeviceSurface.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C007B2B0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreExtCreateRegion @ 0x1C007C1C0 (GreExtCreateRegion.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C007E030 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C007EFD0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C007F4C0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C007FA1C (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0080B34 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0080CC0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C0080FDC (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C0081130 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0081350 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     GreCreateRectRgnIndirect @ 0x1C0083440 (GreCreateRectRgnIndirect.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00844C0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreCombineRgn @ 0x1C0084B00 (GreCombineRgn.c)
 *     NtGdiDeleteObjectApp @ 0x1C0092CA0 (NtGdiDeleteObjectApp.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C009A120 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00C5824 (GreCreatePolyPolygonRgnInternal.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C0142820 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0144370 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C0144734 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     EngCreateClip @ 0x1C014F740 (EngCreateClip.c)
 *     EngDeleteClip @ 0x1C014F800 (EngDeleteClip.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0123164 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
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
        if ( qword_1C0252C60 && (int)qword_1C0252C60() >= 0 && qword_1C0252C68 )
          qword_1C0252C68(v3, v2);
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
