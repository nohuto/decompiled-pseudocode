/*
 * XREFs of ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C00A86D8
 * Callers:
 *     SetThreadPriority @ 0x1C00A82C0 (SetThreadPriority.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C00A83CC (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C00A84EC (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThread::_CalledOnInputThread(CInputThread *this)
{
  return (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)this + 10);
}
