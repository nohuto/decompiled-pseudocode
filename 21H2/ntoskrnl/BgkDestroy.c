/*
 * XREFs of BgkDestroy @ 0x140AAE8BC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A78F0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140B56D04 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x14055161C (BgkpDisableConsole.c)
 *     BgDisplayProgressIndicator @ 0x140AAD188 (BgDisplayProgressIndicator.c)
 *     BgConsoleDestroyInterface @ 0x140AAE968 (BgConsoleDestroyInterface.c)
 *     BgDisplayBackgroundUpdate @ 0x140AAED40 (BgDisplayBackgroundUpdate.c)
 *     BgLibraryDestroy @ 0x140AB0910 (BgLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140C54D48 )
    return 0LL;
  BgkpDisableConsole();
  byte_140C54D49 = 0;
  byte_140C54D48 = 0;
  BgDisplayProgressIndicator(0);
  byte_140C54905 = 0;
  BgDisplayBackgroundUpdate(0LL);
  byte_140C54904 = 0;
  byte_140C54D38 = 0;
  if ( qword_140C54D30 )
  {
    BgConsoleDestroyInterface();
    qword_140C54D30 = 0LL;
  }
  return BgLibraryDestroy();
}
