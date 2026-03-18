/*
 * XREFs of IopInitActivityIdIrp @ 0x140556BE4
 * Callers:
 *     IopAllocateIrpWithExtension @ 0x14020B830 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1402AACD0 (IopAllocateIrpPrivate.c)
 *     IopAllocateBackpocketIrp @ 0x140556050 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1405562E8 (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x140A7FE00 (IovAllocateIrp.c)
 * Callees:
 *     IoSetActivityIdIrp @ 0x14020C120 (IoSetActivityIdIrp.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1402E08F8 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     IopIsActivityTracingEventEnabled @ 0x140386368 (IopIsActivityTracingEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

int __fastcall IopInitActivityIdIrp(__int64 a1)
{
  char v2; // si
  const GUID *RelatedActivityId; // rdi
  const EVENT_DESCRIPTOR *v4; // r15
  struct _KTHREAD *CurrentThread; // rbx
  GUID *Flink; // rbx
  __int64 v7; // rcx
  _WORD *v8; // rax
  char v10; // [rsp+40h] [rbp-68h]
  GUID ActivityId; // [rsp+60h] [rbp-48h] BYREF
  __m128i v12; // [rsp+70h] [rbp-38h] BYREF

  ActivityId = 0LL;
  v12 = 0LL;
  v2 = 0;
  RelatedActivityId = 0LL;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    Flink = (GUID *)CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
    if ( Flink )
    {
      if ( IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_AllocateIrp) )
      {
        RelatedActivityId = Flink;
        v4 = &IoTrace_KernelIo_AllocateIrp;
        goto LABEL_18;
      }
      ActivityId = *Flink;
LABEL_17:
      v2 = 1;
      goto LABEL_18;
    }
    if ( PnpIsSafeToExamineUserModeTeb() && (*(_BYTE *)(a1 + 71) & 0x21) != 0x21 )
    {
      v10 = 0;
      if ( KeGetPcr()->NtTib.$D930595FF9CFE8BC32A0A90C751D1401::$2ADFB250FDFF3378DEB06B8BF0B21A0F::Self )
      {
        v12 = *(__m128i *)&KeGetPcr()->NtTib.$D930595FF9CFE8BC32A0A90C751D1401::$2ADFB250FDFF3378DEB06B8BF0B21A0F::Self[105].SubSystemTib;
        v10 = 1;
      }
      if ( v10 )
      {
        v7 = *(_QWORD *)&NullGuid.Data1 - v12.m128i_i64[0];
        if ( *(_QWORD *)&NullGuid.Data1 == v12.m128i_i64[0] )
          v7 = *(_QWORD *)NullGuid.Data4 - _mm_srli_si128(v12, 8).m128i_u64[0];
        if ( v7 )
        {
          if ( IopIsActivityTracingEventEnabled(&IoTrace_UserInitiatedIo) )
          {
            RelatedActivityId = (const GUID *)&v12;
            v4 = &IoTrace_UserInitiatedIo;
            goto LABEL_18;
          }
          ActivityId = (GUID)v12;
          goto LABEL_17;
        }
      }
    }
  }
LABEL_18:
  if ( !v2 )
    EtwActivityIdControl(3u, &ActivityId);
  LODWORD(v8) = IoSetActivityIdIrp(a1, &ActivityId);
  if ( (int)v8 >= 0 )
  {
    v8 = *(_WORD **)(a1 + 200);
    *v8 |= 2u;
    if ( RelatedActivityId )
      LODWORD(v8) = EtwWriteEx(IoTraceHandle, v4, 0LL, 0, &ActivityId, RelatedActivityId, 0, 0LL);
  }
  return (int)v8;
}
