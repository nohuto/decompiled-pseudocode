/*
 * XREFs of sub_1800EF670 @ 0x1800EF670
 * Callers:
 *     sub_18009FD80 @ 0x18009FD80 (sub_18009FD80.c)
 * Callees:
 *     sub_1800ED320 @ 0x1800ED320 (sub_1800ED320.c)
 *     sub_1800ED35C @ 0x1800ED35C (sub_1800ED35C.c)
 *     sub_1800EFB3C @ 0x1800EFB3C (sub_1800EFB3C.c)
 *     sub_1800F00AC @ 0x1800F00AC (sub_1800F00AC.c)
 *     sub_1800F0318 @ 0x1800F0318 (sub_1800F0318.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800EF670(__int64 a1)
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
  sub_1800EFB3C(a1, &v7);
  v2 = 0;
  result = sub_1800ED320(v7);
  if ( (_DWORD)result )
  {
    do
    {
      v4 = sub_1800ED35C(v7, v2);
      v5 = v4;
      if ( *(_DWORD *)(v4 + 36) == 8 )
      {
        v8 = 0LL;
        sub_1800F00AC(a1, v4, &v8);
        v9 = 0LL;
        sub_1800F0318(a1, v5, &v9);
      }
      ++v2;
      result = sub_1800ED320(v7);
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
