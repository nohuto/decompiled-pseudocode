/*
 * XREFs of __scrt_initialize_crt @ 0x18004485C
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800440B8 (dllmain_crt_process_attach.c)
 * Callees:
 *     __isa_available_init @ 0x18004525C (__isa_available_init.c)
 *     __scrt_stub_for_acrt_uninitialize_critical @ 0x180045D88 (__scrt_stub_for_acrt_uninitialize_critical.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al
  __int64 v2; // rcx
  __int64 v3; // rcx

  v1 = byte_18005AA81;
  if ( !a1 )
    v1 = 1;
  byte_18005AA81 = v1;
  _isa_available_init();
  if ( !(unsigned __int8)_scrt_stub_for_acrt_uninitialize_critical(v2) )
    return 0;
  if ( !(unsigned __int8)_scrt_stub_for_acrt_uninitialize_critical(v3) )
  {
    _scrt_stub_for_acrt_uninitialize_critical(0LL);
    return 0;
  }
  return 1;
}
