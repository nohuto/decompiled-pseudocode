/*
 * XREFs of std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_ec276c8d07c939ab0e4b590e5bf4eac5___ @ 0x180012AF8
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180010920 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_ec276c8d07c939ab0e4b590e5bf4eac5___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r8
  _QWORD **v9; // rcx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_QWORD **)a1;
  v4 = (_QWORD *)*a1;
  while ( v4 )
  {
    v5 = v4[1];
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
    if ( (unsigned int)_o__wcsicmp(v7, v6) )
    {
      v3 = (_QWORD **)*v3;
      v4 = (_QWORD *)*v4;
    }
    else
    {
      v10 = 0LL;
      if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2)(
             *a2,
             &GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c,
             &v10) >= 0 )
      {
        LOBYTE(v8) = 1;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v10 + 40LL))(v10, 0LL, v8, 0LL);
      }
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( !*v3 )
        return;
      v9 = (_QWORD **)*v3;
      v4 = (_QWORD *)**v3;
      *v3 = v4;
      operator delete(v9, (const struct std::nothrow_t *)0x10);
    }
  }
}
