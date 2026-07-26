/*
 * XREFs of ?ndisOidPostIovDeleteVPort@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079010
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00779D4 (-ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisOidPostIovDeleteVPort(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v2; // rcx
  int v3; // edx

  v2 = *((_QWORD *)a1 + 4);
  if ( *(_QWORD *)a1 )
  {
    v3 = *((_DWORD *)a1 + 10);
    if ( !v3 || v3 == 65539 && (*(_DWORD *)(*(_QWORD *)a1 + 120LL) & 4) != 0 )
    {
      ndisIovDeleteVPort(*(_QWORD **)(v2 + 152));
      *((_DWORD *)a1 + 10) = 0;
    }
  }
}
