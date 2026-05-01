/*
 * XREFs of sub_180021C20 @ 0x180021C20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025BFC @ 0x180025BFC (sub_180025BFC.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021C20(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int128 v8; // [rsp+50h] [rbp-20h] BYREF
  __int128 v9; // [rsp+60h] [rbp-10h] BYREF
  signed __int32 v10; // [rsp+90h] [rbp+20h] BYREF
  signed __int32 v11; // [rsp+98h] [rbp+28h] BYREF
  unsigned int v12; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+38h] BYREF

  v2 = 0;
  v10 = -2;
  _InterlockedCompareExchange(&v10, *(_DWORD *)(a1 + 48), -2);
  if ( !v10 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(_QWORD *)(a1 + 24) && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v3 = 0LL;
    v13 = 0LL;
    if ( qword_18005AD70 )
    {
      _InterlockedCompareExchange(&v11, *(_DWORD *)(a1 + 48), v11);
      v8 = xmmword_180050AB0;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64, signed __int32))(*(_QWORD *)qword_18005AD70
                                                                                            + 56LL))(
        qword_18005AD70,
        0LL,
        2LL,
        &v8,
        a1,
        v11);
      v3 = v13;
    }
    if ( v3 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    if ( (**(int (__fastcall ***)(__int64, __int128 *, __int64 *))a1)(a1, &xmmword_180051C20, &v13) >= 0 )
    {
      v12 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v12, *(_DWORD *)(a1 + 48), -2);
      if ( qword_18005AD70 )
      {
        v9 = xmmword_180050AB0;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64, _DWORD))(*(_QWORD *)qword_18005AD70 + 72LL))(
          qword_18005AD70,
          0LL,
          2LL,
          &v9,
          a1,
          0);
      }
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(
             *(_QWORD *)(a1 + 24),
             v13,
             v12);
      v2 = sub_180025BFC(v4, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
      v5 = *(_QWORD *)(a1 + 24);
      if ( v5 )
      {
        *(_QWORD *)(a1 + 24) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      if ( qword_18005AD70 )
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)qword_18005AD70 + 80LL))(
          qword_18005AD70,
          0LL,
          2LL);
    }
    v6 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
