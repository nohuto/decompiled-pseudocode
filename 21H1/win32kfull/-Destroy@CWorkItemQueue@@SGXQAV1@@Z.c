/*
 * XREFs of ?Destroy@CWorkItemQueue@@SGXQAV1@@Z @ 0xD3358
 * Callers:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SGXQAV1@@Z @ 0xD32EE (-Destroy@CMultipleConsumerWorkQueue@@SGXQAV1@@Z.c)
 *     ?Create@CWorkItemQueue@@SGPAV1@XZ @ 0xE5F00 (-Create@CWorkItemQueue@@SGPAV1@XZ.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SGXQAV1@@Z @ 0xD3388 (-Destroy@CManualResetEvent@@SGXQAV1@@Z.c)
 */

void __thiscall CWorkItemQueue::Destroy(int this)
{
  PSLIST_ENTRY v2; // esi
  PSLIST_ENTRY v3; // [esp-4h] [ebp-Ch]
  struct CManualResetEvent *v4; // [esp+0h] [ebp-8h]

  v2 = ExInterlockedFlushSList((PSLIST_HEADER)(this + 8));
  while ( v2 )
  {
    v3 = v2;
    v2 = v2->Next;
    EngFreeMem(v3);
  }
  if ( *(_DWORD *)(this + 4) )
    CManualResetEvent::Destroy(v4);
  EngFreeMem((PVOID)this);
}
