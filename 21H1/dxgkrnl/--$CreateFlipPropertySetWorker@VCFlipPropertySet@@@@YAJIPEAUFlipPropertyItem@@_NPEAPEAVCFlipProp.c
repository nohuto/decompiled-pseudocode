/*
 * XREFs of ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x1C0065E24
 * Callers:
 *     NtFlipObjectAddContent @ 0x1C0066C50 (NtFlipObjectAddContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x1C0066DA0 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectSetContent @ 0x1C0068030 (NtFlipObjectSetContent.c)
 *     ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C00685A8 (-FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerToke.c)
 * Callees:
 *     ??0CFlipPropertySet@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z @ 0x1C00262F8 (--0CFlipPropertySet@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 */

__int64 __fastcall CreateFlipPropertySetWorker<CFlipPropertySet>(
        unsigned int a1,
        char *a2,
        __int64 a3,
        CFlipPropertySet **a4)
{
  unsigned int v5; // r12d
  signed int v6; // ebx
  unsigned int v7; // r13d
  char *v8; // r14
  char *PoolWithQuotaTag; // rsi
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  unsigned int i; // r8d
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // ecx
  int v18; // eax
  char *v19; // r13
  unsigned int j; // r15d
  char *v21; // rbx
  size_t v22; // r8
  char *v23; // rdx
  __int64 v24; // rdx
  CFlipPropertySet *v25; // rax
  CFlipPropertySet *v26; // rcx

  v5 = a1;
  v6 = 0;
  if ( a1 )
  {
    v7 = 0;
    v8 = 0LL;
    PoolWithQuotaTag = 0LL;
    v10 = 0;
    if ( a2 )
    {
      v11 = 32LL * a1;
      v12 = 0xFFFFFFFFLL;
      if ( v11 <= 0xFFFFFFFF )
        v12 = (unsigned int)v11;
      v6 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v11 <= 0xFFFFFFFF )
      {
        PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)v12, 0x69704346u);
        if ( !PoolWithQuotaTag )
          v6 = -1073741801;
      }
      if ( v6 < 0 )
      {
        v5 = a1;
      }
      else
      {
        if ( &a2[v12] < a2 || (unsigned __int64)&a2[v12] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(PoolWithQuotaTag, a2, (unsigned int)v12);
        v5 = a1;
      }
    }
    else
    {
      v6 = -1073741811;
    }
    for ( i = 0; v6 >= 0 && i < v5; ++i )
    {
      v14 = 32LL * i;
      v15 = *(_DWORD *)&PoolWithQuotaTag[v14 + 16];
      if ( v15 && *(_QWORD *)&PoolWithQuotaTag[v14 + 24] )
      {
        v16 = v7;
        v17 = v7 + v15;
        v18 = -1;
        if ( v17 >= v7 )
          v18 = v17;
        v7 = v18;
        v6 = v17 < v16 ? 0xC0000095 : 0;
      }
      else
      {
        v6 = -1073741811;
      }
    }
    if ( v6 >= 0 )
    {
      v8 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7, 0x62704346u);
      if ( !v8 )
        v6 = -1073741801;
      if ( v6 >= 0 )
      {
        v19 = v8;
        for ( j = 0; v6 >= 0 && j < v5; ++j )
        {
          v21 = &PoolWithQuotaTag[32 * j];
          v22 = *((unsigned int *)v21 + 4);
          v23 = (char *)*((_QWORD *)v21 + 3);
          if ( &v23[v22] < v23 || (unsigned __int64)&v23[v22] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v19, v23, v22);
          *((_QWORD *)v21 + 3) = v19;
          v24 = *((unsigned int *)v21 + 4);
          v19 += v24;
          if ( v10 + 16 < v10 )
          {
            v10 = -1;
            v6 = -1073741675;
          }
          else
          {
            v10 += 16;
            v6 = 0;
          }
          if ( v6 >= 0 )
          {
            if ( v10 + 4 < v10 )
            {
              v10 = -1;
              v6 = -1073741675;
            }
            else
            {
              v10 += 4;
              v6 = 0;
            }
            if ( v6 >= 0 )
            {
              if ( (unsigned int)v24 + v10 < v10 )
              {
                v10 = -1;
                v6 = -1073741675;
              }
              else
              {
                v10 += v24;
                v6 = 0;
              }
            }
          }
        }
      }
    }
    if ( v6 >= 0 )
    {
      v25 = (CFlipPropertySet *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x28uLL, 0x73704346u);
      if ( v25 )
        v26 = CFlipPropertySet::CFlipPropertySet(v25, a1, (struct FlipPropertyItem *)PoolWithQuotaTag, v8, v10);
      else
        v26 = 0LL;
      *a4 = v26;
      if ( v26 )
      {
        v8 = 0LL;
        PoolWithQuotaTag = 0LL;
      }
      else
      {
        v6 = -1073741801;
      }
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    if ( PoolWithQuotaTag )
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
  }
  return (unsigned int)v6;
}
