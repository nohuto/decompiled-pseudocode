/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_745aa0a15c871b15a946ed0c85a37995___ @ 0x18009235C
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18012DFA0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_641d66d2a7a585ac9420848066eba6a6___ @ 0x180092214 (Windows--Internal--ComTaskPool--QueueTask__lambda_641d66d2a7a585ac9420848066eba6a6___.c)
 *     _lambda_641d66d2a7a585ac9420848066eba6a6_::__lambda_641d66d2a7a585ac9420848066eba6a6_ @ 0x180092788 (_lambda_641d66d2a7a585ac9420848066eba6a6_--__lambda_641d66d2a7a585ac9420848066eba6a6_.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_745aa0a15c871b15a946ed0c85a37995___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  PVOID Ptr; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
  v10 = 0LL;
  if ( &v10 != a2 )
  {
    v7 = *a2;
    *a2 = 0LL;
    v10 = v7;
  }
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_641d66d2a7a585ac9420848066eba6a6___(
         v6,
         v5,
         (unsigned int)v2[15].Ptr,
         &Ptr);
  lambda_641d66d2a7a585ac9420848066eba6a6_::__lambda_641d66d2a7a585ac9420848066eba6a6_(&Ptr);
  return v8;
}
