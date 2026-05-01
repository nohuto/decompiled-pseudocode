/*
 * XREFs of ?_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x1802AB4F8
 * Callers:
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x1802AA4AC (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x1802AD130 (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::_FindPerApplicationData(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rdi
  unsigned __int8 (__fastcall *v7)(__int64, PCWSTR); // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 *v10; // rbx

  *a3 = 0LL;
  v3 = 0LL;
  if ( !*(_QWORD *)(a1 + 560) )
    return 2147647531LL;
  while ( 1 )
  {
    v7 = *(unsigned __int8 (__fastcall **)(__int64, PCWSTR))(*(_QWORD *)a2 + 728LL);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v3) + 8LL), 0LL);
    if ( v7(a2, StringRawBuffer) )
      break;
    if ( (unsigned __int64)++v3 >= *(_QWORD *)(a1 + 560) )
      return 2147647531LL;
  }
  v10 = (__int64 *)(*(_QWORD *)(a1 + 552) + 8 * v3);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
  *a3 = *v10;
  return 0LL;
}
