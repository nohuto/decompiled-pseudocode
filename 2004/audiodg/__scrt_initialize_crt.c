/*
 * XREFs of __scrt_initialize_crt @ 0x14001D0A0
 * Callers:
 *     __scrt_common_main_seh @ 0x14001CAB0 (__scrt_common_main_seh.c)
 * Callees:
 *     __scrt_stub_for_acrt_uninitialize @ 0x14001D4B4 (__scrt_stub_for_acrt_uninitialize.c)
 *     __isa_available_init @ 0x14001D804 (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al

  v1 = byte_140084D11;
  if ( !a1 )
    v1 = 1;
  byte_140084D11 = v1;
  _isa_available_init();
  if ( !(unsigned __int8)((__int64 (*)(void))_scrt_stub_for_acrt_uninitialize)() )
    return 0;
  if ( !(unsigned __int8)((__int64 (*)(void))_scrt_stub_for_acrt_uninitialize)() )
  {
    _scrt_stub_for_acrt_uninitialize(0LL);
    return 0;
  }
  return 1;
}
