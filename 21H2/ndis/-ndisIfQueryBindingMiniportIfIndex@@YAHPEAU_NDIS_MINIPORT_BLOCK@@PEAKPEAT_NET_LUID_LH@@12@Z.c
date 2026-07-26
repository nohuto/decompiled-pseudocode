/*
 * XREFs of ?ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z @ 0x1C0104F2C
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C002A6B8 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0103D90 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisIfQueryBindingIfIndex @ 0x1C010AF60 (NdisIfQueryBindingIfIndex.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001B924 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisIfQueryBindingMiniportIfIndex(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int *a2,
        union _NET_LUID_LH *a3,
        unsigned int *a4,
        union _NET_LUID_LH *a5)
{
  _NDIS_FILTER_BLOCK *HighestFilter; // rax
  _NDIS_IF_BLOCK *IfBlock; // rcx
  _NET_LUID_LH v11; // rax
  struct _NDIS_MINIPORT_BLOCK *BaseMiniport; // rcx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_0ecf9acc3b5b3994cffcc6b83765ca21_Traceguids,
      a1);
  *a2 = 0;
  a3->Value = 0LL;
  *a4 = 0;
  a5->Value = 0LL;
  HighestFilter = a1->HighestFilter;
  if ( HighestFilter && (IfBlock = HighestFilter->IfBlock) != 0LL )
  {
    *a2 = IfBlock->ifIndex;
    v11.Value = (ULONG64)a1->HighestFilter->IfBlock->NetLuid;
  }
  else
  {
    *a2 = a1->IfIndex;
    v11.Value = (ULONG64)a1->NetLuid;
  }
  a3->Value = v11.Value;
  if ( (a1->PnPFlags & 0x8000000) != 0
    && (BaseMiniport = a1->BaseMiniport) != 0LL
    && ndisReferenceMiniportByHandle(BaseMiniport, 0, 0x3Eu) )
  {
    *a4 = a1->BaseMiniport->$870207B042FA9BC26E8437B7C7B7B404::IfIndex;
    a5->Value = (ULONG64)a1->BaseMiniport->NetLuid;
    ndisDereferenceMiniport(a1->BaseMiniport, 0x3Eu);
  }
  else
  {
    *a4 = a1->IfIndex;
    a5->Value = (ULONG64)a1->NetLuid;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_0ecf9acc3b5b3994cffcc6b83765ca21_Traceguids,
      a1);
  return 0LL;
}
