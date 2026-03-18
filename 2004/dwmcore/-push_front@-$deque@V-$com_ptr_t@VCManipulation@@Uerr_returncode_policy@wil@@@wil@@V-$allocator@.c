/*
 * XREFs of ?push_front@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180213C00
 * Callers:
 *     ?AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z @ 0x1802120BC (-AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@AEAAX_K@Z @ 0x1801D20D8 (-_Growmap@-$deque@PEAVCInteractionTracker@@V-$allocator@PEAVCInteractionTracker@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::push_front(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 result; // rax

  v4 = a1[3];
  if ( (v4 & 1) == 0 && a1[2] <= (unsigned __int64)(a1[4] + 2LL) >> 1 )
  {
    std::deque<CInteractionTracker *>::_Growmap(a1);
    v4 = a1[3];
  }
  v5 = v4 & (2LL * a1[2] - 1);
  a1[3] = v5;
  v6 = a1[2];
  if ( !v5 )
    v5 = 2 * v6;
  v7 = v6 - 1;
  v8 = a1[1];
  v9 = v5 - 1;
  v10 = (v9 >> 1) & v7;
  if ( !*(_QWORD *)(v8 + 8 * v10) )
  {
    *(_QWORD *)(a1[1] + 8 * v10) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v8 = a1[1];
  }
  v11 = *(_QWORD *)(v8 + 8 * v10);
  result = *a2;
  *a2 = 0LL;
  *(_QWORD *)(v11 + 8 * (v9 & 1)) = result;
  ++a1[4];
  a1[3] = v9;
  return result;
}
