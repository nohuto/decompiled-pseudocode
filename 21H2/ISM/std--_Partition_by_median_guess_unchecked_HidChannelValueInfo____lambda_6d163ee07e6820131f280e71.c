/*
 * XREFs of std::_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A5628
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A5EF4 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     std::_Guess_median_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A5018 (std--_Guess_median_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned int *v8; // rdx
  unsigned int *v9; // rcx
  unsigned int v10; // ecx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  __int128 v15; // xmm5
  __int128 v16; // xmm6
  __int64 v17; // xmm2_8
  bool v18; // zf
  unsigned __int64 v19; // r8
  __int128 v20; // xmm3
  __int128 v21; // xmm4
  __int128 v22; // xmm5
  __int128 v23; // xmm6
  __int64 v24; // xmm2_8
  __int128 v25; // xmm3
  __int128 v26; // xmm4
  __int128 v27; // xmm5
  __int128 v28; // xmm6
  __int64 v29; // xmm2_8
  __int128 v30; // xmm3
  __int128 v31; // xmm4
  __int128 v32; // xmm5
  __int128 v33; // xmm6
  __int64 v34; // xmm2_8
  __int128 v35; // xmm3
  __int128 v36; // xmm4
  __int128 v37; // xmm5
  __int128 v38; // xmm6
  __int64 v39; // xmm2_8
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  __int128 v42; // xmm5
  __int128 v43; // xmm6
  __int64 v44; // xmm2_8
  __int128 v45; // xmm3
  __int128 v46; // xmm4
  __int128 v47; // xmm5
  __int128 v48; // xmm6
  __int64 v49; // xmm2_8

  v6 = a2 + 72 * (((__int64)(a3 - a2) / 72) >> 1);
  std::_Guess_median_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(a2, v6, a3 - 72);
  v7 = v6 + 72;
  v8 = (unsigned int *)v6;
  if ( a2 < v6 )
  {
    v9 = (unsigned int *)v6;
    do
    {
      v8 = v9;
      if ( *(_DWORD *)(v6 - 72) < *(_DWORD *)v6 )
        break;
      if ( *(_DWORD *)(v6 - 72) > *(_DWORD *)v6 )
        break;
      v6 = (unsigned __int64)(v9 - 18);
      v9 = (unsigned int *)v6;
      v8 = (unsigned int *)v6;
    }
    while ( a2 < v6 );
  }
  if ( v7 < a3 )
  {
    v10 = *v8;
    do
    {
      if ( *(_DWORD *)v7 < v10 )
        break;
      if ( *(_DWORD *)v7 > v10 )
        break;
      v7 += 72LL;
    }
    while ( v7 < a3 );
  }
  v11 = v7;
  v12 = v6;
  while ( 1 )
  {
    while ( v11 < a3 )
    {
      if ( *(_DWORD *)v6 < *(_DWORD *)v11 )
        goto LABEL_17;
      if ( *(_DWORD *)v6 > *(_DWORD *)v11 )
        break;
      if ( v7 != v11 )
      {
        v13 = *(_OWORD *)v7;
        v14 = *(_OWORD *)(v7 + 16);
        v15 = *(_OWORD *)(v7 + 32);
        v16 = *(_OWORD *)(v7 + 48);
        v17 = *(_QWORD *)(v7 + 64);
        *(_OWORD *)v7 = *(_OWORD *)v11;
        *(_OWORD *)(v7 + 16) = *(_OWORD *)(v11 + 16);
        *(_OWORD *)(v7 + 32) = *(_OWORD *)(v11 + 32);
        *(_OWORD *)(v7 + 48) = *(_OWORD *)(v11 + 48);
        *(_QWORD *)(v7 + 64) = *(_QWORD *)(v11 + 64);
        *(_OWORD *)v11 = v13;
        *(_OWORD *)(v11 + 16) = v14;
        *(_OWORD *)(v11 + 32) = v15;
        *(_OWORD *)(v11 + 48) = v16;
        *(_QWORD *)(v11 + 64) = v17;
      }
      v7 += 72LL;
LABEL_17:
      v11 += 72LL;
    }
    v18 = v12 == a2;
    if ( v12 > a2 )
    {
      v19 = v12 - 72;
      do
      {
        if ( *(_DWORD *)v19 >= *(_DWORD *)v6 )
        {
          if ( *(_DWORD *)v19 > *(_DWORD *)v6 )
            break;
          v6 -= 72LL;
          if ( v6 != v19 )
          {
            v20 = *(_OWORD *)v6;
            v21 = *(_OWORD *)(v6 + 16);
            v22 = *(_OWORD *)(v6 + 32);
            v23 = *(_OWORD *)(v6 + 48);
            v24 = *(_QWORD *)(v6 + 64);
            *(_OWORD *)v6 = *(_OWORD *)v19;
            *(_OWORD *)(v6 + 16) = *(_OWORD *)(v19 + 16);
            *(_OWORD *)(v6 + 32) = *(_OWORD *)(v19 + 32);
            *(_OWORD *)(v6 + 48) = *(_OWORD *)(v19 + 48);
            *(_QWORD *)(v6 + 64) = *(_QWORD *)(v19 + 64);
            *(_OWORD *)v19 = v20;
            *(_OWORD *)(v19 + 16) = v21;
            *(_OWORD *)(v19 + 32) = v22;
            *(_OWORD *)(v19 + 48) = v23;
            *(_QWORD *)(v19 + 64) = v24;
          }
        }
        v12 -= 72LL;
        v19 -= 72LL;
      }
      while ( a2 < v12 );
      v18 = v12 == a2;
    }
    if ( v18 )
      break;
    v12 -= 72LL;
    if ( v11 != a3 )
    {
      v45 = *(_OWORD *)v11;
      v46 = *(_OWORD *)(v11 + 16);
      v47 = *(_OWORD *)(v11 + 32);
      v48 = *(_OWORD *)(v11 + 48);
      v49 = *(_QWORD *)(v11 + 64);
      *(_OWORD *)v11 = *(_OWORD *)v12;
      *(_OWORD *)(v11 + 16) = *(_OWORD *)(v12 + 16);
      *(_OWORD *)(v11 + 32) = *(_OWORD *)(v12 + 32);
      *(_OWORD *)(v11 + 48) = *(_OWORD *)(v12 + 48);
      *(_QWORD *)(v11 + 64) = *(_QWORD *)(v12 + 64);
      *(_OWORD *)v12 = v45;
      *(_OWORD *)(v12 + 16) = v46;
      *(_OWORD *)(v12 + 32) = v47;
      *(_OWORD *)(v12 + 48) = v48;
      *(_QWORD *)(v12 + 64) = v49;
      goto LABEL_17;
    }
    v6 -= 72LL;
    if ( v12 != v6 )
    {
      v35 = *(_OWORD *)v12;
      v36 = *(_OWORD *)(v12 + 16);
      v37 = *(_OWORD *)(v12 + 32);
      v38 = *(_OWORD *)(v12 + 48);
      v39 = *(_QWORD *)(v12 + 64);
      *(_OWORD *)v12 = *(_OWORD *)v6;
      *(_OWORD *)(v12 + 16) = *(_OWORD *)(v6 + 16);
      *(_OWORD *)(v12 + 32) = *(_OWORD *)(v6 + 32);
      *(_OWORD *)(v12 + 48) = *(_OWORD *)(v6 + 48);
      *(_QWORD *)(v12 + 64) = *(_QWORD *)(v6 + 64);
      *(_OWORD *)v6 = v35;
      *(_OWORD *)(v6 + 16) = v36;
      *(_OWORD *)(v6 + 32) = v37;
      *(_OWORD *)(v6 + 48) = v38;
      *(_QWORD *)(v6 + 64) = v39;
    }
    v40 = *(_OWORD *)v6;
    v7 -= 72LL;
    v41 = *(_OWORD *)(v6 + 16);
    v42 = *(_OWORD *)(v6 + 32);
    v43 = *(_OWORD *)(v6 + 48);
    v44 = *(_QWORD *)(v6 + 64);
    *(_OWORD *)v6 = *(_OWORD *)v7;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v7 + 16);
    *(_OWORD *)(v6 + 32) = *(_OWORD *)(v7 + 32);
    *(_OWORD *)(v6 + 48) = *(_OWORD *)(v7 + 48);
    *(_QWORD *)(v6 + 64) = *(_QWORD *)(v7 + 64);
    *(_OWORD *)v7 = v40;
    *(_OWORD *)(v7 + 16) = v41;
    *(_OWORD *)(v7 + 32) = v42;
    *(_OWORD *)(v7 + 48) = v43;
    *(_QWORD *)(v7 + 64) = v44;
  }
  if ( v11 != a3 )
  {
    if ( v7 != v11 )
    {
      v25 = *(_OWORD *)v6;
      v26 = *(_OWORD *)(v6 + 16);
      v27 = *(_OWORD *)(v6 + 32);
      v28 = *(_OWORD *)(v6 + 48);
      v29 = *(_QWORD *)(v6 + 64);
      *(_OWORD *)v6 = *(_OWORD *)v7;
      *(_OWORD *)(v6 + 16) = *(_OWORD *)(v7 + 16);
      *(_OWORD *)(v6 + 32) = *(_OWORD *)(v7 + 32);
      *(_OWORD *)(v6 + 48) = *(_OWORD *)(v7 + 48);
      *(_QWORD *)(v6 + 64) = *(_QWORD *)(v7 + 64);
      *(_OWORD *)v7 = v25;
      *(_OWORD *)(v7 + 16) = v26;
      *(_OWORD *)(v7 + 32) = v27;
      *(_OWORD *)(v7 + 48) = v28;
      *(_QWORD *)(v7 + 64) = v29;
    }
    v7 += 72LL;
    v30 = *(_OWORD *)v6;
    v31 = *(_OWORD *)(v6 + 16);
    v32 = *(_OWORD *)(v6 + 32);
    v33 = *(_OWORD *)(v6 + 48);
    v34 = *(_QWORD *)(v6 + 64);
    *(_OWORD *)v6 = *(_OWORD *)v11;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v11 + 16);
    *(_OWORD *)(v6 + 32) = *(_OWORD *)(v11 + 32);
    *(_OWORD *)(v6 + 48) = *(_OWORD *)(v11 + 48);
    *(_QWORD *)(v6 + 64) = *(_QWORD *)(v11 + 64);
    v6 += 72LL;
    *(_OWORD *)v11 = v30;
    *(_OWORD *)(v11 + 16) = v31;
    *(_OWORD *)(v11 + 32) = v32;
    *(_OWORD *)(v11 + 48) = v33;
    *(_QWORD *)(v11 + 64) = v34;
    goto LABEL_17;
  }
  *a1 = v6;
  a1[1] = v7;
  return a1;
}
