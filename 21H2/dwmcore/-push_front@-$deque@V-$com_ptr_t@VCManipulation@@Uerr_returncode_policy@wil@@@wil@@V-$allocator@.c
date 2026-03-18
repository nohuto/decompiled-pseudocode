/*
 * XREFs of ?push_front@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18026594C
 * Callers:
 *     ?AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z @ 0x180263DDC (-AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@AEAAX_K@Z @ 0x180221E30 (-_Growmap@-$deque@PEAVCInteractionTracker@@V-$allocator@PEAVCInteractionTracker@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::push_front(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 result; // rax

  v2 = a1[3];
  if ( (v2 & 1) == 0 && a1[2] <= (unsigned __int64)(a1[4] + 2LL) >> 1 )
  {
    std::deque<CInteractionTracker *>::_Growmap(a1);
    v2 = a1[3];
  }
  v5 = a1[2];
  v6 = 2 * v5;
  v7 = v2 & (2 * v5 - 1);
  v8 = v5 - 1;
  a1[3] = v7;
  v9 = a1[1];
  if ( !v7 )
    v7 = v6;
  v10 = v7 - 1;
  v11 = (v10 >> 1) & v8;
  if ( !*(_QWORD *)(v9 + 8 * v11) )
  {
    *(_QWORD *)(a1[1] + 8 * v11) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v9 = a1[1];
  }
  v12 = *(_QWORD *)(v9 + 8 * v11);
  result = *a2;
  *a2 = 0LL;
  *(_QWORD *)(v12 + 8 * (v10 & 1)) = result;
  a1[3] = v10;
  ++a1[4];
  return result;
}
