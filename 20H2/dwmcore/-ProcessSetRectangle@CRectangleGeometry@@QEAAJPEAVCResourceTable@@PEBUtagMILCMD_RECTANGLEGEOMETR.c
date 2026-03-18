/*
 * XREFs of ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x1800C4818
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleGeometry::ProcessSetRectangle(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE *a3)
{
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v10; // eax
  __int64 v11; // rcx

  if ( *((_BYTE *)a3 + 41) )
  {
    v10 = ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180341B48)(
            (char *)this + SDWORD2(xmmword_180341B48),
            &CRectangleGeometry::sc_CornerRadius,
            (char *)a3 + 8);
    v8 = v10;
    if ( v10 >= 0 )
    {
LABEL_5:
      *((_BYTE *)this + 184) = *((_BYTE *)a3 + 41) != 0;
      *((_BYTE *)this + 128) = *((_BYTE *)a3 + 40) != 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x14Du, 0LL);
    }
  }
  else
  {
    v5 = 0LL;
    while ( 1 )
    {
      v6 = (*((__int64 (__fastcall **)(char *, _QWORD, char *))*(&off_1802774B0 + v5) + 3))(
             (char *)this + *((int *)*(&off_1802774B0 + v5) + 8),
             *(&off_1802774B0 + v5),
             (char *)a3 + qword_1802E0590[v5]);
      v8 = v6;
      if ( v6 < 0 )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= 8 )
        goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x158u, 0LL);
  }
  return v8;
}
