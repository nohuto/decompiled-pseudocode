/*
 * XREFs of ?InitializeTheadpool@CWorkFifo@@AEAAJXZ @ 0x180107238
 * Callers:
 *     ?Initialize@CWorkFifo@@AEAAJXZ @ 0x1801070C0 (-Initialize@CWorkFifo@@AEAAJXZ.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B5588 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CWorkFifo::InitializeTheadpool(char *pv)
{
  struct _TP_POOL *Threadpool; // rax
  const char *v3; // r9
  __int64 v4; // rdx
  PTP_TIMER ThreadpoolTimer; // rax
  PTP_WORK ThreadpoolWork; // rax
  bool v8; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Threadpool = CreateThreadpool(0LL);
  *(_QWORD *)pv = Threadpool;
  if ( !Threadpool )
  {
    v4 = 220LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
             v3);
  }
  if ( !SetThreadpoolThreadMinimum(Threadpool, 1u) )
  {
    v4 = 223LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
             v3);
  }
  SetThreadpoolThreadMaximum(*(PTP_POOL *)pv, 1u);
  *((_QWORD *)pv + 4) = *(_QWORD *)pv;
  ThreadpoolTimer = CreateThreadpoolTimer(CWorkFifo::TimerCallback, pv, (PTP_CALLBACK_ENVIRON)(pv + 24));
  *((_QWORD *)pv + 1) = ThreadpoolTimer;
  if ( !ThreadpoolTimer )
  {
    v4 = 230LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
             v3);
  }
  ThreadpoolWork = CreateThreadpoolWork(CWorkFifo::WorkCallback, pv, (PTP_CALLBACK_ENVIRON)(pv + 24));
  v8 = *((_QWORD *)pv + 1) == 0LL;
  *((_QWORD *)pv + 2) = ThreadpoolWork;
  if ( v8 )
  {
    v4 = 233LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
             v3);
  }
  return 0LL;
}
