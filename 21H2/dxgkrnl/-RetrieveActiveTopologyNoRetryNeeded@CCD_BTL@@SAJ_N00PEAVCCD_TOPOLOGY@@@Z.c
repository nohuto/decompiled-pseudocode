/*
 * XREFs of ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C02ED32C
 * Callers:
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C02960EC (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 * Callees:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C0131E04 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01349B4 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01359F0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

__int64 __fastcall CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(
        __int64 a1,
        __int64 a2,
        char a3,
        struct CCD_TOPOLOGY *a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int16 v7; // bx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int16 v16; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(v16) = a3;
  CCD_TOPOLOGY::Clear(a4);
  v7 = 8;
  v16 = 8;
  while ( (unsigned __int16)CCD_TOPOLOGY::Reserve(a4, v7, v5, v6) >= v7 )
  {
    v12 = CCD_TOPOLOGY::RetrieveActive(a4, 1, 0, 1, &v16);
    if ( v12 != -1073741789 )
      goto LABEL_6;
    v7 = v16;
  }
  v13 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v13 + 24) = v7;
  WdLogEvent5_WdError(v13);
  v12 = -1073741801;
LABEL_6:
  if ( v12 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v14 + 24) = v12;
    WdLogEvent5_WdError(v14);
  }
  return (unsigned int)v12;
}
