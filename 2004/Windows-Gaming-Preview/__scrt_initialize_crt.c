/*
 * XREFs of __scrt_initialize_crt @ 0x18004453C
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180043D98 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     __isa_available_init @ 0x180044F3C (__isa_available_init.c)
 *     sub_180045A68 @ 0x180045A68 (sub_180045A68.c)
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
  if ( !(unsigned __int8)sub_180045A68(v2) )
    return 0;
  if ( !(unsigned __int8)sub_180045A68(v3) )
  {
    sub_180045A68(0LL);
    return 0;
  }
  return 1;
}
