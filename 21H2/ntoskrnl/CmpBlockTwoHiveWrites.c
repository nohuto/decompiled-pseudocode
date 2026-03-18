/*
 * XREFs of CmpBlockTwoHiveWrites @ 0x14071B284
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x140718CA8 (CmpVirtualBranchIsReplicated.c)
 *     CmSaveMergedKeys @ 0x14090CFF8 (CmSaveMergedKeys.c)
 *     CmpVirtualPathPresent @ 0x140917930 (CmpVirtualPathPresent.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 *     CmpGetNextActiveHive @ 0x14071B350 (CmpGetNextActiveHive.c)
 *     CmpReferenceHive @ 0x14071BBD8 (CmpReferenceHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpBlockTwoHiveWrites(volatile signed __int32 *P, volatile signed __int32 *a2, char a3)
{
  char v3; // r14
  char v4; // bp
  struct _EX_RUNDOWN_REF *i; // rcx
  struct _EX_RUNDOWN_REF *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v10; // rsi
  volatile signed __int32 *v12; // rcx

  v3 = 0;
  v4 = 0;
  for ( i = 0LL; ; i = v10 )
  {
    NextActiveHive = (struct _EX_RUNDOWN_REF *)CmpGetNextActiveHive(i);
    v10 = NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( P == (volatile signed __int32 *)NextActiveHive || a2 == (volatile signed __int32 *)NextActiveHive )
    {
      if ( a3 )
        CmpReferenceHive(NextActiveHive);
      HvLockHiveFlusherExclusive(v10);
      if ( P == (volatile signed __int32 *)v10 )
        v3 = 1;
      else
        v4 = 1;
      if ( (!P || v3 == 1) && (!a2 || v4 == 1) )
      {
        ExReleaseRundownProtection(v10 + 205);
        break;
      }
    }
  }
  if ( P && !v3 )
  {
    if ( v4 != 1 )
      return 3221225524LL;
    HvUnlockHiveFlusherExclusive(a2);
    if ( !a3 || _InterlockedExchangeAdd(a2 + 1058, 0xFFFFFFFF) != 1 )
      return 3221225524LL;
    v12 = a2;
    goto LABEL_30;
  }
  if ( !a2 || v4 )
    return 0LL;
  if ( v3 == 1 )
  {
    HvUnlockHiveFlusherExclusive(P);
    if ( a3 )
    {
      if ( _InterlockedExchangeAdd(P + 1058, 0xFFFFFFFF) == 1 )
      {
        v12 = P;
LABEL_30:
        CmpDeleteHive(v12);
      }
    }
  }
  return 3221225524LL;
}
