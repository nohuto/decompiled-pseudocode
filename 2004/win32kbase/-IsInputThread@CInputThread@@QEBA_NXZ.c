/*
 * XREFs of ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0076260
 * Callers:
 *     NtMITActivateInputProcessing @ 0x1C0005800 (NtMITActivateInputProcessing.c)
 *     NtMITPostMouseInputMessage @ 0x1C012FFA0 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C01300C0 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C01301E0 (NtMITPostWindowEventMessage.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C0130890 (NtMITSynthesizeKeyboardInput.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0130C30 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C0130DE0 (NtMITSynthesizeTouchInput.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThread::IsInputThread(CInputThread *this)
{
  CInputThread *v1; // rdi
  bool v2; // bl

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v2 = (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)v1 + 10);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
