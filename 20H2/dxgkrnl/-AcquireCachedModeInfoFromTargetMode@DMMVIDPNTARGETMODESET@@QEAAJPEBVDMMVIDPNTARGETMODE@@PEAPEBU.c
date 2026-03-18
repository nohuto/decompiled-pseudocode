/*
 * XREFs of ?AcquireCachedModeInfoFromTargetMode@DMMVIDPNTARGETMODESET@@QEAAJPEBVDMMVIDPNTARGETMODE@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C02E8894
 * Callers:
 *     ?FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@EEEPEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C02E1CC0 (-FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C0005F84 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@@Z @ 0x1C005C50C (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireCachedModeInfoFromTargetMode(
        DMMVIDPNTARGETMODESET *this,
        const struct DMMVIDPNTARGETMODE *a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rax
  _QWORD *Instance; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  char *v17; // rcx
  __int128 v18; // xmm0
  _DWORD *v19; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  *a3 = 0LL;
  if ( *((_BYTE *)this + 136) )
  {
    if ( a2 )
    {
      v19 = 0LL;
      Instance = Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance((__int64)a2);
      auto_ptr<Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>>::reset((void **)&v19, Instance);
      if ( v19 )
      {
        v17 = (char *)(v19 + 4);
        v19[4] = *((_DWORD *)a2 + 6);
        v18 = *(_OWORD *)((char *)a2 + 72);
        *a3 = (const struct _D3DKMDT_VIDPN_TARGET_MODE *)v17;
        *(_OWORD *)(v17 + 8) = v18;
        *(_OWORD *)(v17 + 24) = *(_OWORD *)((char *)a2 + 88);
        *(_OWORD *)(v17 + 40) = *(_OWORD *)((char *)a2 + 104);
        *((_QWORD *)v17 + 7) = *((_QWORD *)a2 + 15);
      }
      else
      {
        v16 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
        *(_QWORD *)(v16 + 24) = this;
        WdLogEvent5_WdLowResource(v16);
        v3 = -1073741801;
      }
      operator delete(0LL);
      return v3;
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(this, a2);
      WdLogEvent5_WdError(v10);
      return 3223192337LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdError(v8);
    return 3223192352LL;
  }
}
