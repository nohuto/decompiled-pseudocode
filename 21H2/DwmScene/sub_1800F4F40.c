/*
 * XREFs of sub_1800F4F40 @ 0x1800F4F40
 * Callers:
 *     sub_1800A5650 @ 0x1800A5650 (sub_1800A5650.c)
 * Callees:
 *     sub_1800F2BF0 @ 0x1800F2BF0 (sub_1800F2BF0.c)
 *     sub_1800F2C2C @ 0x1800F2C2C (sub_1800F2C2C.c)
 *     sub_1800F540C @ 0x1800F540C (sub_1800F540C.c)
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 *     sub_1800F5BE8 @ 0x1800F5BE8 (sub_1800F5BE8.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F4F40(__int64 a1)
{
  unsigned __int16 v2; // bx
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-20h] BYREF
  __int128 v9; // [rsp+40h] [rbp-10h] BYREF

  v7 = 0LL;
  sub_1800F540C(a1, &v7);
  v2 = 0;
  result = sub_1800F2BF0(v7);
  if ( (_DWORD)result )
  {
    do
    {
      v4 = sub_1800F2C2C(v7, v2);
      v5 = v4;
      if ( *(_DWORD *)(v4 + 36) == 8 )
      {
        v8 = 0LL;
        sub_1800F597C(a1, v4, &v8);
        v9 = 0LL;
        sub_1800F5BE8(a1, v5, &v9);
      }
      ++v2;
      result = sub_1800F2BF0(v7);
    }
    while ( v2 < (unsigned int)result );
  }
  if ( *((_QWORD *)&v7 + 1) )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 8LL), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v6 = *((_QWORD *)&v7 + 1);
      (***((void (__fastcall ****)(_QWORD))&v7 + 1))(*((_QWORD *)&v7 + 1));
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v7 + 1) + 8LL))(*((_QWORD *)&v7 + 1));
    }
  }
  return result;
}
