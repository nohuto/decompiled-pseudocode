/*
 * XREFs of ?Read@CBaseInput@@QEAAJXZ @ 0x1C0036EE0
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0036888 (UserActivateMITInputProcessing.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01A6D30 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C003732C (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     RIMReadInput @ 0x1C00A08D0 (RIMReadInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::Read(CBaseInput *this)
{
  __int64 DispatcherHandleByName; // rax
  __int64 v3; // rcx
  int v4; // edi

  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName(this, 1LL, 0LL);
  v4 = DispatcherHandleByName;
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
  return RIMReadInput(
           *((_QWORD *)this + 1),
           (int)this + 64,
           *((_DWORD *)this + 14),
           v4,
           0,
           (__int64)this + 48,
           (__int64)this + 24,
           (__int64)this + 32);
}
