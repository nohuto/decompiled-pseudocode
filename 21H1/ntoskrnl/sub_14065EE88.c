/*
 * XREFs of sub_14065EE88 @ 0x14065EE88
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x14065E8CC (WbRemoveWarbirdProcess.c)
 *     WbDispatchOperation @ 0x14065ECA0 (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x14065EEC0 (WbGetWarbirdProcess.c)
 *     WbCreateWarbirdProcess @ 0x1406ECC7C (WbCreateWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x1406E7B88 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_14065EE88(volatile signed __int64 *a1)
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
