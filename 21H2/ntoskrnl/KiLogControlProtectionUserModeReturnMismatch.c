/*
 * XREFs of KiLogControlProtectionUserModeReturnMismatch @ 0x1403F2BD8
 * Callers:
 *     KiProcessControlProtection @ 0x1405129A0 (KiProcessControlProtection.c)
 * Callees:
 *     Feature_CET_User_Audit_Livedump__private_ReportDeviceUsage @ 0x1403F2A74 (Feature_CET_User_Audit_Livedump__private_ReportDeviceUsage.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405D0494 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 */

void __fastcall KiLogControlProtectionUserModeReturnMismatch(__int64 a1)
{
  _KPROCESS *Process; // r10
  signed __int32 Blink_high; // eax
  signed __int32 v3; // ett

  Process = KeGetCurrentThread()->Process;
  _m_prefetchw((char *)&Process[2].ReadyListHead.Blink + 4);
  Blink_high = HIDWORD(Process[2].ReadyListHead.Blink);
  do
  {
    v3 = Blink_high;
    Blink_high = _InterlockedCompareExchange(
                   (volatile signed __int32 *)&Process[2].ReadyListHead.Blink + 1,
                   Blink_high | 0x10000,
                   Blink_high);
  }
  while ( v3 != Blink_high );
  if ( (Blink_high & 0x10000) == 0 )
  {
    if ( (_DWORD)a1 == 1 || (_DWORD)a1 == 2 )
      EtwTimLogControlProtectionUserModeReturnMismatch(a1, Process);
    Feature_CET_User_Audit_Livedump__private_ReportDeviceUsage();
  }
}
