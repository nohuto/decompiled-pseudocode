/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@MH@std@@@?$vector@U?$pair@MH@std@@V?$allocator@U?$pair@MH@std@@@2@@std@@QEAAPEAU?$pair@MH@1@QEAU21@$$QEAU21@@Z @ 0x18044FBDC
 * Callers:
 *     ?GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@Z @ 0x1804505B8 (-GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV-$ComPtr@UILampArray@Lights@Device.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180043338 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@AEAAXQEAUtagPOINT@@_K1@Z @ 0x1801A34D8 (-_Change_array@-$vector@UtagPOINT@@V-$allocator@UtagPOINT@@@std@@@std@@AEAAXQEAUtagPOINT@@_K1@Z.c)
 *     ??$_Uninitialized_move@PEAU?$pair@MH@std@@PEAU12@V?$allocator@U?$pair@MH@std@@@2@@std@@YAPEAU?$pair@MH@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@MH@std@@@0@@Z @ 0x180450470 (--$_Uninitialized_move@PEAU-$pair@MH@std@@PEAU12@V-$allocator@U-$pair@MH@std@@@2@@std@@YAPEAU-$p.c)
 */

__int64 __fastcall std::vector<std::pair<float,int>>::_Emplace_reallocate<std::pair<float,int>>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r11
  __int64 v18; // r11
  __int64 result; // rax
  void *v20; // [rsp+58h] [rbp+10h]

  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v20 = v13;
  try
  {
    v13[v6] = *a3;
    v14 = a1[1];
    v15 = v13;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<std::pair<float,int> *,std::pair<float,int> *,std::allocator<std::pair<float,int>>>(
        v16,
        a2,
        v13);
      v15 = (_QWORD *)(v17 + 8 * (v6 + 1));
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<std::pair<float,int> *,std::pair<float,int> *,std::allocator<std::pair<float,int>>>(
      v16,
      v14,
      v15);
    std::vector<tagPOINT>::_Change_array((__int64)a1, v18, v8, v11);
    result = *a1 + 8 * v6;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  return result;
}
