/*
 * XREFs of ?VisualSetOptions@CChannel@@UEAAJI_N00@Z @ 0x180073D80
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualSetOptions(CChannel *this, unsigned int a2, char a3, unsigned __int8 a4, bool a5)
{
  unsigned int v9; // ebx
  _DWORD v11[2]; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]
  __int16 v13; // [rsp+29h] [rbp-Fh]
  bool v14; // [rsp+2Bh] [rbp-Dh]
  char *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 195);
  v11[0] = 420;
  v14 = a5;
  v11[1] = a2;
  v12 = a3;
  v13 = a4;
  v9 = CChannel::SendCommand(this, v11, 0xCu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return v9;
}
