/*
 * XREFs of ?RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z @ 0x1C00516B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C00649BC (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 */

void __fastcall IOCPDispatcher::RegisterThreadDispatcherObject(IOCPDispatcher *this, void *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8

  v4 = IOCPDispatcher::SetupIOCPForDispatcherHandle(this, 0LL, a2, 2LL, *((_DWORD *)this + 684));
  v5 = 2 * (*((unsigned int *)this + 684) + 161LL);
  *((_QWORD *)this + v5) = a2;
  *((_QWORD *)this + v5 + 1) = v4;
  ++*((_DWORD *)this + 684);
}
