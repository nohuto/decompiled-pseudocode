/*
 * XREFs of ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0107F24
 * Callers:
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C0102738 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     _lambda_cf61730e764cafb5fbe53142b0d3259b_::operator() @ 0x1C0102850 (_lambda_cf61730e764cafb5fbe53142b0d3259b_--operator().c)
 *     ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x1C0102908 (-AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0107E80 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C0026AB4 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::reserve(
        unsigned int *a1,
        unsigned __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebx
  _QWORD *PoolWithTag; // r14
  unsigned int v6; // edx
  unsigned int i; // r8d
  void *v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax

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
        for ( i = 0; i < v6; v6 = a1[1] )
        {
          v10 = *((_QWORD *)a1 + 1);
          v11 = i++;
          v12 = *(_QWORD *)(v10 + 8 * v11);
          *(_QWORD *)(v10 + 8 * v11) = 0LL;
          PoolWithTag[v11] = v12;
        }
        v8 = (void *)*((_QWORD *)a1 + 1);
        if ( v8 )
        {
          if ( v6 )
          {
            do
              wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(*((_QWORD *)a1 + 1) + 8LL * v4++));
            while ( v4 < a1[1] );
            v8 = (void *)*((_QWORD *)a1 + 1);
          }
          ExFreePoolWithTag(v8, 0x7272414Bu);
        }
        *a1 = v2;
        *((_QWORD *)a1 + 1) = PoolWithTag;
        return 1;
      }
    }
  }
  return 0;
}
