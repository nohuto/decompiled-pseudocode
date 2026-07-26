/*
 * XREFs of ?ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B820 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisAllocateOpenOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C002F590 (-ndisAllocateOpenOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisPreTaskOffloadQuery@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E4E8 (-ndisPreTaskOffloadQuery@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E6F8 (-ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreTaskOffload(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r14
  __int64 v3; // rbp
  struct _NDIS_OPEN_BLOCK *v4; // rsi
  char v5; // di
  int OpenOffload; // eax
  int v7; // ecx
  int v8; // ecx
  unsigned __int8 v9; // al
  char v11[4]; // [rsp+40h] [rbp-28h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB0u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      (char)v4,
      v3);
  *((_DWORD *)a1 + 10) = -1073741637;
  v5 = 1;
  if ( (*(_DWORD *)(v3 + 88) & 0x20) != 0 )
  {
    if ( !v4->MiniportHandle->Offload )
      goto LABEL_15;
    if ( !v4->Offload )
    {
      OpenOffload = ndisAllocateOpenOffload(v4);
      *((_DWORD *)a1 + 10) = OpenOffload;
      if ( OpenOffload )
      {
        *((_DWORD *)a1 + 10) = -1073741670;
        goto LABEL_15;
      }
    }
  }
  v7 = *(_DWORD *)(v3 + 4);
  if ( !v7 )
  {
LABEL_13:
    v9 = ndisPreTaskOffloadQuery(v4, a1);
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v9 = ndisPreTaskOffloadSet(a1);
LABEL_14:
  v5 = v9;
LABEL_15:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB1u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      (char)v4,
      v5,
      *(_DWORD *)v11);
  }
  return v5;
}
