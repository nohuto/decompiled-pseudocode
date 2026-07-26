/*
 * XREFs of ?ndisOidPreTcpConnectionOffloadHwCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00184FC (WPP_RECORDER_SF_qDD_ea_1C00184FC.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffloadHwCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  char v8[4]; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC5u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_4;
  v4 = 0;
  if ( !*(_QWORD *)a1 )
    goto LABEL_11;
  if ( !*(_QWORD *)(v1 + 4096) )
  {
LABEL_4:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v3 + 48) >= 0x14u )
    {
      v5 = *(_QWORD *)(v1 + 4096);
      v6 = *(_QWORD *)(v3 + 40);
      *(_OWORD *)v6 = *(_OWORD *)(v5 + 1024);
      *(_DWORD *)(v6 + 16) = *(_DWORD *)(v5 + 1040);
      *(_DWORD *)(v3 + 56) = 20;
      *(_DWORD *)(v3 + 52) = 20;
      *((_DWORD *)a1 + 10) = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 56) = 20;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  v4 = 1;
LABEL_11:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC6u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      *((_DWORD *)a1 + 10),
      *(_DWORD *)v8);
  }
  return v4;
}
