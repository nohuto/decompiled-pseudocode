/*
 * XREFs of ?ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z @ 0x1C00A6400
 * Callers:
 *     ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A6DC4 (-ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00A840C (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C001EBCC (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1C00AF22C (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 */

void __fastcall ndisReplayDirectOids(struct _NDIS_MINIPORT_BLOCK *a1, struct _LIST_ENTRY *a2, unsigned __int8 a3)
{
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v7; // rdx
  struct _NDIS_OID_REQUEST *p_Blink; // rsi
  int v9; // eax

  while ( 1 )
  {
    Flink = a2->Flink;
    if ( a2->Flink == a2 )
      break;
    if ( Flink->Blink != a2 || (v7 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    a2->Flink = v7;
    p_Blink = (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink;
    v7->Blink = a2;
    v9 = ndisMDoDirectOidRequest(a1, (struct _NDIS_OID_REQUEST *)&Flink[-5].Blink, a3);
    if ( v9 != 259 )
      ndisMOidRequestCompleteInternal(a1, p_Blink, v9, 0LL);
  }
}
