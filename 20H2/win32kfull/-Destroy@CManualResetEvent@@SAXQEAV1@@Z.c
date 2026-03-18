/*
 * XREFs of ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C0124A48
 * Callers:
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C00E9EDC (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C0124964 (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C0124A14 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CManualResetEvent::Destroy(void **pv)
{
  void *v2; // rcx

  v2 = *pv;
  if ( v2 )
    EngFreeMem(v2);
  EngFreeMem(pv);
}
