/*
 * XREFs of sub_180038A00 @ 0x180038A00
 * Callers:
 *     sub_1800385C0 @ 0x1800385C0 (sub_1800385C0.c)
 * Callees:
 *     sub_18003A354 @ 0x18003A354 (sub_18003A354.c)
 *     sub_18003A980 @ 0x18003A980 (sub_18003A980.c)
 */

void __fastcall sub_180038A00(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  RTL_SRWLOCK *v8; // rbx

  *a2 = 0LL;
  if ( *(_BYTE *)a1 )
  {
    v8 = (RTL_SRWLOCK *)(a1 + 32);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 32));
    if ( (unsigned __int8)sub_18003A980(a1) )
      sub_18003A354(a1 + 104, a2, a3, a4);
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
  }
}
