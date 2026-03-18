/*
 * XREFs of ?IsRawMouseSubscriber@CInputDest@@QEBA_NXZ @ 0x1C0183560
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputDest::IsRawMouseSubscriber(CInputDest *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax

  if ( *((_DWORD *)this + 23) == 1 )
  {
    return (*(_DWORD *)(*((_QWORD *)this + 10) + 132LL) & 2u) >> 1;
  }
  else
  {
    if ( *((_DWORD *)this + 23) == 2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, (unsigned int)(*((_DWORD *)this + 23) - 1), a3, a4);
    LOBYTE(v4) = 0;
  }
  return v4;
}
