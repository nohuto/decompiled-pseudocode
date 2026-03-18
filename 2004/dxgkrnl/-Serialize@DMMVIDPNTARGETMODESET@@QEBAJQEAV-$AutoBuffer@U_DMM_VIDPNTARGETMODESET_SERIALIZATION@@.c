/*
 * XREFs of ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E9970
 * Callers:
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C02E6944 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C005B32C (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005B544 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::Serialize(DMMVIDPNSOURCEMODESET *this, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  _QWORD *v13; // rax
  unsigned __int8 v14; // si
  _BYTE *v15; // rcx
  const struct DMMVIDPNSOURCEMODE *i; // rdx
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
    if ( *((_QWORD *)this + 8) > 1uLL )
      v7 = *((_QWORD *)this + 8);
    v8 = 80 * v7;
    v9 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, 80 * v7);
    v12 = v9;
    if ( v9 >= 0 )
    {
      v14 = 0;
      v15 = *(_BYTE **)(a2 + 32);
      *v15 = *((_BYTE *)this + 64);
      i = (const struct DMMVIDPNSOURCEMODE *)*((_QWORD *)this + 6);
      if ( i != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
      {
        for ( i = (const struct DMMVIDPNSOURCEMODE *)((char *)i - 8); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(this, i) )
        {
          v17 = *(_QWORD *)(a2 + 32);
          v18 = 9LL * v14;
          *(_DWORD *)(v17 + 8 * v18 + 8) = *((_DWORD *)i + 6);
          *(_OWORD *)(v17 + 8 * v18 + 16) = *(_OWORD *)((char *)i + 72);
          *(_OWORD *)(v17 + 8 * v18 + 32) = *(_OWORD *)((char *)i + 88);
          *(_OWORD *)(v17 + 8 * v18 + 48) = *(_OWORD *)((char *)i + 104);
          *(_QWORD *)(v17 + 8 * v18 + 64) = *((_QWORD *)i + 15);
          *(_DWORD *)(v17 + 8 * v18 + 72) = *((_DWORD *)i + 32);
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
