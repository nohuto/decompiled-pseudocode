/*
 * XREFs of ?get_Kind@CActivatedEventArgsBase@@UEAAJPEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x180486610
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18047A444 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CActivatedEventArgsBase::get_Kind(
        CActivatedEventArgsBase *this,
        enum Windows::ApplicationModel::Activation::ActivationKind *a2)
{
  if ( !*((_BYTE *)this + 101) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  *(_DWORD *)a2 = *((_DWORD *)this + 18);
  return 0LL;
}
