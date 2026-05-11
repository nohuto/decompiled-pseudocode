/*
 * XREFs of USBMidiOutProcessPin @ 0x1C0033F60
 * Callers:
 *     <none>
 * Callees:
 *     USBMidiOutCreateBulkUrbs @ 0x1C00083A8 (USBMidiOutCreateBulkUrbs.c)
 */

__int64 __fastcall USBMidiOutProcessPin(struct _KSPIN *a1)
{
  unsigned int v1; // edi
  PKSSTREAM_POINTER LeadingEdgeStreamPointer; // rax
  struct _KSSTREAM_POINTER *v3; // rbx
  unsigned __int64 Remaining; // rdx
  __int64 v5; // rcx

  v1 = -1073741811;
  LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(a1, KSSTREAM_POINTER_STATE_LOCKED);
  v3 = LeadingEdgeStreamPointer;
  if ( LeadingEdgeStreamPointer )
  {
    Remaining = LeadingEdgeStreamPointer->OffsetIn.Remaining;
    if ( (unsigned int)Remaining > 8
      && (v5 = *((unsigned int *)LeadingEdgeStreamPointer->OffsetIn.Data + 1), (_DWORD)v5)
      && Remaining >= v5 + 8 )
    {
      return (unsigned int)USBMidiOutCreateBulkUrbs(LeadingEdgeStreamPointer);
    }
    else
    {
      KsStreamPointerSetStatusCode(LeadingEdgeStreamPointer, -1073741808);
      KsStreamPointerAdvanceOffsets(v3, v3->OffsetIn.Remaining, 0, 0);
    }
  }
  return v1;
}
