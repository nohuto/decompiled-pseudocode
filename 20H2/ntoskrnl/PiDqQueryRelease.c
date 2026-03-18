/*
 * XREFs of PiDqQueryRelease @ 0x1406D7FF0
 * Callers:
 *     PiDqDispatch @ 0x140646700 (PiDqDispatch.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1406D7F7C (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14075EA90 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14050BD30 (McTemplateK0p_EtwWriteTransfer.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     PiDqQueryFreeActiveData @ 0x1406D806C (PiDqQueryFreeActiveData.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqQueryRelease(PVOID P)
{
  void *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 53, 0xFFFFFFFF) == 1 )
  {
    if ( (byte_140C130BA & 0x40) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        (__int64)P,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_DevQuery_QueryStop,
        *((const GUID **)P + 3),
        P);
    PiDqQueryFreeActiveData(P);
    v2 = (void *)*((_QWORD *)P + 3);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x6370726Bu);
    if ( *((_QWORD *)P + 2) )
      MesHandleFree();
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)P + 1);
    ExFreePoolWithTag(P, 0x58706E50u);
  }
}
