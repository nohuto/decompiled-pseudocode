/*
 * XREFs of MiMakePrototypePteDirect @ 0x1402BCC70
 * Callers:
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiAddMappedPtes @ 0x14063FBE0 (MiAddMappedPtes.c)
 *     MiMapPatchTable @ 0x1408C80C8 (MiMapPatchTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 << 16) | 0x400;
  if ( qword_140C4DE80 )
  {
    if ( (qword_140C4DE80 & v1) == 0 )
      return v1 | qword_140C4DE80;
    return v1 | 0x10;
  }
  return v1;
}
