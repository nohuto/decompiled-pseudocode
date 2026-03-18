/*
 * XREFs of _xxxSetCapture@4 @ 0x18772B
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxDCETrackCaptionButton@8 @ 0x151F8A (_xxxDCETrackCaptionButton@8.c)
 *     _NtUserSetCapture@4 @ 0x168AFA (_NtUserSetCapture@4.c)
 *     _xxxTrackCaptionButton@8 @ 0x1A558D (_xxxTrackCaptionButton@8.c)
 *     _xxxDragObject@20 @ 0x1A6347 (_xxxDragObject@20.c)
 *     _xxxIsDragging@16 @ 0x1A68B7 (_xxxIsDragging@16.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 */

unsigned int *__thiscall xxxSetCapture(_DWORD *this)
{
  int v1; // esi
  unsigned int *v2; // esi
  unsigned int v3; // edi

  v1 = *(_DWORD *)(_gptiCurrent + 236);
  if ( (*(_DWORD *)(v1 + 284) & 0x100000) == 0
    && (!this || *(_DWORD *)(this[2] + 236) == v1)
    && ((v2 = *(unsigned int **)(v1 + 56)) != 0 ? (v3 = *v2) : (v3 = 0),
        (xxxCapture(_gptiCurrent, (int)this, 2), v3) && HMValidateHandleNoSecure(v3, 1)) )
  {
    return v2;
  }
  else
  {
    return 0;
  }
}
