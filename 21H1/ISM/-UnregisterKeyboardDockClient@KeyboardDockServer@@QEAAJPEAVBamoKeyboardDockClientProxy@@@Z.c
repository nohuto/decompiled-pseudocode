/*
 * XREFs of ?UnregisterKeyboardDockClient@KeyboardDockServer@@QEAAJPEAVBamoKeyboardDockClientProxy@@@Z @ 0x180128380
 * Callers:
 *     ?OnDisconnected@KeyboardDockClientProxy@@MEAAJXZ @ 0x180128D40 (-OnDisconnected@KeyboardDockClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardDockServer::UnregisterKeyboardDockClient(
        KeyboardDockServer *this,
        struct BamoKeyboardDockClientProxy *a2,
        __int64 a3,
        const char *a4)
{
  struct BamoKeyboardDockClientProxy **v4; // rsi
  struct BamoKeyboardDockClientProxy **i; // rbx
  struct BamoKeyboardDockClientProxy **v7; // rdi
  struct BamoKeyboardDockClientProxy *v8; // rax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct BamoKeyboardDockClientProxy **)*((_QWORD *)this + 8);
  for ( i = (struct BamoKeyboardDockClientProxy **)*((_QWORD *)this + 7); i != v4 && *i != a2; ++i )
    ;
  if ( i == v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      58LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\keyboardapi\\server\\keyboarddockserver.cpp",
      a4);
    __debugbreak();
  }
  v7 = i + 1;
  if ( i + 1 != v4 )
  {
    do
    {
      v8 = *v7;
      *v7 = 0LL;
      v9 = (__int64)*(v7 - 1);
      *(v7 - 1) = v8;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      ++v7;
    }
    while ( v7 != v4 );
    v4 = (struct BamoKeyboardDockClientProxy **)*((_QWORD *)this + 8);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)v4 - 1);
  *((_QWORD *)this + 8) -= 8LL;
  return 0LL;
}
