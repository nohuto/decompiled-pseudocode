/*
 * XREFs of __scrt_uninitialize_crt @ 0x180044710
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x180043EB4 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     sub_180045A68 @ 0x180045A68 (sub_180045A68.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  if ( !byte_18005AA81 || !a2 )
  {
    sub_180045A68(a1);
    LOBYTE(v3) = v2;
    sub_180045A68(v3);
  }
  return 1;
}
