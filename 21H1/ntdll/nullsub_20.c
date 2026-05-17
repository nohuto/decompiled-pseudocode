/*
 * XREFs of nullsub_20 @ 0x4B29B438
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int nullsub_20()
{
  _BYTE retaddr[8]; // [esp+0h] [ebp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_DWORD *)retaddr)();
}
