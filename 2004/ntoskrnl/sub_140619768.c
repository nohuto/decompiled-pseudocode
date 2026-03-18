/*
 * XREFs of sub_140619768 @ 0x140619768
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x1406191AC (WbRemoveWarbirdProcess.c)
 *     WbDispatchOperation @ 0x140619580 (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x1406197A0 (WbGetWarbirdProcess.c)
 *     WbCreateWarbirdProcess @ 0x14071075C (WbCreateWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x1406D8C70 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_140619768(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1 + 29);
    if ( !v1 )
      WbFreeWarbirdProcess((PVOID)a1);
  }
  return v1;
}
