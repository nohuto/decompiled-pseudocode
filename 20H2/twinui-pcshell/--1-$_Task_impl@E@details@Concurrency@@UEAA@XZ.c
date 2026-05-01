/*
 * XREFs of ??1?$_Task_impl@E@details@Concurrency@@UEAA@XZ @ 0x180324514
 * Callers:
 *     ??_E?$_Task_impl@E@details@Concurrency@@UEAAPEAXI@Z @ 0x180325230 (--_E-$_Task_impl@E@details@Concurrency@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$function@$$A6A_NUAPP_LAYOUT_ENUM_ITEM@@@Z@std@@QEAA@XZ @ 0x1800B90B8 (--1-$function@$$A6A_NUAPP_LAYOUT_ENUM_ITEM@@@Z@std@@QEAA@XZ.c)
 *     ?_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x180326FD8 (-_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ.c)
 */

void __fastcall Concurrency::details::_Task_impl<unsigned char>::~_Task_impl<unsigned char>(
        Concurrency::details::_Task_impl_base *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &Concurrency::details::_Task_impl<unsigned char>::`vftable';
  Concurrency::details::_Task_impl_base::_DeregisterCancellation(this);
  std::function<bool (APP_LAYOUT_ENUM_ITEM)>::~function<bool (APP_LAYOUT_ENUM_ITEM)>((__int64)this + 376, v2);
  Concurrency::details::_Task_impl_base::~_Task_impl_base(this);
}
