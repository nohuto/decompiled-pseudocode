/*
 * XREFs of PktMonClientComponentUnregister @ 0x1C0026788
 * Callers:
 *     ?ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0100894 (-ndisPktMonFilterRegister@@YAJPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01009F0 (-ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106A2C (-ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01372CC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0137C08 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     NdisCloseAdapter @ 0x1C013A890 (NdisCloseAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PktMonClientComponentUnregister(__int64 *a1)
{
  __int64 *v2; // rax
  __int64 **v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  if ( a1[5] )
  {
    KeWaitForSingleObject(&PktMonCompMutex, Executive, 0, 0, 0LL);
    if ( a1[5] )
    {
      if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)&xmmword_1C00E3FF0 + 1) + 16LL))(xmmword_1C00E3FF0, a1[5]);
        ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
      }
      v2 = (__int64 *)*a1;
      if ( *(__int64 **)(*a1 + 8) != a1 || (v3 = (__int64 **)a1[1], *v3 != a1) )
LABEL_15:
        __fastfail(3u);
      --PktMonCompCount;
      *v3 = v2;
      v2[1] = (__int64)v3;
      v4 = a1 + 2;
      while ( (_QWORD *)*v4 != v4 )
      {
        v5 = a1[3];
        if ( *(_QWORD **)v5 != v4 )
          goto LABEL_15;
        v6 = *(_QWORD **)(v5 + 8);
        if ( *v6 != v5 )
          goto LABEL_15;
        a1[3] = (__int64)v6;
        *v6 = v4;
        *(_OWORD *)v5 = 0LL;
        *(_OWORD *)(v5 + 16) = 0LL;
        *(_QWORD *)(v5 + 32) = 0LL;
      }
      *(_OWORD *)a1 = 0LL;
      *((_OWORD *)a1 + 1) = 0LL;
      *((_OWORD *)a1 + 2) = 0LL;
      a1[6] = 0LL;
    }
    KeReleaseMutex(&PktMonCompMutex, 0);
  }
}
