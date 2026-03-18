/*
 * XREFs of ?ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES@@PEBXI@Z @ 0x1801BFBBC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1801BFC60 (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 */

__int64 __fastcall CContainerVectorShape::ProcessSetShapes(
        CContainerVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES *a3,
        const void *a4,
        unsigned int a5)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x2Cu, 0LL);
  }
  else
  {
    LOBYTE(a3) = *((_BYTE *)a3 + 8) != 0;
    if ( !a4 && (unsigned __int64)a5 >> 2 )
    {
      ((void (__fastcall *)(CContainerVectorShape *, struct CResourceTable *, const struct tagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES *))`gsl::details::get_terminate_handler'::`2'::handler)(
        this,
        a2,
        a3);
      __debugbreak();
    }
    v5 = CContainerVectorShape::SetShapes(this, a2);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x33u, 0LL);
  }
  return v7;
}
