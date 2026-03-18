/*
 * XREFs of ?_Growmap@?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@AEAAX_K@Z @ 0x1801D0278
 * Callers:
 *     ?_Push_back_internal@?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@AEAAXAEBQEAVCInteractionTracker@@@Z @ 0x1801D03F0 (-_Push_back_internal@-$deque@PEAVCInteractionTracker@@V-$allocator@PEAVCInteractionTracker@@@std.c)
 *     ?push_front@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180211D9C (-push_front@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@.c)
 *     ?push_front@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180211E68 (-push_front@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@_ea_180211E68.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 */

void __fastcall std::deque<CInteractionTracker *>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  SIZE_T v6; // rcx
  char *v7; // r14
  __int64 v8; // r15
  size_t v9; // rbx
  const void *v10; // rdx
  char *v11; // rbx
  size_t v12; // r8
  char *v13; // rcx
  void *v14; // rcx

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( 1 )
  {
    v4 = v2 - v3;
    if ( v2 != v3 && v2 >= 8 )
      break;
    if ( 0xFFFFFFFFFFFFFFFLL - v2 < v2 )
      std::_Xlength_error("deque<T> too long");
    v2 *= 2LL;
  }
  v5 = a1[3] >> 1;
  v6 = 8 * v2;
  if ( v2 > 0x1FFFFFFFFFFFFFFFLL )
    v6 = -1LL;
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
  v8 = 8 * v5;
  v9 = 8LL * a1[2] - 8 * v5;
  memmove_0(&v7[8 * v5], (const void *)(a1[1] + 8 * v5), v9);
  v10 = (const void *)a1[1];
  v11 = &v7[8 * v5 + v9];
  if ( v5 > v4 )
  {
    memmove_0(v11, v10, 8 * v4);
    memmove_0(v7, (const void *)(8 * v4 + a1[1]), v8 - 8 * v4);
    v13 = &v7[v8 - 8 * v4];
    v12 = 8 * v4;
  }
  else
  {
    memmove_0(v11, v10, 8 * v5);
    memset_0(&v11[v8], 0, 8 * (v4 - v5));
    v12 = 8 * v5;
    v13 = v7;
  }
  memset_0(v13, 0, v12);
  v14 = (void *)a1[1];
  if ( v14 )
    std::_Deallocate<16,0>(v14, 8LL * a1[2]);
  a1[2] += v4;
  a1[1] = v7;
}
