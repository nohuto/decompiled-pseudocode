/*
 * XREFs of ?_Move@?$_Func_impl_no_alloc@P6AXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@ZXPEAU1@AEAV23@PEAU1@@std@@EEAAPEAV?$_Func_base@XPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAU1@@2@PEAX@Z @ 0x18001EC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc<void (*)(InputInfo *,std::unordered_set<unsigned long> &,InputInfo *),void,InputInfo *,std::unordered_set<unsigned long> &,InputInfo *>::_Move(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = &std::_Func_impl_no_alloc<void (*)(InputInfo *,std::unordered_set<unsigned long> &,InputInfo *),void,InputInfo *,std::unordered_set<unsigned long> &,InputInfo *>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  return a2;
}
