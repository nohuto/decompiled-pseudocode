/*
 * XREFs of PspInitPhase2 @ 0x140A6717C
 * Callers:
 *     PsInitSystem @ 0x140A3F0F4 (PsInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     RtlGetSystemTimePrecise @ 0x140355570 (RtlGetSystemTimePrecise.c)
 *     RtlRandom @ 0x1406E70D0 (RtlRandom.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407788A4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PspInitializeProtectedProcessParameters @ 0x1407AF278 (PspInitializeProtectedProcessParameters.c)
 *     PspInitializeSystemDlls @ 0x140A672CC (PspInitializeSystemDlls.c)
 */

bool PspInitPhase2()
{
  PEPROCESS v0; // rbx
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v2; // rdx
  char v3; // al
  char v4; // al
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C01AB0, 0LL, 0LL);
  v0 = PsInitialSystemProcess;
  v0[1].ThreadListHead.Flink = (struct _LIST_ENTRY *)RtlGetSystemTimePrecise().QuadPart;
  PsInitialSystemProcess[2].Affinity.Bitmap[7] = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v2 = PsIdleProcess;
  PsInitialSystemProcess[2].Affinity.Bitmap[8] = UnbiasedInterruptTime;
  v2[141] = PsInitialSystemProcess[1].ThreadListHead.Flink;
  v2[288] = PsInitialSystemProcess[2].Affinity.Bitmap[7];
  v2[289] = PsInitialSystemProcess[2].Affinity.Bitmap[8];
  RtlGetSystemTimePrecise();
  PspWorkOnBehalfEncodingKey = (unsigned __int64)RtlRandom(&Seed) << 32;
  PspWorkOnBehalfEncodingKey = RtlRandom(&Seed) | (unsigned __int64)PspWorkOnBehalfEncodingKey;
  if ( PspSehValidationPolicy )
  {
    if ( PspSehValidationPolicy == 2 )
      v3 = MEMORY[0xFFFFF780000002D5] & 0xF3 | 8;
    else
      v3 = MEMORY[0xFFFFF780000002D5] & 0xF3 | 4;
  }
  else
  {
    v3 = MEMORY[0xFFFFF780000002D5] & 0xF3;
  }
  MEMORY[0xFFFFF780000002D5] = v3;
  switch ( PspCurDirDevicesSkippedForDlls )
  {
    case 1:
      v4 = v3 & 0xCF | 0x10;
      break;
    case 2:
      v4 = v3 & 0xCF | 0x20;
      break;
    case -1:
      v4 = v3 | 0x30;
      break;
    default:
      v4 = v3 & 0xCF;
      break;
  }
  MEMORY[0xFFFFF780000002D5] = v4;
  PspInitializeSystemDlls();
  return (int)PspInitializeProtectedProcessParameters((__int64)&PspHostSiloGlobals) >= 0;
}
