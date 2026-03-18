/*
 * XREFs of ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E
 * Callers:
 *     _MapDesktop@4 @ 0x6FA98 (_MapDesktop@4.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z @ 0x7B9CE (-UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z.c)
 *     _FreeDesktop@4 @ 0x821E8 (_FreeDesktop@4.c)
 *     _UnmapDesktop@4 @ 0x82292 (_UnmapDesktop@4.c)
 *     _UserJobCallout@4 @ 0x9D26C (_UserJobCallout@4.c)
 *     _DestroyWindowStation@4 @ 0xA39DE (_DestroyWindowStation@4.c)
 *     _UserDetachQueueFromInputWindow@8 @ 0xA9A54 (_UserDetachQueueFromInputWindow@8.c)
 *     _FreeWindowStation@4 @ 0xAC9DA (_FreeWindowStation@4.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YGJPAUHWND__@@PAVIInputQueue@@PAPAUtagWND@@@Z @ 0xB37AA (-ValidateAndAttachQueueToInputWindow@@YGJPAUHWND__@@PAVIInputQueue@@PAPAUtagWND@@@Z.c)
 *     _EditionIsUsermodeRIMAccessAllowed@0 @ 0xE917E (_EditionIsUsermodeRIMAccessAllowed@0.c)
 *     _EditionParseDesktop@40 @ 0xF19B0 (_EditionParseDesktop@40.c)
 *     _xxxProcessHidInput@4 @ 0x144ADA (_xxxProcessHidInput@4.c)
 *     _UserBeep@8 @ 0x17DF0D (_UserBeep@8.c)
 *     _UserRedrawDesktop@0 @ 0x19D89E (_UserRedrawDesktop@0.c)
 *     _UserKillTimer@4 @ 0x1A5A1D (_UserKillTimer@4.c)
 *     _UserSetTimer@8 @ 0x1A5A50 (_UserSetTimer@8.c)
 * Callees:
 *     <none>
 */

ReEnterLeaveCrit *__thiscall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(_gpresUser);
  *(_DWORD *)this = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
    EnterCrit(0, 1);
  return this;
}
