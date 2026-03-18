/*
 * XREFs of ?AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02E20F0
 * Callers:
 *     ?CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02E37C0 (-CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEA.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SAPEAV12@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C005B51C (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@SAP.c)
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@@Z @ 0x1C005B5BC (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireRawDdiEnumeratorCachedPathInfo(
        DMMVIDPNTOPOLOGY *this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH **a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  _QWORD *Instance; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  char *v11; // rax
  char *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = (char *)this;
  v2 = 0;
  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  v13 = 0LL;
  Instance = Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(0LL);
  auto_ptr<Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>>::reset((void **)&v13, Instance);
  if ( v13 )
  {
    v11 = v13 + 16;
    *a2 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)(v13 + 16);
    *((_QWORD *)v11 + 1) = 0LL;
    *(_DWORD *)v11 = -1;
    *((_DWORD *)v11 + 1) = -1;
    *((_DWORD *)v11 + 5) = 0;
    *(_QWORD *)(v11 + 28) = 0LL;
    *(_QWORD *)(v11 + 36) = 0LL;
    *(_QWORD *)(v11 + 44) = 0LL;
    *(_QWORD *)(v11 + 52) = 0LL;
    *(_QWORD *)(v11 + 60) = 0LL;
    *(_QWORD *)(v11 + 68) = 0LL;
    *((_DWORD *)v11 + 84) = 0;
    *((_QWORD *)v11 + 43) = 0LL;
    *((_QWORD *)v11 + 44) = 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    WdLogEvent5_WdLowResource(v10);
    v2 = -1073741801;
  }
  operator delete(0LL);
  return v2;
}
