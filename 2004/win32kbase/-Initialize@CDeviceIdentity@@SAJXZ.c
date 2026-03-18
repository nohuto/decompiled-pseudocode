/*
 * XREFs of ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C0007DB0
 * Callers:
 *     InitializeInputComponents @ 0x1C0034DBC (InitializeInputComponents.c)
 * Callees:
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C0007EAC (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CDeviceIdentity::Initialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct CDeviceIdentity *v5; // rax

  v4 = 0;
  if ( gpDeviceIdentity )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v5 = (struct CDeviceIdentity *)Win32AllocPool(24LL, 1883530569LL);
  if ( v5 )
  {
    *((_QWORD *)v5 + 2) = 1LL;
    *(_QWORD *)v5 = 0LL;
    *((_QWORD *)v5 + 1) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  gpDeviceIdentity = v5;
  if ( !v5 )
    return (unsigned int)-1073741801;
  InputExtensibilityCallout::RegisterCoreMsgProvider(
    lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_,
    0LL,
    1LL);
  if ( !gpDeviceIdentity )
    return (unsigned int)-1073741801;
  return v4;
}
