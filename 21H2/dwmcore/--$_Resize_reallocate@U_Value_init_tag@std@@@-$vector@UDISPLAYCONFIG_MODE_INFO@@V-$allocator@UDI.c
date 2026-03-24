/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801A3D5C
 * Callers:
 *     CalculateDisplayBlankTime @ 0x1801A42C8 (CalculateDisplayBlankTime.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     memmove_0 @ 0x1800F47E7 (memmove_0.c)
 */

__int64 __fastcall std::vector<DISPLAYCONFIG_MODE_INFO>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  SIZE_T v9; // rcx
  char *v10; // rbp
  unsigned __int64 v11; // r8
  char *v12; // rsi

  if ( a2 > 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v4 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v5 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 6;
  v6 = v4 >> 6;
  v7 = v5 >> 1;
  if ( v5 <= 0x3FFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v8 = v7 + v5;
    if ( v7 + v5 < a2 )
      v8 = a2;
  }
  else
  {
    v8 = a2;
  }
  v9 = v8 << 6;
  if ( v8 > 0x3FFFFFFFFFFFFFFLL )
    v9 = -1LL;
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
  v11 = a2 - v6;
  v12 = &v10[64 * v6];
  if ( v11 )
    memset_0(v12, 0, v11 << 6);
  memmove_0(v10, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<DISPLAYCONFIG_MODE_INFO>::_Change_array(a1, v10, a2, v8);
}
