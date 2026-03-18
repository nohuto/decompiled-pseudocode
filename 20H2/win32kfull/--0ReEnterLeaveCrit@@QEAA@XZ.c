/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003E8B4
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C003BF28 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     EditionParseDesktop @ 0x1C003E170 (EditionParseDesktop.c)
 *     UnmapDesktop @ 0x1C003E390 (UnmapDesktop.c)
 *     MapDesktop @ 0x1C003E670 (MapDesktop.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00C0A48 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     UserJobCallout @ 0x1C010AAA0 (UserJobCallout.c)
 *     DestroyWindowStation @ 0x1C010B990 (DestroyWindowStation.c)
 *     UserDetachQueueFromInputWindow @ 0x1C010D5F8 (UserDetachQueueFromInputWindow.c)
 *     FreeWindowStation @ 0x1C011A510 (FreeWindowStation.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x1C0121E30 (EditionIsUsermodeRIMAccessAllowed.c)
 *     FreeDesktop @ 0x1C0122540 (FreeDesktop.c)
 *     xxxProcessHidInput @ 0x1C01D5950 (xxxProcessHidInput.c)
 *     UserBeep @ 0x1C0219828 (UserBeep.c)
 *     UserRedrawDesktop @ 0x1C023E0A8 (UserRedrawDesktop.c)
 *     UserKillTimer @ 0x1C0247C64 (UserKillTimer.c)
 *     UserSetTimer @ 0x1C0247CBC (UserSetTimer.c)
 * Callees:
 *     <none>
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  *(_DWORD *)this = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
    EnterCrit(0LL, 1LL);
  return this;
}
