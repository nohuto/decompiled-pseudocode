/*
 * XREFs of ?reserve@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z @ 0x1C010A5C8
 * Callers:
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x1C010A584 (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 * Callees:
 *     ??_G?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C010A6BC (--_G-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

char __fastcall Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebx
  _QWORD *PoolWithTag; // r14
  __int64 v6; // rdx
  __int64 i; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  void *v11; // rcx

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF )
  {
    v4 = 0;
    if ( is_mul_ok(8uLL, a2) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
      if ( PoolWithTag )
      {
        v6 = a1[1];
        for ( i = 0LL; (unsigned int)i < (unsigned int)v6; v6 = a1[1] )
        {
          v8 = *((_QWORD *)a1 + 1);
          v9 = (unsigned int)i;
          i = (unsigned int)(i + 1);
          v10 = *(_QWORD *)(v8 + 8 * v9);
          *(_QWORD *)(v8 + 8 * v9) = 0LL;
          PoolWithTag[v9] = v10;
        }
        v11 = (void *)*((_QWORD *)a1 + 1);
        if ( v11 )
        {
          if ( (_DWORD)v6 )
          {
            do
              KRef<NDIS_BIND_FILTER_DRIVER>::`scalar deleting destructor'(*((_QWORD *)a1 + 1) + 8LL * v4++, v6, i);
            while ( v4 < a1[1] );
            v11 = (void *)*((_QWORD *)a1 + 1);
          }
          ExFreePoolWithTag(v11, 0x7272414Bu);
        }
        *a1 = v2;
        *((_QWORD *)a1 + 1) = PoolWithTag;
        return 1;
      }
    }
  }
  return 0;
}
