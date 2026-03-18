/*
 * XREFs of ?push_front@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180265A10
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18026503C (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@AEAAX_K@Z @ 0x180221E30 (-_Growmap@-$deque@PEAVCInteractionTracker@@V-$allocator@PEAVCInteractionTracker@@@std@@@std@@AEA.c)
 *     ??0?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z @ 0x180263C38 (--0-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z.c)
 */

_QWORD *__fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::push_front(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD *result; // rax

  v2 = a1[3];
  if ( (v2 & 1) == 0 && a1[2] <= (unsigned __int64)(a1[4] + 2LL) >> 1 )
  {
    std::deque<CInteractionTracker *>::_Growmap(a1);
    v2 = a1[3];
  }
  v5 = a1[2];
  v6 = v2 & (2 * v5 - 1);
  a1[3] = v6;
  if ( !v6 )
    v6 = 2 * v5;
  v7 = v6 - 1;
  v8 = (v7 >> 1) & (v5 - 1);
  v9 = a1[1];
  if ( !*(_QWORD *)(v9 + 8 * v8) )
  {
    *(_QWORD *)(a1[1] + 8 * v8) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v9 = a1[1];
  }
  result = wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::com_ptr_t<CManipulation,wil::err_returncode_policy>(
             (_QWORD *)(*(_QWORD *)(v9 + 8 * v8) + 8 * (v7 & 1)),
             *a2);
  a1[3] = v7;
  ++a1[4];
  return result;
}
