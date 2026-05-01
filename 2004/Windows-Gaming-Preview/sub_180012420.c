/*
 * XREFs of sub_180012420 @ 0x180012420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180012420(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax

  v4 = Mtx_lock((_Mtx_t)(a1 + 88));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    __debugbreak();
  }
  v5 = *(_QWORD *)(a1 + 168);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v5 = *(_QWORD *)(a1 + 168);
  }
  *a2 = v5;
  v6 = Mtx_unlock((_Mtx_t)(a1 + 88));
  if ( v6 )
    std::_Throw_C_error(v6);
  return 0LL;
}
