/*
 * XREFs of ?ndisOidPreQosCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D4D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001870C (WPP_RECORDER_SF_qDD_ea_1C001870C.c)
 */

char __fastcall ndisOidPreQosCapabilities(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  __int64 v3; // r14
  char v4; // di
  __int64 v6; // rax
  __int64 v7; // rcx
  char v9[4]; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = *(_QWORD *)a1;
  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x57u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v3,
      v1);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x14u )
  {
    if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_6;
    if ( !v3 )
      goto LABEL_13;
    v6 = *(_DWORD *)(v1 + 32) == -66781183 ? *(_QWORD *)(v3 + 4904) : *(_QWORD *)(v3 + 4912);
    if ( !v6 )
    {
LABEL_6:
      v2 = -1073741637;
    }
    else
    {
      v7 = *(_QWORD *)(v1 + 40);
      *(_OWORD *)v7 = *(_OWORD *)v6;
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(v6 + 16);
      *(_DWORD *)(v1 + 52) = 20;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 20;
    v2 = -1073676268;
  }
  v4 = 1;
  *((_DWORD *)a1 + 10) = v2;
LABEL_13:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v2;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x58u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v3,
      v4,
      *(_DWORD *)v9);
  }
  return v4;
}
