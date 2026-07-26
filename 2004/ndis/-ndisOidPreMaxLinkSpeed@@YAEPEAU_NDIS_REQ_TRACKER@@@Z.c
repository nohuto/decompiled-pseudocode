/*
 * XREFs of ?ndisOidPreMaxLinkSpeed@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009C990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00184FC (WPP_RECORDER_SF_qDD_ea_1C00184FC.c)
 */

char __fastcall ndisOidPreMaxLinkSpeed(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  char v2; // bl
  __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  char v9[4]; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x95u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      0,
      v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    v5 = *((_QWORD *)a1 + 2);
    if ( v5 )
    {
      v3 = *(_QWORD *)(v5 + 32);
    }
    else if ( *(_QWORD *)a1 )
    {
      v3 = *(_QWORD *)a1;
    }
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x10u )
    {
      *(_DWORD *)(v1 + 56) = 16;
      *((_DWORD *)a1 + 10) = -1073676268;
      goto LABEL_13;
    }
    v6 = *(_QWORD *)(v3 + 3032);
    v7 = *(_QWORD **)(v1 + 40);
    *v7 = *(_QWORD *)(v3 + 3024);
    v7[1] = v6;
    *((_DWORD *)a1 + 10) = 0;
    *(_QWORD *)(v1 + 52) = 16LL;
  }
  v2 = 1;
LABEL_13:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x96u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v3,
      v2,
      *(_DWORD *)v9);
  }
  return v2;
}
