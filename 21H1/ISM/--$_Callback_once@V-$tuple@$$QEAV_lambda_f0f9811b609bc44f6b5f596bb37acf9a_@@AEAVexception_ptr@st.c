/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_f0f9811b609bc44f6b5f596bb37acf9a_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18003ABA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f0f9811b609bc44f6b5f596bb37acf9a_::operator() @ 0x18002B3E0 (_lambda_f0f9811b609bc44f6b5f596bb37acf9a_--operator().c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_f0f9811b609bc44f6b5f596bb37acf9a_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  void *v3; // rbx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    lambda_f0f9811b609bc44f6b5f596bb37acf9a_::operator()(*(_QWORD **)(a2 + 8));
    result = 1LL;
  }
  catch ( ... )
  {
    v3 = *(void **)a2;
    __ExceptionPtrCreate(v4);
    __ExceptionPtrCurrentException(v4);
    __ExceptionPtrAssign(v3, v4);
    __ExceptionPtrDestroy(v4);
    return 0LL;
  }
  return result;
}
