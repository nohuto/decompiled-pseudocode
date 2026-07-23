/*
 * XREFs of RtlpValidCompoundAce @ 0x1800EADF4
 * Callers:
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidCompoundAce(__int64 a1)
{
  unsigned __int64 v1; // r8
  int v2; // edx
  __int64 v3; // rax
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *(unsigned __int16 *)(a1 + 2);
    if ( ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v1
      && (unsigned int)v1 >= 0x18
      && *(_WORD *)(a1 + 8) == 1
      && *(_BYTE *)(a1 + 12) == 1
      && *(_BYTE *)(a1 + 13) <= 0xFu )
    {
      v2 = *(unsigned __int8 *)(a1 + 13);
      if ( v1 >= (unsigned __int64)(unsigned int)(4 * v2 + 8) + 24 )
      {
        v3 = (unsigned int)(4 * v2 + 8);
        if ( *(_BYTE *)(v3 + a1 + 12) == 1
          && *(_BYTE *)(v3 + a1 + 13) <= 0xFu
          && v1 >= (unsigned int)(4 * v2 + 8) + 4 * ((unsigned __int64)*(unsigned __int8 *)(v3 + a1 + 13) + 5) )
        {
          return 1;
        }
      }
    }
  }
  return result;
}
