/*
 * XREFs of NVMeGetTemperatureThreshold @ 0x1C0017E6C
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000C9E4 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     memset @ 0x1C00054C0 (memset.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1C000F9B0 (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BB0C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetTemperatureThreshold(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_WORD *)(a1 + 196) = -1;
    *(_BYTE *)(a1 + 835) = 0;
    memset(*(void **)(a1 + 920), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
    v2 = *(_QWORD *)(a1 + 920);
    *(_QWORD *)(a1 + 888) = v2;
    *(_DWORD *)(a1 + 824) = 1;
    *(_BYTE *)(v2 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 920) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 920) + 4244LL) = 0;
    BuildGetFeaturesTemperatureThresholdCommand(*(_QWORD *)(a1 + 920) + 4096LL, 0, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4224LL) = NVMeGetTemperatureThresholdCompletion;
    ProcessCommand(a1, a1 + 832);
    return WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
