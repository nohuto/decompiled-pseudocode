/*
 * XREFs of ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C00471D8
 * Callers:
 *     SetThreadPriority @ 0x1C0046DC0 (SetThreadPriority.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C0046ECC (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C0046FEC (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThread::_CalledOnInputThread(CInputThread *this)
{
  return (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)this + 10);
}
