/*
 * XREFs of ?ndisPostOffloadAdminSettings@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0020560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisPostOffloadAdminSettings(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *((_QWORD *)a1 + 4);
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_DWORD *)(v1 + 88) & 0x400000) != 0 )
    {
      v2 = *(_QWORD *)(v1 + 40);
      *(_BYTE *)(v2 + 1) = *(_BYTE *)(v1 + 233);
      *(_WORD *)(v2 + 2) = *(_WORD *)(v1 + 234);
      *(_DWORD *)(v1 + 88) &= ~0x400000u;
    }
  }
}
