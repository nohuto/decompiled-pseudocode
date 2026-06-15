/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$map@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180032700
 * Callers:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18002F4D0 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 * Callees:
 *     ??$_Insert_hint@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@AEAU?$pair@$$CBKK@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x1800327C0 (--$_Insert_hint@AEAU-$pair@$$CBKK@std@@PEAU-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@2@@-$_Tree@V-$_.c)
 */

__int64 __fastcall std::map<unsigned long,unsigned long>::_Try_emplace<unsigned long const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 *v3; // rdi
  int v6; // esi
  __int64 *v7; // rbx
  __int64 *v8; // rax
  HANDLE ProcessHeap; // rax
  _DWORD *v10; // rax
  unsigned int v12; // ecx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = (__int64 *)*a1;
  v6 = (int)a1;
  v7 = (__int64 *)*a1;
  v8 = *(__int64 **)(*a1 + 8);
  if ( *((_BYTE *)v8 + 25) )
    goto LABEL_2;
  v12 = *a3;
  do
  {
    if ( *((_DWORD *)v8 + 7) >= v12 )
    {
      v7 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  while ( !*((_BYTE *)v8 + 25) );
  if ( v7 == v3 || v12 < *((_DWORD *)v7 + 7) )
  {
LABEL_2:
    ProcessHeap = GetProcessHeap();
    v10 = HeapAlloc(ProcessHeap, 0, 0x28uLL);
    v10[7] = *a3;
    v10[8] = 0;
    *(_QWORD *)v10 = v3;
    *((_QWORD *)v10 + 1) = v3;
    *((_QWORD *)v10 + 2) = v3;
    *((_WORD *)v10 + 12) = 0;
    std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_hint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
      v6,
      (unsigned int)&v13,
      (_DWORD)v7,
      (_DWORD)v10 + 28,
      (__int64)v10);
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
