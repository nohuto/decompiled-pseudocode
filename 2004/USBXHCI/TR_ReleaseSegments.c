/*
 * XREFs of TR_ReleaseSegments @ 0x1C000BCDC
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_MapStage @ 0x1C0003760 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C00038A0 (Isoch_PrepareStage.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000B5E4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_CompleteTransfers @ 0x1C000BA20 (Bulk_CompleteTransfers.c)
 *     Bulk_MapStage @ 0x1C000CC1C (Bulk_MapStage.c)
 *     Bulk_PrepareStage @ 0x1C000D0B4 (Bulk_PrepareStage.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0040584 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x1C004081C (Isoch_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0043BCC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     memset @ 0x1C00194C0 (memset.c)
 */

unsigned __int64 __fastcall TR_ReleaseSegments(__int64 a1, unsigned __int64 *a2, char a3)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 result; // rax
  __int64 v8; // rdx

  v3 = (unsigned __int64 *)*a2;
  if ( (unsigned __int64 *)*a2 != a2 )
  {
    result = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 336LL);
    if ( (result & 0x4000000000000LL) != 0 )
    {
      do
      {
        result = (unsigned __int64)memset((void *)v3[2], 0, *((unsigned int *)v3 + 11));
        v3 = (unsigned __int64 *)*v3;
      }
      while ( a2 != v3 );
      v3 = (unsigned __int64 *)*a2;
    }
    v8 = a1 + 208;
    if ( a3 )
    {
      if ( v3 == a2 )
        return result;
      *(_QWORD *)a2[1] = *(_QWORD *)v8;
      *(_QWORD *)(*(_QWORD *)v8 + 8LL) = a2[1];
      *(_QWORD *)v8 = *a2;
      result = *a2;
      *(_QWORD *)(*a2 + 8) = v8;
    }
    else
    {
      if ( v3 == a2 )
        return result;
      **(_QWORD **)(a1 + 216) = v3;
      *(_QWORD *)(*a2 + 8) = *(_QWORD *)(a1 + 216);
      *(_QWORD *)a2[1] = v8;
      result = a2[1];
      *(_QWORD *)(a1 + 216) = result;
    }
    *a2 = (unsigned __int64)a2;
    a2[1] = (unsigned __int64)a2;
  }
  return result;
}
