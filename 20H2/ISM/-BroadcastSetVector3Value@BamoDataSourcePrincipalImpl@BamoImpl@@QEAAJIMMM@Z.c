/*
 * XREFs of ?BroadcastSetVector3Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMM@Z @ 0x180141ED4
 * Callers:
 *     ?BroadcastSetVector3Value@BamoDataSourcePrincipal@@UEAAJIMMM@Z @ 0x180141E50 (-BroadcastSetVector3Value@BamoDataSourcePrincipal@@UEAAJIMMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$EnumerateStubs@IMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMM@Z_NIMMM@Z @ 0x180140BFC (--$EnumerateStubs@IMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMM@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetVector3Value(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        __int64 a2,
        float a3,
        float a4,
        int a5)
{
  __int64 v5; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
  if ( *(_QWORD *)(v5 + 56) )
    return Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float,float,float>(
             (__int64)this,
             a2,
             v5,
             a2,
             a3,
             a4,
             a5);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x235C,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
    (const char *)0x87B20814LL);
  return 2276591636LL;
}
