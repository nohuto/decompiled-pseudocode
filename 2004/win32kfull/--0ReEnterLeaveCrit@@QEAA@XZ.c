/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0026584
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C0025B44 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     EditionParseDesktop @ 0x1C0025E40 (EditionParseDesktop.c)
 *     UnmapDesktop @ 0x1C0026060 (UnmapDesktop.c)
 *     MapDesktop @ 0x1C0026340 (MapDesktop.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C003B570 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     FreeWindowStation @ 0x1C00568C0 (FreeWindowStation.c)
 *     UserJobCallout @ 0x1C0109910 (UserJobCallout.c)
 *     DestroyWindowStation @ 0x1C010A300 (DestroyWindowStation.c)
 *     UserDetachQueueFromInputWindow @ 0x1C010BA78 (UserDetachQueueFromInputWindow.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x1C0120B50 (EditionIsUsermodeRIMAccessAllowed.c)
 *     FreeDesktop @ 0x1C01215D0 (FreeDesktop.c)
 *     xxxProcessHidInput @ 0x1C01D6610 (xxxProcessHidInput.c)
 *     UserBeep @ 0x1C021A6B8 (UserBeep.c)
 *     UserRedrawDesktop @ 0x1C023F348 (UserRedrawDesktop.c)
 *     UserKillTimer @ 0x1C0249214 (UserKillTimer.c)
 *     UserSetTimer @ 0x1C024926C (UserSetTimer.c)
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
