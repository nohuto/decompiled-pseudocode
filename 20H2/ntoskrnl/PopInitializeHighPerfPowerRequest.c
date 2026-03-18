/*
 * XREFs of PopInitializeHighPerfPowerRequest @ 0x140A7417C
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     PoDestroyReasonContext @ 0x1403622D4 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1403638F8 (PoCaptureReasonContext.c)
 *     PopCreateKernelPowerRequest @ 0x14076E658 (PopCreateKernelPowerRequest.c)
 */

__int64 PopInitializeHighPerfPowerRequest()
{
  int *v0; // rdx
  __int64 v1; // r8
  int v2; // ecx
  int KernelPowerRequest; // ebx
  _DWORD v5[2]; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  __int128 v7; // [rsp+48h] [rbp-20h]
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  PpmHighPerfEndDpc = 275;
  *(_QWORD *)&PpmHighPerfEndTimer.Header.Lock = 8LL;
  qword_140C23F58 = (__int64)PpmHighPerfRequestExpiration;
  v0 = PpmHighPerfDuration;
  P = 0LL;
  PpmHighPerfEndTimer.Header.WaitListHead.Blink = &PpmHighPerfEndTimer.Header.WaitListHead;
  v1 = 4LL;
  PpmHighPerfEndTimer.Header.WaitListHead.Flink = &PpmHighPerfEndTimer.Header.WaitListHead;
  PpmHighPerfRequestLock = 0LL;
  qword_140C23F60 = 0LL;
  qword_140C23F78 = 0LL;
  qword_140C23F50 = 0LL;
  PpmHighPerfEndTimer.DueTime.QuadPart = 0LL;
  PpmHighPerfEndTimer.Period = 0;
  PpmHighPerfEndTimer.Processor = 0;
  do
  {
    v2 = 300000;
    if ( (unsigned int)*v0 < 0x493E0 )
      v2 = *v0;
    *v0++ = v2;
    --v1;
  }
  while ( v1 );
  v5[0] = 0;
  v5[1] = 1;
  DestinationString = 0LL;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Power Manager");
  KernelPowerRequest = PoCaptureReasonContext((unsigned __int64)v5, 0LL, 0LL, 1, 0LL, &P);
  if ( KernelPowerRequest >= 0 )
  {
    KernelPowerRequest = PopCreateKernelPowerRequest(&PpmHighPerfPowerRequest, P);
    if ( KernelPowerRequest < 0 )
      PoDestroyReasonContext(P);
  }
  return (unsigned int)KernelPowerRequest;
}
