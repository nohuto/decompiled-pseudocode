/*
 * XREFs of ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x180091EB0
 * Callers:
 *     ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x180090970 (--$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPR.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 */

_QWORD *__fastcall std::vector<unsigned short>::vector<unsigned short>(_QWORD *a1, unsigned __int64 a2)
{
  size_t v3; // rdi
  _QWORD *v4; // rax
  char *v5; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v3 = 2 * a2;
    v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(2 * a2);
    *a1 = v4;
    v5 = (char *)v4 + v3;
    a1[2] = (char *)v4 + v3;
    memset_0(v4, 0, v3);
    a1[1] = v5;
  }
  return a1;
}
