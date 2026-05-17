/*
 * XREFs of _RtlpWnfMarkFailure@12 @ 0x4B33C616
 * Callers:
 *     _RtlpWnfWalkUserSubscriptionList@12 @ 0x4B2DEE18 (_RtlpWnfWalkUserSubscriptionList@12.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpWnfMarkFailure(_DWORD *a1, int a2, unsigned int a3)
{
  int v4; // eax
  unsigned int v5; // eax
  bool v6; // zf
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // kr00_8
  __int64 v10; // rax
  __int64 result; // rax

  if ( a1[23] >= a3 )
  {
    v4 = a1[20];
  }
  else
  {
    v4 = 0;
    a1[23] = a3;
    a1[20] = 0;
  }
  if ( a2 == -1073741801 )
  {
    v6 = v4 == 0;
    v7 = dword_4B3A664C;
    if ( v6 )
    {
      v5 = *(_DWORD *)(dword_4B3A664C + 32);
    }
    else
    {
      v8 = 2 * a1[21];
      a1[21] = v8;
      v5 = *(_DWORD *)(v7 + 40);
      if ( v8 <= v5 )
        goto LABEL_13;
    }
  }
  else
  {
    if ( a2 != -1073741267 || v4 )
      goto LABEL_13;
    v5 = *(_DWORD *)(dword_4B3A664C + 36);
  }
  a1[21] = v5;
LABEL_13:
  while ( MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010] )
    _mm_pause();
  v9 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  v10 = 10000LL * (unsigned int)a1[21];
  a1[16] = 1;
  result = v9 + v10;
  a1[18] = result;
  ++a1[20];
  a1[19] = HIDWORD(result);
  return result;
}
