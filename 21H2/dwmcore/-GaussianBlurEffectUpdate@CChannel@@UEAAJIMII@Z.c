/*
 * XREFs of ?GaussianBlurEffectUpdate@CChannel@@UEAAJIMII@Z @ 0x1801AA840
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::GaussianBlurEffectUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        float a3,
        int a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  _DWORD v10[8]; // [rsp+20h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 62);
  v10[0] = 478;
  *(float *)&v10[2] = a3;
  v10[1] = a2;
  v10[3] = a4;
  v10[4] = a5;
  v8 = CChannel::SendCommand(this, v10, 0x14u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v8;
}
