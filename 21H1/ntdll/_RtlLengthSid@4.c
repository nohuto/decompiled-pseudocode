/*
 * XREFs of _RtlLengthSid@4 @ 0x4B2E48A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlLengthSid(int a1)
{
  return 4 * *(unsigned __int8 *)(a1 + 1) + 8;
}
