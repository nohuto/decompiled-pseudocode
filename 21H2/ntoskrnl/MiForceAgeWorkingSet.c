/*
 * XREFs of MiForceAgeWorkingSet @ 0x14053B600
 * Callers:
 *     MiPreUnlockWorkingSetShared @ 0x14036C3C0 (MiPreUnlockWorkingSetShared.c)
 *     MiForcedTrim @ 0x14036C6D0 (MiForcedTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x1402AD440 (MiAgeWorkingSet.c)
 */

_BOOL8 __fastcall MiForceAgeWorkingSet(__int64 a1, char a2)
{
  return MiAgeWorkingSet(
           a1,
           a2,
           5,
           *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a1 + 174))
                                           + 6848LL)
                               + 2346LL));
}
