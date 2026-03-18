/*
 * XREFs of ?VisualSetOpacity@CChannel@@UEAAJIM@Z @ 0x1801AD150
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualSetOpacity(CDataStreamWriter **this, unsigned int a2, float a3)
{
  unsigned int v5; // ebx
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 195);
  v7[0] = 419;
  *(float *)&v7[2] = a3;
  v7[1] = a2;
  v5 = CChannel::SendCommand(this, v7, 0xCu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v5;
}
