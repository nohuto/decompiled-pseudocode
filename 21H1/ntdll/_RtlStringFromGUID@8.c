/*
 * XREFs of _RtlStringFromGUID@8 @ 0x4B2ED160
 * Callers:
 *     <none>
 * Callees:
 *     _RtlStringFromGUIDEx@12 @ 0x4B2ED180 (_RtlStringFromGUIDEx@12.c)
 */

int __stdcall RtlStringFromGUID(int a1, int a2)
{
  return RtlStringFromGUIDEx(a1, a2, 1);
}
