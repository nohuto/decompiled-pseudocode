/*
 * XREFs of ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C003A528
 * Callers:
 *     SetThreadPriority @ 0x1C003A110 (SetThreadPriority.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C003A21C (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C003A33C (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThread::_CalledOnInputThread(CInputThread *this)
{
  return (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)this + 10);
}
