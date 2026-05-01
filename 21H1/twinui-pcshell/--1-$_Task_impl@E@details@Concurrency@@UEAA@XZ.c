/*
 * XREFs of ??1?$_Task_impl@E@details@Concurrency@@UEAA@XZ @ 0x180303264
 * Callers:
 *     ??_E?$_Task_impl@E@details@Concurrency@@UEAAPEAXI@Z @ 0x180303FB0 (--_E-$_Task_impl@E@details@Concurrency@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@QEAA@XZ @ 0x18017D8F4 (--1-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@QEAA@XZ.c)
 *     ?_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x180305D58 (-_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ.c)
 */

void __fastcall Concurrency::details::_Task_impl<unsigned char>::~_Task_impl<unsigned char>(
        Concurrency::details::_Task_impl_base *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &Concurrency::details::_Task_impl<unsigned char>::`vftable';
  Concurrency::details::_Task_impl_base::_DeregisterCancellation(this);
  std::function<void (Concurrency::task<bool>)>::~function<void (Concurrency::task<bool>)>((__int64)this + 376, v2);
  Concurrency::details::_Task_impl_base::~_Task_impl_base(this);
}
