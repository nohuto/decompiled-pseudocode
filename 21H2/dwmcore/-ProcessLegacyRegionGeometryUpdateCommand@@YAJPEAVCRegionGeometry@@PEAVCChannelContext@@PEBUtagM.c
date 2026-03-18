/*
 * XREFs of ?ProcessLegacyRegionGeometryUpdateCommand@@YAJPEAVCRegionGeometry@@PEAVCChannelContext@@PEBUtagMILCMD_REGIONGEOMETRY@@PEBXI@Z @ 0x1800E5788
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?SetOrAppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@_N@Z @ 0x18006E210 (-SetOrAppendRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV-$sp.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall ProcessLegacyRegionGeometryUpdateCommand(
        struct CRegionGeometry *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_REGIONGEOMETRY *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  gsl::details *v8; // rcx
  int appended; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = *((_DWORD *)a3 + 2);
  if ( v5 > a5 || (v5 & 0xF) != 0 )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003303421, 0x503u);
  }
  else
  {
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v13, (unsigned __int64)v5 >> 4);
    v13[1] = a4;
    if ( v13[0] == -1LL || !a4 && v13[0] )
    {
      gsl::details::terminate(v8);
      JUMPOUT(0x1800E5804LL);
    }
    appended = CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::SetOrAppendRectangles(this, v13, 0);
    v11 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, appended, 0x506u);
  }
  return v11;
}
