/*
 * XREFs of ?PartitionUpdateCursorMouseMove@CChannel@@UEAAJXZ @ 0x1800DFBD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionUpdateCursorMouseMove(CDataStreamWriter **this)
{
  CDataStreamWriter **v1; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = this;
  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v3 = 289;
  LODWORD(v1) = CChannel::SendCommand(v1, &v3, 4u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
  return (unsigned int)v1;
}
