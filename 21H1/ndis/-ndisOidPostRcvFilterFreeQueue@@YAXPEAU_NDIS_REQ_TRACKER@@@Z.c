/*
 * XREFs of ?ndisOidPostRcvFilterFreeQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00852A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0084EE8 (-ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostRcvFilterFreeQueue(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rcx
  int v3; // eax
  struct _NDIS_MINIPORT_BLOCK *v4; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = *((_DWORD *)a1 + 10);
    if ( !v3 || v3 == 65539 && (v2->Flags & 4) != 0 )
    {
      v4 = a1[4];
      if ( v4->PcwDatapathEventMask >= 0xCu )
      {
        ndisFreeReceiveQueue(v2, *((_DWORD *)v4->Reserved4.Buffer + 2));
        *((_DWORD *)a1 + 10) = 0;
      }
    }
  }
}
