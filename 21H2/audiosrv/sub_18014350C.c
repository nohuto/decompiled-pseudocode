/*
 * XREFs of sub_18014350C @ 0x18014350C
 * Callers:
 *     sub_180142EF0 @ 0x180142EF0 (sub_180142EF0.c)
 *     sub_180143284 @ 0x180143284 (sub_180143284.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18014350C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int128 v4; // [rsp+40h] [rbp-20h] BYREF
  int v5; // [rsp+50h] [rbp-10h]
  int v6; // [rsp+54h] [rbp-Ch]
  char v7; // [rsp+70h] [rbp+10h] BYREF
  __int64 v8; // [rsp+78h] [rbp+18h] BYREF
  __int64 v9; // [rsp+80h] [rbp+20h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v4 = xmmword_180178F08;
  v5 = 1;
  v6 = 1;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64 *, int, char *))(*(_QWORD *)v2 + 24LL))(
             v2,
             &v4,
             24LL,
             &v9,
             8,
             &v7);
  if ( (int)result >= 0 && HIDWORD(v9) )
  {
    HIDWORD(v8) = *(_DWORD *)(a1 + 48);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        LODWORD(v8) = 1;
      }
      else
      {
        if ( (_DWORD)v9 != 2 )
          return 2147943568LL;
        LODWORD(v8) = 2;
      }
    }
    else
    {
      LODWORD(v8) = 0;
    }
    return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, &v8);
  }
  return result;
}
