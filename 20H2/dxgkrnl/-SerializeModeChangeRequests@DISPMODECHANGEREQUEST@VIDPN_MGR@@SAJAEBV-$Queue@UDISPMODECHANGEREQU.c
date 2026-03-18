/*
 * XREFs of ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02DFBF0
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02D92F4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02D9E14 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005B484 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  SIZE_T v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  _QWORD *v13; // rax
  char v14; // al
  char v15; // r14
  _QWORD *v16; // rbp
  _BYTE *v17; // rax
  _BYTE *v18; // rdi
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

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
    v8 = 96 * v7 + 8;
    v9 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v8);
    v12 = v9;
    if ( v9 >= 0 )
    {
      v14 = *(_BYTE *)(a1 + 40);
      v15 = 0;
      v16 = (_QWORD *)(a1 + 24);
      **(_BYTE **)(a2 + 32) = v14;
      v17 = *(_BYTE **)(a2 + 32);
      v18 = v17 + 8;
      if ( (_QWORD *)*v16 == v16 )
        v19 = 0LL;
      else
        v19 = *v16 - 8LL;
      if ( v19 )
      {
        do
        {
          *(_DWORD *)v18 = *(_DWORD *)(v19 + 48);
          *(_OWORD *)(v18 + 4) = *(_OWORD *)(v19 + 52);
          *(_OWORD *)(v18 + 20) = *(_OWORD *)(v19 + 68);
          *(_QWORD *)(v18 + 36) = *(_QWORD *)(v19 + 84);
          *((_DWORD *)v18 + 11) = *(_DWORD *)(v19 + 92);
          *((_DWORD *)v18 + 12) = *(_DWORD *)(v19 + 96);
          *((_DWORD *)v18 + 13) = *(_DWORD *)(v19 + 100);
          *((_DWORD *)v18 + 14) = *(_DWORD *)(v19 + 104);
          *((_QWORD *)v18 + 8) = *(_QWORD *)(v19 + 112);
          *((_DWORD *)v18 + 23) = *(_DWORD *)(v19 + 140);
          *(_OWORD *)(v18 + 72) = *(_OWORD *)(v19 + 120);
          *((_DWORD *)v18 + 22) = *(_DWORD *)(v19 + 136);
          v18 += 96;
          v20 = *(_QWORD **)(v19 + 8);
          v19 = (__int64)(v20 - 1);
          if ( v20 == v16 )
            v19 = 0LL;
          ++v15;
        }
        while ( v19 );
        v17 = *(_BYTE **)(a2 + 32);
      }
      if ( v15 != *v17 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v19, v10);
        WdLogEvent5_WdAssertion(v21);
      }
      if ( v15 )
      {
        if ( (_BYTE *)v8 != &v18[-*(_QWORD *)(a2 + 32)] )
        {
          v22 = WdLogNewEntry5_WdAssertion(v19, v10);
          WdLogEvent5_WdAssertion(v22);
        }
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
