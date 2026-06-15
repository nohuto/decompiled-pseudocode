/*
 * XREFs of ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18002EE50
 * Callers:
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18002EB80 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18002ED00 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$map@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180032080 (--$_Try_emplace@AEBK$$V@-$map@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@@std@@QEAA-AU.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E3488 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@.c)
 */

__int64 __fastcall CResourcePriorityTracker::AddResourcePriorityToMap(CResourcePriorityTracker *this, __int64 a2)
{
  char *v2; // r11
  __int64 *v3; // rax
  __int64 *v4; // rcx
  __int64 *v5; // r8
  __int64 *v6; // r9
  __int64 v7; // r10
  unsigned int v9; // r10d
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 40;
  v3 = (__int64 *)*((_QWORD *)this + 5);
  v4 = (__int64 *)v3[1];
  v5 = v4;
  v6 = v3;
  while ( !*((_BYTE *)v5 + 25) )
  {
    v9 = *((_DWORD *)v5 + 7);
    if ( v9 >= (unsigned int)a2 )
    {
      if ( *((_BYTE *)v6 + 25) && (unsigned int)a2 < v9 )
        v6 = v5;
      v3 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  if ( !*((_BYTE *)v6 + 25) )
    v4 = (__int64 *)*v6;
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( (unsigned int)a2 >= *((_DWORD *)v4 + 7) )
    {
      v4 = (__int64 *)v4[2];
    }
    else
    {
      v6 = v4;
      v4 = (__int64 *)*v4;
    }
  }
  v11 = v3;
  v7 = 0LL;
  while ( v3 != v6 )
  {
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>,std::_Iterator_base0>::operator++(
      &v11,
      a2,
      v5);
    v3 = v11;
  }
  if ( v7 )
  {
    std::map<unsigned long,unsigned long>::_Try_emplace<unsigned long const &,>(v2, v10, &v12);
    ++*(_DWORD *)(v10[0] + 32LL);
  }
  else
  {
    std::map<unsigned long,unsigned long>::_Try_emplace<unsigned long const &,>(v2, v10, &v12);
    *(_DWORD *)(v10[0] + 32LL) = 1;
  }
  return 0LL;
}
