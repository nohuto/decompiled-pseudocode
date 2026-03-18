/*
 * XREFs of ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0073320
 * Callers:
 *     NtMITActivateInputProcessing @ 0x1C0036800 (NtMITActivateInputProcessing.c)
 *     NtMITPostMouseInputMessage @ 0x1C0135F90 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C01360B0 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C01361D0 (NtMITPostWindowEventMessage.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C0136880 (NtMITSynthesizeKeyboardInput.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0136C20 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C0136DD0 (NtMITSynthesizeTouchInput.c)
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
