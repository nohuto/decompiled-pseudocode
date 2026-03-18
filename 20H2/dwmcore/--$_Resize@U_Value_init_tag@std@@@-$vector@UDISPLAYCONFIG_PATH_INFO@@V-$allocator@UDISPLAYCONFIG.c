/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801A32CC
 * Callers:
 *     CalculateDisplayBlankTime @ 0x1801A38F8 (CalculateDisplayBlankTime.c)
 * Callees:
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801A3484 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDI.c)
 */

__int64 __fastcall std::vector<DISPLAYCONFIG_PATH_INFO>::_Resize<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  char *v2; // rsi
  __int64 v3; // r10
  __int64 result; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rbx

  v2 = (char *)a1[1];
  v3 = *a1;
  result = (unsigned __int64)((unsigned __int128)((__int64)&v2[-*a1] * (__int128)0xE38E38E38E38E39LL) >> 64) >> 63;
  v6 = (__int64)&v2[-*a1] / 72;
  if ( a2 >= v6 )
  {
    if ( a2 > v6 )
    {
      v7 = a1[2] - v3;
      result = (unsigned __int64)((unsigned __int128)(v7 * (__int128)0xE38E38E38E38E39LL) >> 64) >> 63;
      if ( a2 <= v7 / 72 )
      {
        v8 = a2 - v6;
        if ( a2 != v6 )
        {
          v9 = 72 * v8;
          result = (__int64)memset_0(v2, 0, 72 * v8);
          v2 += v9;
        }
        a1[1] = (__int64)v2;
      }
      else
      {
        return std::vector<DISPLAYCONFIG_PATH_INFO>::_Resize_reallocate<std::_Value_init_tag>(a1, a2);
      }
    }
  }
  else
  {
    result = 9 * a2;
    a1[1] = v3 + 72 * a2;
  }
  return result;
}
