/*
 * XREFs of xxxSetCapture @ 0x1C0035F20
 * Callers:
 *     NtUserSetCapture @ 0x1C0035A40 (NtUserSetCapture.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BAD98 (xxxDCETrackCaptionButton.c)
 *     xxxTrackCaptionButton @ 0x1C0248A20 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02496A4 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C0249DA8 (xxxIsDragging.c)
 * Callees:
 *     xxxCapture @ 0x1C0035FA8 (xxxCapture.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 */

__int64 *__fastcall xxxSetCapture(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx

  v1 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( (*(_DWORD *)(v1 + 388) & 0x100000) == 0
    && (!a1 || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) == v1)
    && ((v2 = *(__int64 **)(v1 + 104)) != 0LL ? (v3 = *v2) : (v3 = 0LL),
        (xxxCapture(gptiCurrent, a1, 2LL), v3) && (LOBYTE(v4) = 1, HMValidateHandleNoSecure(v3, v4))) )
  {
    return v2;
  }
  else
  {
    return 0LL;
  }
}
