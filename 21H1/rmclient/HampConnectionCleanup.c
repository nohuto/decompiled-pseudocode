/*
 * XREFs of HampConnectionCleanup @ 0x180004810
 * Callers:
 *     HampConnectionDestroy @ 0x1800021E8 (HampConnectionDestroy.c)
 *     HamDisconnectForExtendedExecution @ 0x180004680 (HamDisconnectForExtendedExecution.c)
 * Callees:
 *     <none>
 */

void __fastcall HampConnectionCleanup(__int64 a1)
{
  int v1; // eax

  if ( *(_QWORD *)a1 )
  {
    v1 = *(_DWORD *)(a1 + 112);
    if ( v1 == 2 )
    {
      NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180015880, 1u, 0LL, a1);
    }
    else
    {
      switch ( v1 )
      {
        case 0:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800158E0, 1u, 0LL, a1);
          break;
        case 1:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180015DA0, 1u, 0LL, a1);
          break;
        case 3:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016020, 1u, 0LL, a1);
          break;
        case 4:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180015D70, 1u, 0LL, a1);
          break;
        case 5:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180015D40, 1u, 0LL, a1);
          break;
        case 6:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180015CB0, 1u, 0LL, a1);
          break;
        default:
          return;
      }
    }
  }
}
