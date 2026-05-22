/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_e877c53153750a022a5d5eb128b5cc30_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18006C990
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_e877c53153750a022a5d5eb128b5cc30_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  void *v4; // rbx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    v2 = operator new(0x30uLL);
    *(_WORD *)v2 = 0;
    v2[1] = 0LL;
    v2[2] = 0LL;
    v2[3] = 0LL;
    v2[4] = 0LL;
    *((_WORD *)v2 + 20) = 0;
    *((_DWORD *)v2 + 7) = GetCurrentProcessId();
    MPCGamepadInputHelper::s_instance = (struct MPCGamepadInputHelper *)v2;
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
