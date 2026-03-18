/*
 * XREFs of ?VisualRemoveChild@CChannel@@UEAAJII@Z @ 0x1800704C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RemoveChild@CChannel@@AEAAXII@Z @ 0x180073CFC (-RemoveChild@CChannel@@AEAAXII@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualRemoveChild(CChannel *this, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // edx
  unsigned int v7; // ebx
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF
  char *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 195LL);
  CChannel::CheckHandle(this, a3, 195LL);
  CChannel::RemoveChild(this, v6, a3);
  v9[0] = 404;
  v9[1] = a2;
  v9[2] = a3;
  v7 = CChannel::SendCommand(this, v9, 0xCu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  return v7;
}
