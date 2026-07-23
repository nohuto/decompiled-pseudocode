/*
 * XREFs of ObGetExtendedUserInfo @ 0x1408DD4DC
 * Callers:
 *     PsReplaceSiloContext @ 0x140905D00 (PsReplaceSiloContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ObGetExtendedUserInfo(__int64 a1)
{
  char v1; // al
  __int64 v2; // rcx

  v1 = *(_BYTE *)(a1 - 22);
  v2 = a1 - 48;
  if ( (v1 & 0x40) != 0 )
    return *(_QWORD *)(v2 - ObpInfoMaskToOffset[v1 & 0x7F]) + 32LL;
  else
    return 0LL;
}
