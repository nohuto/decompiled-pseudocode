/*
 * XREFs of ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x1801226CC
 * Callers:
 *     ?SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ @ 0x180121B1C (-SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ @ 0x180122018 (-SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z @ 0x180122B70 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z.c)
 *     ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAXMG@Z @ 0x180122C18 (-TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAXMG@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180028070 (-IsEdition@@YA_N_K@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x1800451F8 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800BBB7C (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ??$_Insert_or_assign@AEBGUActiveKeyProperties@ControllerProcessor@@@?$unordered_map@GUActiveKeyProperties@ControllerProcessor@@U?$hash@G@std@@U?$equal_to@G@4@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x18011ED24 (--$_Insert_or_assign@AEBGUActiveKeyProperties@ControllerProcessor@@@-$unordered_map@GUActiveKeyP.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x180120D70 (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180123E7C (-erase@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$.c)
 */

void __fastcall ControllerProcessor::SetVirtualKeyState(ControllerProcessor *this, __int16 a2, char a3, char a4)
{
  __int16 v5; // si
  __int64 appended; // rax
  __int64 v9; // r11
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // r10
  char v13; // bl
  char v14; // bl
  int v15; // eax
  _BYTE v16[8]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int8 v17[8]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v19[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h]
  int v21; // [rsp+58h] [rbp-A8h]
  __int16 v22; // [rsp+64h] [rbp-9Ch]
  __int16 v23; // [rsp+86h] [rbp-7Ah]
  __int64 v24; // [rsp+190h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  *(_WORD *)v17 = a2;
  v5 = a2;
  appended = std::_Fnv1a_append_bytes((__int64)this, v17, 2uLL);
  v10 = *(_QWORD *)(v9 + 48) & appended;
  while ( 1 )
  {
    v11 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
            v9,
            v18,
            v10);
    if ( v12 == *v11 )
      break;
    if ( *(_WORD *)(v12 + 16) == v5 )
      goto LABEL_6;
  }
  v12 = *(_QWORD *)(v9 + 8);
LABEL_6:
  if ( a3 )
  {
    if ( v12 != *((_QWORD *)this + 12) )
      return;
    v16[0] = a4;
    std::unordered_map<unsigned short,ControllerProcessor::ActiveKeyProperties>::_Insert_or_assign<unsigned short const &,ControllerProcessor::ActiveKeyProperties>(
      v9,
      (__int64)v18,
      v17,
      v16);
    v5 = *(_WORD *)v17;
    v13 = a4 ^ 1;
  }
  else
  {
    if ( v12 == *((_QWORD *)this + 12) )
      return;
    v14 = *(_BYTE *)(v12 + 18);
    std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::erase(
      v9,
      v18,
      v12);
    v13 = v14 == 0;
  }
  if ( v13 )
  {
    memset_0(v19, 0, 0x160uLL);
    v19[2] = *((_DWORD *)this + 39);
    v20 = *((_QWORD *)this + 20);
    v24 = *((_QWORD *)this + 21);
    v23 = 64;
    v21 = 352;
    v19[0] = 4;
    v22 = v5;
    if ( !a3 )
      v23 = 65;
    if ( v5 == 7 || IsEdition(253345LL) || *((_BYTE *)ISMStatics::GetControllerNavigationManager() + 228) )
    {
      v15 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5928), (struct InputInfo *)v19);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2399LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
    }
  }
}
