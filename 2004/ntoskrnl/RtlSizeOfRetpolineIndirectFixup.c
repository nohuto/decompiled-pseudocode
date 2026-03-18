/*
 * XREFs of RtlSizeOfRetpolineIndirectFixup @ 0x14058AE48
 * Callers:
 *     RtlCreateRetpolineRelocationInformation @ 0x14032958C (RtlCreateRetpolineRelocationInformation.c)
 *     RtlpConstructIndirectRelocationFixup @ 0x14058AE6C (RtlpConstructIndirectRelocationFixup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSizeOfRetpolineIndirectFixup(unsigned __int16 *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( (v1 & 0x4000) != 0 )
    return (v1 | 0xC000u) >> 13;
  else
    return 5LL;
}
