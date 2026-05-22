/*
 * XREFs of ??C?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@QEBAPEBU?$pair@$$CBIUComboButtonRegistration@@@1@XZ @ 0x18017319C
 * Callers:
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1801737A8 (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator->(
        __int64 **a1)
{
  __int64 *v1; // rax
  __int64 *v2; // rcx
  __int64 *v3; // rdx
  __int64 *v4; // r8
  __int64 *i; // rax

  v1 = *a1;
  if ( *((_BYTE *)*a1 + 25) )
  {
    v2 = (__int64 *)v1[2];
  }
  else
  {
    v2 = (__int64 *)*v1;
    if ( *(_BYTE *)(*v1 + 25) )
    {
      v2 = (__int64 *)v1[1];
      v3 = v1;
      if ( !*((_BYTE *)v2 + 25) )
      {
        v4 = v1;
        do
        {
          v3 = v4;
          if ( v4 != (__int64 *)*v2 )
            break;
          v1 = v2;
          v2 = (__int64 *)v2[1];
          v4 = v1;
          v3 = v1;
        }
        while ( !*((_BYTE *)v2 + 25) );
      }
      if ( *((_BYTE *)v1 + 25) )
        v2 = v3;
    }
    else
    {
      for ( i = (__int64 *)v2[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
        v2 = i;
    }
  }
  return v2 + 4;
}
