/*
 * XREFs of sub_18011AC68 @ 0x18011AC68
 * Callers:
 *     sub_180077714 @ 0x180077714 (sub_180077714.c)
 *     sub_1800D12B8 @ 0x1800D12B8 (sub_1800D12B8.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     _o___std_exception_copy @ 0x180123893 (_o___std_exception_copy.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011AC68(__int64 a1, int a2, _QWORD *a3, char a4)
{
  __int64 v5; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v11; // [rsp+38h] [rbp-30h] BYREF
  char v12; // [rsp+40h] [rbp-28h]

  v5 = (__int64)a3;
  v8 = a3;
  if ( a3[3] >= 0x10uLL )
    v8 = (_QWORD *)*a3;
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0LL;
  v11 = v8;
  v12 = 1;
  o___std_exception_copy(&v11);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  sub_180020B7C((_QWORD *)(a1 + 24), v5);
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = a2;
  if ( a4 )
  {
    if ( *(_QWORD *)(v5 + 24) >= 0x10uLL )
      v5 = *(_QWORD *)v5;
    v9 = 4LL;
  }
  else
  {
    if ( *(_QWORD *)(v5 + 24) >= 0x10uLL )
      v5 = *(_QWORD *)v5;
    v9 = 3LL;
  }
  sub_18011BCAC(
    &unk_180214D00,
    v9,
    "Throwing SpectreException with message '%s' and HRESULT error 0x%.8x",
    (const char *)v5,
    a2);
  return a1;
}
