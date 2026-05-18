/*
 * XREFs of sub_18008B2D4 @ 0x18008B2D4
 * Callers:
 *     sub_18008AFAC @ 0x18008AFAC (sub_18008AFAC.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008B2D4(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  sub_18001277C((_QWORD *)a1, (__int64)a2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v6 = a3[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *(_QWORD *)(a1 + 32) = *a3;
  *(_QWORD *)(a1 + 40) = a3[1];
  *(_QWORD *)(a1 + 48) = qword_180221E80;
  *(_DWORD *)(a1 + 56) = dword_180221E88;
  *(_QWORD *)(a1 + 60) = qword_180221E80;
  *(_DWORD *)(a1 + 68) = dword_180221E88;
  *(_BYTE *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 76), 0);
  *(_BYTE *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  unknown_libname_103(a2);
  return a1;
}
