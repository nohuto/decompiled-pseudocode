/*
 * XREFs of ?ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091EF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     ?ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C008FEAC (-ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0090EC4 (-ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0093730 (-ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0095E60 (-ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 */

unsigned __int8 __fastcall ndisOidPrePMRemoveWOLPattern(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  unsigned __int8 v2; // di
  struct _SINGLE_LIST_ENTRY *v3; // r14
  struct _NDIS_MINIPORT_BLOCK *v5; // rbp
  struct _SINGLE_LIST_ENTRY *v6; // rax
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // r9
  _SINGLE_LIST_ENTRY *Next; // rcx
  __int64 v10; // rcx
  int v11; // r10d
  __int64 v12; // rdx
  int v13; // edx
  struct _SINGLE_LIST_ENTRY *v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-28h]
  unsigned __int8 v19; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v19 = 0;
  v6 = v3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x56u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)v5,
      v1);
    v6 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  }
  v7 = 6;
  v8 = 20;
  if ( v6
    && (Next = v6[3].Next, LOBYTE(Next[7].Next) <= 6u)
    && (LOBYTE(Next[7].Next) != 6 || BYTE1(Next[7].Next) < 0x14u)
    || (v10 = *((_QWORD *)a1 + 1), v11 = 0x4000, v10)
    && (*(_DWORD *)(v1 + 88) & 0x4000) == 0
    && (v12 = *(_QWORD *)(v10 + 16), *(_BYTE *)(v12 + 100) <= 6u)
    && (*(_BYTE *)(v12 + 100) != 6 || *(_BYTE *)(v12 + 101) < 0x14u)
    || *(_DWORD *)(v1 + 4) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
LABEL_8:
    v2 = 1;
    goto LABEL_30;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 4u )
  {
    *(_DWORD *)(v1 + 56) = 4;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_8;
  }
  *(_DWORD *)(v1 + 56) = 0;
  v13 = **(_DWORD **)(v1 + 40);
  *(_DWORD *)(v1 + 152) = v13;
  if ( *((_QWORD *)a1 + 3) && !ndisFindPatternEntry(v3 + 63, v13)
    || (v14 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 1)) != 0LL
    && (v11 & *(_DWORD *)(v1 + 88)) == 0
    && !ndisFindPatternEntry(v14 + 90, v13) )
  {
    *((_DWORD *)a1 + 10) = -1073676261;
    goto LABEL_8;
  }
  if ( *(_QWORD *)a1 )
  {
    if ( v5->MajorNdisVersion > v7 || v5->MajorNdisVersion == v7 && v5->MinorNdisVersion >= v8 )
    {
      v16 = ndisMiniportPreRemoveWOLPattern(v5, (struct _NDIS_OID_REQUEST *)v1, &v19);
      v2 = v19;
      *((_DWORD *)a1 + 10) = v16;
    }
    else
    {
      v15 = ndisXlateRemoveWolPatternToPacketPatternOid(v5, (struct _NDIS_OID_REQUEST *)v1, &v19);
      v2 = v19;
      *((_DWORD *)a1 + 10) = v15;
      if ( v2 != 1 )
      {
        *((_DWORD *)a1 + 10) = 0;
        v2 = ndisPreRemoveMiniportWakeUpPattern(v5, (struct _NDIS_OID_REQUEST *)v1);
      }
    }
  }
LABEL_30:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v18) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x57u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      *(_QWORD *)a1,
      v18);
  }
  return v2;
}
