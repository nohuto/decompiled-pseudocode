/*
 * XREFs of ?BroadcastSetQuaternionValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x180141C44
 * Callers:
 *     ?BroadcastSetQuaternionValue@BamoDataSourcePrincipal@@UEAAJIMMMM@Z @ 0x180141BB0 (-BroadcastSetQuaternionValue@BamoDataSourcePrincipal@@UEAAJIMMMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$EnumerateStubs@IMMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMMM@Z_NIMMMM@Z @ 0x180140C94 (--$EnumerateStubs@IMMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMMM.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetQuaternionValue(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        unsigned int a2,
        float a3,
        float a4)
{
  __int64 v4; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
  if ( *(_QWORD *)(v4 + 56) )
    return Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float,float,float,float>(
             (__int64)this,
             (__int64 (__fastcall *)(__int64, _QWORD))BamoImpl::BamoDataSourcePrincipalImpl::CallSetQuaternionValueOnStub,
             v4,
             a2);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2382,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
    (const char *)0x87B20814LL);
  return 2276591636LL;
}
