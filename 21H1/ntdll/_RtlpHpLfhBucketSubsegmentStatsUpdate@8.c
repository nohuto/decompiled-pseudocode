/*
 * XREFs of _RtlpHpLfhBucketSubsegmentStatsUpdate@8 @ 0x4B3761A2
 * Callers:
 *     _RtlpHpLfhSubsegmentCreate@12 @ 0x4B376F41 (_RtlpHpLfhSubsegmentCreate@12.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall RtlpHpLfhBucketSubsegmentStatsUpdate(volatile signed __int32 *a1, int a2)
{
  int v2; // ebx
  signed __int32 v3; // eax
  BOOL v4; // edi
  int v5; // esi
  signed __int32 v6; // ecx
  char v7; // al
  _BYTE *v8; // eax
  int v9; // edx
  char v10; // al
  _BYTE *v11; // eax
  int v12; // edx
  signed __int32 v16; // [esp+14h] [ebp-4h] BYREF

  v2 = a2;
  v3 = *a1;
  v4 = 0;
  v5 = a2 & 1;
  v16 = *a1;
  do
  {
    v6 = v3;
    if ( *((unsigned __int8 *)&v16 + 2 * v5) == v2 )
    {
      v7 = *((_BYTE *)&v16 + 2 * v5 + 1);
      if ( v7 == 16 )
      {
        v8 = (char *)&v16 + 1;
        v9 = 2;
        do
        {
          *v8 >>= 1;
          v8 += 2;
          --v9;
        }
        while ( v9 );
        v7 = *((_BYTE *)&v16 + 2 * v5 + 1);
      }
      v10 = v7 + 1;
      v4 = (unsigned __int8)v10 > 8u;
    }
    else
    {
      v11 = (char *)&v16 + 1;
      v12 = 2;
      do
      {
        *v11 >>= 1;
        v11 += 2;
        --v12;
      }
      while ( v12 );
      *((_BYTE *)&v16 + 2 * v5) = v2;
      v10 = 1;
    }
    *((_BYTE *)&v16 + 2 * v5 + 1) = v10;
    v3 = _InterlockedCompareExchange(a1, v16, v6);
    v2 = a2;
    v16 = v3;
  }
  while ( v3 != v6 );
  return v4;
}
