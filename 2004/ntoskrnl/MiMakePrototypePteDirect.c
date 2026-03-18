/*
 * XREFs of MiMakePrototypePteDirect @ 0x140263C40
 * Callers:
 *     MiConvertStandbyToProto @ 0x140364CE8 (MiConvertStandbyToProto.c)
 *     MiAddMappedPtes @ 0x14060AA90 (MiAddMappedPtes.c)
 *     MiMapPatchTable @ 0x1408C9418 (MiMapPatchTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 << 16) | 0x400;
  if ( qword_140C4DD40 )
  {
    if ( (qword_140C4DD40 & v1) == 0 )
      return v1 | qword_140C4DD40;
    return v1 | 0x10;
  }
  return v1;
}
