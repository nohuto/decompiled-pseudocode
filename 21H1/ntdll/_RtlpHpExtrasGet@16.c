/*
 * XREFs of _RtlpHpExtrasGet@16 @ 0x4B3783B5
 * Callers:
 *     _RtlSetUserValueHeap@16 @ 0x4B2E3990 (_RtlSetUserValueHeap@16.c)
 *     _RtlpHpFreeHeap@20 @ 0x4B3784F8 (_RtlpHpFreeHeap@20.c)
 *     _RtlpHpGetUserInfo@20 @ 0x4B37872D (_RtlpHpGetUserInfo@20.c)
 *     _RtlpHpReAllocateHeap@24 @ 0x4B37955B (_RtlpHpReAllocateHeap@24.c)
 *     _RtlpHpSetUserFlags@20 @ 0x4B379956 (_RtlpHpSetUserFlags@20.c)
 * Callees:
 *     _RtlpHpSizeHeapInternal@16 @ 0x4B379A08 (_RtlpHpSizeHeapInternal@16.c)
 */

unsigned int __fastcall RtlpHpExtrasGet(int a1, int a2, int a3, _DWORD *a4)
{
  int v5; // ecx
  unsigned int result; // eax
  int v7; // eax
  int v8; // [esp+4h] [ebp-4h] BYREF

  v5 = RtlpHpSizeHeapInternal(a3, &v8);
  result = -1;
  if ( v5 != -1 )
  {
    if ( a4 )
      *a4 = v5;
    if ( v8 )
    {
      v7 = v5 + a2;
      if ( (a3 & 0x10000000) != 0 )
        v7 += 8;
      return (v7 + 7) & 0xFFFFFFF8;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
