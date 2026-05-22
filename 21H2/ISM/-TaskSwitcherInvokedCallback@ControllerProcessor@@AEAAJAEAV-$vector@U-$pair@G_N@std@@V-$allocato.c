/*
 * XREFs of ?TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x180122F24
 * Callers:
 *     ?TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x180123020 (-TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180120448 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x1801237C0 (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBG@Z @ 0x1801243F8 (-erase@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_ea_1801243F8.c)
 */

__int64 __fastcall ControllerProcessor::TaskSwitcherInvokedCallback(ControllerProcessor *this, __int64 *a2, char a3)
{
  __int64 v5; // rbx
  int updated; // esi
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int16 v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 969) )
  {
    v5 = *a2;
    if ( !a3 )
      goto LABEL_10;
    v10 = 208;
    if ( !std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::erase(
            (char *)this + 88,
            &v10) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x162,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    updated = ControllerProcessor::UpdateAutoRepeatTimer(this);
    if ( updated < 0 )
    {
      v8 = 356LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    updated = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, 208, 0);
    if ( updated < 0 )
    {
      v8 = 357LL;
      goto LABEL_7;
    }
LABEL_10:
    while ( v5 != a2[1] )
    {
      updated = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, *(_WORD *)v5, *(_BYTE *)(v5 + 2));
      if ( updated < 0 )
      {
        v8 = 368LL;
        goto LABEL_7;
      }
      v5 += 4LL;
    }
  }
  return 0LL;
}
