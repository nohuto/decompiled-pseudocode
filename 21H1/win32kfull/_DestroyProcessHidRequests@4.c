/*
 * XREFs of _DestroyProcessHidRequests@4 @ 0xD2C06
 * Callers:
 *     <none>
 * Callees:
 *     _FreeProcessHidTable@4 @ 0xD2C18 (_FreeProcessHidTable@4.c)
 */

int __stdcall DestroyProcessHidRequests(int a1)
{
  return FreeProcessHidTable(a1);
}
