/*
 * XREFs of DpiFdoInvalidateChildRelations @ 0x1C01F3230
 * Callers:
 *     DpiFdoHandleSystemPower @ 0x1C01F02DC (DpiFdoHandleSystemPower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01F0E64 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C01F2F00 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C01FBF08 (DpiFdoCreateRelatedObjects.c)
 *     DpiPollDisplayChildren @ 0x1C03876C0 (DpiPollDisplayChildren.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C038A6F0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiAcpiProcessEventRequests @ 0x1C0394D68 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     DxgkDiagCalcDuration1us @ 0x1C0024A38 (DxgkDiagCalcDuration1us.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C01F3488 (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoInvalidateChildRelations(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  int v5; // r15d
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // r13d
  int v10; // ecx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  _DWORD v22[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v23; // [rsp+28h] [rbp-51h]
  bool v24; // [rsp+30h] [rbp-49h]
  bool v25; // [rsp+31h] [rbp-48h]
  char v26; // [rsp+32h] [rbp-47h]
  bool v27; // [rsp+33h] [rbp-46h]
  int v28; // [rsp+34h] [rbp-45h]
  __int64 v29; // [rsp+38h] [rbp-41h] BYREF
  _DWORD v30[2]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v31[24]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v32; // [rsp+60h] [rbp-19h]
  int v33; // [rsp+68h] [rbp-11h]
  int v34; // [rsp+6Ch] [rbp-Dh]
  int v35; // [rsp+70h] [rbp-9h]
  int v36; // [rsp+74h] [rbp-5h]
  int v37; // [rsp+78h] [rbp-1h]
  unsigned int v38; // [rsp+7Ch] [rbp+3h]
  __int64 v39; // [rsp+80h] [rbp+7h]

  v3 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 64);
  v29 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3304), 1u);
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = KeQueryTimeIncrement() * v7;
  v9 = v3 & 1;
  v10 = (v3 & 0xFFFFFFFE) - 1;
  if ( (v3 & 1) == 0 )
    v10 = v3 & 0xFFFFFFFE;
  if ( *(_DWORD *)(v6 + 3552) < v10 || v8 - *(_QWORD *)(v6 + 3560) >= 10000000 || (v3 & 8) != 0 )
  {
    v16 = *(_QWORD *)(v6 + 48);
    v17 = *(_QWORD *)(v6 + 40);
    v22[1] = 0;
    v28 = 0;
    *(_DWORD *)(v6 + 3552) = v10;
    v22[0] = (v9 << 28) | 0x2000000;
    *(_QWORD *)(v6 + 3560) = v8;
    v23 = a3;
    v24 = (v3 & 4) != 0;
    v25 = (v3 & 2) != 0;
    v27 = (v3 & 8) != 0;
    v26 = 1;
    v18 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _DWORD *))DpiDxgkDdiDisplayDetectControl)(
            v6,
            v17,
            v16,
            v22);
    v11 = v18;
    if ( v18 < 0 )
      WdLogSingleEntry2(2LL, *(_QWORD *)(*(_QWORD *)(v6 + 40) + 1128LL), v18);
    ExReleaseResourceLite((PERESOURCE)(v6 + 3304));
    KeLeaveCriticalRegion();
    *(_BYTE *)(v6 + 3513) = 0;
  }
  else
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 3304));
    KeLeaveCriticalRegion();
    v11 = 1075708985;
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
    v14[3] = DpiFdoInvalidateChildRelations;
    v15 = *(int *)(v6 + 3552);
    v14[6] = v3;
    v14[4] = v15;
    v14[5] = v8;
    v14[7] = 1075708985LL;
  }
  memset(v31, 0, sizeof(v31));
  v34 = 0;
  v19 = *(_QWORD *)(v6 + 2672);
  v20 = DxgkDiagCalcDuration1us(&v29);
  v30[0] = 30;
  v30[1] = 72;
  v36 = v9 | v5 & 0xFFFF00;
  v33 = 0;
  v32 = 0LL;
  memset(v31, 0, sizeof(v31));
  v35 = 37;
  v37 = v20;
  v38 = v11;
  v39 = v19;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30, *(_QWORD *)(v6 + 5728));
  return v11;
}
