/*
 * XREFs of ?PartitionForceRender@CChannel@@UEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1800DD700
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005D6EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005DBF8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionForceRender(__int64 a1, __int8 a2, __int8 a3, __int32 a4, __int8 a5)
{
  unsigned int v9; // ebx
  __m128i si128; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i8[4] = a2;
  si128.m128i_i8[5] = a3;
  si128.m128i_i32[2] = a4;
  si128.m128i_i8[12] = a5;
  v9 = CChannel::SendCommand((CChannel *)a1, &si128, 0x10u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return v9;
}
