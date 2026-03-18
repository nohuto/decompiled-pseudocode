/*
 * XREFs of ?PartitionTelemetryTouchInteractionEnd@CChannel@@UEAAJ_K@Z @ 0x1801ABF90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionTelemetryTouchInteractionEnd(CDataStreamWriter **this, __int64 a2)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v5 = 286;
  v6 = a2;
  LODWORD(a2) = CChannel::SendCommand(this, &v5, 0x10u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
  return (unsigned int)a2;
}
