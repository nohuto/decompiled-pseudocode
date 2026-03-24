/*
 * XREFs of ?PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJAEBUTOUCH_TELEMETRY_BEGIN_INFO@@@Z @ 0x180150C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005D6EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005DBF8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryTouchInteractionBegin(
        CChannel *this,
        const struct TOUCH_TELEMETRY_BEGIN_INFO *a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  int v8; // [rsp+20h] [rbp-40h] BYREF
  __int128 v9; // [rsp+28h] [rbp-38h]
  __int128 v10; // [rsp+38h] [rbp-28h]
  __int128 v11; // [rsp+48h] [rbp-18h]
  __int64 v12; // [rsp+58h] [rbp-8h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+70h] [rbp+10h] BYREF

  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v4 = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 1);
  v8 = 292;
  v9 = v4;
  v6 = *((_OWORD *)a2 + 2);
  v10 = v5;
  *(_QWORD *)&v5 = *((_QWORD *)a2 + 6);
  v11 = v6;
  v12 = v5;
  LODWORD(a2) = CChannel::SendCommand(this, &v8, 0x40u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return (unsigned int)a2;
}
