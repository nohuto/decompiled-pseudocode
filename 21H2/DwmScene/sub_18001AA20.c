/*
 * XREFs of sub_18001AA20 @ 0x18001AA20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DD78 @ 0x18000DD78 (sub_18000DD78.c)
 *     sub_180017764 @ 0x180017764 (sub_180017764.c)
 *     sub_1800180B4 @ 0x1800180B4 (sub_1800180B4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001AA20(__int64 a1, __int64 *a2)
{
  signed int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v10 = 0LL;
  sub_180017764(*(_QWORD **)(a1 + 56), &v10, 1u);
  v9 = 0LL;
  v3 = sub_1800180B4(&v9, &v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = v9;
    v5 = 0LL;
    v9 = 0LL;
    *a2 = v6;
    v4 = 0;
  }
  else
  {
    sub_18000DD78(retaddr, 350, (__int64)"SpectreRenderer.cpp", v3);
    v5 = v9;
  }
  if ( v5 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v7 = (volatile signed __int32 *)*((_QWORD *)&v10 + 1);
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return v4;
}
