/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f960233b161913a1e7fccd27b0605a8___::CTaskWrapper__lambda_5f960233b161913a1e7fccd27b0605a8_____lambda_5f960233b161913a1e7fccd27b0605a8___ @ 0x180153E20
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5f960233b161913a1e7fccd27b0605a8___ @ 0x180154EC8 (Windows--Internal--ComTaskPool--QueueTask__lambda_5f960233b161913a1e7fccd27b0605a8___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038890 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f960233b161913a1e7fccd27b0605a8___::CTaskWrapper__lambda_5f960233b161913a1e7fccd27b0605a8_____lambda_5f960233b161913a1e7fccd27b0605a8___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_180477340;
  return a1;
}
