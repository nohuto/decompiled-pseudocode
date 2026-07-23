/*
 * XREFs of KiUpdateXSaveSizeAndVolatileFeatures @ 0x1409A2780
 * Callers:
 *     KiInitializeXSave @ 0x14099CC40 (KiInitializeXSave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateXSaveSizeAndVolatileFeatures(__int64 *a1)
{
  unsigned __int64 v1; // r8
  unsigned int v2; // r11d
  __int64 v4; // r10
  unsigned __int64 k; // r9
  unsigned int v6; // r11d
  __int64 result; // rax
  unsigned int v8; // r10d
  unsigned __int64 v9; // r9
  unsigned __int64 i; // r8
  unsigned int v11; // ecx
  unsigned __int64 v12; // r9
  unsigned __int64 j; // rbx
  unsigned int v14; // r10d

  v1 = *a1;
  *((_DWORD *)a1 + 4) = 576;
  v2 = 2;
  *((_DWORD *)a1 + 138) = 576;
  if ( (*((_DWORD *)a1 + 5) & 2) != 0 )
  {
    v8 = 2;
    v9 = (unsigned __int64)a1[68] >> 2;
    for ( i = v1 >> 2; i; i >>= 1 )
    {
      if ( v8 >= 0x40 )
        break;
      if ( (i & 1) != 0 )
      {
        v11 = *((_DWORD *)a1 + 4);
        if ( (v9 & 1) != 0 )
        {
          v11 = (v11 + 63) & 0xFFFFFFC0;
          *((_DWORD *)a1 + 4) = v11;
        }
        LODWORD(a1[v8 + 3]) = v11;
        *((_DWORD *)a1 + 4) += HIDWORD(a1[v8 + 3]);
      }
      v9 >>= 1;
      ++v8;
    }
    v1 = *a1;
    v12 = (*a1 | (unsigned __int64)a1[67]) >> 2;
    for ( j = (unsigned __int64)a1[68] >> 2; v12; v12 >>= 1 )
    {
      if ( v2 >= 0x40 )
        break;
      if ( (v12 & 1) != 0 )
      {
        v14 = *((_DWORD *)a1 + 138);
        if ( (j & 1) != 0 )
        {
          v14 = (v14 + 63) & 0xFFFFFFC0;
          *((_DWORD *)a1 + 138) = v14;
        }
        *((_DWORD *)a1 + 138) = v14 + *((_DWORD *)a1 + v2 + 139);
      }
      j >>= 1;
      ++v2;
    }
  }
  else
  {
    v4 = 0LL;
    for ( k = v1; k; k >>= 1 )
    {
      if ( (unsigned int)v4 >= 0x40 )
        break;
      if ( (k & 1) != 0 )
      {
        v6 = HIDWORD(a1[v4 + 3]) + LODWORD(a1[v4 + 3]);
        if ( *((_DWORD *)a1 + 4) < v6 )
          *((_DWORD *)a1 + 4) = v6;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    *((_DWORD *)a1 + 138) = *((_DWORD *)a1 + 4);
  }
  result = a1[67] & 0x800;
  a1[1] = v1 & 0xBFFFFFFFFFFFFFEFuLL;
  a1[102] = result;
  return result;
}
