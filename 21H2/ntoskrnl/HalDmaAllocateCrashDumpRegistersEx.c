/*
 * XREFs of HalDmaAllocateCrashDumpRegistersEx @ 0x1403A64D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIsHvPresent @ 0x1403A2128 (HalpIsHvPresent.c)
 *     HalpDomainLaAllocate @ 0x1404C4F54 (HalpDomainLaAllocate.c)
 *     HalpDomainLaDelete @ 0x1404C5034 (HalpDomainLaDelete.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C6B3C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x1404C6F2C (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalpDmaFreeMapRegisters @ 0x1404C7CF8 (HalpDmaFreeMapRegisters.c)
 *     HalpIommuDomainMapLogicalRange @ 0x1404C9514 (HalpIommuDomainMapLogicalRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404C9574 (HalpIommuDomainUnmapLogicalRange.c)
 */

__int64 __fastcall HalDmaAllocateCrashDumpRegistersEx(
        __int64 a1,
        unsigned int a2,
        signed int a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 *v5; // rdi
  unsigned int *v9; // r12
  __int64 v10; // rsi
  __int64 *i; // rax
  __int64 result; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  unsigned int v15; // r14d
  __int64 MapRegisters; // rax
  int v17; // r8d
  __int64 v18; // r14
  __int64 v19; // r13
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // eax
  _QWORD *v32; // [rsp+30h] [rbp-38h]
  int v33; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v9 = a5;
  if ( !a5 || (unsigned int)a3 > 1 )
    return 3221225485LL;
  if ( !*(_BYTE *)(a1 + 432) && *(_BYTE *)(a1 + 437) )
  {
    *(_QWORD *)a4 = 0LL;
    *v9 = a2;
    v10 = a3;
    *(_QWORD *)(a1 + 232) = 0LL;
    *(_DWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 8LL * a3 + 248) = 0LL;
    *(_DWORD *)(a1 + 4LL * a3 + 264) = 0;
    goto LABEL_9;
  }
  v10 = a3;
  v15 = *(_DWORD *)(a1 + 4LL * a3 + 264);
  if ( a2 <= v15 )
  {
    *a5 = a2;
    *(_QWORD *)a4 = *(_QWORD *)(a1 + 8LL * a3 + 248);
    goto LABEL_9;
  }
  if ( a2 > *(_DWORD *)(a1 + 224) )
    return 3221225485LL;
  if ( KeGetCurrentIrql() )
  {
    if ( a1 == -264 || *(_BYTE *)(a1 + 434) )
    {
      if ( HalpDmaHibernateRegisterPhase != 1 )
      {
        v33 = a2 - v15;
        v25 = HalpDmaAllocateMapRegistersAtHighLevel(a1, &v33);
        v26 = v25;
        if ( v25 )
        {
          v27 = (unsigned int)v33;
          if ( v33 == a2 - v15 )
          {
            if ( *(_QWORD *)(a1 + 8 * v10 + 248) )
            {
              _mm_lfence();
              v28 = *(_DWORD *)(a1 + 4 * v10 + 264);
              v29 = *(_QWORD *)(a1 + 8 * v10 + 248);
              if ( v28 > 1 )
              {
                v30 = v28 - 1;
                do
                {
                  v29 = *(_QWORD *)(v29 + 8);
                  --v30;
                }
                while ( v30 );
              }
              v31 = v33;
              *(_QWORD *)(v29 + 8) = v26;
              *(_DWORD *)(a1 + 4 * v10 + 264) += v31;
              *(_DWORD *)(a1 + 240) = a2;
            }
            else
            {
              *(_QWORD *)(a1 + 232) = v25;
              *(_DWORD *)(a1 + 240) = a2;
              *(_QWORD *)(a1 + 8 * v10 + 248) = v25;
              *(_DWORD *)(a1 + 4 * v10 + 264) = a2;
            }
            *(_QWORD *)a4 = *(_QWORD *)(a1 + 8 * v10 + 248);
            *v9 = a2;
            goto LABEL_9;
          }
          v22 = v33 + v15;
          *(_QWORD *)a4 = 0LL;
          *v9 = v22;
          HalpDmaFreeMapRegisters(a1, v26, v27);
        }
        else
        {
          *(_QWORD *)a4 = 0LL;
          *v9 = v15;
        }
        return 3221225626LL;
      }
      result = 3221225659LL;
    }
    else
    {
      result = 3221225626LL;
    }
    *(_QWORD *)a4 = 0LL;
    *v9 = *(_DWORD *)(a1 + 4LL * a3 + 264);
    return result;
  }
  MapRegisters = HalpDmaAllocateMapRegisters(a1, a2);
  v18 = MapRegisters;
  if ( !MapRegisters )
    return 3221225626LL;
  *(_QWORD *)(a1 + 8 * v10 + 248) = MapRegisters;
  *(_DWORD *)(a1 + 4 * v10 + 264) = a2;
  if ( *(_DWORD *)(a1 + 512) == 2 )
  {
    v19 = *(_QWORD *)(a1 + 504);
    v33 = HalpDomainLaAllocate(v19, a2 << 12, v17, 0, 0LL, MapRegisters + 24);
    if ( v33 < 0 )
    {
LABEL_37:
      HalpDmaFreeMapRegisters(a1, v18, a2);
      return (unsigned int)v33;
    }
    v20 = HalpIommuDomainMapLogicalRange(*(_QWORD *)(v19 + 40), 0, 0, a2 << 12, *(_QWORD *)(v18 + 24));
    v21 = *(_QWORD *)(v18 + 24);
    v33 = v20;
    if ( v20 < 0 )
    {
      HalpDomainLaDelete(v19, v21);
      goto LABEL_37;
    }
    *(_QWORD *)(v18 + 40) = v21;
    if ( HalpIsHvPresent() )
    {
      v23 = *(_QWORD *)(v18 + 40);
      v24 = (_QWORD *)v18;
      v32 = (_QWORD *)v18;
      *(_QWORD *)(v18 + 32) = 0LL;
      while ( 1 )
      {
        v33 = HalpIommuDomainMapLogicalRange(*(_QWORD *)(v19 + 40), 3, *v24, 4096, v23);
        if ( v33 < 0 )
          break;
        *(_QWORD *)(v18 + 40) += 4096LL;
        *(_QWORD *)(v18 + 32) += 4096LL;
        v23 = *(_QWORD *)(v18 + 40);
        v24 = (_QWORD *)v32[1];
        v32 = v24;
        if ( !v24 )
        {
          *(_QWORD *)(v18 + 40) = *(_QWORD *)(v18 + 24);
          *(_BYTE *)(v18 + 64) = 1;
          goto LABEL_35;
        }
      }
      HalpIommuDomainUnmapLogicalRange(*(_QWORD *)(v19 + 40), *(_QWORD *)(v18 + 24));
      goto LABEL_37;
    }
  }
LABEL_35:
  *v9 = a2;
  *(_QWORD *)a4 = *(_QWORD *)(a1 + 8 * v10 + 248);
LABEL_9:
  if ( *(_QWORD *)a4 )
    *(_QWORD *)(*(_QWORD *)a4 + 56LL) = *(_QWORD *)a4;
  ++*(_DWORD *)(a1 + 4 * v10 + 272);
  for ( i = (__int64 *)HalpDmaHibernateAdapters; i != &HalpDmaHibernateAdapters; i = (__int64 *)*i )
  {
    v5 = i - 35;
    if ( i - 35 == (__int64 *)a1 )
      return 0LL;
  }
  if ( v5 != (__int64 *)a1 )
  {
    v13 = (_QWORD *)qword_140C4BF58;
    v14 = (_QWORD *)(a1 + 280);
    if ( *(__int64 **)qword_140C4BF58 != &HalpDmaHibernateAdapters )
      __fastfail(3u);
    *v14 = &HalpDmaHibernateAdapters;
    v14[1] = v13;
    *v13 = v14;
    qword_140C4BF58 = (__int64)v14;
  }
  return 0LL;
}
