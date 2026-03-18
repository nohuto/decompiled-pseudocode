/*
 * XREFs of RtlDetermineHotPatchExtent @ 0x1409179DC
 * Callers:
 *     MiLockHotPatchPages @ 0x1408C7B84 (MiLockHotPatchPages.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1408CA500 (MiPrepareToHotPatchImagePatchCallback.c)
 *     RtlValidateHotPatchBase @ 0x140917DD4 (RtlValidateHotPatchBase.c)
 * Callees:
 *     RtlpDetermineHotPatchExtent @ 0x140917F0C (RtlpDetermineHotPatchExtent.c)
 */

char __fastcall RtlDetermineHotPatchExtent(__int64 a1)
{
  unsigned int *v1; // r9
  unsigned int v2; // r10d
  unsigned int *v3; // r11
  unsigned int v4; // ecx
  char result; // al
  int v6; // [rsp+20h] [rbp-18h] BYREF
  int v7[5]; // [rsp+24h] [rbp-14h] BYREF

  v7[0] = 0;
  v6 = 0;
  if ( !(unsigned __int8)RtlpDetermineHotPatchExtent(a1, &v6, v7) || v6 < 0 && -v6 > v2 )
    return 0;
  v4 = v2 + v7[0] - 1;
  *v3 = (v6 + v2) >> 12;
  result = 1;
  *v1 = v4 >> 12;
  return result;
}
