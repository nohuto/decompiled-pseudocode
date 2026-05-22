/*
 * XREFs of ??$EnumerateStubs@IMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMM@Z_NIMM@Z @ 0x180140B80
 * Callers:
 *     ?BroadcastSetVector2Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMM@Z @ 0x180141DF4 (-BroadcastSetVector2Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallSetVector2ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMM@Z @ 0x1801422B0 (-CallSetVector2ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float,float>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        float a5,
        float a6)
{
  __int64 i; // rbx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = *(_QWORD *)(a1 + 32); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
      return 0LL;
    if ( *(_BYTE *)(i + 32) )
    {
      v8 = BamoImpl::BamoDataSourcePrincipalImpl::CallSetVector2ValueOnStub(
             (struct Microsoft::BamoImpl::BamoStubImpl *)i,
             a4,
             a5,
             a6);
      v9 = v8;
      if ( v8 < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D7,
    (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)v8);
  return v9;
}
