/*
 * XREFs of ??R?$_Func_class@XJ@std@@QEBAXJ@Z @ 0x18011A384
 * Callers:
 *     ?SetError@AsyncPVPrincipal@@UEAAJPEAVBamoAsyncResult_PROPVARIANT_Stub@@H@Z @ 0x18011A8A0 (-SetError@AsyncPVPrincipal@@UEAAJPEAVBamoAsyncResult_PROPVARIANT_Stub@@H@Z.c)
 *     ?SetOutcome@AsyncHRESULTPrincipal@@UEAAJPEAVBamoAsyncHRESULTStub@@H@Z @ 0x18011B890 (-SetOutcome@AsyncHRESULTPrincipal@@UEAAJPEAVBamoAsyncHRESULTStub@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,long>::operator()(__int64 a1, int a2)
{
  __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 16LL))(v2, &v4);
}
