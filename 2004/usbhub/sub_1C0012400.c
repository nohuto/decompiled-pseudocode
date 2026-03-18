/*
 * XREFs of sub_1C0012400 @ 0x1C0012400
 * Callers:
 *     sub_1C000C0F0 @ 0x1C000C0F0 (sub_1C000C0F0.c)
 *     sub_1C000CF10 @ 0x1C000CF10 (sub_1C000CF10.c)
 *     sub_1C000D970 @ 0x1C000D970 (sub_1C000D970.c)
 *     sub_1C000DC30 @ 0x1C000DC30 (sub_1C000DC30.c)
 *     sub_1C0010064 @ 0x1C0010064 (sub_1C0010064.c)
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C0013558 @ 0x1C0013558 (sub_1C0013558.c)
 *     sub_1C0015264 @ 0x1C0015264 (sub_1C0015264.c)
 *     sub_1C00153F0 @ 0x1C00153F0 (sub_1C00153F0.c)
 *     sub_1C0015704 @ 0x1C0015704 (sub_1C0015704.c)
 *     sub_1C00157E0 @ 0x1C00157E0 (sub_1C00157E0.c)
 *     sub_1C0018F50 @ 0x1C0018F50 (sub_1C0018F50.c)
 *     sub_1C001BB74 @ 0x1C001BB74 (sub_1C001BB74.c)
 *     sub_1C001C580 @ 0x1C001C580 (sub_1C001C580.c)
 *     sub_1C002AE10 @ 0x1C002AE10 (sub_1C002AE10.c)
 *     sub_1C0037D08 @ 0x1C0037D08 (sub_1C0037D08.c)
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 *     sub_1C003BD90 @ 0x1C003BD90 (sub_1C003BD90.c)
 *     sub_1C003CEC0 @ 0x1C003CEC0 (sub_1C003CEC0.c)
 *     sub_1C003D4C8 @ 0x1C003D4C8 (sub_1C003D4C8.c)
 *     sub_1C004CC80 @ 0x1C004CC80 (sub_1C004CC80.c)
 *     sub_1C004CDC0 @ 0x1C004CDC0 (sub_1C004CDC0.c)
 *     sub_1C004DB30 @ 0x1C004DB30 (sub_1C004DB30.c)
 *     sub_1C004DC20 @ 0x1C004DC20 (sub_1C004DC20.c)
 *     sub_1C004DDA0 @ 0x1C004DDA0 (sub_1C004DDA0.c)
 *     sub_1C004E120 @ 0x1C004E120 (sub_1C004E120.c)
 *     sub_1C004E210 @ 0x1C004E210 (sub_1C004E210.c)
 *     sub_1C004E390 @ 0x1C004E390 (sub_1C004E390.c)
 * Callees:
 *     sub_1C00125E0 @ 0x1C00125E0 (sub_1C00125E0.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

void __fastcall sub_1C0012400(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4)
{
  _DWORD *v6; // rdx
  const GUID *v7; // rdx
  __int128 v8; // [rsp+98h] [rbp+1Fh] BYREF

  v8 = 0LL;
  if ( dword_1C006B650 )
  {
    if ( !a1 )
      sub_1C002DC78(0LL, 0LL);
    v6 = *(_DWORD **)(a1 + 64);
    if ( !v6 )
      sub_1C002DC78(a1, 0LL);
    if ( *v6 != 541218120 )
      sub_1C002DC78(a1, v6);
    if ( a3 )
    {
      v8 = *a3;
    }
    else if ( !a2 || !qword_1C006B3A0 || (int)qword_1C006B3A0(a2, &v8) < 0 )
    {
      v7 = 0LL;
LABEL_8:
      sub_1C00125E0(a4, v7);
      return;
    }
    v7 = (const GUID *)&v8;
    goto LABEL_8;
  }
}
