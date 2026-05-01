/*
 * XREFs of sub_1800385F4 @ 0x1800385F4
 * Callers:
 *     sub_1800385C0 @ 0x1800385C0 (sub_1800385C0.c)
 * Callees:
 *     sub_180039EA4 @ 0x180039EA4 (sub_180039EA4.c)
 *     sub_180039F88 @ 0x180039F88 (sub_180039F88.c)
 *     sub_18003A354 @ 0x18003A354 (sub_18003A354.c)
 *     sub_18003B22C @ 0x18003B22C (sub_18003B22C.c)
 */

void __fastcall sub_1800385F4(__int64 a1, _QWORD *a2, __int64 a3)
{
  *a2 = 0LL;
  if ( *(_BYTE *)a1 && !(unsigned __int8)sub_180039EA4() && (unsigned __int8)sub_180039F88(a1) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 32));
    sub_18003B22C(a1);
    sub_18003A354(a1 + 176, a2, a3, 0LL);
    if ( *a2 )
      *a2 |= 0x80000000uLL;
    if ( a1 != -32 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 32));
  }
}
