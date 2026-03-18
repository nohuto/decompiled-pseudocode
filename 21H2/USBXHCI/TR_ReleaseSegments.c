/*
 * XREFs of TR_ReleaseSegments @ 0x1C000E380
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0006DF0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_MapStage @ 0x1C0008740 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C0008870 (Isoch_PrepareStage.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C00090A0 (Isoch_Stage_MapIntoRing.c)
 *     Bulk_CompleteTransfers @ 0x1C000BAB8 (Bulk_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000E0D4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_MapStage @ 0x1C000F118 (Bulk_MapStage.c)
 *     Bulk_PrepareStage @ 0x1C000F538 (Bulk_PrepareStage.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0041D04 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x1C0041F9C (Isoch_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0044A5C (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     memset @ 0x1C0019CC0 (memset.c)
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
