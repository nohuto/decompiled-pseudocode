/*
 * XREFs of ??$?4U?$default_delete@$$BY0A@D@std@@$0A@@?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800E8FF0
 * Callers:
 *     ?SetOwnerProcessName@CChannelContext@@QEAAXPEBDI@Z @ 0x1800E8F88 (-SetOwnerProcessName@CChannelContext@@QEAAXPEBDI@Z.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void **__fastcall std::unique_ptr<char [0]>::operator=<std::default_delete<char [0]>,0>(void **a1, void **a2)
{
  void *v3; // rax
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      DefaultHeap::Free(v4);
  }
  return a1;
}
