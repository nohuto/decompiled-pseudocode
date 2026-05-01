/*
 * XREFs of sub_180021570 @ 0x180021570
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023F98 @ 0x180023F98 (sub_180023F98.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021570(__int64 a1, __int64 a2)
{
  signed __int32 v2; // r8d
  unsigned int v5; // edi
  __int64 v6; // rax
  void (__fastcall *v7)(__int64, __int64, __int64, __int128 *, __int64, _DWORD); // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+28h] [rbp-30h]
  __int128 v12; // [rsp+40h] [rbp-18h] BYREF
  signed __int32 v13; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v13 = -2;
  _InterlockedCompareExchange(&v13, v2, -2);
  if ( v13 == 4 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 156)) == 1 )
  {
    v5 = sub_180023F98(a1 + 136);
    if ( a2 )
    {
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 152));
    }
    _InterlockedOr(v9, 0);
    if ( qword_18005AD70 )
    {
      v6 = *(_QWORD *)qword_18005AD70;
      v11 = 0;
      v10 = a1;
      v7 = *(void (__fastcall **)(__int64, __int64, __int64, __int128 *, __int64, _DWORD))(v6 + 64);
      v12 = xmmword_180050AB0;
      v7(qword_18005AD70, 2LL, 2LL, &v12, a1, 0);
    }
  }
  else
  {
    return (unsigned int)-2147483624;
  }
  return v5;
}
