/*
 * XREFs of RtlpValidAccessFilterAce @ 0x1800EAB14
 * Callers:
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpValidAccessFilterAce(__int64 a1)
{
  __int64 v2; // rcx
  char result; // al
  unsigned __int16 v4; // r9

  if ( !a1 )
    return 0;
  v2 = *(unsigned __int16 *)(a1 + 2);
  if ( ((v2 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v2 )
    return 0;
  if ( (unsigned int)v2 < 0x10 )
    return 0;
  result = 1;
  if ( *(_BYTE *)(a1 + 8) != 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 9) > 0xFu )
    return 0;
  v4 = 4 * (*(unsigned __int8 *)(a1 + 9) + 2);
  if ( (int)(v2 - v4 - 8) < 6 || *(_DWORD *)(v4 + a1 + 8) != 2020897377 )
    return 0;
  return result;
}
