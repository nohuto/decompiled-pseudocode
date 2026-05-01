/*
 * XREFs of ?_Bridge@_TaskProcThunk@details@Concurrency@@SAXPEAX@Z @ 0x180304B70
 * Callers:
 *     ?_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z @ 0x1803065DC (-_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@QEAA@XZ @ 0x18017D8F4 (--1-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@QEAA@XZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180303E2C (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_TaskProcThunk::_Bridge(void *a1)
{
  __int64 v2; // rdx

  std::_Func_class<void,>::operator()((__int64)a1);
  if ( a1 )
  {
    std::function<void (Concurrency::task<bool>)>::~function<void (Concurrency::task<bool>)>((__int64)a1, v2);
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  }
}
