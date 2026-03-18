/*
 * XREFs of ?Destroy@CEventPool@@SGXQAV1@@Z @ 0xD3314
 * Callers:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SGXQAV1@@Z @ 0xD32EE (-Destroy@CMultipleConsumerWorkQueue@@SGXQAV1@@Z.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SGXQAV1@@Z @ 0xD3388 (-Destroy@CManualResetEvent@@SGXQAV1@@Z.c)
 */

void __usercall CEventPool::Destroy(union _SLIST_HEADER *a1@<ecx>, struct CManualResetEvent *a2@<edi>)
{
  PSLIST_ENTRY v2; // esi
  _DWORD *p_Next; // edi
  struct CManualResetEvent *v4; // [esp-4h] [ebp-Ch]

  v2 = ExInterlockedFlushSList(a1 + 1);
  if ( v2 )
  {
    v4 = a2;
    do
    {
      p_Next = &v2->Next;
      v2 = v2->Next;
      if ( p_Next[1] )
        CManualResetEvent::Destroy(v4);
      EngFreeMem(p_Next);
    }
    while ( v2 );
  }
  EngFreeMem(a1);
}
