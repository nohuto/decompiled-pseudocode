/*
 * XREFs of MiMakePrototypePteDirect @ 0x140307A60
 * Callers:
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiAddMappedPtes @ 0x140700630 (MiAddMappedPtes.c)
 *     MiMapPatchTable @ 0x1408CCB78 (MiMapPatchTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 << 16) | 0x400;
  if ( qword_140C4DF80 )
  {
    if ( (qword_140C4DF80 & v1) == 0 )
      return v1 | qword_140C4DF80;
    return v1 | 0x10;
  }
  return v1;
}
