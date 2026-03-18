/*
 * XREFs of ?InteractionUpdateFlags@CChannel@@UEAAJI_N00000W4InteractionSourceTypes@@@Z @ 0x1800EF410
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::InteractionUpdateFlags(
        __int64 a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9)
{
  unsigned int v13; // ebx
  _DWORD v15[2]; // [rsp+20h] [rbp-20h] BYREF
  char v16; // [rsp+28h] [rbp-18h]
  char v17; // [rsp+29h] [rbp-17h]
  char v18; // [rsp+2Ah] [rbp-16h]
  char v19; // [rsp+2Bh] [rbp-15h]
  char v20; // [rsp+2Ch] [rbp-14h]
  char v21; // [rsp+2Dh] [rbp-13h]
  __int16 v22; // [rsp+2Eh] [rbp-12h]
  int v23; // [rsp+30h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+60h] [rbp+20h] BYREF

  v24 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  CChannel::CheckHandle(a1, a2, 87);
  v15[0] = 195;
  v22 = 0;
  v18 = a5;
  v19 = a6;
  v20 = a7;
  v21 = a8;
  v23 = a9;
  v15[1] = a2;
  v16 = a3;
  v17 = a4;
  v13 = CChannel::SendCommand((CDataStreamWriter **)a1, v15, 0x14u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v24);
  return v13;
}
