/*
 * XREFs of _RtlDeleteAce@8 @ 0x4B2A9340
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpDeleteData@12 @ 0x4B2A93A9 (_RtlpDeleteData@12.c)
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 */

int __stdcall RtlDeleteAce(int a1, unsigned int a2)
{
  unsigned int v2; // edi
  int v3; // ecx
  int v5; // [esp+8h] [ebp-4h] BYREF

  if ( !(unsigned __int8)RtlValidAcl(a1) )
    return -1073741811;
  v2 = a2;
  if ( a2 >= *(unsigned __int16 *)(a1 + 4) || !(unsigned __int8)RtlFirstFreeAce(a1, &v5) )
    return -1073741811;
  v3 = a1 + 8;
  if ( a2 )
  {
    do
    {
      v3 += *(unsigned __int16 *)(v3 + 2);
      --v2;
    }
    while ( v2 );
  }
  RtlpDeleteData(v5 - v3);
  --*(_WORD *)(a1 + 4);
  return 0;
}
