/*
 * XREFs of MiMakePrototypePteDirect @ 0x14024EB30
 * Callers:
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiAddMappedPtes @ 0x140658B60 (MiAddMappedPtes.c)
 *     MiMapPatchTable @ 0x1408CF258 (MiMapPatchTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 << 16) | 0x400;
  if ( qword_140C4DDC0 )
  {
    if ( (qword_140C4DDC0 & v1) == 0 )
      return v1 | qword_140C4DDC0;
    return v1 | 0x10;
  }
  return v1;
}
