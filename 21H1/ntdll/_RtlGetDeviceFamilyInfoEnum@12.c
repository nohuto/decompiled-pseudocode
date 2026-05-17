/*
 * XREFs of _RtlGetDeviceFamilyInfoEnum@12 @ 0x4B2EB970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall RtlGetDeviceFamilyInfoEnum(int a1, int a2, int a3)
{
  return RtlpGetDeviceFamilyInfoEnum(a1, a2, a3);
}
