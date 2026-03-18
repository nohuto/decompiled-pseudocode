/*
 * XREFs of _lambda_95c27c6d3719cab4b30ebc7bb5fd2a18_::operator() @ 0x87504
 * Callers:
 *     UmfdHostLifeTimeManager::ExecuteCallbackIfUmfdHostIsReady__lambda_95c27c6d3719cab4b30ebc7bb5fd2a18___ @ 0x874A4 (UmfdHostLifeTimeManager--ExecuteCallbackIfUmfdHostIsReady__lambda_95c27c6d3719cab4b30ebc7bb5fd2a.c)
 * Callees:
 *     ?CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QAEQAVCWaitableWorkItem@1@PAEI@Z @ 0x8753E (-CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QAEQAVCWaitableWorkItem@1@PAEI@Z.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SGXK@Z @ 0x228EC4 (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SGXK@Z.c)
 */

int __thiscall lambda_95c27c6d3719cab4b30ebc7bb5fd2a18_::operator()(int this)
{
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v2; // esi
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem *v3; // eax
  unsigned int v5; // [esp+0h] [ebp-4h]

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(***(_DWORD ***)(this + 4) + 8))(**(_DWORD **)(this + 4))
    || UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread == KeGetCurrentThread() )
  {
    v2 = *(struct CMultipleConsumerWorkQueue::CWaitableWorkItem ***)(this + 8);
    v3 = CMultipleConsumerWorkQueue::CreateAndQueueWorkItem(
           *(CMultipleConsumerWorkQueue **)this,
           *(unsigned __int8 **)(this + 4),
           *(_DWORD *)this);
    *v2 = v3;
    return v3 != 0 ? 0 : -1073741823;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD))(***(_DWORD ***)(this + 4) + 4))(**(_DWORD **)(this + 4));
    UmfdHostLifeTimeManager::QueueTryResurrectPffApc(v5);
    return -1073741823;
  }
}
