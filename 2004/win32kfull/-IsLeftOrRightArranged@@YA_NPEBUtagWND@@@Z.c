/*
 * XREFs of ?IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z @ 0x1C020C1F8
 * Callers:
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C020C25C (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     UpdateSizeTrackingInfo @ 0x1C0211B48 (UpdateSizeTrackingInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsLeftOrRightArranged(const struct tagWND *a1)
{
  char v1; // cl

  v1 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3;
  return v1 && v1 != 3;
}
