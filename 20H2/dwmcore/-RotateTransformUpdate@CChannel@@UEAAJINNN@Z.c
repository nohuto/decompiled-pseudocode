/*
 * XREFs of ?RotateTransformUpdate@CChannel@@UEAAJINNN@Z @ 0x180150860
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180068DB4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800691E0 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::RotateTransformUpdate(CChannel *this, unsigned int a2, double a3, double a4, double a5)
{
  float v7; // xmm1_4
  float v8; // xmm0_4
  unsigned int v9; // ebx
  _DWORD v11[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+70h] [rbp+8h] BYREF

  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 148);
  v11[0] = 495;
  v7 = a3;
  v11[1] = a2;
  *(float *)&v11[2] = v7;
  v8 = a4;
  *(float *)&v11[4] = a5;
  *(float *)&v11[3] = v8;
  v9 = CChannel::SendCommand(this, v11, 0x14u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return v9;
}
