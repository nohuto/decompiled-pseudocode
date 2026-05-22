/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_c8397eccb247ca477275d95d0a9bda1a_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180033120
 * Callers:
 *     <none>
 * Callees:
 *     ??0MPCConstantManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18003300C (--0MPCConstantManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_c8397eccb247ca477275d95d0a9bda1a_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2)
{
  struct MPCManagerConnection ***v2; // rbx
  __int64 result; // rax
  void *v4; // rbx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  MPCConstantManager *v7; // [rsp+58h] [rbp+20h]

  v2 = *(struct MPCManagerConnection ****)(a2 + 8);
  try
  {
    v7 = (MPCConstantManager *)operator new(0x58uLL);
    MPCConstantManager::s_instance = MPCConstantManager::MPCConstantManager(v7, **v2);
    result = 1LL;
  }
  catch ( ... )
  {
    v4 = *(void **)a2;
    __ExceptionPtrCreate(v5);
    __ExceptionPtrCurrentException(v5);
    __ExceptionPtrAssign(v4, v5);
    __ExceptionPtrDestroy(v5);
    return 0LL;
  }
  return result;
}
