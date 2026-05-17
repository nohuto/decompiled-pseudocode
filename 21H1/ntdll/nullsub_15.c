/*
 * XREFs of nullsub_15 @ 0x4B29A978
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int nullsub_15()
{
  _BYTE retaddr[8]; // [esp+0h] [ebp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_DWORD *)retaddr)();
}
