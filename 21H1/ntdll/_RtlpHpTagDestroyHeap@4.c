/*
 * XREFs of _RtlpHpTagDestroyHeap@4 @ 0x4B37013C
 * Callers:
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 * Callees:
 *     _RtlpWalkHeapInternal@12 @ 0x4B35A1E8 (_RtlpWalkHeapInternal@12.c)
 *     _RtlpHpTaggableHeap@4 @ 0x4B37072D (_RtlpHpTaggableHeap@4.c)
 */

void __thiscall RtlpHpTagDestroyHeap(void *this)
{
  _DWORD v2[7]; // [esp+Ch] [ebp-1Ch] BYREF

  if ( (RtlpHpHeapFeatures & 2) != 0 && RtlpHpTaggableHeap() )
  {
    memset(v2, 0, sizeof(v2));
    while ( RtlpWalkHeapInternal((int)this, (int)v2, 1) >= 0 )
    {
      if ( (BYTE2(v2[2]) & 0x11) == 0x11 )
      {
        if ( LOWORD(v2[4]) )
          _InterlockedExchangeAdd(
            (volatile signed __int32 *)(*(_DWORD *)(dword_4B3A46B0 + 4 * LOWORD(v2[4]) - 4) + 24),
            -v2[1]);
      }
    }
  }
}
