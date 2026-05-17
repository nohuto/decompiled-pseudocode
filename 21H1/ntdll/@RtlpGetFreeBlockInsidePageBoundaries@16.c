/*
 * XREFs of @RtlpGetFreeBlockInsidePageBoundaries@16 @ 0x4B2AF817
 * Callers:
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     @RtlpCommitBlock@8 @ 0x4B2AF586 (@RtlpCommitBlock@8.c)
 *     @RtlpDecommitBlock@8 @ 0x4B2AF71A (@RtlpDecommitBlock@8.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpGetFreeBlockInsidePageBoundaries(int a1, unsigned __int16 *a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // edx

  v4 = ((unsigned int)a2 + 4127) & 0xFFFFF000;
  *a3 = v4;
  if ( (unsigned __int16 *)v4 == a2 + 20 )
  {
    v4 += 4096;
    *a3 = v4;
  }
  v5 = (unsigned int)&a2[4 * *a2 - 8] & 0xFFFFF000;
  if ( v5 <= v4 )
    return 0;
  *a4 = v5 - v4;
  return 1;
}
