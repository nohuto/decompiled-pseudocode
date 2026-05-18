/*
 * XREFs of ?dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x18012426C
 * Callers:
 *     DllEntryPoint @ 0x1801243A0 (DllEntryPoint.c)
 * Callees:
 *     DllMain @ 0x18000F074 (DllMain.c)
 *     __scrt_dllmain_exception_filter @ 0x180123B4C (__scrt_dllmain_exception_filter.c)
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x180124080 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall dllmain_dispatch(HINSTANCE a1, DWORD a2, void *const a3)
{
  unsigned int v7; // ebx
  BOOL v8; // eax

  if ( !a2 && dword_180222024 <= 0 )
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
