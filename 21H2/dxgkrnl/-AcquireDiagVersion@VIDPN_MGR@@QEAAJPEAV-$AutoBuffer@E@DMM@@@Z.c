/*
 * XREFs of ?AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02DBAE0
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02DA5F4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005C29C (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagVersion(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v5 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v5);
    }
    v8 = DMM::AutoBuffer<unsigned char>::Initialize(a2, 2uLL, 0LL, PagedPool);
    if ( v8 >= 0 )
    {
      **(_WORD **)(a2 + 32) = 20480;
      return 0LL;
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v9 + 24) = a2;
      WdLogEvent5_WdError(v9);
      return (unsigned int)v8;
    }
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v3 + 24) = 0LL;
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
}
