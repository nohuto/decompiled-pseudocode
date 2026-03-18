/*
 * XREFs of MiMakePrototypePteDirect @ 0x14026DA80
 * Callers:
 *     MiAddMappedPtes @ 0x1406F40E0 (MiAddMappedPtes.c)
 *     MiMapPatchTable @ 0x14097629C (MiMapPatchTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 << 16) | 0x400;
  if ( !qword_140C50780 )
    return v1;
  if ( (qword_140C50780 & v1) != 0 )
    return v1 | 0x10;
  return v1 | qword_140C50780;
}
