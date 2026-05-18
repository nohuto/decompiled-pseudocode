/*
 * XREFs of __scrt_release_startup_lock @ 0x180123D84
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x1801240D0 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x1801241E8 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x180124B2C (-__uncaught_exception@@YA_NXZ.c)
 */

char __fastcall _scrt_release_startup_lock(char a1)
{
  int v2; // eax

  LOBYTE(v2) = __uncaught_exception();
  if ( v2 && !a1 )
    _InterlockedExchange64(&qword_180221FE8, 0LL);
  return v2;
}
