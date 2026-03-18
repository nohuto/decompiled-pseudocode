/*
 * XREFs of HalpDmaMarkHiberAdapter @ 0x14038D91C
 * Callers:
 *     HaliLocateHiberRanges @ 0x140A4EB20 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x14052974C (HalpIommuDmarPageTableMarkHiberPhase.c)
 */

void __fastcall HalpDmaMarkHiberAdapter(PVOID MemoryMap)
{
  __int64 j; // rbx
  __int64 v3; // rax
  unsigned int *v4; // rbp
  _QWORD **v5; // r14
  _QWORD *v6; // r13
  unsigned int v7; // r12d
  __int64 *m; // rbx
  __int64 v9; // rax
  __int64 *v10; // rbp
  __int64 *v11; // r14
  _QWORD *v12; // r13
  unsigned int v13; // r15d
  unsigned int *v14; // r8
  __int64 n; // rbx
  unsigned int i; // ebx
  _QWORD *v17; // rbp
  __int64 v18; // r14
  unsigned int k; // ebx
  unsigned int v20; // ecx
  _QWORD *v21; // r14
  __int64 v22; // rbp
  unsigned int *v23; // r8
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
        v17 = (_QWORD *)*((_QWORD *)&HalpDmaHibernateRegisterSets + 2 * i);
        v18 = *((unsigned int *)&HalpDmaHibernateRegisterSets + 4 * i + 2);
        if ( *((_DWORD *)HalpDmaHibernateAdapter + 128) && !HalpHvIommu )
          HalpIommuDmarPageTableMarkHiberPhase(MemoryMap);
        if ( (_DWORD)v18 )
        {
          do
          {
            PoSetHiberRange(MemoryMap, 2u, v17, 0x48uLL, 0x746C6168u);
            v17 = (_QWORD *)v17[1];
            --v18;
          }
          while ( v18 );
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
        v20 = *((_DWORD *)&HalpDmaHibernateRegisterSets + 4 * k + 2);
        v21 = (_QWORD *)*((_QWORD *)&HalpDmaHibernateRegisterSets + 2 * k);
        if ( v20 )
        {
          v22 = v20;
          do
          {
            PoSetHiberRange(0LL, 0x14000u, (PVOID)(*v21 >> 12), 1uLL, 0x746C6168u);
            v21 = (_QWORD *)v21[1];
            --v22;
          }
          while ( v22 );
        }
      }
      v23 = (unsigned int *)*((_QWORD *)HalpDmaHibernateAdapter + 37);
      if ( v23 )
        PoSetHiberRange(0LL, 0x10000u, v23, 8 * (((unsigned __int64)v23[10] + 4095) >> 12) + 48, 0x746C6168u);
    }
    PoSetHiberRange(0LL, 0x10000u, &HalpDmaHibernateAdapters, 0x10uLL, 0);
    for ( m = (__int64 *)HalpDmaHibernateAdapters; m != &HalpDmaHibernateAdapters; m = (__int64 *)*m )
    {
      PoSetHiberRange(0LL, 0x10000u, m - 35, 0x280uLL, 0);
      v9 = 2LL;
      v10 = m - 2;
      v29 = 2LL;
      v11 = m - 4;
      do
      {
        v12 = (_QWORD *)*v11;
        v13 = 0;
        if ( *(_DWORD *)v10 )
        {
          do
          {
            PoSetHiberRange(0LL, 0x14000u, (PVOID)(*v12 >> 12), 1uLL, 0x746C6168u);
            v12 = (_QWORD *)v12[1];
            ++v13;
          }
          while ( v13 < *(_DWORD *)v10 );
          v9 = v29;
        }
        ++v11;
        v10 = (__int64 *)((char *)v10 + 4);
        v29 = --v9;
      }
      while ( v9 );
      v14 = (unsigned int *)m[2];
      if ( v14 )
        PoSetHiberRange(0LL, 0x10000u, v14, 8 * (((unsigned __int64)v14[10] + 4095) >> 12) + 48, 0x746C6168u);
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
