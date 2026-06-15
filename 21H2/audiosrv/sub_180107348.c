/*
 * XREFs of sub_180107348 @ 0x180107348
 * Callers:
 *     sub_1801071D0 @ 0x1801071D0 (sub_1801071D0.c)
 * Callees:
 *     sub_1800B5768 @ 0x1800B5768 (sub_1800B5768.c)
 */

__int64 __fastcall sub_180107348(char *pv)
{
  struct _TP_POOL *Threadpool; // rax
  __int64 v3; // r9
  int v4; // edx
  PTP_TIMER ThreadpoolTimer; // rax
  PTP_WORK ThreadpoolWork; // rax
  bool v8; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  Threadpool = CreateThreadpool(0LL);
  *(_QWORD *)pv = Threadpool;
  if ( !Threadpool )
  {
    v4 = 220;
    return sub_1800B5768(
             (int)retaddr,
             v4,
             (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
             v3);
  }
  if ( !SetThreadpoolThreadMinimum(Threadpool, 1u) )
  {
    v4 = 223;
    return sub_1800B5768(
             (int)retaddr,
             v4,
             (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
             v3);
  }
  SetThreadpoolThreadMaximum(*(PTP_POOL *)pv, 1u);
  *((_QWORD *)pv + 4) = *(_QWORD *)pv;
  ThreadpoolTimer = CreateThreadpoolTimer(sub_180108F20, pv, (PTP_CALLBACK_ENVIRON)(pv + 24));
  *((_QWORD *)pv + 1) = ThreadpoolTimer;
  if ( !ThreadpoolTimer )
  {
    v4 = 230;
    return sub_1800B5768(
             (int)retaddr,
             v4,
             (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
             v3);
  }
  ThreadpoolWork = CreateThreadpoolWork(sub_1801091F0, pv, (PTP_CALLBACK_ENVIRON)(pv + 24));
  v8 = *((_QWORD *)pv + 1) == 0LL;
  *((_QWORD *)pv + 2) = ThreadpoolWork;
  if ( v8 )
  {
    v4 = 233;
    return sub_1800B5768(
             (int)retaddr,
             v4,
             (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
             v3);
  }
  return 0LL;
}
