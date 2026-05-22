/*
 * XREFs of ?CallSetMatrix4x4ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IAEBU_D3DMATRIX@@@Z @ 0x1801426B0
 * Callers:
 *     ?BroadcastSetMatrix4x4Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z @ 0x180141FE8 (-BroadcastSetMatrix4x4Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMatrix4x4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z @ 0x180143FCC (-SetMatrix4x4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::CallSetMatrix4x4ValueOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        unsigned int a2,
        const struct _D3DMATRIX *a3)
{
  unsigned int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = BamoImpl::BamoDataSourceStubImpl::SetMatrix4x4Value(a1, a2, a3);
  if ( (int)(v3 + 0x80000000) >= 0 && v3 != -2018375675 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      9584LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)v3);
    __debugbreak();
  }
  return 0LL;
}
