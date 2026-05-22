/*
 * XREFs of ?Create@MPCConstantManager@@SAJPEAVMPCManagerConnection@@@Z @ 0x180033548
 * Callers:
 *     _lambda_3bf0c1641773c9cead522fb3b6204044_::operator() @ 0x18003334C (_lambda_3bf0c1641773c9cead522fb3b6204044_--operator().c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18006901C (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x180069C94 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MPCConstantManager::Create(struct MPCManagerConnection *a1)
{
  const char *v1; // r9
  __int64 v3; // rax
  _BYTE v4[16]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v6[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  struct MPCManagerConnection *v8; // [rsp+60h] [rbp+10h] BYREF
  struct MPCManagerConnection **v9; // [rsp+68h] [rbp+18h] BYREF

  v8 = a1;
  v9 = &v8;
  __ExceptionPtrCreate(v4);
  v5[0] = v4;
  v5[1] = &v9;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPCConstantManager::s_singletonCreated,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_c8397eccb247ca477275d95d0a9bda1a_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v5) )
  {
LABEL_5:
    if ( __ExceptionPtrToBool(v4) )
    {
      v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v6, (const struct std::exception_ptr *)v4);
      std::rethrow_exception(v3);
      __debugbreak();
    }
    std::_XGetLastError();
    __debugbreak();
    JUMPOUT(0x180060346LL);
  }
  __ExceptionPtrDestroy(v4);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v1);
    goto LABEL_5;
  }
  return 0LL;
}
