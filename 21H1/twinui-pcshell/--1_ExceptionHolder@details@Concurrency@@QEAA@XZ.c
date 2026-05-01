/*
 * XREFs of ??1_ExceptionHolder@details@Concurrency@@QEAA@XZ @ 0x18030340C
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@U_ExceptionHolder@details@Concurrency@@@std@@EEAAXXZ @ 0x180305DC0 (-_Destroy@-$_Ref_count_obj@U_ExceptionHolder@details@Concurrency@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800BB154 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_ExceptionHolder::~_ExceptionHolder(Concurrency::details::_ExceptionHolder *this)
{
  if ( !*(_DWORD *)this )
  {
    __debugbreak();
    Concurrency::details::_ReportUnobservedException(this);
  }
  std::vector<void *>::_Tidy((__int64)this + 32);
  __ExceptionPtrDestroy((char *)this + 8);
}
