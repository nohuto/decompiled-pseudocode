/*
 * XREFs of BgkDestroy @ 0x1409F7B08
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B270 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A9A074 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x1404FDE0C (BgkpDisableConsole.c)
 *     BgConsoleDestroyInterface @ 0x1409F6F5C (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x1409F7334 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x1409F7748 (BgDisplayBackgroundUpdate.c)
 *     BgLibraryDestroy @ 0x1409F95E0 (BgLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140C50A20 )
    return 0LL;
  BgkpDisableConsole();
  byte_140C50A21 = 0;
  byte_140C50A20 = 0;
  BgDisplayProgressIndicator(0);
  byte_140C505C5 = 0;
  BgDisplayBackgroundUpdate(0);
  byte_140C505C4 = 0;
  byte_140C50A10 = 0;
  if ( qword_140C50A08 )
  {
    BgConsoleDestroyInterface((__int64 (__fastcall **)())qword_140C50A08);
    qword_140C50A08 = 0LL;
  }
  return BgLibraryDestroy();
}
