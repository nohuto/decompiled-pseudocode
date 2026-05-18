/*
 * XREFs of sub_18006C560 @ 0x18006C560
 * Callers:
 *     sub_18006C560 @ 0x18006C560 (sub_18006C560.c)
 *     sub_18006C618 @ 0x18006C618 (sub_18006C618.c)
 * Callees:
 *     sub_180061810 @ 0x180061810 (sub_180061810.c)
 *     sub_18006C560 @ 0x18006C560 (sub_18006C560.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18011F97C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006C560(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 i; // rbx

  sub_180061810(a1 + 16);
  v6 = *a3;
  sub_1800839A4(*a3);
  v7 = *(_QWORD *)(v6 + 376);
  v8 = *(_QWORD *)(v6 + 384);
  while ( v7 != v8 )
  {
    v9 = *(_QWORD *)(a2 + 56);
    if ( !v9 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x18006C614LL);
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v7);
    v7 += 16LL;
  }
  v10 = *a3;
  result = sub_1800839A4(*a3);
  v12 = *(_QWORD *)(v10 + 40);
  for ( i = *(_QWORD *)(v10 + 32); i != v12; i += 16LL )
    result = sub_18006C560(a1, a2, i);
  return result;
}
