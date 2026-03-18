/*
 * XREFs of ?Create@CMultipleConsumerWorkQueue@@SGQAV1@XZ @ 0xE5E8C
 * Callers:
 *     ?UmfdCallSessionInitialize@@YGJXZ @ 0xE5E48 (-UmfdCallSessionInitialize@@YGJXZ.c)
 * Callees:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SGXQAV1@@Z @ 0xD32EE (-Destroy@CMultipleConsumerWorkQueue@@SGXQAV1@@Z.c)
 *     ?Create@CEventPool@@SGQAV1@XZ @ 0xE5EDA (-Create@CEventPool@@SGQAV1@XZ.c)
 *     ?Create@CWorkItemQueue@@SGPAV1@XZ @ 0xE5F00 (-Create@CWorkItemQueue@@SGPAV1@XZ.c)
 */

struct CWorkItemQueue **__stdcall CMultipleConsumerWorkQueue::Create()
{
  struct CWorkItemQueue **v0; // eax
  struct CWorkItemQueue **v1; // edi
  struct CWorkItemQueue **v2; // esi
  struct CWorkItemQueue *v3; // eax
  struct CEventPool *v4; // eax

  v0 = (struct CWorkItemQueue **)EngAllocMem(0, 8u, 0x676D6466u);
  v1 = v0;
  if ( !v0 )
    return 0;
  v2 = v0;
  v3 = CWorkItemQueue::Create();
  *v1 = v3;
  if ( v3 && (v4 = CEventPool::Create(), (v1[1] = v4) != 0) )
    v2 = 0;
  else
    v1 = 0;
  if ( v2 )
    CMultipleConsumerWorkQueue::Destroy(v2);
  return v1;
}
