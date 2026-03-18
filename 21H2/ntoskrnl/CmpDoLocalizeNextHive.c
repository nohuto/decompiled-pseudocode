/*
 * XREFs of CmpDoLocalizeNextHive @ 0x14068E4E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     HvHiveConvertLockedPagesToCowByPolicy @ 0x14068E564 (HvHiveConvertLockedPagesToCowByPolicy.c)
 *     CmpGetNextActiveHive @ 0x14071B350 (CmpGetNextActiveHive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

char __fastcall CmpDoLocalizeNextHive(_BYTE *a1, _QWORD *a2)
{
  char v2; // di
  struct _EX_RUNDOWN_REF *i; // rcx
  struct _EX_RUNDOWN_REF *NextActiveHive; // rsi
  int locked; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = 0;
  *a2 = 10000000LL * (unsigned int)dword_140C01BD4;
  *a1 = 0;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
    return 1;
  for ( i = 0LL; ; i = NextActiveHive )
  {
    NextActiveHive = (struct _EX_RUNDOWN_REF *)CmpGetNextActiveHive(i);
    if ( !NextActiveHive )
      break;
    CmpLockRegistry();
    locked = HvHiveConvertLockedPagesToCowByPolicy(NextActiveHive);
    CmpUnlockRegistry(v7, v6, v8, v9);
    if ( locked < 0 )
    {
      ExReleaseRundownProtection(NextActiveHive + 205);
      v2 = 1;
      break;
    }
  }
  CmpReleaseShutdownRundown();
  return v2;
}
