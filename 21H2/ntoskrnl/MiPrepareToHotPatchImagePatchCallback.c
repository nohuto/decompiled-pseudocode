/*
 * XREFs of MiPrepareToHotPatchImagePatchCallback @ 0x1408CDC60
 * Callers:
 *     RtlEnumerateHotPatchPatches @ 0x14091AFF8 (RtlEnumerateHotPatchPatches.c)
 * Callees:
 *     RtlClearBits @ 0x1402AB730 (RtlClearBits.c)
 *     RtlDetermineHotPatchExtent @ 0x14091AF4C (RtlDetermineHotPatchExtent.c)
 */

char __fastcall MiPrepareToHotPatchImagePatchCallback(
        _DWORD *a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  __int64 v5; // rdx
  ULONG StartingIndex; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+20h] BYREF

  StartingIndex = 0;
  v8 = 0;
  if ( a1[2] == a4 )
  {
    v5 = *a2;
    goto LABEL_5;
  }
  if ( (a3 & 0xFC000) == 0x5C000 )
  {
    v5 = a2[1];
LABEL_5:
    RtlDetermineHotPatchExtent(a3, v5, &StartingIndex, &v8);
    RtlClearBits(*(PRTL_BITMAP *)(*(_QWORD *)a1 + 48LL), StartingIndex, v8 - StartingIndex + 1);
  }
  return 0;
}
