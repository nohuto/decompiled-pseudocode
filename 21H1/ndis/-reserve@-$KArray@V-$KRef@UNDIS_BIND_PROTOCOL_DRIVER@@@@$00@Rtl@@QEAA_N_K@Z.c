/*
 * XREFs of ?reserve@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0109DB4
 * Callers:
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x1C0109D70 (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 * Callees:
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116C10 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

char __fastcall Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  _QWORD *PoolWithTag; // r14
  unsigned int v5; // edx
  __int64 i; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx
  __int64 v10; // rsi
  volatile signed __int32 *v11; // rcx

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF && is_mul_ok(8uLL, a2) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
    if ( PoolWithTag )
    {
      v5 = a1[1];
      for ( i = 0LL; (unsigned int)i < v5; v5 = a1[1] )
      {
        v7 = *((_QWORD *)a1 + 1);
        v8 = *(_QWORD *)(v7 + 8 * i);
        *(_QWORD *)(v7 + 8 * i) = 0LL;
        PoolWithTag[i] = v8;
        i = (unsigned int)(i + 1);
      }
      v9 = (void *)*((_QWORD *)a1 + 1);
      if ( v9 )
      {
        v10 = 0LL;
        if ( v5 )
        {
          do
          {
            v11 = *(volatile signed __int32 **)(*((_QWORD *)a1 + 1) + 8 * v10);
            if ( v11 )
            {
              if ( _InterlockedExchangeAdd(v11 + 12, 0xFFFFFFFF) == 1 )
                KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v11);
            }
            v10 = (unsigned int)(v10 + 1);
          }
          while ( (unsigned int)v10 < a1[1] );
          v9 = (void *)*((_QWORD *)a1 + 1);
        }
        ExFreePoolWithTag(v9, 0x7272414Bu);
      }
      *a1 = v2;
      *((_QWORD *)a1 + 1) = PoolWithTag;
      return 1;
    }
  }
  return 0;
}
