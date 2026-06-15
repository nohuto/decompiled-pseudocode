/*
 * XREFs of std::_Func_impl_no_alloc__lambda_516c21e0980b5fcc1b9eb758a6d82083__long_IAudioSessionInfo___::_Do_call @ 0x18000D9A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x18000A610 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc__lambda_516c21e0980b5fcc1b9eb758a6d82083__long_IAudioSessionInfo___::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx
  const wchar_t *v4; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 64LL))(*a2);
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, &WPP_5deeced5c0273ddc6a386dd17acdfa68_Traceguids, v4);
  }
  v6 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v3)(v3, &GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c, &v6) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v6 + 40LL))(
      v6,
      **(_QWORD **)(a1 + 8),
      0LL,
      *(_QWORD *)(a1 + 16));
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
