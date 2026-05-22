/*
 * XREFs of ??R?$_Func_class@XE@std@@QEBAXE@Z @ 0x180069754
 * Callers:
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x180069790 (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 *     ?UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z @ 0x180170070 (-UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,unsigned char>::operator()(__int64 a1, char a2)
{
  __int64 v2; // rcx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 16LL))(v2, &v4);
}
