/*
 * XREFs of ?_Bridge@_TaskProcThunk@details@Concurrency@@SAXPEAX@Z @ 0x180325DF0
 * Callers:
 *     ?_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z @ 0x18032780C (-_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$function@$$A6A_NUAPP_LAYOUT_ENUM_ITEM@@@Z@std@@QEAA@XZ @ 0x1800B90B8 (--1-$function@$$A6A_NUAPP_LAYOUT_ENUM_ITEM@@@Z@std@@QEAA@XZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1802061E0 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_TaskProcThunk::_Bridge(void *a1)
{
  __int64 v2; // rdx

  std::_Func_class<void,>::operator()((__int64)a1);
  if ( a1 )
  {
    std::function<bool (APP_LAYOUT_ENUM_ITEM)>::~function<bool (APP_LAYOUT_ENUM_ITEM)>((__int64)a1, v2);
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  }
}
