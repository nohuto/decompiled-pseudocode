/*
 * XREFs of ?CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z @ 0x18014F5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18006677C (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180068DB4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800691E0 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::CombinedGeometryUpdate(__int64 a1, unsigned int a2, int a3, int a4, int a5)
{
  int v9; // ebx
  unsigned int v10; // ebx
  _DWORD v12[14]; // [rsp+20h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  CChannel::CheckHandle(a1, a2, 25);
  CChannel::CheckOptionalHandle(a1, a4);
  v9 = a5;
  CChannel::CheckOptionalHandle(a1, a5);
  v12[0] = 478;
  v12[1] = a2;
  v12[2] = a3;
  v12[3] = a4;
  v12[4] = v9;
  v10 = CChannel::SendCommand((CChannel *)a1, v12, 0x14u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v10;
}
