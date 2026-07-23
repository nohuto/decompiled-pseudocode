/*
 * XREFs of HalpInitializeConfigurationFromMadt @ 0x140A64F94
 * Callers:
 *     HalpNumaInitializeStaticConfiguration @ 0x140A64EE0 (HalpNumaInitializeStaticConfiguration.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140216340 (HalpAcpiGetTable.c)
 *     HalpParseChannelCount @ 0x1403BBDC4 (HalpParseChannelCount.c)
 *     HalpChannelInitializeStaticConfiguration @ 0x140A65240 (HalpChannelInitializeStaticConfiguration.c)
 *     HalpAllocateNumaConfigData @ 0x140A654EC (HalpAllocateNumaConfigData.c)
 */

__int64 __fastcall HalpInitializeConfigurationFromMadt(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // esi
  __int64 result; // rax
  char *v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  char *v7; // rax
  char v8; // r8
  unsigned int v9; // edi
  int v10; // eax
  unsigned __int64 v11; // r8
  unsigned int v12; // r9d
  _DWORD *v13; // rdi
  unsigned __int64 v14; // rdx
  _DWORD *v15; // r11
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  unsigned __int64 i; // rcx
  _DWORD *v21; // rdi
  unsigned __int64 j; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  unsigned __int16 v26; // di
  _QWORD *v27; // r9
  int v28; // ecx
  __int64 v29; // rdx
  unsigned int v30; // r10d
  __int64 v31; // r11
  __int64 v32; // rcx
  int v33; // eax
  unsigned int v34; // edi
  __int64 v35; // r9
  unsigned int v36; // eax
  unsigned int v37; // eax
  __int64 v38; // rdx
  int v39; // edi
  unsigned int v40; // r9d
  __int64 v41; // r10
  __int64 v42; // rcx
  bool v43; // zf

  v1 = 0;
  v2 = a1;
  result = HalpAcpiGetTable(a1, 1128878145, 0, 0);
  if ( !result )
    return result;
  v4 = (char *)(result + 44);
  v5 = result + *(unsigned int *)(result + 4);
  if ( result + 46 > v5 )
    goto LABEL_11;
  do
  {
    v6 = (unsigned __int8)v4[1];
    if ( (unsigned __int8)v6 < 2u || (unsigned __int64)&v4[v6] > v5 )
      break;
    v7 = v4;
    v4 += v6;
    v8 = *v7;
    if ( *v7 )
    {
      if ( v8 != 9 )
      {
        if ( v8 != 11 || (unsigned __int8)v6 < 0x28u )
          continue;
LABEL_53:
        ++v1;
        continue;
      }
      v43 = (_BYTE)v6 == 16;
    }
    else
    {
      v43 = (_BYTE)v6 == 8;
    }
    if ( v43 )
      goto LABEL_53;
  }
  while ( (unsigned __int64)(v4 + 2) <= v5 );
  if ( v1 > 0x500 )
    v1 = 1280;
LABEL_11:
  v9 = (v1 + HalpMaximumGroupSize - 1) / HalpMaximumGroupSize;
  if ( v9 > 0x40 )
  {
    v9 = 64;
    v1 = HalpMaximumGroupSize << 6;
  }
  v10 = HalpParseChannelCount();
  result = HalpAllocateNumaConfigData(v2, v9, v1, 0, v10);
  v11 = HalpNumaConfig;
  if ( HalpNumaConfig )
  {
    *(_DWORD *)(HalpNumaConfig + 60) = v1;
    v12 = 0;
    *(_DWORD *)(v11 + 56) = v9;
    if ( v1 )
    {
      if ( v1 >= 4 )
      {
        v13 = *(_DWORD **)v11;
        v14 = v11 + 8;
        v15 = *(_DWORD **)(v11 + 8);
        v16 = *(_QWORD *)v11 + 4LL * (v1 - 1);
        v17 = (unsigned __int64)&v15[v1 - 1];
        if ( ((unsigned __int64)v15 > v16 || v17 < (unsigned __int64)v13)
          && ((unsigned __int64)v15 > v11 || v17 < v11)
          && ((unsigned __int64)v15 > v14 || v17 < v11 + 8)
          && ((unsigned __int64)v13 > v11 || v16 < v11)
          && ((unsigned __int64)v13 > v14 || v16 < v14) )
        {
          v18 = v1 & 0xFFFFFFFC;
          do
            v12 += 4;
          while ( v12 < v18 );
          v19 = 4LL * v18;
          for ( i = v19 >> 2; i; --i )
            *v13++ = -1;
          v21 = v15;
          for ( j = v19 >> 2; j; --j )
            *v21++ = -1;
        }
      }
      if ( v12 < v1 )
      {
        v23 = (_QWORD *)HalpNumaConfig;
        v24 = 4LL * v12;
        v25 = v1 - v12;
        do
        {
          *(_DWORD *)(v24 + *v23) = -1;
          *(_DWORD *)(v24 + v23[1]) = -1;
          v24 += 4LL;
          --v25;
        }
        while ( v25 );
      }
    }
    v26 = 0;
    if ( *(_DWORD *)(v11 + 56) )
    {
      v27 = (_QWORD *)HalpNumaConfig;
      v28 = 0;
      do
      {
        v29 = v26++;
        *(_DWORD *)(v27[3] + 4 * v29) = v28;
        *(_DWORD *)(v27[4] + 4 * v29) = 0;
        *(_DWORD *)(v27[5] + 4 * v29) = HalpMaximumGroupSize;
        v28 = v26;
      }
      while ( (unsigned int)v26 < *(_DWORD *)(v11 + 56) );
    }
    v30 = HalpMaximumGroupSize;
    v31 = HalpNumaConfig;
    v32 = v26;
    v33 = HalpMaximumGroupSize * (v26 - 1);
    v34 = 0;
    *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 40) + 4 * v32 - 4) = v1 - v33;
    if ( v1 )
    {
      v35 = 0LL;
      do
      {
        v32 = *(_QWORD *)(v31 + 16);
        v36 = v34++;
        *(_DWORD *)(v35 + v32) = v36 / v30;
        v35 += 4LL;
      }
      while ( v34 < v1 );
    }
    v37 = *(_DWORD *)(v11 + 56);
    v38 = 0LL;
    if ( v37 )
    {
      v39 = 0;
      do
      {
        v40 = 0;
        v32 = v37;
        if ( v37 )
        {
          v41 = HalpNumaConfig;
          do
          {
            v42 = v40 + v39 * *(_DWORD *)(v41 + 64);
            ++v40;
            *(_WORD *)(*(_QWORD *)(v41 + 48) + 2 * v42) = 0;
            v32 = *(unsigned int *)(v11 + 56);
          }
          while ( v40 < (unsigned int)v32 );
        }
        LOWORD(v38) = v38 + 1;
        v37 = v32;
        v39 = (unsigned __int16)v38;
      }
      while ( (unsigned __int16)v38 < (unsigned int)v32 );
    }
    return HalpChannelInitializeStaticConfiguration(v32, v38, v11);
  }
  return result;
}
