/*
 * XREFs of sub_180026018 @ 0x180026018
 * Callers:
 *     sub_180020C70 @ 0x180020C70 (sub_180020C70.c)
 *     sub_180022010 @ 0x180022010 (sub_180022010.c)
 *     sub_180023224 @ 0x180023224 (sub_180023224.c)
 *     sub_180033320 @ 0x180033320 (sub_180033320.c)
 *     sub_1800345CC @ 0x1800345CC (sub_1800345CC.c)
 *     sub_1800357F0 @ 0x1800357F0 (sub_1800357F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180026018(__int64 (__fastcall ***a1)(_QWORD, __int128 *, __int64 *), _QWORD *a2)
{
  signed int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( a1 )
  {
    v7 = 0LL;
    v4 = (**a1)(a1, &xmmword_180051E98, &v7);
    if ( v4 >= 0
      && (v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, __int128 *, __int64 *), __int64, __int64 *))(*(_QWORD *)v7 + 32LL))(
                 v7,
                 a1,
                 2LL,
                 &v8),
          v4 >= 0)
      && (v4 = v8 != 1 ? 0x80004002 : 0, v8 == 1) )
    {
      v5 = 0LL;
      *a2 = v7;
    }
    else
    {
      v5 = v7;
    }
    if ( v5 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return (unsigned int)v4;
}
