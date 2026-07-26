/*
 * XREFs of ?ndisOidPreTcpConnectionOffloadParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009DD80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001853C (WPP_RECORDER_SF_qDD_ea_1C001853C.c)
 *     ?ndisOidPreQueryTcpConnectionParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C009D460 (-ndisOidPreQueryTcpConnectionParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PE.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffloadParameters(
        struct _NDIS_REQ_TRACKER *a1,
        struct _NDIS_FILTER_BLOCK *a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbp
  unsigned __int8 v3; // di
  __int64 v4; // r14
  char v5; // r15
  char v7; // bl
  int v8; // ecx
  unsigned __int8 TcpConnectionParameters; // al
  char v11[4]; // [rsp+38h] [rbp-20h]

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = 1;
  v4 = *((_QWORD *)a1 + 4);
  v5 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC7u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v2,
      v4);
  v7 = 0;
  if ( !v2 || v2->Offload )
  {
    v8 = *(_DWORD *)(v4 + 4);
    if ( !v8 || v8 == 2 )
    {
      TcpConnectionParameters = ndisOidPreQueryTcpConnectionParameters(
                                  v2,
                                  a2,
                                  (struct _NDIS_OID_REQUEST *)v4,
                                  (int *)a1 + 10);
      v8 = *(_DWORD *)(v4 + 4);
      v5 = TcpConnectionParameters;
    }
    if ( v8 != 1 )
      v7 = v5;
    v3 = v7;
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = v3;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC8u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v2,
      *((_DWORD *)a1 + 10),
      *(_DWORD *)v11);
  }
  return v3;
}
