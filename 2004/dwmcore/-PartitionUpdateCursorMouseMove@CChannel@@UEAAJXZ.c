/*
 * XREFs of ?PartitionUpdateCursorMouseMove@CChannel@@UEAAJXZ @ 0x18009E990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18009EB7C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009F084 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionUpdateCursorMouseMove(CChannel *this)
{
  CChannel *v1; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF
  char *v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = this;
  v4 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v3 = 296;
  LODWORD(v1) = CChannel::SendCommand(v1, &v3, 4u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
  return (unsigned int)v1;
}
