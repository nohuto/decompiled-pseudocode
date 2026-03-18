/*
 * XREFs of ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E86B0
 * Callers:
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E0394 (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 * Callees:
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C000CA88 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C005B26C (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005B484 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::Serialize(DMMVIDPNSOURCEMODESET *this, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  _QWORD *v13; // rax
  unsigned __int8 v14; // bp
  _BYTE *v15; // rcx
  DMMVIDPNSOURCEMODESET *v16; // rsi
  const struct DMMVIDPNSOURCEMODE *i; // rsi
  __int64 v18; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = 1LL;
    if ( *((_QWORD *)this + 8) > 1uLL )
      v7 = *((_QWORD *)this + 8);
    v8 = 44 * v7;
    v9 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, 44 * v7);
    v12 = v9;
    if ( v9 >= 0 )
    {
      v14 = 0;
      v15 = *(_BYTE **)(a2 + 32);
      *v15 = *((_BYTE *)this + 64);
      v16 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
      if ( v16 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
      {
        for ( i = (DMMVIDPNSOURCEMODESET *)((char *)v16 - 8); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(this, i) )
          DMMVIDPNSOURCEMODE::Serialize(
            i,
            (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)(*(_QWORD *)(a2 + 32) + 4LL + 40LL * v14++));
      }
      if ( v14 != **(_BYTE **)(a2 + 32) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v15, v10);
        WdLogEvent5_WdAssertion(v18);
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
