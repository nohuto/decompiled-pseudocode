/*
 * XREFs of WINRT_WaitForSingleObject @ 0x18008DCC6
 * Callers:
 *     ??$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@I@Z @ 0x18003E20C (--$wait_for_completed@U-$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800C8370 (--$wait_for_completed@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@F.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800D4A74 (--$wait_for_completed@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@w.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800D4B60 (--$wait_for_completed@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Win.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall WINRT_WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds)
{
  return WaitForSingleObject(hHandle, dwMilliseconds);
}
