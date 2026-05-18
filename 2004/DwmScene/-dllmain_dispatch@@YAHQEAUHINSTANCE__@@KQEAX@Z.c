/*
 * XREFs of ?dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x18011E99C
 * Callers:
 *     DllEntryPoint @ 0x18011EAD0 (DllEntryPoint.c)
 * Callees:
 *     DllMain @ 0x18000EF94 (DllMain.c)
 *     __scrt_dllmain_exception_filter @ 0x18011E27C (__scrt_dllmain_exception_filter.c)
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x18011E7B0 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall dllmain_dispatch(HINSTANCE a1, DWORD a2, void *const a3)
{
  unsigned int v7; // ebx
  BOOL v8; // eax

  if ( !a2 && dword_18021ACF4 <= 0 )
    return 0LL;
  if ( a2 - 1 > 1 || (v7 = dllmain_crt_dispatch(a1, a2, a3)) != 0 )
  {
    v8 = DllMain(a1, a2, a3);
    v7 = v8;
    if ( a2 == 1 && !v8 )
    {
      DllMain(a1, 0, a3);
      dllmain_crt_dispatch(a1, 0, a3);
    }
    if ( !a2 || a2 == 3 )
      return (unsigned int)dllmain_crt_dispatch(a1, a2, a3) != 0;
  }
  return v7;
}
