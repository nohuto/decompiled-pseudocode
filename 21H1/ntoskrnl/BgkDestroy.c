/*
 * XREFs of BgkDestroy @ 0x1409F1B08
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398620 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A94C8C (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x1404F9F2C (BgkpDisableConsole.c)
 *     BgConsoleDestroyInterface @ 0x1409F0F5C (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x1409F1334 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x1409F1748 (BgDisplayBackgroundUpdate.c)
 *     BgLibraryDestroy @ 0x1409F35E0 (BgLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140C50AD0 )
    return 0LL;
  BgkpDisableConsole();
  byte_140C50AD1 = 0;
  byte_140C50AD0 = 0;
  BgDisplayProgressIndicator(0);
  byte_140C50681 = 0;
  BgDisplayBackgroundUpdate(0);
  byte_140C50680 = 0;
  byte_140C50AC0 = 0;
  if ( qword_140C50AB8 )
  {
    BgConsoleDestroyInterface((__int64 (__fastcall **)())qword_140C50AB8);
    qword_140C50AB8 = 0LL;
  }
  return BgLibraryDestroy();
}
