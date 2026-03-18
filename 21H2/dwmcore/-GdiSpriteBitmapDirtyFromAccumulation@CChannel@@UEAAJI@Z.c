/*
 * XREFs of ?GdiSpriteBitmapDirtyFromAccumulation@CChannel@@UEAAJI@Z @ 0x1801AA8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::GdiSpriteBitmapDirtyFromAccumulation(CDataStreamWriter **this, unsigned int a2)
{
  unsigned int v4; // ebx
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 63);
  v6[0] = 524;
  v6[2] = 1;
  v6[1] = a2;
  v4 = CChannel::SendCommand(this, v6, 0xCu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
  return v4;
}
