/*
 * XREFs of HvlInvokeWheaErrorNotificationCallback @ 0x1404EFB10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 HvlInvokeWheaErrorNotificationCallback()
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( HvlpWheaErrorNotificationCallback )
    return ((__int64 (*)(void))HvlpWheaErrorNotificationCallback)();
  return result;
}
