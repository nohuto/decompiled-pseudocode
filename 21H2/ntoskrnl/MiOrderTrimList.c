/*
 * XREFs of MiOrderTrimList @ 0x14053B880
 * Callers:
 *     MiProcessWorkingSets @ 0x1402AC4A0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiComputeAgeDistribution @ 0x140224DFC (MiComputeAgeDistribution.c)
 *     MiUpdateClaimDistribution @ 0x140224F70 (MiUpdateClaimDistribution.c)
 *     MiIsStoreProcess @ 0x140258450 (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiWorkingSetVeryLarge @ 0x1405309C4 (MiWorkingSetVeryLarge.c)
 */

__int64 __fastcall MiOrderTrimList(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r15d
  _QWORD *v4; // rsi
  __int64 result; // rax
  __int64 v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rcx
  _QWORD *v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // rdi
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  char v17; // r15
  unsigned int i; // edx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // ecx
  _QWORD *v23; // rax
  unsigned int v24; // r8d
  __int64 v25; // rax
  _QWORD *v26; // r9
  _QWORD *v27; // rcx
  _QWORD *v28; // rdx
  __int64 v29; // rdi
  unsigned __int64 v30; // [rsp+20h] [rbp-158h]
  unsigned __int64 Src[8]; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v33[24]; // [rsp+70h] [rbp-108h] BYREF

  v2 = a2;
  memset(Src, 0, sizeof(Src));
  v4 = (_QWORD *)(a1 + 6856);
  if ( (_QWORD *)*v4 == v4 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 6848);
  v7 = v33;
  v8 = 0LL;
  v9 = 0LL;
  v30 = 0LL;
  v10 = 12LL;
  do
  {
    v7[1] = v7;
    *v7 = v7;
    v7 += 2;
    --v10;
  }
  while ( v10 );
  while ( 1 )
  {
    v11 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    if ( (_QWORD *)v11[1] != v4 || (v12 = *v11, *(_QWORD **)(*v11 + 8LL) != v11) )
LABEL_34:
      __fastfail(3u);
    *v4 = v12;
    v13 = v11 - 3;
    *(_QWORD *)(v12 + 8) = v4;
    MiUpdateClaimDistribution((__int64)(v11 - 3), Src);
    if ( v2 )
    {
      v14 = 0LL;
      if ( v2 < 8 )
      {
        v15 = 8 - v2;
        v16 = &v13[v2 + 5];
        do
        {
          v14 += *v16++;
          --v15;
        }
        while ( v15 );
      }
    }
    else
    {
      v14 = (v13[17] - v13[14]) & -(__int64)(v13[14] < v13[17]);
    }
    v17 = *((_BYTE *)v13 + 184);
    if ( (v17 & 7) == 0 && (unsigned int)MiIsStoreProcess((__int64)(v11 - 211)) )
    {
      i = 11;
LABEL_16:
      v9 = v30;
      goto LABEL_17;
    }
    if ( *((_BYTE *)v13 + 186) == 2 && !MiWorkingSetVeryLarge((__int64)(v11 - 3)) )
    {
      i = 10;
      goto LABEL_16;
    }
    if ( v14 && (v17 >= 0 || v13[17] > v13[14]) )
    {
      for ( i = 0; i < 9; ++i )
      {
        if ( v14 >= 0x100000uLL >> i )
          break;
      }
    }
    else
    {
      i = 11;
    }
    if ( i >= 0xA )
      goto LABEL_16;
    v21 = -1LL;
    if ( v30 + v14 >= v30 )
      v21 = v30 + v14;
    v9 = v21;
    v30 = v21;
LABEL_17:
    v19 = &v33[2 * i];
    v20 = *v19;
    if ( *(_QWORD **)(*v19 + 8LL) != v19 )
      goto LABEL_34;
    v2 = a2;
    *v11 = v20;
    v11[1] = v19;
    *(_QWORD *)(v20 + 8) = v11;
    *v19 = v11;
  }
  v22 = 0;
  v23 = v33;
  while ( 1 )
  {
    v24 = v22 + 1;
    if ( (_QWORD *)*v23 != v23 )
      break;
    v23 += 2;
    ++v22;
    if ( v24 >= 0xC )
      goto LABEL_45;
  }
  v25 = v33[2 * v22];
  *v4 = v25;
  *(_QWORD *)(v25 + 8) = v4;
  if ( v24 < 0xC )
  {
    v26 = &v33[2 * v24];
    do
    {
      if ( (_QWORD *)*v26 != v26 )
      {
        *(_QWORD *)v33[2 * v22 + 1] = *v26;
        *(_QWORD *)(*v26 + 8LL) = v33[2 * v22 + 1];
        v22 = v24;
      }
      ++v24;
      v26 += 2;
    }
    while ( v24 < 0xC );
  }
  v27 = (_QWORD *)v33[2 * v22 + 1];
  *(_QWORD *)(a1 + 6864) = v27;
  *v27 = v4;
LABEL_45:
  memmove((void *)(v6 + 2416), Src, 0x40uLL);
  v28 = (_QWORD *)(v6 + 2464);
  v29 = 2LL;
  do
  {
    v8 += *v28++;
    --v29;
  }
  while ( v29 );
  *(_QWORD *)(v6 + 2408) = v8;
  *(_WORD *)(v6 + 2346) = MiComputeAgeDistribution(a1, 0);
  result = v9;
  *(_BYTE *)(v6 + 54) = 1;
  return result;
}
