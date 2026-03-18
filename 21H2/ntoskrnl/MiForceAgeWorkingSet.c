/*
 * XREFs of MiForceAgeWorkingSet @ 0x140596904
 * Callers:
 *     MiSelfTrim @ 0x140374278 (MiSelfTrim.c)
 *     MiForcedTrim @ 0x14037432C (MiForcedTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x14030C870 (MiAgeWorkingSet.c)
 */

__int64 __fastcall MiForceAgeWorkingSet(__int64 a1, char a2)
{
  return MiAgeWorkingSet(
           a1,
           a2,
           5,
           *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174))
                                           + 16600LL)
                               + 2346LL));
}
