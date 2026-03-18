/*
 * XREFs of NVMeLunCompleteAllIORequests @ 0x1C000E54C
 * Callers:
 *     NVMeHwUnitControl @ 0x1C0009990 (NVMeHwUnitControl.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000BC48 (NVMeCompleteSubmissionQueueRequests.c)
 */

void __fastcall NVMeLunCompleteAllIORequests(__int64 a1, int a2)
{
  unsigned int i; // edi

  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 280);
        NVMeCompleteSubmissionQueueRequests(
          a1,
          *(_QWORD *)(a1 + 768) + 136LL * i++,
          *(unsigned __int16 *)(a1 + 278),
          a2,
          0,
          0,
          8) )
  {
    ;
  }
  NVMeCompleteSubmissionQueueRequests(a1, a1 + 288, *(unsigned __int16 *)(a1 + 276), a2, 0, 1, 8);
}
