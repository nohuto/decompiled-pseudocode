/*
 * XREFs of ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x180124080
 * Callers:
 *     ?dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x18012426C (-dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     sub_180123B0C @ 0x180123B0C (sub_180123B0C.c)
 *     __scrt_dllmain_crt_thread_detach @ 0x180123B34 (__scrt_dllmain_crt_thread_detach.c)
 */

__int64 __fastcall dllmain_crt_dispatch(HINSTANCE a1, int a2, void *const a3)
{
  int v3; // edx
  int v4; // edx
  __int64 result; // rax

  if ( !a2 )
    return dllmain_crt_process_detach(a3 != 0LL);
  v3 = a2 - 1;
  if ( !v3 )
    return dllmain_crt_process_attach(a1, a3);
  v4 = v3 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
      return 1LL;
    LOBYTE(result) = _scrt_dllmain_crt_thread_detach();
  }
  else
  {
    LOBYTE(result) = sub_180123B0C();
  }
  return (unsigned __int8)result;
}
