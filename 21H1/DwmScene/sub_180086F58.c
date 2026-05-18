/*
 * XREFs of sub_180086F58 @ 0x180086F58
 * Callers:
 *     sub_180087160 @ 0x180087160 (sub_180087160.c)
 * Callees:
 *     sub_18008A270 @ 0x18008A270 (sub_18008A270.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180086F58(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int128 *v6; // rcx
  __int64 v7; // rax
  char v8; // di
  __int64 v9; // r8
  signed __int32 v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbx
  volatile signed __int32 *v13; // rbx
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  char v17; // [rsp+38h] [rbp-28h] BYREF
  volatile signed __int32 *v18; // [rsp+40h] [rbp-20h]
  int v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF

  v19 = 0;
  v16 = 0LL;
  v20 = a3;
  sub_18008A270(a1 + 120, &v16, &v20);
  v5 = v16;
  *(_OWORD *)a2 = 0LL;
  if ( v5 == *(_QWORD *)(a1 + 128) )
  {
    v18 = 0LL;
    v6 = (__int128 *)&v17;
    v7 = 0LL;
    v8 = 5;
  }
  else
  {
    v9 = *(_QWORD *)(v5 + 32);
    v15 = 0LL;
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 + 8);
        if ( !v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
        {
          v15 = *(_OWORD *)(v5 + 24);
          break;
        }
      }
    }
    v7 = v15;
    v6 = &v15;
    v8 = 6;
  }
  *(_QWORD *)v6 = 0LL;
  *(_QWORD *)a2 = v7;
  v11 = *((_QWORD *)v6 + 1);
  *((_QWORD *)v6 + 1) = 0LL;
  *(_QWORD *)(a2 + 8) = v11;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( *((_QWORD *)&v15 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v12 = *((_QWORD *)&v15 + 1);
        (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
      }
    }
  }
  if ( (v8 & 1) != 0 )
  {
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        v13 = v18;
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
  }
  return a2;
}
