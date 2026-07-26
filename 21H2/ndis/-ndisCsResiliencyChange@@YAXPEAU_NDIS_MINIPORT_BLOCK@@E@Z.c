/*
 * XREFs of ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C005B620
 * Callers:
 *     ndisCsResiliencyCallback @ 0x1C005B510 (ndisCsResiliencyCallback.c)
 * Callees:
 *     ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005ABD4 (-ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005ADE8 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

void __fastcall ndisCsResiliencyChange(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  unsigned __int8 v2; // bl
  KIRQL v3; // al
  KIRQL v4; // r10
  int v5; // ecx

  AoAc = a1->AoAc;
  v2 = ndisCsResiliency;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  *((_BYTE *)AoAc + 1105) = v2;
  v4 = v3;
  if ( v2 )
  {
    v5 = *((_DWORD *)AoAc + 94);
    if ( (v5 & 0xFFFFFFFC) == 0 && v5 != 2 )
    {
      *((_QWORD *)AoAc + 109) = MEMORY[0xFFFFF78000000008];
      ndisAoAcStartRefTimeStats(AoAc);
    }
  }
  else
  {
    ndisAoAcPauseRefTimeStats(AoAc);
    if ( *((_QWORD *)AoAc + 109) )
    {
      *((_QWORD *)AoAc + 107) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 109);
      *((_QWORD *)AoAc + 109) = 0LL;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v4);
}
