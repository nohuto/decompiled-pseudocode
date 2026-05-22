/*
 * XREFs of ??$make_unique@$$BY0A@G$0A@@std@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@0@_K@Z @ 0x18009E15C
 * Callers:
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x18009E698 (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x18003D2A4 (--_U@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<unsigned short [0],0>(_QWORD *a1, unsigned __int64 a2)
{
  size_t v3; // rsi
  void *v4; // rax
  void *v5; // rbx
  _QWORD *result; // rax

  v3 = saturated_mul(a2, 2uLL);
  v4 = operator new[](v3);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, v3);
  else
    v5 = 0LL;
  result = a1;
  *a1 = v5;
  return result;
}
