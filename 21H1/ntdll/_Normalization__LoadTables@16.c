/*
 * XREFs of _Normalization__LoadTables@16 @ 0x4B367BB7
 * Callers:
 *     _RtlpGetNormalization@8 @ 0x4B375A88 (_RtlpGetNormalization@8.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _Normalization__LoadClassMapExceptions@4 @ 0x4B367B68 (_Normalization__LoadClassMapExceptions@4.c)
 */

int __userpurge Normalization__LoadTables@<eax>(unsigned __int16 *a1@<edx>, char a2@<ch>, unsigned int a3, _DWORD *a4)
{
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned __int16 *v8; // eax
  int result; // eax
  size_t v10; // [esp-4h] [ebp-10h]

  LODWORD(v10) = 68;
  memset(a4, 0, v10);
  v6 = a3 >> 1;
  if ( a3 >> 1 < a1[26] )
    return -1073741672;
  if ( v6 < a1[27] )
    return -1073741672;
  v7 = a1[28];
  if ( v6 < v7 || v6 < a1[29] || v6 < a1[30] || v6 < a1[31] || v6 < a1[32] || v6 < a1[33] || v7 - a1[27] != 4352 )
    return -1073741672;
  a4[2] = a3;
  a4[1] = a1;
  *a4 = a1[20];
  a4[3] = a1[21];
  a4[4] = a1[22];
  a4[5] = &a1[a1[27]];
  a4[6] = &a1[a1[28]];
  a4[8] = a1[23];
  a4[9] = &a1[a1[29]];
  a4[10] = &a1[a1[30]];
  a4[11] = &a1[a1[31]];
  v8 = (unsigned __int16 *)a1[24];
  a4[12] = v8;
  if ( v8 )
  {
    *((_BYTE *)a4 + 60) = 0;
    a4[13] = &a1[a1[32]];
    v8 = &a1[a1[33]];
  }
  else
  {
    *((_BYTE *)a4 + 60) = 1;
    a4[13] = 0;
  }
  a4[14] = v8;
  a4[7] = &a1[a1[26]];
  Normalization__LoadClassMapExceptions((int)a4);
  result = 0;
  *((_BYTE *)a4 + 61) = (a2 & 1) == 0;
  return result;
}
