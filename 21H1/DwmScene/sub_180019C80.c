/*
 * XREFs of sub_180019C80 @ 0x180019C80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DC98 @ 0x18000DC98 (sub_18000DC98.c)
 *     sub_180017634 @ 0x180017634 (sub_180017634.c)
 *     sub_180017D2C @ 0x180017D2C (sub_180017D2C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180019C80(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rcx
  signed int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+28h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(_QWORD **)(a1 + 56);
  v11 = 0LL;
  sub_180017634(v2, &v11, 1u);
  v10 = 0LL;
  v4 = sub_180017D2C(&v10, (__int64)&v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v10;
    v6 = 0LL;
    v10 = 0LL;
    v5 = 0;
    *a2 = v7;
  }
  else
  {
    sub_18000DC98(retaddr, 361, (__int64)"SpectreRenderer.cpp", v4);
    v6 = v10;
  }
  if ( v6 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v8 = (volatile signed __int32 *)*((_QWORD *)&v11 + 1);
  if ( *((_QWORD *)&v11 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return v5;
}
