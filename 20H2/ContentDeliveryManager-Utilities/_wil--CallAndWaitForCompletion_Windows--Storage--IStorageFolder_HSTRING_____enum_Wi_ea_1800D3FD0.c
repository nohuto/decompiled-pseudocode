/*
 * XREFs of _wil::CallAndWaitForCompletion_Windows::Storage::IStorageFolder_HSTRING_____enum_Windows::Storage::CreationCollisionOption_Windows::Foundation::IAsyncOperation_Windows::Storage::StorageFolder________HSTRING_____enum_Windows::Storage::CreationCollisionOption__::_1_::dtor$2 @ 0x1800D3FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180007250 (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall wil::CallAndWaitForCompletion_Windows::Storage::IStorageFolder_HSTRING_____enum_Windows::Storage::CreationCollisionOption_Windows::Foundation::IAsyncOperation_Windows::Storage::StorageFolder________HSTRING_____enum_Windows::Storage::CreationCollisionOption__::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>(*(__int64 **)(a2 + 64));
  }
}
