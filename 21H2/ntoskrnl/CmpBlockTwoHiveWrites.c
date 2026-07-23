/*
 * XREFs of CmpBlockTwoHiveWrites @ 0x140667684
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1406647D4 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140870FB0 (CmpVirtualPathPresent.c)
 *     CmSaveMergedKeys @ 0x14087CBF0 (CmSaveMergedKeys.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     CmpDeleteHive @ 0x1405E0094 (CmpDeleteHive.c)
 *     CmpGetNextActiveHive @ 0x140667750 (CmpGetNextActiveHive.c)
 *     CmpReferenceHive @ 0x1406DBA08 (CmpReferenceHive.c)
 */

__int64 __fastcall CmpBlockTwoHiveWrites(__int64 a1, __int64 a2, char a3)
{
  char v3; // r14
  char v4; // bp
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  _QWORD *v12; // rcx

  v3 = 0;
  v4 = 0;
  for ( i = 0LL; ; i = v10 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v10 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( a1 == NextActiveHive || a2 == NextActiveHive )
    {
      if ( a3 )
        CmpReferenceHive(NextActiveHive);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&v10[9], 0LL);
      if ( (struct _EX_RUNDOWN_REF *)a1 == v10 )
        v3 = 1;
      else
        v4 = 1;
      if ( (!a1 || v3 == 1) && (!a2 || v4 == 1) )
      {
        ExReleaseRundownProtection(v10 + 204);
        break;
      }
    }
  }
  if ( (!a1 || v3) && (!a2 || v4) )
    return 0LL;
  if ( v3 == 1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 72);
    KeAbPostRelease(a1 + 72);
    if ( !a3 || _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4272), 0xFFFFFFFF) != 1 )
      return 3221225524LL;
    v12 = (_QWORD *)a1;
  }
  else
  {
    if ( v4 != 1 )
      return 3221225524LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 72);
    KeAbPostRelease(a2 + 72);
    if ( !a3 || _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 4272), 0xFFFFFFFF) != 1 )
      return 3221225524LL;
    v12 = (_QWORD *)a2;
  }
  CmpDeleteHive(v12);
  return 3221225524LL;
}
