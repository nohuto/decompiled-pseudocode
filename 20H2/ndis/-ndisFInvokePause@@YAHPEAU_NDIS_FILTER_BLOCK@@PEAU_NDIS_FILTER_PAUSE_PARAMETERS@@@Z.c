/*
 * XREFs of ?ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z @ 0x1C010BE54
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C013242C (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C003CBEC (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisFInvokePause(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_FILTER_PAUSE_PARAMETERS *a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rsi
  char IsFilterVerified; // al
  void *FilterModuleContext; // rcx
  int v7; // eax
  unsigned int v8; // edi
  char v10[4]; // [rsp+30h] [rbp-18h]

  FilterDriver = a1->FilterDriver;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x66u,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      a1);
  IsFilterVerified = ndisIsFilterVerified(a1);
  FilterModuleContext = a1->FilterModuleContext;
  if ( IsFilterVerified )
    v7 = (*((__int64 (__fastcall **)(void *, struct _NDIS_FILTER_PAUSE_PARAMETERS *, void *, int (__fastcall *)(void *, _NDIS_FILTER_PAUSE_PARAMETERS *)))ndisVerifierNdisDispatch
          + 18))(
           FilterModuleContext,
           a2,
           a1->VerifierContext,
           FilterDriver->DefaultFilterCharacteristics.PauseHandler);
  else
    v7 = FilterDriver->DefaultFilterCharacteristics.PauseHandler(FilterModuleContext, a2);
  v8 = v7;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v7;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x67u,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      *(_DWORD *)v10);
  }
  return v8;
}
