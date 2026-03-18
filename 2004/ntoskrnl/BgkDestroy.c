/*
 * XREFs of BgkDestroy @ 0x1409F1B08
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398DB0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A94414 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x1404FA57C (BgkpDisableConsole.c)
 *     BgConsoleDestroyInterface @ 0x1409F0F5C (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x1409F1334 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x1409F1748 (BgDisplayBackgroundUpdate.c)
 *     BgLibraryDestroy @ 0x1409F35E0 (BgLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140C50998 )
    return 0LL;
  BgkpDisableConsole();
  byte_140C50999 = 0;
  byte_140C50998 = 0;
  BgDisplayProgressIndicator(0);
  byte_140C50545 = 0;
  BgDisplayBackgroundUpdate(0);
  byte_140C50544 = 0;
  byte_140C50988 = 0;
  if ( qword_140C50978 )
  {
    BgConsoleDestroyInterface((__int64 (__fastcall **)())qword_140C50978);
    qword_140C50978 = 0LL;
  }
  return BgLibraryDestroy();
}
