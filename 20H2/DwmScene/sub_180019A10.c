/*
 * XREFs of sub_180019A10 @ 0x180019A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DC98 @ 0x18000DC98 (sub_18000DC98.c)
 *     sub_180017B2C @ 0x180017B2C (sub_180017B2C.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800759E4 @ 0x1800759E4 (sub_1800759E4.c)
 *     sub_1800A0C9C @ 0x1800A0C9C (sub_1800A0C9C.c)
 *     sub_1800A3D28 @ 0x1800A3D28 (sub_1800A3D28.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180019A10(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  signed int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  _BYTE v11[16]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v12; // [rsp+30h] [rbp-40h]
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+48h] [rbp-28h] BYREF
  __int128 v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+18h]

  v3 = sub_1800759E4(*(_QWORD *)(a1 + 56));
  v15 = 0LL;
  v12 = 0LL;
  sub_18001CDF8(v11, v3 + 18496);
  sub_1800A0C9C(v3, &v15, v11);
  v14 = 0LL;
  sub_1800A3D28(v15, &v14);
  v13 = 0LL;
  v4 = sub_180017B2C(&v13, &v14);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v13;
    v6 = 0LL;
    v13 = 0LL;
    v5 = 0;
    *a2 = v7;
  }
  else
  {
    sub_18000DC98(retaddr, 335, (__int64)"SpectreRenderer.cpp", v4);
    v6 = v13;
  }
  if ( v6 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v8 = (volatile signed __int32 *)*((_QWORD *)&v14 + 1);
  if ( *((_QWORD *)&v14 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)&v15 + 1);
  if ( *((_QWORD *)&v15 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return v5;
}
