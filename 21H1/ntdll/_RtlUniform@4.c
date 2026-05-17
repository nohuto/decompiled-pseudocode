/*
 * XREFs of _RtlUniform@4 @ 0x4B369FC0
 * Callers:
 *     _RtlpGetModifiedProcessCookie@0 @ 0x4B36D769 (_RtlpGetModifiedProcessCookie@0.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlUniform(PULONG Seed)
{
  unsigned __int64 v1; // kr08_8
  int v2; // edi
  ULONG result; // eax

  v1 = 2147483629LL * *Seed + 2147483587;
  v2 = (v1 & 0x7FFFFFFF) + ((v1 >> 31) & 0x7FFFFFFF) + (HIDWORD(v1) >> 30);
  result = (unsigned int)(((v1 & 0x7FFFFFFF) + ((v1 >> 31) & 0x7FFFFFFF) + (HIDWORD(v1) >> 30)) >> 31)
         + (v2 & 0x7FFFFFFF) != 0x7FFFFFFF
         ? (((v1 & 0x7FFFFFFF) + ((v1 >> 31) & 0x7FFFFFFF) + (HIDWORD(v1) >> 30)) >> 31) + (v2 & 0x7FFFFFFF)
         : 0;
  *Seed = result;
  return result;
}
