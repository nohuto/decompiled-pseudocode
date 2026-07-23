/*
 * XREFs of ComputeNameLength @ 0x1800E6028
 * Callers:
 *     PfxFindPrefix @ 0x1800E60B0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1800E61B0 (PfxInsertPrefix.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeNameLength(unsigned __int16 *a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // edx
  unsigned int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // eax
  _BYTE *v8; // rax
  __int64 v9; // r9
  unsigned int v10; // ecx

  v1 = *a1 - 1;
  v2 = 1;
  if ( NlsMbCodePageTag )
  {
    v3 = 0;
    if ( *a1 != 1 )
    {
      v4 = *((_QWORD *)a1 + 1);
      do
      {
        v5 = *(unsigned __int8 *)(v3 + v4);
        if ( NlsLeadByteInfoTable[v5] )
        {
          v6 = 2;
        }
        else
        {
          v7 = v2 + 1;
          if ( (_BYTE)v5 != 92 )
            v7 = v2;
          v2 = v7;
          v6 = 1;
        }
        v3 += v6;
      }
      while ( v3 < v1 );
    }
  }
  else if ( *a1 != 1 )
  {
    v8 = (_BYTE *)*((_QWORD *)a1 + 1);
    v9 = v1;
    do
    {
      v10 = v2 + 1;
      if ( *v8 != 92 )
        v10 = v2;
      ++v8;
      v2 = v10;
      --v9;
    }
    while ( v9 );
  }
  return v2;
}
