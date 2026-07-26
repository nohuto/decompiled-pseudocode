/*
 * XREFs of ?ndisOidPreRemovePMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0092300
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003BB24 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C008FEAC (-ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 */

char __fastcall ndisOidPreRemovePMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  struct _SINGLE_LIST_ENTRY *v3; // rbp
  char v4; // bl
  __int64 v5; // r14
  struct _SINGLE_LIST_ENTRY *v6; // rax
  _SINGLE_LIST_ENTRY *Next; // rcx
  __int64 v8; // rcx
  int v9; // r10d
  __int64 v10; // rdx
  char v11; // r8
  int *v12; // rax
  int v13; // r9d
  struct _SINGLE_LIST_ENTRY *v14; // rcx
  void *OidSourceHandle; // rax
  int v16; // r9d
  __int64 *v17; // rcx
  void *v18; // r10
  __int64 *v19; // rdx
  bool v20; // zf
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  char v24; // al
  __int64 v26; // [rsp+30h] [rbp-28h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  v6 = v3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x67u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      v5,
      v1);
    v6 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  }
  if ( v6
    && (Next = v6[3].Next, LOBYTE(Next[7].Next) <= 6u)
    && (LOBYTE(Next[7].Next) != 6 || BYTE1(Next[7].Next) < 0x14u)
    || (v8 = *((_QWORD *)a1 + 1), v9 = 0x4000, v8)
    && (*(_DWORD *)(v1 + 88) & 0x4000) == 0
    && (v10 = *(_QWORD *)(v8 + 16), *(_BYTE *)(v10 + 100) <= 6u)
    && (*(_BYTE *)(v10 + 100) != 6 || *(_BYTE *)(v10 + 101) < 0x14u) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v4 = 1;
    goto LABEL_36;
  }
  v11 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
LABEL_35:
    v4 = v11;
    goto LABEL_36;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 4u )
  {
    *(_DWORD *)(v1 + 56) = 4;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_35;
  }
  v12 = *(int **)(v1 + 40);
  *(_DWORD *)(v1 + 56) = 0;
  v13 = *v12;
  if ( *((_QWORD *)a1 + 3) && !ndisFindPatternEntry(v3 + 64, v13) )
    goto LABEL_34;
  v14 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 1);
  if ( v14 )
  {
    if ( (v9 & *(_DWORD *)(v1 + 88)) == 0 && !ndisFindPatternEntry(v14 + 91, v13) )
      goto LABEL_34;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_36;
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
  v17 = *(__int64 **)(v5 + 976);
  v18 = OidSourceHandle;
  if ( !v17 )
    goto LABEL_34;
  do
  {
    v19 = v17;
    if ( *((_DWORD *)v17 + 49) == v16 )
      break;
    v17 = (__int64 *)*v17;
    v19 = 0LL;
  }
  while ( v17 );
  if ( !v19 )
    goto LABEL_34;
  v20 = v19 + 1 == 0LL;
  v21 = v19 + 1;
  v22 = v21;
  if ( v20 )
    goto LABEL_34;
  do
  {
    v23 = v22 - 1;
    if ( (void *)v22[2] == v18 )
      break;
    v22 = (_QWORD *)*v22;
    v23 = 0LL;
  }
  while ( v22 );
  if ( !v23 )
  {
LABEL_34:
    *((_DWORD *)a1 + 10) = -1073676261;
    goto LABEL_35;
  }
  v24 = 0;
  if ( *v21 )
    v24 = v11;
  v4 = v24;
LABEL_36:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v26) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x68u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      *(_QWORD *)a1,
      v26);
  }
  return v4;
}
