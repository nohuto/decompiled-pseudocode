/*
 * XREFs of ?Create@CEventPoolEntry@CEventPool@@SGQAV12@XZ @ 0xE5E08
 * Callers:
 *     ?CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QAEQAVCWaitableWorkItem@1@PAEI@Z @ 0x8753E (-CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QAEQAVCWaitableWorkItem@1@PAEI@Z.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SGXQAV1@@Z @ 0xD3388 (-Destroy@CManualResetEvent@@SGXQAV1@@Z.c)
 *     ?Create@CManualResetEvent@@SGQAV1@XZ @ 0xE5F4C (-Create@CManualResetEvent@@SGQAV1@XZ.c)
 */

struct CEventPool::CEventPoolEntry *__stdcall CEventPool::CEventPoolEntry::Create()
{
  _DWORD *v0; // edi
  _DWORD *v1; // eax
  _DWORD *v2; // ebx
  _DWORD *v3; // esi
  struct CManualResetEvent *v4; // eax
  PVOID *v6; // ecx

  v0 = 0;
  v1 = EngAllocMem(0, 8u, 0x676D6466u);
  v2 = v1;
  if ( !v1 )
    return 0;
  v3 = v1;
  v4 = CManualResetEvent::Create();
  v2[1] = v4;
  if ( v4 )
  {
    v3 = 0;
    v0 = v2;
  }
  if ( v3 )
  {
    v6 = (PVOID *)v3[1];
    if ( v6 )
      CManualResetEvent::Destroy(v6);
    EngFreeMem(v3);
  }
  return (struct CEventPool::CEventPoolEntry *)v0;
}
