/*
 * XREFs of HalpRtcStop @ 0x1404D4250
 * Callers:
 *     HalpRtcAcknowledgeInterrupt @ 0x1404D4010 (HalpRtcAcknowledgeInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 HalpRtcStop()
{
  char v1; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  ((void (__fastcall *)(_QWORD, __int64, char *))HalpTimerRtcApi)(0LL, 11LL, &v1);
  v1 &= ~0x40u;
  return ((__int64 (__fastcall *)(_QWORD, __int64, char *))qword_140CF4268)(0LL, 11LL, &v1);
}
