/*
 * XREFs of ??1_Holder@_TaskProcThunk@details@Concurrency@@QEAA@XZ @ 0x180324728
 * Callers:
 *     _Concurrency::details::_TaskProcThunk::_Bridge_::_1_::dtor$0 @ 0x180325E25 (_Concurrency--details--_TaskProcThunk--_Bridge_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$function@$$A6A_NUAPP_LAYOUT_ENUM_ITEM@@@Z@std@@QEAA@XZ @ 0x1800B90B8 (--1-$function@$$A6A_NUAPP_LAYOUT_ENUM_ITEM@@@Z@std@@QEAA@XZ.c)
 */

void __fastcall Concurrency::details::_TaskProcThunk::_Holder::~_Holder(
        Concurrency::details::_TaskProcThunk::_Holder *this,
        __int64 a2)
{
  void *v2; // rbx

  v2 = *(void **)this;
  if ( *(_QWORD *)this )
  {
    std::function<bool (APP_LAYOUT_ENUM_ITEM)>::~function<bool (APP_LAYOUT_ENUM_ITEM)>(*(_QWORD *)this, a2);
    operator delete(v2, (const struct std::nothrow_t *)0x40);
  }
}
