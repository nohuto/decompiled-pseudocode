/*
 * XREFs of _wil::CallAndWaitForCompletion_Windows::Storage::IStorageFile_Windows::Storage::IStorageFolder___HSTRING_____enum_Windows::Storage::NameCollisionOption_Windows::Foundation::IAsyncOperation_Windows::Storage::StorageFile________Windows::Storage::IStorageFolder___HSTRING_____enum_Windows::Storage::NameCollisionOption__::_1_::dtor$2 @ 0x1800D1C73
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180007260 (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall wil::CallAndWaitForCompletion_Windows::Storage::IStorageFile_Windows::Storage::IStorageFolder___HSTRING_____enum_Windows::Storage::NameCollisionOption_Windows::Foundation::IAsyncOperation_Windows::Storage::StorageFile________Windows::Storage::IStorageFolder___HSTRING_____enum_Windows::Storage::NameCollisionOption__::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>(*(__int64 **)(a2 + 80));
  }
}
