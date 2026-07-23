/*
 * XREFs of Normalization__Normalize @ 0x140918534
 * Callers:
 *     RtlpNormalizeStringWorker @ 0x140919064 (RtlpNormalizeStringWorker.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     NormBuffer__Append @ 0x14058DC4C (NormBuffer__Append.c)
 *     Normalization__GuessCharCountBySize @ 0x140917E4C (Normalization__GuessCharCountBySize.c)
 *     Normalization__NormalizeCharacter @ 0x1409186F0 (Normalization__NormalizeCharacter.c)
 */

__int64 __fastcall Normalization__Normalize(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  __int64 v7; // r15
  __int64 v10; // r8
  unsigned int v11; // r11d
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // r10d
  __int64 v15; // rbx
  int v16; // ecx
  int v17; // r9d
  int v18; // r10d
  int v19; // eax
  _QWORD v21[16]; // [rsp+28h] [rbp-49h] BYREF

  v7 = a3;
  memset(v21, 0, 0x78uLL);
  if ( !a2 || !a4 || !a6 )
    return 3221225485LL;
  LODWORD(v21[7]) = 0;
  LOWORD(v21[9]) = 0;
  LODWORD(v21[11]) = 0;
  WORD2(v21[11]) = 0;
  *a6 = 0;
  v21[1] = a2 + 2 * v7;
  v11 = 0;
  v21[6] = __PAIR64__(v7, a5);
  v21[0] = a2;
  v21[8] = a4 - 2;
  v21[3] = a4;
  v21[4] = a4 + 2LL * (int)a5;
  v21[5] = a4;
  v21[2] = a2;
  v21[10] = a4;
  v21[14] = a1;
  while ( a2 != v21[1] )
  {
    if ( v11 )
      goto LABEL_17;
    v12 = *(unsigned __int16 *)a2;
    v13 = *(unsigned __int16 *)a2;
    v21[2] = a2 + 2;
    if ( (signed int)v12 < *(_DWORD *)(a1 + 28)
      || (LOBYTE(v10) = *(_BYTE *)(((unsigned __int64)v12 >> 7) + *(_QWORD *)(a1 + 32)), !(_BYTE)v10)
      || (_BYTE)v10 == 0xFB && *(_BYTE *)(a1 + 113) )
    {
      if ( !NormBuffer__Append((__int64)v21, v13) )
      {
        a2 = v21[2];
        v11 = -1073741789;
        break;
      }
    }
    else
    {
      v11 = Normalization__NormalizeCharacter(a1, v13, v10, v21);
    }
    a2 = v21[2];
  }
  if ( !v11 )
  {
    a2 = (__int64)(v21[5] - v21[3]) >> 1;
    goto LABEL_24;
  }
LABEL_17:
  if ( v11 == -1073741789 )
  {
    v14 = ((v21[1] - a2) >> 1) + 1;
    v15 = (a2 - v21[0]) >> 1;
    if ( !(_DWORD)v15 )
      LODWORD(v15) = 1;
    v16 = Normalization__GuessCharCountBySize(a1, v14);
    v19 = v18 * v17 / (int)v15;
    if ( v19 <= v16 )
      v19 = v16;
    LODWORD(a2) = v17 + v19 + (v19 >> 3);
  }
  else
  {
    LODWORD(a2) = ((a2 - v21[0]) >> 1) - 1;
  }
LABEL_24:
  *a6 = a2;
  return v11;
}
