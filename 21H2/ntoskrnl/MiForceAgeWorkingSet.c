/*
 * XREFs of MiForceAgeWorkingSet @ 0x14053B3C0
 * Callers:
 *     MiPreUnlockWorkingSetShared @ 0x14036C210 (MiPreUnlockWorkingSetShared.c)
 *     MiForcedTrim @ 0x14036C520 (MiForcedTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x140208B40 (MiAgeWorkingSet.c)
 */

_BOOL8 __fastcall MiForceAgeWorkingSet(__int64 a1, char a2)
{
  return MiAgeWorkingSet(
           a1,
           a2,
           5,
           *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a1 + 174))
                                           + 6848LL)
                               + 2346LL));
}
