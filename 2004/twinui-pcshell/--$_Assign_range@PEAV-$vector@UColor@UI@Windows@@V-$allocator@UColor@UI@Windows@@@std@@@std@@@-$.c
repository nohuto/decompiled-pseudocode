/*
 * XREFs of ??$_Assign_range@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180450F00
 * Callers:
 *     ?HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z @ 0x180451800 (-HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z.c)
 * Callees:
 *     ??$_Copy_unchecked@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@PEAV12@@std@@YAPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@PEAV10@00@Z @ 0x18045103C (--$_Copy_unchecked@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@P.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@0AEAV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@0@@Z @ 0x18045115C (--$_Destroy_range@V-$allocator@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180451278 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x180451A18 (-_Clear_and_reserve_geometric@-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<std::vector<Windows::UI::Color>>::_Assign_range<std::vector<Windows::UI::Color> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // r10
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 result; // rax

  v6 = (a3 - a2) / 24;
  v7 = *a1;
  v8 = (a1[1] - *a1) / 24;
  if ( v6 <= v8 )
  {
    v10 = v7 + 24 * v6;
    std::_Copy_unchecked<std::vector<Windows::UI::Color> *,std::vector<Windows::UI::Color> *>(a2, a3);
    v11 = a1[1];
  }
  else
  {
    if ( v6 > (a1[2] - v7) / 24 )
    {
      std::vector<std::vector<Windows::UI::Color>>::_Clear_and_reserve_geometric(a1, v6);
      v8 = 0LL;
    }
    v9 = a2 + 24 * v8;
    std::_Copy_unchecked<std::vector<Windows::UI::Color> *,std::vector<Windows::UI::Color> *>(a2, v9);
    v10 = a1[1];
    while ( v9 != a3 )
    {
      std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(v10, v9);
      v10 += 24LL;
      v9 += 24LL;
    }
    v11 = v10;
  }
  result = std::_Destroy_range<std::allocator<std::vector<Windows::UI::Color>>>(v10, v11);
  a1[1] = v10;
  return result;
}
