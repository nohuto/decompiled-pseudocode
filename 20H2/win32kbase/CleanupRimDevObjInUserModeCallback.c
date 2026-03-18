/*
 * XREFs of CleanupRimDevObjInUserModeCallback @ 0x1C0120F5C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 */

LONG_PTR __fastcall CleanupRimDevObjInUserModeCallback(_QWORD *Object)
{
  __int64 v1; // rbx

  v1 = Object[53];
  RIMLockExclusive(v1 + 104);
  if ( *(_BYTE *)(v1 + 80) && !*(_BYTE *)(v1 + 81) )
    RIMLockExclusive(v1 + 568);
  *(_BYTE *)(v1 + 82) = 0;
  *(_QWORD *)(v1 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 104, 0LL);
  KeLeaveCriticalRegion();
  if ( *(_BYTE *)(v1 + 80) && !*(_BYTE *)(v1 + 81) )
  {
    *(_QWORD *)(v1 + 576) = 0LL;
    ExReleasePushLockExclusiveEx(v1 + 568, 0LL);
    KeLeaveCriticalRegion();
  }
  return ObfDereferenceObject(Object);
}
