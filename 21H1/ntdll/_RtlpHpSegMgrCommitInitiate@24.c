/*
 * XREFs of _RtlpHpSegMgrCommitInitiate@24 @ 0x4B37C275
 * Callers:
 *     _RtlpHpSegMgrCommit@28 @ 0x4B37BF36 (_RtlpHpSegMgrCommit@28.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpSegMgrApplyLargePagePolicy@4 @ 0x4B37BEAA (_RtlpHpSegMgrApplyLargePagePolicy@4.c)
 */

int __fastcall RtlpHpSegMgrCommitInitiate(
        int a1,
        volatile signed __int16 *a2,
        int a3,
        char a4,
        PRTL_SRWLOCK SRWLock,
        char *a6)
{
  signed __int16 v6; // di
  bool v7; // zf
  __int16 v8; // si
  signed __int16 v9; // si
  __int16 v10; // cx
  signed __int16 v11; // si
  int result; // eax
  char v13; // [esp+Fh] [ebp-19h]
  int v14; // [esp+18h] [ebp-10h]
  volatile signed __int16 *v15; // [esp+1Ch] [ebp-Ch]
  int v16; // [esp+24h] [ebp-4h]

  v14 = 0;
  v15 = a2;
  v13 = 0;
  v16 = a1;
LABEL_2:
  v6 = *a2;
  while ( 1 )
  {
    if ( a3 > 0 )
    {
      if ( (v6 & 0x4000) != 0 )
      {
        _mm_pause();
        goto LABEL_2;
      }
      if ( (v6 & 0x7FF) != 0
        || ((a4 & 3) != 0 ? (v7 = (a4 & 2) == 0) : (v7 = RtlpHpSegMgrApplyLargePagePolicy(a1) == 0), v7) )
      {
        v8 = v6;
      }
      else
      {
        v8 = v6 | 0x4000;
      }
      a2 = v15;
LABEL_14:
      v9 = a3 + v8;
      goto LABEL_15;
    }
    if ( v6 >= 0 )
    {
      result = -1073741567;
      goto LABEL_30;
    }
    v8 = v6;
    if ( a3 + (v6 & 0x7FF) )
      goto LABEL_14;
    v9 = v6 | 0x4000;
LABEL_15:
    v10 = v9 & 0x4000;
    if ( (v9 & 0x4000) != 0 )
    {
      v14 = 1;
      RtlAcquireSRWLockExclusive(SRWLock);
      v10 = v9 & 0x4000;
      a2 = v15;
      v13 = -1;
    }
    v11 = _InterlockedCompareExchange16(a2, v9, v6);
    if ( v11 == v6 )
      break;
    if ( v14 )
    {
      RtlReleaseSRWLockExclusive(SRWLock);
      a2 = v15;
    }
    v14 = 0;
    v6 = v11;
    a1 = v16;
  }
  if ( a3 <= 0 )
  {
    result = 2 * (v10 != 0) - 1073741568;
  }
  else if ( v6 >= 0 )
  {
    result = (v10 != 0) - 1073741567;
  }
  else
  {
    result = -1073741568;
  }
LABEL_30:
  if ( v14 )
    *a6 = v13;
  return result;
}
