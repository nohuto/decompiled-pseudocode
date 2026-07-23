/*
 * XREFs of IopThreadStart @ 0x1407712E0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PsTerminateSystemThread @ 0x14061F840 (PsTerminateSystemThread.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopThreadStart(_QWORD *a1)
{
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+20h] [rbp-38h]
  __int64 v3; // [rsp+40h] [rbp-18h]

  *(_OWORD *)DmaAdapter = *(_OWORD *)a1;
  v3 = a1[2];
  ExFreePoolWithTag(a1, 0);
  ((void (__fastcall *)(__int64))_mm_srli_si128(*(__m128i *)DmaAdapter, 8).m128i_i64[0])(v3);
  HalPutDmaAdapter(DmaAdapter[0]);
  return PsTerminateSystemThread(0);
}
