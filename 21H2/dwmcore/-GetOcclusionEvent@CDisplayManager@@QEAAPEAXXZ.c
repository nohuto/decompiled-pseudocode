/*
 * XREFs of ?GetOcclusionEvent@CDisplayManager@@QEAAPEAXXZ @ 0x18007A4A0
 * Callers:
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007A258 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void *__fastcall CDisplayManager::GetOcclusionEvent(CDisplayManager *this)
{
  void *result; // rax
  char *EventW; // rbx
  void *RemoteSessionOcclusionEvent; // rax
  char *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (char *)this;
  result = (void *)qword_1803D7620;
  if ( (unsigned __int64)(qword_1803D7620 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( qword_1803D7618 )
    {
      if ( byte_1803D762D )
      {
        RemoteSessionOcclusionEvent = (void *)DwmGetRemoteSessionOcclusionEvent();
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          (void **)&qword_1803D7620,
          RemoteSessionOcclusionEvent);
      }
      else
      {
        EventW = (char *)CreateEventW(0LL, 0, 0, 0LL);
        v4 = EventW;
        if ( (unsigned __int64)(EventW - 1) <= 0xFFFFFFFFFFFFFFFDuLL
          && (*(int (__fastcall **)(CDisplayManager *, char *, int *))(*(_QWORD *)qword_1803D7618 + 176LL))(
               qword_1803D7618,
               EventW,
               &dword_1803D7628) >= 0 )
        {
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            (void **)&qword_1803D7620,
            EventW);
          v4 = 0LL;
        }
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v4);
      }
      return (void *)qword_1803D7620;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
