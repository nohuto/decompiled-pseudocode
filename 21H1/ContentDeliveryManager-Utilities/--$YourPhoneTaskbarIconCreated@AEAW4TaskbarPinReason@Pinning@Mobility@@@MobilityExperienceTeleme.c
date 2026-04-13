/*
 * XREFs of ??$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAXAEAW4TaskbarPinReason@Pinning@Mobility@@@Z @ 0x180018138
 * Callers:
 *     ??R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ @ 0x18000E3A4 (--R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ @ 0x18000D3F8 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

int __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::YourPhoneTaskbarIconCreated<enum Mobility::Pinning::TaskbarPinReason &>(
        int *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
  v3 = (__int64)v2;
  if ( *(_DWORD *)v2 > 5u )
  {
    LODWORD(v2) = 0;
    if ( (*(_QWORD *)(v3 + 16) & 0x800000000000LL) != 0
      && (*(_QWORD *)(v3 + 24) & 0x800000000000LL) == *(_QWORD *)(v3 + 24) )
    {
      v4 = *a1;
      v10 = 0;
      v6 = v4;
      v9 = 4;
      v8 = &v6;
      LODWORD(v2) = tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_18016FE89, 0LL, 0LL, 3u, &v7);
    }
  }
  return (int)v2;
}
