/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@2@@Z @ 0x1800BDAB8
 * Callers:
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@std@@X@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@1@V21@@Z @ 0x1800BD5FC (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$ch.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@2@@Z @ 0x1800BDD7C (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@I.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x1800BDDCC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$com_ptr_t@UIWindowGroup@@Uerr_exception_.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1800BDDF0 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>>::_Extract(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v5; // r11
  __int64 i; // rax
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rcx
  char v13; // dl
  bool j; // zf
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx

  v2 = a2 + 16;
  v3 = *(_QWORD *)(a2 + 16);
  v5 = a2;
  if ( *(_BYTE *)(v3 + 25) )
  {
    for ( i = *(_QWORD *)(a2 + 8); !*(_BYTE *)(i + 25) && a2 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
      a2 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min(
          *(_QWORD *)(a2 + 16),
          a2,
          v2,
          v3);
  }
  if ( !*(_BYTE *)(*(_QWORD *)v5 + 25LL) )
  {
    if ( *(_BYTE *)(v3 + 25) )
    {
      v3 = *(_QWORD *)v5;
    }
    else
    {
      v3 = *(_QWORD *)(i + 16);
      if ( i != v5 )
      {
        *(_QWORD *)(*(_QWORD *)v5 + 8LL) = i;
        *(_QWORD *)i = *(_QWORD *)v5;
        if ( i == *(_QWORD *)v2 )
        {
          v7 = i;
        }
        else
        {
          v7 = *(_QWORD *)(i + 8);
          if ( !*(_BYTE *)(v3 + 25) )
            *(_QWORD *)(v3 + 8) = v7;
          *(_QWORD *)v7 = v3;
          *(_QWORD *)(i + 16) = *(_QWORD *)v2;
          *(_QWORD *)(*(_QWORD *)v2 + 8LL) = i;
        }
        if ( *(_QWORD *)(*a1 + 8) == v5 )
        {
          *(_QWORD *)(*a1 + 8) = i;
        }
        else
        {
          v12 = *(__int64 **)(v5 + 8);
          if ( *v12 == v5 )
            *v12 = i;
          else
            v12[2] = i;
        }
        v13 = *(_BYTE *)(i + 24);
        *(_QWORD *)(i + 8) = *(_QWORD *)(v5 + 8);
        *(_BYTE *)(i + 24) = *(_BYTE *)(v5 + 24);
        *(_BYTE *)(v5 + 24) = v13;
        goto LABEL_42;
      }
    }
  }
  v7 = *(_QWORD *)(v5 + 8);
  if ( !*(_BYTE *)(v3 + 25) )
    *(_QWORD *)(v3 + 8) = v7;
  if ( *(_QWORD *)(*a1 + 8) == v5 )
  {
    *(_QWORD *)(*a1 + 8) = v3;
  }
  else if ( *(_QWORD *)v7 == v5 )
  {
    *(_QWORD *)v7 = v3;
  }
  else
  {
    *(_QWORD *)(v7 + 16) = v3;
  }
  v2 = *a1;
  v8 = *a1;
  if ( *(_QWORD *)*a1 == v5 )
  {
    if ( *(_BYTE *)(v3 + 25) )
      v9 = v7;
    else
      v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min(
             v3,
             a2,
             v2,
             v3);
    *(_QWORD *)v2 = v9;
    v2 = *a1;
    v8 = *a1;
  }
  if ( *(_QWORD *)(v8 + 16) == v5 )
  {
    if ( *(_BYTE *)(v3 + 25) )
    {
      v10 = v7;
    }
    else
    {
      v11 = *(_QWORD *)(v3 + 16);
      v10 = v3;
      if ( !*(_BYTE *)(v11 + 25) )
      {
        do
        {
          v10 = v11;
          v11 = *(_QWORD *)(v11 + 16);
        }
        while ( !*(_BYTE *)(v11 + 25) );
        v8 = v2;
      }
    }
    *(_QWORD *)(v8 + 16) = v10;
  }
LABEL_42:
  if ( *(_BYTE *)(v5 + 24) != 1 )
    goto LABEL_66;
  for ( j = v3 == *(_QWORD *)(*a1 + 8); !j; j = v15 == *(_QWORD *)(*a1 + 8) )
  {
    v15 = v7;
    if ( *(_BYTE *)(v3 + 24) != 1 )
      break;
    v16 = *(_QWORD *)v7;
    if ( v3 == *(_QWORD *)v7 )
    {
      v16 = *(_QWORD *)(v7 + 16);
      if ( !*(_BYTE *)(v16 + 24) )
      {
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(v7 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>>::_Lrotate(
          a1,
          v7);
        v16 = *(_QWORD *)(v7 + 16);
      }
      if ( !*(_BYTE *)(v16 + 25) )
      {
        if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
            *(_BYTE *)(v16 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
              a1,
              v16,
              v2,
              v3);
            v16 = *(_QWORD *)(v7 + 16);
          }
          *(_BYTE *)(v16 + 24) = *(_BYTE *)(v7 + 24);
          *(_BYTE *)(v7 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v16 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>>::_Lrotate(
            a1,
            v7);
          break;
        }
LABEL_60:
        *(_BYTE *)(v16 + 24) = 0;
      }
    }
    else
    {
      if ( !*(_BYTE *)(v16 + 24) )
      {
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(v7 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v7, v2, v3);
        v16 = *(_QWORD *)v7;
      }
      if ( !*(_BYTE *)(v16 + 25) )
      {
        v17 = *(_QWORD *)(v16 + 16);
        if ( *(_BYTE *)(v17 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) == 1 )
          {
            *(_BYTE *)(v17 + 24) = 1;
            *(_BYTE *)(v16 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>>::_Lrotate(
              a1,
              v16);
            v16 = *(_QWORD *)v7;
          }
          *(_BYTE *)(v16 + 24) = *(_BYTE *)(v7 + 24);
          *(_BYTE *)(v7 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v7, v2, v3);
          break;
        }
        goto LABEL_60;
      }
    }
    v3 = v15;
    v7 = *(_QWORD *)(v7 + 8);
  }
  *(_BYTE *)(v3 + 24) = 1;
LABEL_66:
  v18 = a1[1];
  if ( v18 )
    a1[1] = v18 - 1;
  return v5;
}
