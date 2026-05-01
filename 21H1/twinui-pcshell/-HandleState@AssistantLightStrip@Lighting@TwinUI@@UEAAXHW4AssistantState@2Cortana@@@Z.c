/*
 * XREFs of ?HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z @ 0x18042DDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18008BEA4 (-_Tidy@-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allo.c)
 *     ??$_Assign_range@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x18042D4B0 (--$_Assign_range@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@-$.c)
 *     ?Animate@AssistantLightStrip@Lighting@TwinUI@@AEAAJHAEAV?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@@Z @ 0x18042DB2C (-Animate@AssistantLightStrip@Lighting@TwinUI@@AEAAJHAEAV-$vector@V-$vector@UColor@UI@Windows@@V-.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightStrip::HandleState(__int64 a1, int a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // eax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11 = 0LL;
  v12 = 0LL;
  v5 = a3 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          v8 = qword_1805A06E8;
          v9 = error;
        }
        else
        {
          v8 = qword_1805A0700;
          v9 = idle;
        }
      }
      else
      {
        v8 = qword_1805A06D0;
        v9 = responding;
      }
    }
    else
    {
      v8 = qword_1805A06B8;
      v9 = thinking;
    }
  }
  else
  {
    v8 = qword_1805A06A0;
    v9 = listening;
  }
  std::vector<std::vector<Windows::UI::Color>>::_Assign_range<std::vector<Windows::UI::Color> *>(
    (__int64 *)&v11,
    v9,
    v8);
  v10 = TwinUI::Lighting::AssistantLightStrip::Animate(a1, a2, (__int64 *)&v11);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightstrip.cpp",
      (const char *)(unsigned int)v10);
  std::vector<std::vector<Windows::UI::Color>>::_Tidy(&v11);
}
