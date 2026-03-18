/*
 * XREFs of ?CachedVisualImageFreeze@CChannel@@UEAAJI@Z @ 0x1800F35E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::CachedVisualImageFreeze(CDataStreamWriter **this, unsigned int a2)
{
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+34h] [rbp+Ch]
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 16);
  v6 = 29;
  v7 = a2;
  v4 = CChannel::SendCommand(this, &v6, 8u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v4;
}
