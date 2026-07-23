/*
 * XREFs of HalpDmaMarkHiberAdapter @ 0x140388488
 * Callers:
 *     HaliLocateHiberRanges @ 0x140997620 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x1403881B0 (PoSetHiberRange.c)
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x1404DBCCC (HalpIommuDmarPageTableMarkHiberPhase.c)
 */

void __fastcall HalpDmaMarkHiberAdapter(PVOID MemoryMap)
{
  __int64 j; // rbx
  __int64 v3; // rax
  unsigned int *v4; // rbp
  _QWORD **v5; // r14
  _QWORD *v6; // r13
  unsigned int v7; // r12d
  unsigned int i; // ebx
  _QWORD *v9; // rbp
  __int64 v10; // r14
  unsigned int k; // ebx
  unsigned int v12; // ecx
  _QWORD *v13; // r14
  __int64 v14; // rbp
  unsigned int *v15; // r8
  __int64 *m; // rbx
  __int64 v17; // rax
  __int64 *v18; // rbp
  __int64 *v19; // r14
  _QWORD *v20; // r13
  unsigned int v21; // r15d
  unsigned int *v22; // r8
  __int64 n; // rbx
  unsigned int ii; // edi
  __int64 v25; // rax
  __int64 v26; // rcx
  void *v27; // r8
  __int64 v28; // [rsp+60h] [rbp+8h]
  __int64 v29; // [rsp+60h] [rbp+8h]

  if ( MemoryMap )
  {
    if ( HalpDmaHibernateAdapter )
    {
      for ( i = 0; i < HalpDmaHibernateRegisterSetIndex; ++i )
      {
        v9 = (_QWORD *)*((_QWORD *)&HalpDmaHibernateRegisterSets + 2 * i);
        v10 = *((unsigned int *)&HalpDmaHibernateRegisterSets + 4 * i + 2);
        if ( *((_DWORD *)HalpDmaHibernateAdapter + 128) && !HalpHvIommu )
          HalpIommuDmarPageTableMarkHiberPhase(MemoryMap);
        if ( (_DWORD)v10 )
        {
          do
          {
            PoSetHiberRange(MemoryMap, 2u, v9, 0x48uLL, 0x746C6168u);
            v9 = (_QWORD *)v9[1];
            --v10;
          }
          while ( v10 );
        }
      }
    }
    for ( j = HalpDmaHibernateAdapters; (__int64 *)j != &HalpDmaHibernateAdapters; j = *(_QWORD *)j )
    {
      v3 = 2LL;
      v4 = (unsigned int *)(j - 16);
      v28 = 2LL;
      v5 = (_QWORD **)(j - 32);
      do
      {
        v6 = *v5;
        if ( *(_DWORD *)(j + 232) && !HalpHvIommu )
        {
          HalpIommuDmarPageTableMarkHiberPhase(MemoryMap);
          v3 = v28;
        }
        v7 = 0;
        if ( *v4 )
        {
          do
          {
            PoSetHiberRange(MemoryMap, 2u, v6, 0x48uLL, 0x746C6168u);
            v6 = (_QWORD *)v6[1];
            ++v7;
          }
          while ( v7 < *v4 );
          v3 = v28;
        }
        ++v5;
        ++v4;
        v28 = --v3;
      }
      while ( v3 );
    }
  }
  else
  {
    if ( HalpDmaHibernateAdapter )
    {
      PoSetHiberRange(0LL, 0x10000u, HalpDmaHibernateAdapter, 0x280uLL, 0);
      for ( k = 0; k < HalpDmaHibernateRegisterSetIndex; ++k )
      {
        v12 = *((_DWORD *)&HalpDmaHibernateRegisterSets + 4 * k + 2);
        v13 = (_QWORD *)*((_QWORD *)&HalpDmaHibernateRegisterSets + 2 * k);
        if ( v12 )
        {
          v14 = v12;
          do
          {
            PoSetHiberRange(0LL, 0x14000u, (PVOID)(*v13 >> 12), 1uLL, 0x746C6168u);
            v13 = (_QWORD *)v13[1];
            --v14;
          }
          while ( v14 );
        }
      }
      v15 = (unsigned int *)*((_QWORD *)HalpDmaHibernateAdapter + 37);
      if ( v15 )
        PoSetHiberRange(0LL, 0x10000u, v15, 8 * (((unsigned __int64)v15[10] + 4095) >> 12) + 48, 0x746C6168u);
    }
    PoSetHiberRange(0LL, 0x10000u, &HalpDmaHibernateAdapters, 0x10uLL, 0);
    for ( m = (__int64 *)HalpDmaHibernateAdapters; m != &HalpDmaHibernateAdapters; m = (__int64 *)*m )
    {
      PoSetHiberRange(0LL, 0x10000u, m - 35, 0x280uLL, 0);
      v17 = 2LL;
      v18 = m - 2;
      v29 = 2LL;
      v19 = m - 4;
      do
      {
        v20 = (_QWORD *)*v19;
        v21 = 0;
        if ( *(_DWORD *)v18 )
        {
          do
          {
            PoSetHiberRange(0LL, 0x14000u, (PVOID)(*v20 >> 12), 1uLL, 0x746C6168u);
            v20 = (_QWORD *)v20[1];
            ++v21;
          }
          while ( v21 < *(_DWORD *)v18 );
          v17 = v29;
        }
        ++v19;
        v18 = (__int64 *)((char *)v18 + 4);
        v29 = --v17;
      }
      while ( v17 );
      v22 = (unsigned int *)m[2];
      if ( v22 )
        PoSetHiberRange(0LL, 0x10000u, v22, 8 * (((unsigned __int64)v22[10] + 4095) >> 12) + 48, 0x746C6168u);
    }
    for ( n = HalpDmaControllers; (__int64 *)n != &HalpDmaControllers; n = *(_QWORD *)n )
    {
      for ( ii = 0; ii < *(_DWORD *)(n + 44); ++ii )
      {
        v25 = *(_QWORD *)(n + 56);
        v26 = 160LL * ii;
        v27 = *(void **)(v26 + v25 + 128);
        if ( v27 )
          PoSetHiberRange(0LL, 0x10000u, v27, *(unsigned int *)(v26 + v25 + 120), 0x456C6148u);
      }
    }
  }
}
