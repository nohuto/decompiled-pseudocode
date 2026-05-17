/*
 * XREFs of _RtlGetTokenNamedObjectPath@12 @ 0x4B3464D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 */

int __stdcall RtlGetTokenNamedObjectPath(int a1, char a2, int a3)
{
  return RtlpGetTokenNamedObjectPath(a1, 0, a2 != 0, a3);
}
