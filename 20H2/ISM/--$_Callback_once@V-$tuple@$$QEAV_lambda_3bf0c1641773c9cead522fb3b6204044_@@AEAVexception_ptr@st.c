/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_3bf0c1641773c9cead522fb3b6204044_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180033720
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3bf0c1641773c9cead522fb3b6204044_::operator() @ 0x18003337C (_lambda_3bf0c1641773c9cead522fb3b6204044_--operator().c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_3bf0c1641773c9cead522fb3b6204044_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  __int64 result; // rax
  void *v3; // rbx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    lambda_3bf0c1641773c9cead522fb3b6204044_::operator()();
    result = 1LL;
  }
  catch ( ... )
  {
    v3 = *a2;
    __ExceptionPtrCreate(v4);
    __ExceptionPtrCurrentException(v4);
    __ExceptionPtrAssign(v3, v4);
    __ExceptionPtrDestroy(v4);
    return 0LL;
  }
  return result;
}
