/*
 * XREFs of ?Destroy@CMultipleConsumerWorkQueue@@SGXQAV1@@Z @ 0xD32EE
 * Callers:
 *     ?UmfdCallSessionUninitialize@@YGXXZ @ 0xD3A84 (-UmfdCallSessionUninitialize@@YGXXZ.c)
 *     ?UmfdCallSessionInitialize@@YGJXZ @ 0xE5E48 (-UmfdCallSessionInitialize@@YGJXZ.c)
 *     ?Create@CMultipleConsumerWorkQueue@@SGQAV1@XZ @ 0xE5E8C (-Create@CMultipleConsumerWorkQueue@@SGQAV1@XZ.c)
 * Callees:
 *     ?Destroy@CEventPool@@SGXQAV1@@Z @ 0xD3314 (-Destroy@CEventPool@@SGXQAV1@@Z.c)
 *     ?Destroy@CWorkItemQueue@@SGXQAV1@@Z @ 0xD3358 (-Destroy@CWorkItemQueue@@SGXQAV1@@Z.c)
 */

void __thiscall CMultipleConsumerWorkQueue::Destroy(_DWORD *this)
{
  struct CWorkItemQueue *v2; // [esp+0h] [ebp-4h]

  if ( *this )
    CWorkItemQueue::Destroy(v2);
  if ( this[1] )
    CEventPool::Destroy(v2);
  EngFreeMem(this);
}
