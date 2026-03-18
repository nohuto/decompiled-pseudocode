/*
 * XREFs of ?Read@CBaseInput@@QEAAJXZ @ 0x1C0005EE0
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0005888 (UserActivateMITInputProcessing.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01A0FD0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C000632C (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     RIMReadInput @ 0x1C00ABA70 (RIMReadInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::Read(CBaseInput *this)
{
  __int64 DispatcherHandleByName; // rdi

  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName(this, 1LL, 0LL);
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  return RIMReadInput(
           *((_QWORD *)this + 1),
           (int)this + 64,
           *((_DWORD *)this + 14),
           DispatcherHandleByName,
           0,
           (__int64)this + 48,
           (__int64)this + 24,
           (__int64)this + 32);
}
