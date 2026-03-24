/*
 * XREFs of ?PartitionTelemetryTouchInteractionUpdate@CChannel@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180150D40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005D6EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005DBF8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryTouchInteractionUpdate(
        CChannel *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  int v9; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v10[5]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v11; // [rsp+78h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+90h] [rbp+8h] BYREF

  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v9 = 294;
  memset_0(v10, 0, 0x58uLL);
  v4 = *((_OWORD *)a2 + 1);
  v10[0] = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 2);
  v10[1] = v4;
  v6 = *((_OWORD *)a2 + 3);
  v10[2] = v5;
  v7 = *((_OWORD *)a2 + 4);
  v10[3] = v6;
  *(_QWORD *)&v6 = *((_QWORD *)a2 + 10);
  v10[4] = v7;
  v11 = v6;
  LODWORD(a2) = CChannel::SendCommand(this, &v9, 0x60u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return (unsigned int)a2;
}
