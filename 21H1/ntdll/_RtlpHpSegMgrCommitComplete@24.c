/*
 * XREFs of _RtlpHpSegMgrCommitComplete@24 @ 0x4B37C1CE
 * Callers:
 *     _RtlpHpSegMgrCommit@28 @ 0x4B37BF36 (_RtlpHpSegMgrCommit@28.c)
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

void __fastcall RtlpHpSegMgrCommitComplete(
        int a1,
        volatile signed __int16 *a2,
        int a3,
        int a4,
        PRTL_SRWLOCK SRWLock,
        int a6)
{
  signed __int16 i; // cx
  __int16 v8; // ax
  signed __int16 v9; // dx
  signed __int16 v10; // ax

  for ( i = *a2; ; i = v10 )
  {
    if ( (i & 0x4000) != 0 )
    {
      v8 = a4 && a3 > 0 ? 0x8000 : 0;
      v9 = v8 | i & 0x3FFF;
    }
    else
    {
      v9 = i;
    }
    if ( a3 <= 0 )
    {
      v9 += a3;
    }
    else if ( !a4 )
    {
      v9 -= a3;
    }
    if ( v9 == i )
      break;
    v10 = _InterlockedCompareExchange16(a2, v9, i);
    if ( v10 == i )
    {
      if ( (i & 0x4000) != 0 )
        RtlReleaseSRWLockExclusive(SRWLock);
      return;
    }
  }
}
