/*
 * XREFs of ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C00A8610
 * Callers:
 *     ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C00A8330 (-DeclareThreadAsInput@CInputThread@@QEAA_NXZ.c)
 *     ?ActivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C00A843C (-ActivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C00A84EC (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ @ 0x1C00A8588 (-IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputThread::InputThreadState::IsEmpty(
        CInputThread::InputThreadState *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  __int64 v6; // rdx

  v4 = *((_QWORD *)this + 1);
  v6 = (v4 == 0) ^ (*((_QWORD *)this + 2) == 0LL) ^ (unsigned int)(*((_DWORD *)this + 6) == 0);
  if ( (_DWORD)v6 != (*(_DWORD *)this == 0) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v6, v4, a4);
    v4 = *((_QWORD *)this + 1);
  }
  return v4 == 0;
}
