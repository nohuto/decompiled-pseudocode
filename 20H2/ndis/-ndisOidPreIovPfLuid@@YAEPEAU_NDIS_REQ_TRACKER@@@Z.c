/*
 * XREFs of ?ndisOidPreIovPfLuid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007AEF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00184FC (WPP_RECORDER_SF_qDD_ea_1C00184FC.c)
 */

char __fastcall ndisOidPreIovPfLuid(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  _QWORD *v3; // rbp
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  char v8[4]; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(_QWORD **)a1;
  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x4Du,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v3,
      v1);
  if ( *(_DWORD *)(v1 + 4) )
    goto LABEL_11;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0xCu )
  {
    if ( !v3 )
      goto LABEL_13;
    v5 = v3[576];
    if ( v5 && v3[446] && (*(_BYTE *)(v5 + 8) & 3) == 3 )
    {
      v6 = *(_QWORD *)(v1 + 40);
      *(_DWORD *)v6 = 786816;
      *(_QWORD *)(v6 + 4) = *(_QWORD *)((char *)v3 + 4876);
      *(_DWORD *)(v1 + 52) = 12;
      goto LABEL_12;
    }
LABEL_11:
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_12;
  }
  *(_DWORD *)(v1 + 56) = 12;
  *((_DWORD *)a1 + 10) = -1073676268;
LABEL_12:
  v4 = 1;
LABEL_13:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x4Eu,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v3,
      v4,
      *(_DWORD *)v8);
  }
  return v4;
}
