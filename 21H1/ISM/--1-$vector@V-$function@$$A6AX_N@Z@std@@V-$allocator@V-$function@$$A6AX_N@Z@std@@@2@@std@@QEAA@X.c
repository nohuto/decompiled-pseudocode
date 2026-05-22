/*
 * XREFs of ??1?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@XZ @ 0x180069694
 * Callers:
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$0 @ 0x1800699B0 (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$1 @ 0x1800699BC (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@0AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x180069128 (--$_Destroy_range@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV-$function@$$A6AX_.c)
 */

void __fastcall std::vector<std::function<void (bool)>>::~vector<std::function<void (bool)>>(__int64 *a1)
{
  void *v1; // rdi

  v1 = (void *)*a1;
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::function<void (bool)>>>(*a1, a1[1]);
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)((a1[2] - (_QWORD)v1) & 0xFFFFFFFFFFFFFFC0uLL));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
