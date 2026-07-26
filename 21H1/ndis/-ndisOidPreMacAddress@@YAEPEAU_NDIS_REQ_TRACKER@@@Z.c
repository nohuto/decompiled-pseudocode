/*
 * XREFs of ?ndisOidPreMacAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009C340
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 */

char __fastcall ndisOidPreMacAddress(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  char v4; // bl
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v8; // [rsp+30h] [rbp-28h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x91u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) )
      goto LABEL_10;
    *((_DWORD *)a1 + 10) = 0;
    v5 = *(_QWORD *)(v1 + 4040);
    v6 = *(unsigned __int16 *)(v5 + 1124);
    if ( *(_DWORD *)(v3 + 48) < v6 )
    {
      *(_DWORD *)(v3 + 56) = v6;
      *((_DWORD *)a1 + 10) = -1073676268;
      goto LABEL_10;
    }
    memmove(*(void **)(v3 + 40), (const void *)(v5 + 1126), *(unsigned __int16 *)(v5 + 1124));
    *((_DWORD *)a1 + 10) = 0;
    *(_DWORD *)(v3 + 52) = *(unsigned __int16 *)(*(_QWORD *)(v1 + 4040) + 1124LL);
  }
  v4 = 1;
LABEL_10:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x92u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      v8);
  }
  return v4;
}
