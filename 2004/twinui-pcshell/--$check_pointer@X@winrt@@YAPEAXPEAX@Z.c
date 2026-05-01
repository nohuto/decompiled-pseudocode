/*
 * XREFs of ??$check_pointer@X@winrt@@YAPEAXPEAX@Z @ 0x1801E785C
 * Callers:
 *     ??$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800C6890 (--$wait_for_completed@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@F.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800D3234 (--$wait_for_completed@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@w.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800D3320 (--$wait_for_completed@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Win.c)
 * Callees:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1801EBEF4 (-throw_last_error@winrt@@YAXXZ.c)
 */

__int64 __fastcall winrt::check_pointer<void>(__int64 a1)
{
  if ( !a1 )
    winrt::throw_last_error(0LL);
  return a1;
}
