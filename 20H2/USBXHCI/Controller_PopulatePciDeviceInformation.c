/*
 * XREFs of Controller_PopulatePciDeviceInformation @ 0x1C006DCD0
 * Callers:
 *     Controller_RetrievePciData @ 0x1C006DAF0 (Controller_RetrievePciData.c)
 *     Controller_RetrieveUrsData @ 0x1C0076180 (Controller_RetrieveUrsData.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0013CB0 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0015850 (WPP_RECORDER_SF_ddL.c)
 *     Controller_PopulateVIAFirmwareVersion @ 0x1C0075D10 (Controller_PopulateVIAFirmwareVersion.c)
 */

__int64 __fastcall Controller_PopulatePciDeviceInformation(
        __int64 a1,
        int a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        _QWORD *a5,
        __int16 *a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // ebp
  int v9; // r15d
  int v10; // r14d
  int v12; // edx
  unsigned __int16 v13; // dx
  __int64 result; // rax
  char v15; // [rsp+28h] [rbp-40h]

  v8 = a4;
  v9 = a2;
  v10 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_ddd(a1, a2, 4, 132, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, v15, a3, a4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_ddL(
        a1,
        v12,
        4,
        133,
        (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
        *a6,
        a6[1],
        *((_BYTE *)a6 + 8));
    }
  }
  v13 = *a6;
  if ( *a6 == 4358 )
  {
    Controller_PopulateVIAFirmwareVersion(a1, a5, a6, a8);
    v13 = *a6;
  }
  *(_DWORD *)a7 = v13;
  *(_DWORD *)(a7 + 4) = (unsigned __int16)a6[1];
  *(_WORD *)(a7 + 8) = *((unsigned __int8 *)a6 + 8);
  *(_WORD *)(a7 + 24) = a6[22];
  *(_WORD *)(a7 + 26) = a6[23];
  *(_QWORD *)(a7 + 32) = a5[1];
  *(_QWORD *)(a7 + 40) = a5[6];
  result = a5[7];
  *(_QWORD *)(a7 + 48) = result;
  *(_DWORD *)(a7 + 12) = v9;
  *(_DWORD *)(a7 + 16) = v10;
  *(_DWORD *)(a7 + 20) = v8;
  return result;
}
