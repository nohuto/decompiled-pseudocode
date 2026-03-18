/*
 * XREFs of ?WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z @ 0x1800CEB20
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18006677C (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180068DB4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800691E0 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetSpriteClip(CChannel *this, unsigned int a2, __int8 a3, int a4)
{
  unsigned int v8; // ebx
  __m128i si128; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 203);
  CChannel::CheckOptionalHandle((__int64)this, a4);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  si128.m128i_i8[8] = a3;
  si128.m128i_i32[3] = a4;
  v8 = CChannel::SendCommand(this, &si128, 0x10u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v8;
}
