/*
 * XREFs of sub_180015590 @ 0x180015590
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180015590(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = Mtx_lock((_Mtx_t)(v6 + 88));
  if ( v7 )
  {
    std::_Throw_C_error(v7);
    __debugbreak();
  }
  v8 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v8 + 168) )
  {
    v5 = *(_QWORD *)(v8 + 168);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v9 = Mtx_unlock((_Mtx_t)(v6 + 88));
  if ( v9 )
    std::_Throw_C_error(v9);
  if ( v5 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, *(_QWORD *)(a1 + 16), a3);
    if ( v10 < 0 )
      sub_180012300(
        retaddr,
        154,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return 0LL;
}
