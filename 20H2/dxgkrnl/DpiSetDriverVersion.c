/*
 * XREFs of DpiSetDriverVersion @ 0x1C02C5DAC
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C020C98C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     DpiGetDevicePropertyString @ 0x1C01814D8 (DpiGetDevicePropertyString.c)
 */

void __fastcall DpiSetDriverVersion(__int64 a1, int a2, _WORD *Data, _WORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v7; // rax
  void *v8; // rbp
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v5 = -1LL;
  *(_DWORD *)(*(_QWORD *)(v4 + 40) + 28LL) = a2;
  if ( *Data )
  {
    v7 = -1LL;
    v8 = *(void **)(v4 + 4888);
    do
      ++v7;
    while ( Data[v7] );
    v9 = IoSetDevicePropertyData(
           *(PDEVICE_OBJECT *)(v4 + 152),
           &DEVPKEY_Device_DeviceDesc,
           0,
           0,
           0x12u,
           2 * v7 + 2,
           Data);
    v12 = v9;
    if ( v9 < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v13 + 24) = v12;
LABEL_13:
      WdLogEvent5_WdError(v13);
      return;
    }
    if ( (int)DpiGetDevicePropertyString(
                *(PDEVICE_OBJECT *)(v4 + 152),
                DevicePropertyDeviceDescription,
                (POOL_TYPE)512,
                (_QWORD *)(v4 + 4888),
                &v18) >= 0
      && v8 )
    {
      ExFreePoolWithTag(v8, 0);
    }
  }
  if ( *a4 )
  {
    do
      ++v5;
    while ( a4[v5] );
    v14 = IoSetDevicePropertyData(
            *(PDEVICE_OBJECT *)(v4 + 152),
            &DEVPKEY_Device_InstanceId,
            0,
            0,
            0x12u,
            2 * v5 + 2,
            a4);
    v17 = v14;
    if ( v14 < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v13 + 24) = v17;
      goto LABEL_13;
    }
  }
}
