/*
 * XREFs of ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C003A460
 * Callers:
 *     ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C003A180 (-DeclareThreadAsInput@CInputThread@@QEAA_NXZ.c)
 *     ?ActivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C003A28C (-ActivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C003A33C (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ @ 0x1C003A3D8 (-IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputThread::InputThreadState::IsEmpty(CInputThread::InputThreadState *this)
{
  __int64 v1; // r8

  v1 = *((_QWORD *)this + 1);
  if ( ((v1 == 0) ^ (*((_QWORD *)this + 2) == 0LL) ^ (*((_DWORD *)this + 6) == 0)) != (*(_DWORD *)this == 0) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    v1 = *((_QWORD *)this + 1);
  }
  return v1 == 0;
}
