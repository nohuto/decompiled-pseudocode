/*
 * XREFs of ??4?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@AEBV01@@Z @ 0x18022AC90
 * Callers:
 *     ?Swap@SmartCookie@@QEAAXAEAV1@@Z @ 0x180231838 (-Swap@SmartCookie@@QEAAXAEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x18011BB84 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

__int64 __fastcall wistd::function<long (unsigned long)>::operator=(__int64 a1, __int64 a2)
{
  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
  if ( *(_QWORD *)(a2 + 112) )
  {
    *(_QWORD *)(a1 + 112) = a1 + 8;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 8LL))(*(_QWORD *)(a2 + 112));
  }
  return a1;
}
