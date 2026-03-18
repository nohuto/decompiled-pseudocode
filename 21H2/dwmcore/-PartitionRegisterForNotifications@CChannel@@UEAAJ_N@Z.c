/*
 * XREFs of ?PartitionRegisterForNotifications@CChannel@@UEAAJ_N@Z @ 0x1800F8670
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionRegisterForNotifications(CDataStreamWriter **this, char a2)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v6 = 273LL;
  BYTE4(v6) = a2;
  v4 = CChannel::SendCommand(this, &v6, 8u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
  return v4;
}
