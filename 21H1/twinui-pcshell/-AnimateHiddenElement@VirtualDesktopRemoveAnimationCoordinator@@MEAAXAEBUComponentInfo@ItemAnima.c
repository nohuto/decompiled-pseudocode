/*
 * XREFs of ?AnimateHiddenElement@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUComponentInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1803A3310
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VirtualDesktopRemoveAnimationCoordinator::AnimateHiddenElement(
        VirtualDesktopRemoveAnimationCoordinator *this,
        __m128i *a2)
{
  int v3; // ecx
  __int32 v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __m128i v7; // [rsp+30h] [rbp-28h] BYREF

  if ( a2->m128i_i32[0] == 8 )
  {
    v3 = *((_DWORD *)this + 186);
    v7 = a2[1];
    v7.m128i_i32[3] = v3 + _mm_srli_si128(v7, 8).m128i_i32[1];
    v4 = v3 + v7.m128i_i32[1];
    v5 = a2->m128i_i64[1];
    v7.m128i_i32[1] = v4;
    (*(void (__fastcall **)(__int64, __m128i *, _QWORD, _QWORD))(*(_QWORD *)v5 + 504LL))(v5, a2, 0LL, 0LL);
    (*(void (__fastcall **)(__int64, __m128i *, _QWORD, _QWORD))(*(_QWORD *)a2->m128i_i64[1] + 512LL))(
      a2->m128i_i64[1],
      a2 + 1,
      0LL,
      0LL);
    (*(void (__fastcall **)(__int64, __m128i *, __int64))(*(_QWORD *)a2->m128i_i64[1] + 512LL))(
      a2->m128i_i64[1],
      &v7,
      24LL);
  }
  else if ( a2->m128i_i32[0] == 9 )
  {
    (*(void (__fastcall **)(__int64, __m128i *, _QWORD, _QWORD))(*(_QWORD *)a2->m128i_i64[1] + 504LL))(
      a2->m128i_i64[1],
      a2,
      0LL,
      0LL);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2->m128i_i64[1] + 504LL))(
      a2->m128i_i64[1],
      v6,
      28LL);
  }
}
