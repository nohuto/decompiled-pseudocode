/*
 * XREFs of ?IndirectSwapchainRenderTargetUpdateTargetBounds@CChannel@@UEAAJIIIII@Z @ 0x1801AACD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::IndirectSwapchainRenderTargetUpdateTargetBounds(
        CDataStreamWriter **this,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v10; // ebx
  _DWORD v12[10]; // [rsp+20h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 84);
  v12[0] = 181;
  v12[4] = a5;
  v12[5] = a6;
  v12[1] = a2;
  v12[2] = a3;
  v12[3] = a4;
  v10 = CChannel::SendCommand(this, v12, 0x18u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v10;
}
