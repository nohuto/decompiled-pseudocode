/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E9F10
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02DA2B4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02DADD4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005B544 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x1C02E9DC8 (-Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::Serialize(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  SIZE_T v8; // rbp
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // r14
  _BYTE *v15; // rcx
  unsigned __int8 v16; // si
  __int64 v17; // rdi
  DMMVIDEOPRESENTSOURCE *i; // rdi
  __int64 v19; // rax
  __int64 v20; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = 1LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v7 = *(_QWORD *)(a1 + 40);
    v8 = 8 * v7 + 4;
    v9 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v8);
    v12 = v9;
    if ( v9 >= 0 )
    {
      v14 = a1 + 24;
      v15 = *(_BYTE **)(a2 + 32);
      v16 = 0;
      *v15 = *(_BYTE *)(a1 + 40);
      v17 = *(_QWORD *)(a1 + 24);
      if ( v17 != v14 )
      {
        for ( i = (DMMVIDEOPRESENTSOURCE *)(v17 - 8); i; ++v16 )
        {
          DMMVIDEOPRESENTSOURCE::Serialize(
            i,
            (struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const)(*(_QWORD *)(a2 + 32) + 4LL + 8LL * v16));
          v19 = *((_QWORD *)i + 1);
          i = (DMMVIDEOPRESENTSOURCE *)(v19 - 8);
          if ( v19 == v14 )
            i = 0LL;
        }
      }
      if ( v16 != **(_BYTE **)(a2 + 32) )
      {
        v20 = WdLogNewEntry5_WdAssertion(v15, v10);
        WdLogEvent5_WdAssertion(v20);
      }
      return 0LL;
    }
    else
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
      v13[3] = v8;
      v13[4] = a1;
      v13[5] = v12;
      WdLogEvent5_WdError(v13);
      return (unsigned int)v12;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
