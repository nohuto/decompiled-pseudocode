/*
 * XREFs of _LdrpLogIntegrityContinuityTelemetry@20 @ 0x4B33057E
 * Callers:
 *     _LdrpValidateIntegrityContinuity@12 @ 0x4B333DBC (_LdrpValidateIntegrityContinuity@12.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0x4B2ADDDA (__tlgKeywordOn@12.c)
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlCaptureContext@4 @ 0x4B308820 (_RtlCaptureContext@4.c)
 *     __tlgWriteTransfer_EtwEventWriteTransfer@24 @ 0x4B330F4C (__tlgWriteTransfer_EtwEventWriteTransfer@24.c)
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 */

int __fastcall LdrpLogIntegrityContinuityTelemetry(_DWORD *a1, int a2, int a3, int a4, char a5)
{
  int v6; // eax
  int *v7; // edi
  int v8; // ebx
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v13; // [esp+Ch] [ebp-448h] BYREF
  int v14; // [esp+10h] [ebp-444h] BYREF
  int v15; // [esp+14h] [ebp-440h] BYREF
  int v16; // [esp+18h] [ebp-43Ch] BYREF
  int v17; // [esp+1Ch] [ebp-438h] BYREF
  int v18; // [esp+20h] [ebp-434h] BYREF
  int v19; // [esp+24h] [ebp-430h] BYREF
  int SystemInformation; // [esp+28h] [ebp-42Ch] BYREF
  int v21; // [esp+2Ch] [ebp-428h]
  int v22; // [esp+30h] [ebp-424h] BYREF
  char v23; // [esp+37h] [ebp-41Dh] BYREF
  _DWORD v24[20]; // [esp+38h] [ebp-41Ch] BYREF
  CONTEXT ContextRecord; // [esp+88h] [ebp-3CCh] BYREF
  _BYTE v26[32]; // [esp+358h] [ebp-FCh] BYREF
  _DWORD *v27; // [esp+378h] [ebp-DCh]
  int v28; // [esp+37Ch] [ebp-D8h]
  int v29; // [esp+380h] [ebp-D4h]
  int v30; // [esp+384h] [ebp-D0h]
  int v31; // [esp+388h] [ebp-CCh]
  int v32; // [esp+38Ch] [ebp-C8h]
  _DWORD v33[24]; // [esp+390h] [ebp-C4h] BYREF
  _DWORD v34[23]; // [esp+3F0h] [ebp-64h] BYREF

  v22 = a2;
  SystemInformation = 0;
  v21 = 0;
  if ( RtlRunOnceExecuteOnce(
         (int)&LibLoaderTelemetryInitRunOnce,
         (int (__stdcall *)(int, int, int))LibLoaderTelemetryInitOnce,
         0,
         0) >= 0 )
  {
    v6 = a1[7];
    v7 = (int *)(v6 + 36);
    if ( v6 )
    {
      v8 = *(unsigned __int8 *)(v6 + 164);
    }
    else
    {
      v7 = &dword_4B2819B0;
      v8 = -1;
    }
    SystemInformation = 8;
    NtQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, 0);
    if ( (unsigned int)dword_4B3A32F0 > 5 && _tlgKeywordOn(&dword_4B3A32F0, 0x800000000000LL) )
    {
      v9 = a1[8];
      v10 = *(unsigned __int16 *)(v9 + 36);
      v31 = *(_DWORD *)(v9 + 40);
      v33[0] = v10;
      v27 = v33;
      v28 = 0;
      v30 = 0;
      v32 = 0;
      v33[1] = 0;
      v11 = a1[8];
      v29 = 2;
      v19 = *(unsigned __int8 *)(v11 + 164);
      v33[2] = &v19;
      v18 = a1[4];
      v33[6] = &v18;
      v17 = a1[5];
      v33[10] = &v17;
      v16 = a3;
      v33[14] = &v16;
      v33[18] = v34;
      v33[22] = v7[1];
      v34[0] = *(unsigned __int16 *)v7;
      v34[2] = &v15;
      v34[6] = &v22;
      v14 = v21;
      v34[10] = &v14;
      v13 = a4;
      v33[3] = 0;
      v33[4] = 4;
      v33[5] = 0;
      v33[7] = 0;
      v33[8] = 4;
      v33[9] = 0;
      v33[11] = 0;
      v33[12] = 4;
      v33[13] = 0;
      v33[15] = 0;
      v33[16] = 4;
      v33[17] = 0;
      v33[19] = 0;
      v33[20] = 2;
      v33[21] = 0;
      v33[23] = 0;
      v34[1] = 0;
      v15 = v8;
      v34[3] = 0;
      v34[4] = 4;
      v34[5] = 0;
      v34[7] = 0;
      v34[8] = 4;
      v34[9] = 0;
      v34[11] = 0;
      v34[12] = 4;
      v34[13] = 0;
      v34[14] = &v13;
      v23 = a5;
      v34[18] = &v23;
      v34[15] = 0;
      v34[16] = 4;
      v34[17] = 0;
      v34[19] = 0;
      v34[21] = 0;
      v34[20] = 1;
      _tlgWriteTransfer_EtwEventWriteTransfer(4, 4, 15, v26);
    }
  }
  RtlCaptureContext(&ContextRecord);
  memset(v24, 0, sizeof(v24));
  v24[0] = -1073740791;
  v24[1] = 0;
  v24[3] = 0;
  v24[4] = 1;
  v24[5] = 45;
  return RtlReportException(v24, &ContextRecord, 30);
}
