/*
 * XREFs of ?UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z @ 0x180218DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x180218CA8 (-StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ.c)
 */

__int64 __fastcall LockScreenDirectorServiceProviderImpl::UnsubscribeFromServices(
        RTL_SRWLOCK *this,
        struct IServiceProvider *a2)
{
  LockScreenDirectorServiceProviderImpl::StopDirectorThread(this - 6);
  return 0LL;
}
