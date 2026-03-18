/*
 * XREFs of RIMOnProcessDestroy @ 0x1C0062DE0
 * Callers:
 *     DestroyProcessInfo @ 0x1C00620F8 (DestroyProcessInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0062E54 (RIMUnregisterCurrentProcessForInput.c)
 */

__int64 __fastcall RIMOnProcessDestroy(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *i; // rax

  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( i[1].Flink == a1 )
      BYTE2(i[-1].Blink) = 1;
  }
  qword_1C024E368 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return RIMUnregisterCurrentProcessForInput();
}
