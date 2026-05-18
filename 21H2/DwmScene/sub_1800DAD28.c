/*
 * XREFs of sub_1800DAD28 @ 0x1800DAD28
 * Callers:
 *     sub_1800DB3B4 @ 0x1800DB3B4 (sub_1800DB3B4.c)
 * Callees:
 *     sub_1800DB150 @ 0x1800DB150 (sub_1800DB150.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DAD28(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int128 *v7; // r14
  __int64 result; // rax
  volatile signed __int32 *v9; // rbx
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF

  v4 = a1;
  v5 = (a2 - a1) >> 4;
  v6 = (a2 - a1) >> 5;
  if ( v6 > 0 )
  {
    v7 = (__int128 *)(a1 + 16 * v6);
    do
    {
      --v6;
      --v7;
      v10 = 0LL;
      v10 = *v7;
      *(_QWORD *)v7 = 0LL;
      *((_QWORD *)v7 + 1) = 0LL;
      result = sub_1800DB150(v4, v6, v5, (unsigned int)&v10, a3);
      v9 = (volatile signed __int32 *)*((_QWORD *)&v10 + 1);
      if ( *((_QWORD *)&v10 + 1) )
      {
        result = (unsigned int)_InterlockedExchangeAdd(
                                 (volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL),
                                 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
          result = (unsigned int)_InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        }
      }
    }
    while ( v6 > 0 );
  }
  return result;
}
