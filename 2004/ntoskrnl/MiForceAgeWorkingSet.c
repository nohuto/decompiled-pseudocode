/*
 * XREFs of MiForceAgeWorkingSet @ 0x140535EF0
 * Callers:
 *     MiPreUnlockWorkingSetShared @ 0x140311648 (MiPreUnlockWorkingSetShared.c)
 *     MiForcedTrim @ 0x140369F10 (MiForcedTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x140204610 (MiAgeWorkingSet.c)
 */

_BOOL8 __fastcall MiForceAgeWorkingSet(__int64 a1, char a2)
{
  return MiAgeWorkingSet(
           a1,
           a2,
           5,
           *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(a1 + 174))
                                           + 6848LL)
                               + 2346LL));
}
