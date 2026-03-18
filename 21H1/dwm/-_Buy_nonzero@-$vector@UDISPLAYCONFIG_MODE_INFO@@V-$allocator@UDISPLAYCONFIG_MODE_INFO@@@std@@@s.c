/*
 * XREFs of ?_Buy_nonzero@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x140009714
 * Callers:
 *     ??0?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@1@@Z @ 0x1400086A4 (--0-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_K.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400083F4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<DISPLAYCONFIG_MODE_INFO>::_Buy_nonzero(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  _QWORD *v4; // rax
  char *result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v3 = a2 << 6;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(a2 << 6);
  *a1 = v4;
  a1[1] = v4;
  result = (char *)v4 + v3;
  a1[2] = result;
  return result;
}
