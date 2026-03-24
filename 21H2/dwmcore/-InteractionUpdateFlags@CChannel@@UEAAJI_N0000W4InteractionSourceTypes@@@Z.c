/*
 * XREFs of ?InteractionUpdateFlags@CChannel@@UEAAJI_N0000W4InteractionSourceTypes@@@Z @ 0x1800D9830
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005D6EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005DBF8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18005E020 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::InteractionUpdateFlags(
        __int64 a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        char a6,
        unsigned __int8 a7,
        int a8)
{
  unsigned int v12; // ebx
  _DWORD v14[2]; // [rsp+20h] [rbp-20h] BYREF
  char v15; // [rsp+28h] [rbp-18h]
  char v16; // [rsp+29h] [rbp-17h]
  char v17; // [rsp+2Ah] [rbp-16h]
  char v18; // [rsp+2Bh] [rbp-15h]
  int v19; // [rsp+2Ch] [rbp-14h]
  int v20; // [rsp+30h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+60h] [rbp+20h] BYREF

  v21 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  CChannel::CheckHandle(a1, a2, 87);
  v14[0] = 205;
  v17 = a5;
  v18 = a6;
  v19 = a7;
  v20 = a8;
  v14[1] = a2;
  v15 = a3;
  v16 = a4;
  v12 = CChannel::SendCommand((CChannel *)a1, v14, 0x14u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v21);
  return v12;
}
