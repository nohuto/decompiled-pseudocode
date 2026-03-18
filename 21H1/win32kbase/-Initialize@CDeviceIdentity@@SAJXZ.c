/*
 * XREFs of ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C0022D18
 * Callers:
 *     InitializeInputComponents @ 0x1C0023A2C (InitializeInputComponents.c)
 * Callees:
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C0022E1C (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CDeviceIdentity::Initialize(__int64 a1)
{
  unsigned int v1; // ebx
  struct CDeviceIdentity *v2; // rax

  v1 = 0;
  if ( gpDeviceIdentity )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v2 = (struct CDeviceIdentity *)Win32AllocPool(24LL, 1883530569LL);
  if ( v2 )
  {
    *((_QWORD *)v2 + 2) = 1LL;
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  gpDeviceIdentity = v2;
  if ( !v2 )
    return (unsigned int)-1073741801;
  InputExtensibilityCallout::RegisterCoreMsgProvider(
    lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_,
    0LL,
    1LL);
  if ( !gpDeviceIdentity )
    return (unsigned int)-1073741801;
  return v1;
}
