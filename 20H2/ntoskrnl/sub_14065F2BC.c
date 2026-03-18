/*
 * XREFs of sub_14065F2BC @ 0x14065F2BC
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x14065ED00 (WbRemoveWarbirdProcess.c)
 *     WbDispatchOperation @ 0x14065F0D4 (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x14065F2F4 (WbGetWarbirdProcess.c)
 *     WbCreateWarbirdProcess @ 0x1406E2A94 (WbCreateWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x14065CF10 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_14065F2BC(__int64 a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 232));
    if ( !v1 )
      WbFreeWarbirdProcess((_DWORD *)a1);
  }
  return v1;
}
