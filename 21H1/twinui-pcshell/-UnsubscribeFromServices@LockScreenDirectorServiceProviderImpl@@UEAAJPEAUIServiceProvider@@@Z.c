/*
 * XREFs of ?UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801F6590
 * Callers:
 *     <none>
 * Callees:
 *     ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x1801F6458 (-StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ.c)
 */

__int64 __fastcall LockScreenDirectorServiceProviderImpl::UnsubscribeFromServices(
        RTL_SRWLOCK *this,
        struct IServiceProvider *a2)
{
  LockScreenDirectorServiceProviderImpl::StopDirectorThread(this - 6);
  return 0LL;
}
