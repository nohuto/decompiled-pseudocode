/*
 * XREFs of ?ndisOidPostIovFreeVF@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0078EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIovFreeVF@@YAHPEAU_NDIS_VF_BLOCK@@@Z @ 0x1C0077D60 (-ndisIovFreeVF@@YAHPEAU_NDIS_VF_BLOCK@@@Z.c)
 */

void __fastcall ndisOidPostIovFreeVF(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v2; // rcx
  int v3; // edx

  v2 = *((_QWORD *)a1 + 4);
  if ( *(_QWORD *)a1 )
  {
    v3 = *((_DWORD *)a1 + 10);
    if ( !v3 || v3 == 65539 && (*(_DWORD *)(*(_QWORD *)a1 + 120LL) & 4) != 0 )
    {
      ndisIovFreeVF(*(struct _NDIS_VF_BLOCK **)(v2 + 144));
      *((_DWORD *)a1 + 10) = 0;
    }
  }
}
