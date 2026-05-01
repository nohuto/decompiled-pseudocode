/*
 * XREFs of ??1_ThenImplOptions@details@Concurrency@@QEAA@XZ @ 0x180325128
 * Callers:
 *     _Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____::_1_::dtor$4 @ 0x1803243A7 (_Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____--_1_--dtor$4.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800CD6D4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 */

void __fastcall Concurrency::details::_ThenImplOptions::~_ThenImplOptions(Concurrency::details::_ThenImplOptions *this)
{
  std::_Ref_count_base *v2; // rcx

  std::vector<void *>::_Tidy((__int64)this + 40);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
