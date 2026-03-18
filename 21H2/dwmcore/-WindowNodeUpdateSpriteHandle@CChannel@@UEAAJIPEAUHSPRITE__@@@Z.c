/*
 * XREFs of ?WindowNodeUpdateSpriteHandle@CChannel@@UEAAJIPEAUHSPRITE__@@@Z @ 0x1800F34B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeUpdateSpriteHandle(CDataStreamWriter **this, unsigned int a2, HSPRITE a3)
{
  unsigned int v6; // ebx
  _DWORD v8[2]; // [rsp+20h] [rbp-18h] BYREF
  HSPRITE v9; // [rsp+28h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 204);
  v8[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v8[1] = a2;
  v9 = a3;
  v6 = CChannel::SendCommand(this, v8, 0x10u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  return v6;
}
