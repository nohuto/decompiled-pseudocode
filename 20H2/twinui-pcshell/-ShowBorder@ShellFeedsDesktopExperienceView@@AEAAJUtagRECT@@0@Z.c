/*
 * XREFs of ?ShowBorder@ShellFeedsDesktopExperienceView@@AEAAJUtagRECT@@0@Z @ 0x1800A90F4
 * Callers:
 *     ?PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800A86DC (-PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::ShowBorder(
        ShellFeedsDesktopExperienceView *this,
        __m128i *a2,
        __m128i *a3)
{
  __m128i v3; // xmm1
  __m128i v5; // xmm2
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // xmm0_8
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v3 = *a2;
  v5 = *a3;
  v6 = a3->m128i_i64[0];
  v7 = _mm_srli_si128(v5, 8).m128i_u64[0];
  v8 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  v9 = HIDWORD(v7) != HIDWORD(v8) ? 8 : 0;
  if ( a2->m128i_u32[0] != (_DWORD)v6 )
    v9 |= 1u;
  v10 = v9 | 2;
  if ( v3.m128i_i32[1] == HIDWORD(v6) )
    v10 = v9;
  if ( (_DWORD)v8 != (_DWORD)v7 )
    v10 = (unsigned int)v10 | 4;
  v11 = (__int64 *)*((_QWORD *)this + 13);
  v12 = *v11;
  v14 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64, __int128 *))(v12 + 136))(
    v11,
    v10,
    1LL,
    0x1000000LL,
    &v14);
  return 0LL;
}
