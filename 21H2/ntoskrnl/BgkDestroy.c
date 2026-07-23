/*
 * XREFs of BgkDestroy @ 0x1409F5B08
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039BC90 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A97F04 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x1404FF92C (BgkpDisableConsole.c)
 *     BgConsoleDestroyInterface @ 0x1409F4F5C (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x1409F5334 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x1409F5748 (BgDisplayBackgroundUpdate.c)
 *     BgLibraryDestroy @ 0x1409F75E0 (BgLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140C50BE8 )
    return 0LL;
  BgkpDisableConsole();
  byte_140C50BE9 = 0;
  byte_140C50BE8 = 0;
  BgDisplayProgressIndicator(0);
  byte_140C50785 = 0;
  BgDisplayBackgroundUpdate(0);
  byte_140C50784 = 0;
  byte_140C50BDC = 0;
  if ( qword_140C50BC0 )
  {
    BgConsoleDestroyInterface((__int64 (__fastcall **)())qword_140C50BC0);
    qword_140C50BC0 = 0LL;
  }
  return BgLibraryDestroy();
}
