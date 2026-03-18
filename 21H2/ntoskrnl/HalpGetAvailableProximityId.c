/*
 * XREFs of HalpGetAvailableProximityId @ 0x140B4C370
 * Callers:
 *     HalpNumaInitializeStaticConfiguration @ 0x140AFA274 (HalpNumaInitializeStaticConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetAvailableProximityId()
{
  unsigned int v0; // r8d
  unsigned int v1; // edx
  unsigned int v2; // r9d
  __int64 v3; // rbx
  unsigned int *v4; // r10
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx

  v0 = 0;
  v1 = -1;
  v2 = *(_DWORD *)(HalpNumaConfig + 56);
  if ( !v2 )
    return v1 - 1;
  v3 = v2;
  v4 = *(unsigned int **)(HalpNumaConfig + 24);
  do
  {
    v5 = *v4;
    v6 = *v4++;
    if ( v1 <= v5 )
      v6 = v1;
    v1 = v6;
    if ( v0 >= v5 )
      v5 = v0;
    v0 = v5;
    --v3;
  }
  while ( v3 );
  if ( v6 )
    return v1 - 1;
  if ( v5 != -1 )
    return v5 + 1;
  v8 = -2;
  while ( 2 )
  {
    v9 = 0LL;
    while ( v8 != *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 24) + 4 * v9) )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v2 )
      {
        if ( (_DWORD)v9 == v2 )
          return v8;
        break;
      }
    }
    if ( --v8 )
      continue;
    break;
  }
  return 0LL;
}
