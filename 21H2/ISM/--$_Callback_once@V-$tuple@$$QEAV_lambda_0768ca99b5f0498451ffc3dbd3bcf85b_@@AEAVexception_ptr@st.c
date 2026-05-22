/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_0768ca99b5f0498451ffc3dbd3bcf85b_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1801976C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18006E2FC (-AddInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_0768ca99b5f0498451ffc3dbd3bcf85b_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v4; // r8
  __int128 v5; // rax
  struct IMPCInputProviderBase *v6; // rdx
  __int64 result; // rax
  void *v8; // rbx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(_QWORD **)(a2 + 8);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v5 = -(__int128)(unsigned __int64)*v4;
  v6 = (struct IMPCInputProviderBase *)((*v4 + 24LL) & *((_QWORD *)&v5 + 1));
  try
  {
    MPCConstantManager::AddInputType(MPCConstantManager::s_instance, v6);
    result = 1LL;
  }
  catch ( ... )
  {
    v8 = *(void **)a2;
    __ExceptionPtrCreate(v9);
    __ExceptionPtrCurrentException(v9);
    __ExceptionPtrAssign(v8, v9);
    __ExceptionPtrDestroy(v9);
    return 0LL;
  }
  return result;
}
