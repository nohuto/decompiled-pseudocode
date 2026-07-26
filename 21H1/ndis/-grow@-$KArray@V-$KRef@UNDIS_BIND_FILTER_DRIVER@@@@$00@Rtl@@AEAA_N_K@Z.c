/*
 * XREFs of ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x1C010A510
 * Callers:
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C0102AA8 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 * Callees:
 *     ?reserve@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z @ 0x1C010A554 (-reserve@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z.c)
 */

char __fastcall Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>,1>::grow(unsigned int *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v2 = *a1;
  if ( v2 >= a2 )
    return 1;
  v5 = 4LL;
  if ( a2 >= 4 )
    v5 = a2;
  v6 = (unsigned int)v2 + ((unsigned int)v2 >> 1);
  if ( v5 >= v6 )
    v6 = v5;
  return Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>,1>::reserve(a1, v6);
}
