/*
 * XREFs of ?UmfdCancelServerOutstandingRequests@@YGJPAX@Z @ 0xD0082
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ?ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CGXXZ @ 0xCFEFC (-ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CGXXZ.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SGXXZ @ 0xCFF72 (-UninitializeThread@UmfdHostLifeTimeManager@@SGXXZ.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __thiscall UmfdCancelServerOutstandingRequests(union _SLIST_HEADER **this)
{
  PSLIST_ENTRY result; // eax

  while ( 1 )
  {
    result = InterlockedPopEntrySList(*this + 1);
    if ( !result )
      break;
    result[1].Next = (struct _SINGLE_LIST_ENTRY *)4;
    KeSetEvent((PRKEVENT)result[5].Next[1].Next->Next, 1, 0);
  }
  return result;
}
