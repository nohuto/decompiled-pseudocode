/*
 * XREFs of ?ProcessLegacyRegionGeometryUpdateCommand@@YAJPEAVCRegionGeometry@@PEAVCChannelContext@@PEBUtagMILCMD_REGIONGEOMETRY@@PEBXI@Z @ 0x1800CE6A4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOrAppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@_N@Z @ 0x1800C6088 (-SetOrAppendRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV-$sp.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcessLegacyRegionGeometryUpdateCommand(
        struct CRegionGeometry *a1,
        struct CChannelContext *a2,
        const struct tagMILCMD_REGIONGEOMETRY *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  int appended; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = *((unsigned int *)a3 + 2);
  if ( (unsigned int)v5 > a5 || (v5 & 0xF) != 0 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2003303421, 0x503u, 0LL);
  }
  else
  {
    v6 = v5 >> 4;
    v11[0] = v6;
    v11[1] = a4;
    if ( !a4 && v6 )
    {
      ((void (__fastcall *)(struct CRegionGeometry *, struct CChannelContext *))`gsl::details::get_terminate_handler'::`2'::handler)(
        a1,
        a2);
      __debugbreak();
    }
    appended = CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::SetOrAppendRectangles(a1, v11, 0);
    v9 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, appended, 0x506u, 0LL);
  }
  return v9;
}
