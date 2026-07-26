/*
 * XREFs of ?ndisOidPrePMWOLPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00920F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E1D0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0093BD8 (-ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0093D8C (-ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisOidPrePMWOLPatternList(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // r14
  char v4; // bl
  struct _NDIS_MINIPORT_BLOCK *v5; // rsi
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  _BYTE *MiniportAdapterContext; // rcx
  struct _NDIS_MINIPORT_BLOCK *v8; // r8
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rcx
  int v10; // ecx
  struct _SINGLE_LIST_ENTRY *MiniportSGDmaBlock; // rcx
  int WakeUpPatternList; // eax

  v1 = *a1;
  v3 = a1[3];
  v4 = 0;
  v5 = a1[4];
  v6 = v3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x58u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)v1,
      (char)v3,
      v5);
    v6 = a1[3];
  }
  if ( v6
    && (MiniportAdapterContext = v6->MiniportAdapterContext, MiniportAdapterContext[56] <= 6u)
    && (MiniportAdapterContext[56] != 6 || MiniportAdapterContext[57] < 0x14u)
    || (v8 = a1[1]) != 0LL
    && (*(_DWORD *)&v5->LinkStateIndicationFlags & 0x4000) == 0
    && (BaseMiniport = v8->BaseMiniport, BYTE4(BaseMiniport->Lock) <= 6u)
    && (BYTE4(BaseMiniport->Lock) != 6 || BYTE5(BaseMiniport->Lock) < 0x14u)
    || (v10 = *((_DWORD *)&v5->Header + 1), (v10 & 0xFFFFFFFD) != 0) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
LABEL_30:
    v4 = 1;
    goto LABEL_31;
  }
  if ( v6 && !v10 )
  {
    MiniportSGDmaBlock = (struct _SINGLE_LIST_ENTRY *)v3->MiniportSGDmaBlock;
    goto LABEL_28;
  }
  if ( v8 && (*(_DWORD *)&v5->LinkStateIndicationFlags & 0x4000) == 0 && !v10 )
  {
    MiniportSGDmaBlock = (struct _SINGLE_LIST_ENTRY *)v8->SetCompleteHandler;
    goto LABEL_28;
  }
  if ( !a1[2] && *a1 )
  {
    if ( v1->MajorNdisVersion <= 6u && (v1->MajorNdisVersion != 6 || v1->MinorNdisVersion < 0x14u) )
    {
      *(_DWORD *)&v5->Reserved4.Length = -50265851;
      WakeUpPatternList = ndisQueryWakeUpPatternList(0LL, v1, (struct _NDIS_OID_REQUEST *)v5);
LABEL_29:
      *((_DWORD *)a1 + 10) = WakeUpPatternList;
      goto LABEL_30;
    }
    MiniportSGDmaBlock = v1->WOLPatternList.Next;
LABEL_28:
    WakeUpPatternList = ndisQueryWolPatternList(MiniportSGDmaBlock, (struct _NDIS_OID_REQUEST *)v5);
    goto LABEL_29;
  }
LABEL_31:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v6,
      0xBu,
      0x59u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)v1,
      (char)v3,
      (char)v5,
      *((_DWORD *)a1 + 10));
  return v4;
}
