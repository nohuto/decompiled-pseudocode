/*
 * XREFs of sub_18004DD20 @ 0x18004DD20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18004DD20(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  int (__fastcall ***v4)(_QWORD, __int128 *, _QWORD *); // rcx
  __int64 v5; // [rsp+30h] [rbp+10h] BYREF
  int (__fastcall ***v6)(_QWORD, __int128 *, __int64 *); // [rsp+38h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v1 = *(_QWORD *)(a1 + 8);
  if ( v1
    && (*(int (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v1 + 24LL))(v1, &dword_18015B850, &v6) >= 0
    && v6 )
  {
    v2 = v5;
    if ( v5 )
    {
      v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    if ( (**v6)(v6, &xmmword_18015B860, &v5) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 360LL))(v5);
  }
  v3 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, __int128 *, _QWORD *)))(*v4)[2])(v4);
  }
}
