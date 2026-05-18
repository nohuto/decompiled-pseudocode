/*
 * XREFs of __scrt_dllmain_exception_filter @ 0x180123B4C
 * Callers:
 *     ?dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x18012426C (-dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x180124B2C (-__uncaught_exception@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _scrt_dllmain_exception_filter(
        __int64 a1,
        int a2,
        __int64 a3,
        void (__fastcall *a4)(__int64, _QWORD, __int64),
        int a5,
        __int64 a6)
{
  int v10; // eax

  LOBYTE(v10) = __uncaught_exception();
  if ( !v10 && a2 == 1 )
    a4(a1, 0LL, a3);
  return o__seh_filter_dll();
}
