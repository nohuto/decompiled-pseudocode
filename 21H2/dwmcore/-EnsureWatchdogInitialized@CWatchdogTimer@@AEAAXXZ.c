/*
 * XREFs of ?EnsureWatchdogInitialized@CWatchdogTimer@@AEAAXXZ @ 0x18007AB14
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007AFD4 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CWatchdogTimer::EnsureWatchdogInitialized(CWatchdogTimer *this)
{
  HANDLE Thread; // rax
  void **v3; // rbx
  signed int LastError; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  void *v6; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 26) )
  {
    *((_BYTE *)this + 26) = 1;
    Thread = CreateThread(0LL, 0LL, CWatchdogTimer::ThreadEntryPoint, this, 4u, 0LL);
    v3 = (void **)((char *)this + 8);
    v6 = Thread;
    if ( v3 != &v6 )
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        v3,
        Thread);
      v6 = 0LL;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v6);
    if ( !SetThreadPriority(*v3, 15) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
    }
    ResumeThread(*v3);
  }
}
