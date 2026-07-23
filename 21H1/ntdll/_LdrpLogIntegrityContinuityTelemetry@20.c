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

NTSTATUS __fastcall LdrpLogIntegrityContinuityTelemetry(_DWORD *a1, int a2, int a3, int a4, char a5)
{
  int v6; // eax
  int *v7; // edi
  int v8; // ebx
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  size_t v13; // [esp-4h] [ebp-458h]
  int v14; // [esp+Ch] [ebp-448h] BYREF
  int v15; // [esp+10h] [ebp-444h] BYREF
  int v16; // [esp+14h] [ebp-440h] BYREF
  int v17; // [esp+18h] [ebp-43Ch] BYREF
  int v18; // [esp+1Ch] [ebp-438h] BYREF
  int v19; // [esp+20h] [ebp-434h] BYREF
  int v20; // [esp+24h] [ebp-430h] BYREF
  int SystemInformation; // [esp+28h] [ebp-42Ch] BYREF
  int v22; // [esp+2Ch] [ebp-428h]
  int v23; // [esp+30h] [ebp-424h] BYREF
  char v24; // [esp+37h] [ebp-41Dh] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [esp+38h] [ebp-41Ch] BYREF
  _CONTEXT ContextRecord; // [esp+88h] [ebp-3CCh] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+358h] [ebp-FCh] BYREF
  _DWORD *v28; // [esp+378h] [ebp-DCh]
  int v29; // [esp+37Ch] [ebp-D8h]
  int v30; // [esp+380h] [ebp-D4h]
  int v31; // [esp+384h] [ebp-D0h]
  int v32; // [esp+388h] [ebp-CCh]
  int v33; // [esp+38Ch] [ebp-C8h]
  _DWORD v34[24]; // [esp+390h] [ebp-C4h] BYREF
  _DWORD v35[23]; // [esp+3F0h] [ebp-64h] BYREF

  v23 = a2;
  SystemInformation = 0;
  v22 = 0;
  if ( RtlRunOnceExecuteOnce(&LibLoaderTelemetryInitRunOnce, (PRTL_RUN_ONCE_INIT_FN)LibLoaderTelemetryInitOnce, 0, 0) >= 0 )
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
      v32 = *(_DWORD *)(v9 + 40);
      v34[0] = v10;
      v28 = v34;
      v29 = 0;
      v31 = 0;
      v33 = 0;
      v34[1] = 0;
      v11 = a1[8];
      v30 = 2;
      v20 = *(unsigned __int8 *)(v11 + 164);
      v34[2] = &v20;
      v19 = a1[4];
      v34[6] = &v19;
      v18 = a1[5];
      v34[10] = &v18;
      v17 = a3;
      v34[14] = &v17;
      v34[18] = v35;
      v34[22] = v7[1];
      v35[0] = *(unsigned __int16 *)v7;
      v35[2] = &v16;
      v35[6] = &v23;
      v15 = v22;
      v35[10] = &v15;
      v14 = a4;
      v34[3] = 0;
      v34[4] = 4;
      v34[5] = 0;
      v34[7] = 0;
      v34[8] = 4;
      v34[9] = 0;
      v34[11] = 0;
      v34[12] = 4;
      v34[13] = 0;
      v34[15] = 0;
      v34[16] = 4;
      v34[17] = 0;
      v34[19] = 0;
      v34[20] = 2;
      v34[21] = 0;
      v34[23] = 0;
      v35[1] = 0;
      v16 = v8;
      v35[3] = 0;
      v35[4] = 4;
      v35[5] = 0;
      v35[7] = 0;
      v35[8] = 4;
      v35[9] = 0;
      v35[11] = 0;
      v35[12] = 4;
      v35[13] = 0;
      v35[14] = &v14;
      v24 = a5;
      v35[18] = &v24;
      v35[15] = 0;
      v35[16] = 4;
      v35[17] = 0;
      v35[19] = 0;
      v35[21] = 0;
      v35[20] = 1;
      _tlgWriteTransfer_EtwEventWriteTransfer(4, 4, 0xFu, &UserData);
    }
  }
  RtlCaptureContext(&ContextRecord);
  LODWORD(v13) = 80;
  memset(&ExceptionRecord, 0, v13);
  ExceptionRecord.ExceptionCode = -1073740791;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionAddress = 0;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = 45;
  return RtlReportException(&ExceptionRecord, &ContextRecord, 0x1Eu);
}
