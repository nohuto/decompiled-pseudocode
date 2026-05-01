/*
 * XREFs of _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::Streams::IRandomAccessStream____Windows::Foundation::IAsyncOperation_Windows::Storage::Streams::IRandomAccessStream______::_2_::FTMEventDelegate::Invoke @ 0x1801F8C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::Streams::IRandomAccessStream____Windows::Foundation::IAsyncOperation_Windows::Storage::Streams::IRandomAccessStream______::_2_::FTMEventDelegate::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)(a1 + 48) = a3;
  SetEvent(*(HANDLE *)(a1 + 56));
  return 0LL;
}
