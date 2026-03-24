/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E62CC
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02DA5F4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02DB114 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A800 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005C394 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::Serialize(DMMVIDEOPRESENTTARGETSET *this, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  SIZE_T v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  _QWORD *v13; // rax
  unsigned __int8 v14; // si
  _BYTE *v15; // rcx
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = 1LL;
    if ( *((_QWORD *)this + 5) > 1uLL )
      v7 = *((_QWORD *)this + 5);
    v8 = 28 * v7 + 4;
    v9 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v8);
    v12 = v9;
    if ( v9 >= 0 )
    {
      v14 = 0;
      v15 = *(_BYTE **)(a2 + 32);
      *v15 = *((_BYTE *)this + 40);
      i = (const struct DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 3);
      if ( i != (DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
      {
        for ( i = (const struct DMMVIDEOPRESENTTARGET *)((char *)i - 8);
              i;
              i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i) )
        {
          v17 = *(_QWORD *)(a2 + 32);
          v18 = 28LL * v14;
          *(_DWORD *)(v18 + v17 + 4) = *((_DWORD *)i + 6);
          *(_DWORD *)(v18 + v17 + 8) = *((_DWORD *)i + 20);
          *(_DWORD *)(v18 + v17 + 12) = *((_DWORD *)i + 24);
          *(_DWORD *)(v18 + v17 + 16) = *((_DWORD *)i + 25);
          *(_BYTE *)(v18 + v17 + 20) = *((_BYTE *)i + 104);
          *(_DWORD *)(v18 + v17 + 24) = *((_DWORD *)i + 30);
          *(_DWORD *)(v18 + v17 + 28) = *((_DWORD *)i + 21);
          ++v14;
        }
      }
      if ( v14 != **(_BYTE **)(a2 + 32) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v15, i);
        WdLogEvent5_WdAssertion(v19);
      }
      return 0LL;
    }
    else
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
      v13[3] = v8;
      v13[4] = this;
      v13[5] = v12;
      WdLogEvent5_WdError(v13);
      return (unsigned int)v12;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(this, 0LL);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
