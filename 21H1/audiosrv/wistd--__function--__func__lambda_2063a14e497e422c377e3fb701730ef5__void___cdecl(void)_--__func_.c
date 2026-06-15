/*
 * XREFs of wistd::__function::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl(void)_::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl(void)_ @ 0x1800734F0
 * Callers:
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x1800742B4 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     wistd::__function::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl(void)_::__move @ 0x180074860 (wistd--__function--__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl(void)_--__move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl_void__::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl_void__(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = &off_18014C2D0;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  a1[2] = a2[1];
  return a1;
}
