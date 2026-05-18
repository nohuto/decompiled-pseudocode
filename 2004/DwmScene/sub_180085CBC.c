/*
 * XREFs of sub_180085CBC @ 0x180085CBC
 * Callers:
 *     sub_180085E04 @ 0x180085E04 (sub_180085E04.c)
 *     unknown_libname_6 @ 0x180089A50 (unknown_libname_6.c)
 * Callees:
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     sub_1800618F0 @ 0x1800618F0 (sub_1800618F0.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180084BD0 @ 0x180084BD0 (sub_180084BD0.c)
 *     sub_180085AE8 @ 0x180085AE8 (sub_180085AE8.c)
 *     sub_1801168D0 @ 0x1801168D0 (sub_1801168D0.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180085CBC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  sub_18001FFEC((__int64 *)(a1 + 200), a1 + 200);
  sub_1801168D0(a1 + 184);
  sub_180085AE8((_QWORD *)(a1 + 120));
  sub_180084BD0((__int64 *)(a1 + 88), a1 + 88);
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  sub_1800618F0((__int64 *)(a1 + 48));
  if ( *(_BYTE *)(a1 + 32) )
    sub_180061A34(*(_QWORD *)(a1 + 24));
  result = sub_1801168D0(a1 + 16);
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return result;
}
