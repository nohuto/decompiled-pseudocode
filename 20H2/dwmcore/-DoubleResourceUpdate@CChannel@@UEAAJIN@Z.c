/*
 * XREFs of ?DoubleResourceUpdate@CChannel@@UEAAJIN@Z @ 0x18014F6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180068DB4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800691E0 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::DoubleResourceUpdate(CChannel *this, unsigned int a2, double a3)
{
  float v5; // xmm0_4
  unsigned int v6; // ebx
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 60);
  v8[0] = 152;
  v8[1] = a2;
  v5 = a3;
  *(float *)&v8[2] = v5;
  v6 = CChannel::SendCommand(this, v8, 0xCu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v6;
}
