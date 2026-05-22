/*
 * XREFs of ?CallRemoveDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAVBamoDataSourcePrincipal@@@Z @ 0x180142090
 * Callers:
 *     ?BroadcastRemoveDataSource@BamoDataProviderPrincipalImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x180141698 (-BroadcastRemoveDataSource@BamoDataProviderPrincipalImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrinci.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x1801431EC (-RemoveDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderPrincipalImpl::CallRemoveDataSourceOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoDataSourcePrincipal *a2)
{
  unsigned int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = BamoImpl::BamoDataProviderStubImpl::RemoveDataSource(a1, a2);
  if ( (int)(v2 + 0x80000000) >= 0 && v2 != -2018375675 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      7797LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)v2);
    __debugbreak();
  }
  return 0LL;
}
