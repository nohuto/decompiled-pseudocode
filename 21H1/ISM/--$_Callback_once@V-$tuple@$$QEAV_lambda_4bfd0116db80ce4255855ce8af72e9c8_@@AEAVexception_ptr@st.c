/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_4bfd0116db80ce4255855ce8af72e9c8_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180021670
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800216BC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??0MPC3DStateHelper@@AEAA@XZ @ 0x180021B68 (--0MPC3DStateHelper@@AEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_4bfd0116db80ce4255855ce8af72e9c8_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  MPC3DStateHelper *v2; // rcx
  void *v3; // rdx
  __int64 result; // rax
  void *v5; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    v2 = (MPC3DStateHelper *)operator new(0x58uLL);
    MPC3DStateHelper::s_instance = MPC3DStateHelper::MPC3DStateHelper(v2);
    wil::details::SetEvent((wil::details *)MPC3DStateHelper::s_isInstanceCreatedEvent, v3);
    result = 1LL;
  }
  catch ( ... )
  {
    v5 = *a2;
    __ExceptionPtrCreate(v6);
    __ExceptionPtrCurrentException(v6);
    __ExceptionPtrAssign(v5, v6);
    __ExceptionPtrDestroy(v6);
    return 0LL;
  }
  return result;
}
