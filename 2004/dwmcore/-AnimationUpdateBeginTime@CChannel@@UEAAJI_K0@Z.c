/*
 * XREFs of ?AnimationUpdateBeginTime@CChannel@@UEAAJI_K0@Z @ 0x180150E90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18009EB7C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009F084 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18009F4B0 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::AnimationUpdateBeginTime(CChannel *this, unsigned int a2, __int64 a3, __int64 a4)
{
  __int128 v5; // rdi
  unsigned int v7; // ebx
  _DWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)&v5 + 1) = a4;
  *(_QWORD *)&v5 = a3;
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 2);
  v9[0] = 12;
  v9[1] = a2;
  v10 = v5;
  v7 = CChannel::SendCommand(this, v9, 0x18u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v7;
}
