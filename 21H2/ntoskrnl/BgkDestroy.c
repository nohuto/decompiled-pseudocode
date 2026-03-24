/*
 * XREFs of BgkDestroy @ 0x1409F4B08
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039BB40 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A96F04 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x1404FF9AC (BgkpDisableConsole.c)
 *     BgConsoleDestroyInterface @ 0x1409F3F5C (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x1409F4334 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x1409F4748 (BgDisplayBackgroundUpdate.c)
 *     BgLibraryDestroy @ 0x1409F65E0 (BgLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140C50B99 )
    return 0LL;
  BgkpDisableConsole();
  byte_140C50BAC = 0;
  byte_140C50B99 = 0;
  BgDisplayProgressIndicator(0);
  byte_140C50745 = 0;
  BgDisplayBackgroundUpdate(0);
  byte_140C50744 = 0;
  byte_140C50B98 = 0;
  if ( qword_140C50B80 )
  {
    BgConsoleDestroyInterface((__int64 (__fastcall **)())qword_140C50B80);
    qword_140C50B80 = 0LL;
  }
  return BgLibraryDestroy();
}
