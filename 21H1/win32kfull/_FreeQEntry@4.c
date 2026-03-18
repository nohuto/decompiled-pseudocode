/*
 * XREFs of _FreeQEntry@4 @ 0xAB19C
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     _FreePointerMessageParams@4 @ 0x15A014 (_FreePointerMessageParams@4.c)
 */

int __thiscall FreeQEntry(int this)
{
  if ( (*(_BYTE *)(this + 64) & 8) != 0 && !*(_DWORD *)(this + 60) && IsPointerInputMessage(*(_DWORD *)(this + 12)) )
    FreePointerMessageParams(this);
  return Win32FreeToPagedLookasideList(_QEntryLookaside, this);
}
