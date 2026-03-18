/*
 * XREFs of Controller_PopulatePciDeviceInformation @ 0x1C007233C
 * Callers:
 *     Controller_RetrievePciData @ 0x1C007215C (Controller_RetrievePciData.c)
 *     Controller_RetrieveUrsData @ 0x1C00764E8 (Controller_RetrieveUrsData.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     Controller_PopulateVIAFirmwareVersion @ 0x1C0076084 (Controller_PopulateVIAFirmwareVersion.c)
 */

__int64 __fastcall Controller_PopulatePciDeviceInformation(
        __int64 a1,
        int a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        _QWORD *a5,
        unsigned __int16 *a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // ebp
  int v10; // r14d
  unsigned __int16 v12; // dx
  __int64 result; // rax
  __int64 v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+30h] [rbp-38h]
  __int64 v17; // [rsp+30h] [rbp-38h]
  int v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+38h] [rbp-30h]

  v8 = a4;
  v10 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = a4;
    v16 = a3;
    WPP_RECORDER_SF_ddd(a1, 4u, 4u, 0x84u, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, a2, v16, v18);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = *((unsigned __int8 *)a6 + 8);
      LODWORD(v17) = a6[1];
      LODWORD(v15) = *a6;
      WPP_RECORDER_SF_ddd(a1, 4u, 4u, 0x85u, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v15, v17, v19);
    }
  }
  v12 = *a6;
  if ( *a6 == 4358 )
  {
    Controller_PopulateVIAFirmwareVersion(a1, a5, a6, a8);
    v12 = *a6;
  }
  *(_DWORD *)a7 = v12;
  *(_DWORD *)(a7 + 4) = a6[1];
  *(_WORD *)(a7 + 8) = *((unsigned __int8 *)a6 + 8);
  *(_WORD *)(a7 + 24) = a6[22];
  *(_WORD *)(a7 + 26) = a6[23];
  *(_QWORD *)(a7 + 32) = a5[1];
  *(_QWORD *)(a7 + 40) = a5[6];
  result = a5[7];
  *(_QWORD *)(a7 + 48) = result;
  *(_DWORD *)(a7 + 12) = a2;
  *(_DWORD *)(a7 + 16) = v10;
  *(_DWORD *)(a7 + 20) = v8;
  return result;
}
