/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@2@AEBW4InputType@@@Z @ 0x180070A78
 * Callers:
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x18006E0A4 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>,std::less<enum InputType>,std::allocator<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>,0>>::find(
        __int64 **a1,
        __int64 **a2,
        int *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // rax
  int v6; // r8d

  v3 = *a1;
  v4 = v3;
  v5 = (__int64 *)v3[1];
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_9;
  v6 = *a3;
  do
  {
    if ( *((_DWORD *)v5 + 8) >= v6 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v4 == v3 || v6 < *((_DWORD *)v4 + 8) )
LABEL_9:
    v4 = v3;
  *a2 = v4;
  return a2;
}
