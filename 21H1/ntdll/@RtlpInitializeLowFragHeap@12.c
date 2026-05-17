/*
 * XREFs of @RtlpInitializeLowFragHeap@12 @ 0x4B2AFD75
 * Callers:
 *     @RtlpCreateLowFragHeap@4 @ 0x4B2AEF38 (@RtlpCreateLowFragHeap@4.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpInitializeLowFragHeap(int a1, _DWORD *a2, char a3)
{
  unsigned int v4; // edx
  _DWORD *v5; // eax
  int v6; // ecx
  _BYTE *v7; // ecx
  __int16 v8; // ax
  int result; // eax
  _DWORD *v10; // ecx

  v4 = 0;
  a2[3] = a1;
  a2[2] = a2 + 1;
  a2[1] = a2 + 1;
  v5 = a2 + 18;
  *a2 = 0;
  v6 = 12;
  do
  {
    *(v5 - 1) = 0;
    *v5 = 6;
    v5 += 8;
    --v6;
  }
  while ( v6 );
  v7 = (char *)a2 + 447;
  do
  {
    v8 = ((unsigned __int16)RtlpBucketBlockSizes[v4] >> 3) + 1;
    *(v7 - 1) = v4;
    *(_WORD *)(v7 - 3) = v8;
    *v7 ^= (*v7 ^ (2 * dword_4B3A4888)) & 6;
    ++v4;
    v7 += 4;
  }
  while ( v4 < 0x81 );
  if ( (a3 & 1) != 0 )
  {
    result = 1;
  }
  else
  {
    result = RtlpAffinityState;
    if ( !RtlpAffinityState )
      return result;
  }
  v10 = a2 + 503;
  do
  {
    *v10 = a2;
    v10 += 6;
    --result;
  }
  while ( result );
  return result;
}
