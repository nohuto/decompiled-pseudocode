/*
 * XREFs of ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005A4CC
 * Callers:
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0059AC8 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005A34C (-ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C005AD10 (-ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAoAcStartRefTimeStats(struct _NDIS_MINIPORT_AOAC *a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  _QWORD *v3; // r8
  int *v4; // r9

  v1 = MEMORY[0xFFFFF78000000008];
  if ( *((int *)a1 + 140) <= 0 )
  {
    v2 = 0;
    v3 = (_QWORD *)((char *)a1 + 576);
    v4 = (int *)((char *)a1 + 500);
    do
    {
      if ( *v4 > 0 && (v2 || *((_DWORD *)a1 + 13) == 1) )
        *v3 = v1;
      ++v2;
      ++v4;
      v3 += 2;
    }
    while ( v2 < 0x11 );
  }
  else
  {
    *((_QWORD *)a1 + 102) = MEMORY[0xFFFFF78000000008];
  }
}
