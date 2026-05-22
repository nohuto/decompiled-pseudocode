/*
 * XREFs of ?CallSetVector2ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMM@Z @ 0x180142340
 * Callers:
 *     ??$EnumerateStubs@IMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMM@Z_NIMM@Z @ 0x180140C10 (--$EnumerateStubs@IMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMM@Z_N.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetVector2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMM@Z @ 0x18014419C (-SetVector2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMM@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::CallSetVector2ValueOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        unsigned int a2,
        float a3,
        float a4)
{
  unsigned int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = BamoImpl::BamoDataSourceStubImpl::SetVector2Value(a1, a2, a3, a4);
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2018375675 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      9417LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)v4);
    __debugbreak();
  }
  return 0LL;
}
