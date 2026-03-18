/*
 * XREFs of ?TranslateTransformUpdate@CChannel@@UEAAJINN@Z @ 0x180020640
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180068DB4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800691E0 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::TranslateTransformUpdate(CChannel *this, unsigned int a2, double a3, double a4)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  unsigned int v8; // ebx
  _DWORD v10[4]; // [rsp+20h] [rbp-38h] BYREF
  char *v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 189LL);
  v10[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v10[1] = a2;
  v6 = a3;
  v7 = a4;
  *(float *)&v10[2] = v6;
  *(float *)&v10[3] = v7;
  v8 = CChannel::SendCommand(this, v10, 0x10u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v8;
}
