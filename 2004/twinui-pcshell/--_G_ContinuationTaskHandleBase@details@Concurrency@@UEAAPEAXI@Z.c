/*
 * XREFs of ??_G_ContinuationTaskHandleBase@details@Concurrency@@UEAAPEAXI@Z @ 0x180325C60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1_ContinuationTaskHandleBase@details@Concurrency@@UEAA@XZ @ 0x180324F70 (--1_ContinuationTaskHandleBase@details@Concurrency@@UEAA@XZ.c)
 */

Concurrency::details::_ContinuationTaskHandleBase *__fastcall Concurrency::details::_ContinuationTaskHandleBase::`scalar deleting destructor'(
        Concurrency::details::_ContinuationTaskHandleBase *this,
        char a2)
{
  Concurrency::details::_ContinuationTaskHandleBase::~_ContinuationTaskHandleBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
