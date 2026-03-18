/*
 * XREFs of _GetgpPublicObjectList@4 @ 0xA9908
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall GetgpPublicObjectList(_DWORD *a1)
{
  int result; // eax

  result = gpPublicObjectList;
  *a1 = gpPublicObjectList;
  return result;
}
