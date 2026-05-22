/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_810dcc79efb0a72353c94b2711027391_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180069D50
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 *     ??0MPCGestureHandlerManager@@QEAA@XZ @ 0x18006AD00 (--0MPCGestureHandlerManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_810dcc79efb0a72353c94b2711027391_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  MPCGestureHandlerManager *v2; // rcx
  __int64 result; // rax
  void *v4; // rbx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    v2 = (MPCGestureHandlerManager *)operator new(0x40uLL);
    MPCGestureHandlerManager::s_instance = MPCGestureHandlerManager::MPCGestureHandlerManager(v2);
    result = 1LL;
  }
  catch ( ... )
  {
    v4 = *a2;
    __ExceptionPtrCreate(v5);
    __ExceptionPtrCurrentException(v5);
    __ExceptionPtrAssign(v4, v5);
    __ExceptionPtrDestroy(v5);
    return 0LL;
  }
  return result;
}
