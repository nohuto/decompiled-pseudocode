/*
 * XREFs of ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C00463EC
 * Callers:
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MousePacketPerf@@@Z @ 0x1C0046244 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MouseP.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0071A4C (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01BC33C (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v5; // ebx
  int v7; // eax

  v4 = *(unsigned int *)(a1 + 76);
  v5 = a2;
  v7 = v4;
  if ( (_DWORD)v4 && (v4 & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, v4, a4);
    v7 = *(_DWORD *)(a1 + 76);
  }
  return (v5 & v7) == v5;
}
