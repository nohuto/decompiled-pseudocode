/*
 * XREFs of ?CallSetBooleanValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I_N@Z @ 0x180142164
 * Callers:
 *     ?BroadcastSetBooleanValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJI_N@Z @ 0x180141838 (-BroadcastSetBooleanValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJI_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBooleanValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJI_N@Z @ 0x1801436FC (-SetBooleanValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJI_N@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::CallSetBooleanValueOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        unsigned int a2,
        bool a3)
{
  unsigned int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = BamoImpl::BamoDataSourceStubImpl::SetBooleanValue(a1, a2, a3);
  if ( (int)(v3 + 0x80000000) >= 0 && v3 != -2018375675 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      9364LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)v3);
    __debugbreak();
  }
  return 0LL;
}
