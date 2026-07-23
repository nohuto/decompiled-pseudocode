/*
 * XREFs of HvlpSelectVpSet @ 0x1404F38FC
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403B6AB8 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvlpComputeLpComparisonMetrics @ 0x1404F29E0 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x1404F3180 (HvlpLpComparison.c)
 *     HviGetImplementationLimits @ 0x1405BF2C0 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlpSelectVpSet(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  char v4; // r12
  _WORD *v6; // rcx
  __int64 v7; // rdx
  char v8; // al
  unsigned int v9; // ecx
  _DWORD *v10; // rax
  unsigned int v11; // edi
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // r9d
  __int16 *v15; // r11
  __int64 v16; // r8
  unsigned int v17; // r10d
  unsigned __int16 *v18; // rdx
  char v19; // cl
  __int64 v20; // r10
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  unsigned int *v23; // rdx
  __int64 v24; // r14
  int v25; // r15d
  __int64 v26; // rdx
  int v27; // r8d
  _WORD *v28; // rcx
  __int64 v29; // r9
  _DWORD *v30; // rcx
  int v31; // r9d
  __int64 v32; // r10
  unsigned int v33; // r8d
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // eax
  _BYTE *v37; // rcx
  unsigned int v38; // edi
  _BYTE *v39; // rbp
  unsigned int v40; // r9d
  unsigned int v41; // eax
  _BYTE *v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  _BYTE *v45; // rdi
  __int64 v46; // rcx
  char v47; // r13
  unsigned int v48; // edi
  char v49; // al
  int v50; // r8d
  _WORD *i; // rdx
  unsigned int v52; // ecx
  __int128 v54; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v55[64]; // [rsp+40h] [rbp-78h] BYREF

  LODWORD(v2) = 0;
  v3 = a1;
  HvlpMinrootConfigurationError = 0;
  v54 = 0LL;
  v4 = 0;
  HviGetImplementationLimits(&v54);
  if ( (_DWORD)v3 )
  {
    v6 = (_WORD *)(a2 + 8);
    v7 = (unsigned int)v3;
    do
    {
      v6[2] = *v6;
      v8 = 0;
      *(v6 - 4) = 1;
      if ( (HvlpRootFlags & 0x800) == 0 )
        v8 = *((_BYTE *)v6 - 6);
      *((_BYTE *)v6 - 5) = v8;
      v6 += 20;
      --v7;
    }
    while ( v7 );
  }
  if ( (HvlpFlags & 0x800000) == 0 )
    goto LABEL_59;
  if ( (HvlpRootFlags & 0x800) != 0 )
    goto LABEL_59;
  v9 = 0;
  if ( !(_DWORD)v3 )
    goto LABEL_59;
  v10 = (_DWORD *)(a2 + 28);
  while ( !*((_BYTE *)v10 - 26) || !*v10 )
  {
    ++v9;
    v10 += 10;
    if ( v9 >= (unsigned int)v3 )
      goto LABEL_59;
  }
  v4 = 1;
  if ( (KeRootProcPerNodeSpecified & 1) != 0 )
  {
    KeRootProcPerNodeSpecified = 0;
    HvlpMinrootConfigurationError = 1;
  }
  if ( (KeRootProcPerCoreSpecified & 1) != 0 )
  {
    KeRootProcPerCoreSpecified = 0;
    HvlpMinrootConfigurationError = 1;
  }
  if ( (KeRootProcSpecified & 1) != 0 )
  {
    KeRootProcSpecified = 0;
    HvlpMinrootConfigurationError = 1;
  }
  v11 = KeRootProcNumaNodesSpecified;
  if ( KeRootProcNumaNodesSpecified )
  {
    v12 = 0;
    do
    {
      if ( KeRootProcNumaNodes[v12] == *(_WORD *)(a2 + 8) )
        break;
      ++v12;
    }
    while ( v12 < KeRootProcNumaNodesSpecified );
    if ( v12 == KeRootProcNumaNodesSpecified )
    {
      v11 = 0;
      KeRootProcNumaNodesSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
  }
  if ( !KeRootProcSpecified )
    goto LABEL_48;
  memset(v55, 0, sizeof(v55));
  v13 = 0;
  if ( !v11 )
    v11 = (unsigned __int16)KeNumberNodes;
  v14 = 0;
  if ( !v11 )
  {
LABEL_44:
    if ( KeRootProcNumaNodesSpecified )
    {
      KeRootProcNumaNodesSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
    goto LABEL_48;
  }
  v15 = KeRootProcNumaNodes;
  do
  {
    if ( KeRootProcNumaNodesSpecified )
    {
      v16 = (unsigned __int16)*v15;
      if ( (unsigned int)v16 >= 0x40 || v55[v16] )
        goto LABEL_42;
      v55[v16] = 1;
    }
    else
    {
      LODWORD(v16) = v14;
    }
    v17 = 0;
    v18 = (unsigned __int16 *)(a2 + 8);
    while ( !*((_BYTE *)v18 - 6) || *v18 != (_DWORD)v16 )
    {
      ++v17;
      v18 += 20;
      if ( v17 >= (unsigned int)v3 )
        goto LABEL_42;
    }
    ++v13;
LABEL_42:
    ++v14;
    ++v15;
  }
  while ( v14 < v11 );
  if ( !v13 )
    goto LABEL_44;
  if ( KeRootProcSpecified <= v13 )
  {
    KeRootProcSpecified = 0;
    HvlpMinrootConfigurationError = 1;
  }
LABEL_48:
  v19 = KeRootProcNumaNodeLpsSpecified;
  if ( KeRootProcNumaNodeLpsSpecified )
  {
    v20 = KeRootProcNumaNodeLps[*(unsigned __int16 *)(a2 + 8)];
    if ( (v20 & 1) == 0 )
    {
      v19 = 0;
      HvlpMinrootConfigurationError = 1;
      KeRootProcNumaNodeLpsSpecified = 0;
    }
    if ( v19 )
    {
      v21 = 1;
      v22 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
      if ( (unsigned int)v3 > 1 )
      {
        v23 = (unsigned int *)(a2 + 76);
        while ( (v22 & *(v23 - 8)) != (v22 & *(_DWORD *)(a2 + 4)) || _bittest64(&v20, *v23) )
        {
          ++v21;
          v23 += 10;
          if ( v21 >= (unsigned int)v3 )
            goto LABEL_59;
        }
        KeRootProcNumaNodeLpsSpecified = 0;
        HvlpMinrootConfigurationError = 1;
      }
    }
  }
LABEL_59:
  v24 = a2 + 1;
  *(_BYTE *)(a2 + 3) = 1;
  *(_BYTE *)(a2 + 1) = 1;
  v25 = 1;
  while ( 1 )
  {
    if ( (_DWORD)v3 )
    {
      v26 = a2;
      v2 = v3;
      do
      {
        if ( *(_BYTE *)v26 )
        {
          if ( *(_BYTE *)(v26 + 1) || !*(_BYTE *)(v26 + 2) || v25 == (_DWORD)v54 )
            goto LABEL_89;
          if ( KeRootProcPerNodeSpecified )
          {
            v27 = 0;
            v28 = (_WORD *)(a2 + 8);
            v29 = v3;
            do
            {
              if ( *((_BYTE *)v28 - 7) && *v28 == *(_WORD *)(v26 + 8) )
                ++v27;
              v28 += 20;
              --v29;
            }
            while ( v29 );
            if ( v27 == KeRootProcPerNodeSpecified )
              goto LABEL_89;
          }
          if ( KeRootProcPerCoreSpecified )
          {
            v30 = (_DWORD *)(a2 + 4);
            v31 = 0;
            v32 = v3;
            v33 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
            do
            {
              if ( *((_BYTE *)v30 - 3) && (v33 & *v30) == (v33 & *(_DWORD *)(v26 + 4)) )
                ++v31;
              v30 += 10;
              --v32;
            }
            while ( v32 );
            if ( v31 == KeRootProcPerCoreSpecified )
              goto LABEL_89;
          }
          if ( KeRootProcNumaNodesSpecified )
          {
            v34 = 0LL;
            while ( KeRootProcNumaNodes[v34] != *(_WORD *)(v26 + 12) )
            {
              v34 = (unsigned int)(v34 + 1);
              if ( (unsigned int)v34 >= KeRootProcNumaNodesSpecified )
                goto LABEL_89;
            }
          }
          if ( KeRootProcSpecified && v25 == KeRootProcSpecified
            || KeRootProcNumaNodeLpsSpecified
            && (v35 = KeRootProcNumaNodeLps[*(unsigned __int16 *)(v26 + 8)],
                !_bittest64(&v35, *(unsigned int *)(v26 + 36))) )
          {
LABEL_89:
            *(_BYTE *)v26 = 0;
          }
        }
        v26 += 40LL;
        --v2;
      }
      while ( v2 );
    }
    v36 = v2;
    if ( (_DWORD)v3 )
    {
      v37 = (_BYTE *)a2;
      do
      {
        if ( *v37 != (_BYTE)v2 )
          break;
        ++v36;
        v37 += 40;
      }
      while ( v36 < (unsigned int)v3 );
    }
    if ( v36 == (_DWORD)v3 )
      break;
    v38 = v2;
    if ( (_DWORD)v3 )
    {
      v39 = (_BYTE *)a2;
      do
      {
        if ( *v39 )
          HvlpComputeLpComparisonMetrics(v3, a2, v38);
        ++v38;
        v39 += 40;
      }
      while ( v38 < (unsigned int)v3 );
      LODWORD(v2) = 0;
    }
    v40 = -1;
    v41 = v2;
    if ( (_DWORD)v3 )
    {
      v42 = (_BYTE *)a2;
      while ( *v42 == (_BYTE)v2 )
      {
        ++v41;
        v42 += 40;
        if ( v41 >= (unsigned int)v3 )
          goto LABEL_108;
      }
      v40 = v41;
    }
LABEL_108:
    v43 = v40 + 1;
    if ( (unsigned int)v43 < (unsigned int)v3 )
    {
      v44 = 5 * v43;
      v45 = (_BYTE *)(a2 + 40 * v43);
      do
      {
        if ( *v45 != (_BYTE)v2 && (unsigned int)HvlpLpComparison(v44, a2, v43, v40) == -1 )
          v40 = v43;
        LODWORD(v43) = v43 + 1;
        v45 += 40;
      }
      while ( (unsigned int)v43 < (unsigned int)v3 );
    }
    ++v25;
    v46 = 5LL * v40;
    *(_BYTE *)(a2 + 8 * v46 + 1) = 1;
    *(_BYTE *)(a2 + 8 * v46 + 3) = 1;
  }
  v47 = 0;
  if ( v4 )
  {
    v48 = v2;
    if ( (_DWORD)v3 )
    {
      do
      {
        if ( *(_BYTE *)v24 != (_BYTE)v2 )
        {
          HvlpComputeLpComparisonMetrics(v3, a2, v48);
          if ( *(_DWORD *)(v24 + 27) == (_DWORD)v2 )
          {
            *(_BYTE *)v24 = v2;
            v49 = v2;
            if ( (HvlpRootFlags & 0x800) == 0 )
              v49 = *(_BYTE *)(v24 + 1);
            *(_BYTE *)(v24 + 2) = v49;
            v47 = 1;
            HvlpMinrootConfigurationError = 1;
          }
        }
        ++v48;
        v24 += 40LL;
      }
      while ( v48 < (unsigned int)v3 );
    }
  }
  if ( KeRootProcNumaNodesSpecified != (_DWORD)v2 )
    return 0LL;
  if ( KeRootProcNumaNodeLpsSpecified != (_BYTE)v2 )
    return 0LL;
  if ( v47 )
    return 0LL;
  v50 = v2;
  if ( !(_DWORD)v3 )
    return 0LL;
  for ( i = (_WORD *)(a2 + 8); ; i += 20 )
  {
    if ( *((_BYTE *)i - 6) != (_BYTE)v2 )
    {
      v52 = v2;
      do
      {
        if ( *(_WORD *)(a2 + 40LL * v52 + 8) == *i && *(_BYTE *)(a2 + 40LL * v52 + 1) != (_BYTE)v2 )
          break;
        ++v52;
      }
      while ( v52 < (unsigned int)v3 );
      if ( v52 == (_DWORD)v3 )
        break;
    }
    if ( ++v50 >= (unsigned int)v3 )
      return 0LL;
  }
  return 3221225473LL;
}
