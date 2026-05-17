/*
 * XREFs of _RtlpHpSegMgrCommitComplete@24 @ 0x4B37C1CE
 * Callers:
 *     _RtlpHpSegMgrCommit@28 @ 0x4B37BF36 (_RtlpHpSegMgrCommit@28.c)
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

signed __int32 __fastcall RtlpHpSegMgrCommitComplete(
        int a1,
        volatile signed __int16 *a2,
        int a3,
        int a4,
        volatile signed __int32 *a5,
        int a6)
{
  signed __int16 i; // cx
  signed __int32 result; // eax
  signed __int16 v9; // dx

  for ( i = *a2; ; i = result )
  {
    result = i & 0x4000;
    if ( (i & 0x4000) != 0 )
    {
      result = a4 && a3 > 0 ? 0x8000 : 0;
      v9 = result | i & 0x3FFF;
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
    result = (unsigned __int16)_InterlockedCompareExchange16(a2, v9, i);
    if ( (_WORD)result == i )
    {
      if ( (i & 0x4000) != 0 )
        return RtlReleaseSRWLockExclusive(a5);
      return result;
    }
  }
  return result;
}
