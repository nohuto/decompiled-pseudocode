/*
 * XREFs of ?Create@CWorkItemQueue@@SGPAV1@XZ @ 0xE5F00
 * Callers:
 *     ?Create@CMultipleConsumerWorkQueue@@SGQAV1@XZ @ 0xE5E8C (-Create@CMultipleConsumerWorkQueue@@SGQAV1@XZ.c)
 * Callees:
 *     ?Destroy@CWorkItemQueue@@SGXQAV1@@Z @ 0xD3358 (-Destroy@CWorkItemQueue@@SGXQAV1@@Z.c)
 *     ?Create@CManualResetEvent@@SGQAV1@XZ @ 0xE5F4C (-Create@CManualResetEvent@@SGQAV1@XZ.c)
 */

struct CWorkItemQueue *__stdcall CWorkItemQueue::Create()
{
  _DWORD *v0; // ebx
  _DWORD *v1; // eax
  _DWORD *v2; // edi
  int v3; // esi
  struct CManualResetEvent *v4; // eax

  v0 = 0;
  v1 = EngAllocMem(0, 0x10u, 0x676D6466u);
  v2 = v1;
  if ( !v1 )
    return 0;
  v1[2] = 0;
  v1[3] = 0;
  v3 = (int)v1;
  *(_BYTE *)v1 = 0;
  v4 = CManualResetEvent::Create();
  v2[1] = v4;
  if ( v4 )
  {
    v3 = 0;
    v0 = v2;
  }
  if ( v3 )
    CWorkItemQueue::Destroy(v3);
  return (struct CWorkItemQueue *)v0;
}
