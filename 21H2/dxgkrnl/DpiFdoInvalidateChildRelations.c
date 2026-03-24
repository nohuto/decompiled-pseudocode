/*
 * XREFs of DpiFdoInvalidateChildRelations @ 0x1C0179340
 * Callers:
 *     DpiFdoHandleSystemPower @ 0x1C017695C (DpiFdoHandleSystemPower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0177F24 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C0179040 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C018AE58 (DpiFdoCreateRelatedObjects.c)
 *     DpiPollDisplayChildren @ 0x1C02C6C3C (DpiPollDisplayChildren.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C02CB1E0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiAcpiProcessEventRequests @ 0x1C02D64EC (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     DxgkDiagCalcDuration1us @ 0x1C0020414 (DxgkDiagCalcDuration1us.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013AB0C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0179578 (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoInvalidateChildRelations(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  int v5; // r14d
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // r13d
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rbx
  int v16; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD v25[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v26; // [rsp+30h] [rbp-49h]
  __int64 v27; // [rsp+38h] [rbp-41h] BYREF
  _DWORD v28[2]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v29[24]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v30; // [rsp+60h] [rbp-19h]
  int v31; // [rsp+68h] [rbp-11h]
  int v32; // [rsp+6Ch] [rbp-Dh]
  int v33; // [rsp+70h] [rbp-9h]
  int v34; // [rsp+74h] [rbp-5h]
  int v35; // [rsp+78h] [rbp-1h]
  int v36; // [rsp+7Ch] [rbp+3h]
  __int64 v37; // [rsp+80h] [rbp+7h]

  v3 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 64);
  v27 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3304), 1u);
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = KeQueryTimeIncrement() * v7;
  v9 = v3 & 1;
  v10 = (v3 & 0xFFFFFFFE) - 1;
  if ( (v3 & 1) == 0 )
    v10 = v3 & 0xFFFFFFFE;
  if ( *(_DWORD *)(v6 + 3552) >= v10 && v8 - *(_QWORD *)(v6 + 3560) < 10000000 )
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 3304));
    KeLeaveCriticalRegion();
    LODWORD(v14) = 1075708985;
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
    v22[3] = DpiFdoInvalidateChildRelations;
    v23 = *(int *)(v6 + 3552);
    v22[6] = v3;
    v22[4] = v23;
    v22[5] = v8;
    v22[7] = 1075708985LL;
  }
  else
  {
    *(_DWORD *)(v6 + 3552) = v10;
    *(_QWORD *)(v6 + 3560) = v8;
    v26 = 0x10000LL;
    v25[1] = a3;
    v25[0] = (v9 << 28) | 0x2000000u;
    LOBYTE(v26) = (v3 & 4) != 0;
    BYTE1(v26) = (v3 & 2) != 0;
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD *))DpiDxgkDdiDisplayDetectControl)(
            v6,
            *(_QWORD *)(v6 + 40),
            *(_QWORD *)(v6 + 48),
            v25);
    v14 = v11;
    if ( v11 < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v24 + 24) = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 1128LL);
      *(_QWORD *)(v24 + 32) = v14;
      WdLogEvent5_WdError(v24);
    }
    ExReleaseResourceLite((PERESOURCE)(v6 + 3304));
    KeLeaveCriticalRegion();
    *(_BYTE *)(v6 + 3513) = 0;
  }
  memset(v29, 0, sizeof(v29));
  v32 = 0;
  v15 = *(_QWORD *)(v6 + 2672);
  v16 = DxgkDiagCalcDuration1us(&v27);
  v28[0] = 30;
  v28[1] = 72;
  v34 = v9 | v5 & 0xFFFF00;
  v31 = 0;
  v30 = 0LL;
  memset(v29, 0, sizeof(v29));
  v33 = 37;
  v35 = v16;
  v36 = v14;
  v37 = v15;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v28, *(_QWORD *)(v6 + 5936));
  return (unsigned int)v14;
}
