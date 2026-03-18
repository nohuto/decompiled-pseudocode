/*
 * XREFs of PopDirectedDripsQueryEnabledMitigations @ 0x1407B9464
 * Callers:
 *     PopDirectedDripsEngage @ 0x140563404 (PopDirectedDripsEngage.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6A3BC (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14027C11C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     PopDirectedDripsQueryPs4Support @ 0x1407B9520 (PopDirectedDripsQueryPs4Support.c)
 *     PopDirectedDripsQueryRegistryValues @ 0x1407B95D8 (PopDirectedDripsQueryRegistryValues.c)
 */

__int64 (__fastcall *__fastcall PopDirectedDripsQueryEnabledMitigations(
        __int64 a1))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  char v1; // si
  char v2; // di
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  unsigned int v5; // ebx
  int Ps4Support; // eax
  int v7; // [rsp+30h] [rbp-28h]
  unsigned int v8; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0;
  v1 = 0;
  v2 = 0;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))PopDirectedDripsQueryRegistryValues(
                                                                                                     a1,
                                                                                                     &v8);
  v5 = v8;
  if ( (v8 & 1) != 0 )
  {
    v1 = 1;
    v5 = v8 & 0xFFFFFFFE;
  }
  if ( (v5 & 2) != 0 )
  {
    v2 = 1;
    v5 &= ~2u;
  }
  if ( (v5 & 8) == 0 )
  {
    Ps4Support = PopDirectedDripsQueryPs4Support();
    if ( Ps4Support == 1 )
    {
      v2 = 1;
    }
    else if ( Ps4Support )
    {
      v2 = 0;
    }
    result = wil_details_FeatureReporting_ReportUsageToService(
               (int)&Feature_DirectedFx__private_reporting,
               0x12F004Eu,
               0,
               0,
               (__int64)&Feature_PdttSupport_logged_traits,
               0,
               v7);
  }
  if ( v1 )
    v5 |= 1u;
  if ( v2 )
    v5 |= 2u;
  *(_DWORD *)(a1 + 48) = v5;
  return result;
}
