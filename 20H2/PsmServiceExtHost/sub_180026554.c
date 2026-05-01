/*
 * XREFs of sub_180026554 @ 0x180026554
 * Callers:
 *     sub_180021954 @ 0x180021954 (sub_180021954.c)
 * Callees:
 *     sub_1800223EC @ 0x1800223EC (sub_1800223EC.c)
 *     sub_1800260A0 @ 0x1800260A0 (sub_1800260A0.c)
 */

__int64 __fastcall sub_180026554(__int64 a1)
{
  DWORD *v2; // rdi
  DWORD v4; // [rsp+30h] [rbp+8h] BYREF

  sub_1800223EC(a1);
  v2 = (DWORD *)(a1 + 336);
  while ( 1 )
  {
    v4 = *v2;
    if ( !v4 )
      break;
    sub_1800260A0(a1);
    RtlWaitOnAddress(a1 + 336, &v4, 4LL);
    sub_1800223EC(a1);
  }
  *v2 = GetCurrentThreadId();
  return sub_1800260A0(a1);
}
