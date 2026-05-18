/*
 * XREFs of sub_1800DEBF0 @ 0x1800DEBF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_18008BAC0 @ 0x18008BAC0 (sub_18008BAC0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800DEBF0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8[4]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF

  v8[2] = 0LL;
  v8[3] = 0LL;
  v9 = 0LL;
  sub_18001277C(v8, (__int64)&unk_18020F728);
  sub_18008BAC0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 288LL), (__int64)&v9, -1LL, v8);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v4 + 328);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = *(_QWORD *)(v4 + 328);
  }
  v6 = *(_QWORD *)(v4 + 320);
  *(_OWORD *)a2 = v9;
  *(_QWORD *)(a2 + 24) = v5;
  result = a2;
  *(_QWORD *)(a2 + 16) = v6;
  return result;
}
