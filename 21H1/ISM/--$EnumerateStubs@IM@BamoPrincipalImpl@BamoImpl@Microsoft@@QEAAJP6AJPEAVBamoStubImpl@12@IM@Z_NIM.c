/*
 * XREFs of ??$EnumerateStubs@IM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IM@Z_NIM@Z @ 0x18014105C
 * Callers:
 *     ?BroadcastSetScalarValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIM@Z @ 0x180142278 (-BroadcastSetScalarValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallSetScalarValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IM@Z @ 0x1801427BC (-CallSetScalarValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        float a5)
{
  __int64 i; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = *(_QWORD *)(a1 + 32); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
      return 0LL;
    if ( *(_BYTE *)(i + 32) )
    {
      v7 = BamoImpl::BamoDataSourcePrincipalImpl::CallSetScalarValueOnStub(
             (struct Microsoft::BamoImpl::BamoStubImpl *)i,
             a4,
             a5);
      v8 = v7;
      if ( v7 < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D7,
    (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)v7);
  return v8;
}
