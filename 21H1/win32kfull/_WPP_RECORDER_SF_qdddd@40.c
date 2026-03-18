/*
 * XREFs of _WPP_RECORDER_SF_qdddd@40 @ 0x1765FC
 * Callers:
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z @ 0x175D86 (-xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_qdddd(int a1, int a2, int a3, char a4, char a5, char a6, char a7, char a8)
{
  struct RECORDER_LOG__ *v8; // esi

  v8 = gFullLog;
  if ( (WPP_GLOBAL_Control->Characteristics & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids,
      a2,
      &a4,
      4,
      &a5,
      4,
      &a6,
      4,
      &a7);
  return _WppAutoLogTrace(v8, 4, 1, &WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids, a2, &a4, 4, &a5, 4, &a6, 4, &a7);
}
