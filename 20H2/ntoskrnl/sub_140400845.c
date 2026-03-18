/*
 * XREFs of sub_140400845 @ 0x140400845
 * Callers:
 *     sub_14040084E @ 0x14040084E (sub_14040084E.c)
 * Callees:
 *     sub_14040083C @ 0x14040083C (sub_14040083C.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 sub_140400845()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  sub_14040083C();
  return sub_14040084E(v1, v0);
}
