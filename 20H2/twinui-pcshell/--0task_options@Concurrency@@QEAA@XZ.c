/*
 * XREFs of ??0task_options@Concurrency@@QEAA@XZ @ 0x180324334
 * Callers:
 *     Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___ @ 0x1803238B4 (Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___.c)
 *     _lambda_152963d5211cf6149a80abe334e76dfa_::operator() @ 0x180324904 (_lambda_152963d5211cf6149a80abe334e76dfa_--operator().c)
 * Callees:
 *     ??$call_once@V_lambda_0e64988457575224279dcb6d61e61bdd_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_0e64988457575224279dcb6d61e61bdd_@@@Z @ 0x1803235C4 (--$call_once@V_lambda_0e64988457575224279dcb6d61e61bdd_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lamb.c)
 */

Concurrency::task_options *__fastcall Concurrency::task_options::task_options(Concurrency::task_options *this)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  Concurrency::task_options *result; // rax
  Concurrency::task_options *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  LOBYTE(v6) = 0;
  std::call_once<_lambda_0e64988457575224279dcb6d61e61bdd_,>((__int64)this, (__int64)&v6);
  v2 = (__int64 *)`Concurrency::details::_GetStaticAmbientSchedulerRef'::`2'::_S_scheduler_address;
  v3 = *(_QWORD *)(`Concurrency::details::_GetStaticAmbientSchedulerRef'::`2'::_S_scheduler_address + 8);
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = v2[1];
  }
  v4 = *v2;
  *(_QWORD *)this = v4;
  *((_QWORD *)this + 2) = v4;
  result = this;
  *((_QWORD *)this + 1) = v3;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 1LL;
  *((_BYTE *)this + 40) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *((_WORD *)this + 44) = 0;
  return result;
}
