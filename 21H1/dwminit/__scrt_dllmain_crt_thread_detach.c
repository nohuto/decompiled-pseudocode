/*
 * XREFs of __scrt_dllmain_crt_thread_detach @ 0x180004F50
 * Callers:
 *     dllmain_crt_dispatch @ 0x180005D60 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x18000629C (__scrt_stub_for_acrt_uninitialize_critical.c)
 */

char _scrt_dllmain_crt_thread_detach()
{
  _scrt_stub_for_acrt_uninitialize_critical();
  _scrt_stub_for_acrt_uninitialize_critical();
  return 1;
}
