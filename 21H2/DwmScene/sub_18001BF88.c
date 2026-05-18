/*
 * XREFs of sub_18001BF88 @ 0x18001BF88
 * Callers:
 *     sub_180016350 @ 0x180016350 (sub_180016350.c)
 * Callees:
 *     sub_180021174 @ 0x180021174 (sub_180021174.c)
 */

void __fastcall sub_18001BF88(__int64 a1)
{
  RTL_SRWLOCK *v2; // rsi

  if ( *(_BYTE *)a1 )
  {
    v2 = (RTL_SRWLOCK *)(a1 + 40);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 40));
    if ( *(_QWORD *)(a1 + 256) - *(_QWORD *)(a1 + 248) >= 0xCuLL )
    {
      sub_180021174(a1 + 248);
      *(_QWORD *)(a1 + 256) = *(_QWORD *)(a1 + 248);
    }
    *(_BYTE *)(a1 + 64) = 0;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
