/*
 * XREFs of ??$_Insert@AEA_KUTargetingInfo@Win32kInterop@@@?$list@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEA_K$$QEAUTargetingInfo@Win32kInterop@@@Z @ 0x180024D80
 * Callers:
 *     ??$emplace@AEA_KUTargetingInfo@Win32kInterop@@@?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAUTargetingInfo@Win32kInterop@@@Z @ 0x18002426C (--$emplace@AEA_KUTargetingInfo@Win32kInterop@@@-$_Hash@V-$_Umap_traits@_KUTargetingInfo@Win32kIn.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::list<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>::_Insert<unsigned __int64 &,Win32kInterop::TargetingInfo>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // r9
  char result; // al

  if ( *(_QWORD *)(a1 + 8) == 0x555555555555555LL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  v10 = v9;
  v9[2] = *a3;
  v11 = v9 + 3;
  v9[3] = 0LL;
  if ( v9 + 3 != (_QWORD *)a4 )
  {
    *v11 = *(_QWORD *)a4;
    *(_QWORD *)a4 = 0LL;
  }
  v12 = (_QWORD *)(a4 + 8);
  v9[4] = 0LL;
  if ( v9 + 4 != (_QWORD *)(a4 + 8) )
  {
    v9[4] = *v12;
    *v12 = 0LL;
  }
  *((_BYTE *)v9 + 40) = *(_BYTE *)(a4 + 16);
  *((_BYTE *)v9 + 41) = *(_BYTE *)(a4 + 17);
  result = *(_BYTE *)(a4 + 18);
  *((_BYTE *)v11 + 18) = result;
  *v10 = a2;
  v10[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v10;
  *v8 = v10;
  return result;
}
