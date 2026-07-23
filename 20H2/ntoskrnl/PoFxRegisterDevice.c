/*
 * XREFs of PoFxRegisterDevice @ 0x1407AFB00
 * Callers:
 *     <none>
 * Callees:
 *     PopPrintEx @ 0x140364760 (PopPrintEx.c)
 *     PopFxRegisterDevice @ 0x1407AFD4C (PopFxRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x1407B0B0C (PopFxConvertV1Components.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoFxRegisterDevice(PDEVICE_OBJECT DeviceObject, int *a2, __int64 a3)
{
  void *v3; // rsi
  int *v4; // r14
  int v7; // eax
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // r12
  int v13; // edi
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+50h] [rbp-29h]
  __int64 v19; // [rsp+58h] [rbp-21h]
  __int64 v20; // [rsp+60h] [rbp-19h]
  __int64 v21; // [rsp+68h] [rbp-11h]
  __int64 v22; // [rsp+70h] [rbp-9h]
  __int64 *v23; // [rsp+F0h] [rbp+77h]
  __int64 v24; // [rsp+F8h] [rbp+7Fh]

  v23 = (__int64 *)a3;
  v3 = 0LL;
  v4 = 0LL;
  if ( !DeviceObject )
    return (unsigned int)-1073741811;
  v7 = *a2;
  v8 = 0LL;
  v9 = 0LL;
  if ( *a2 == 1 )
  {
    PopPrintEx(1u, (__int64)"Device using PO_FX_VERSION_V1: devobj 0x%p", DeviceObject);
    PopPrintEx(1u, (__int64)" - Driver: \"%wZ\"", &DeviceObject->DriverObject->DriverName);
    PopPrintEx(1u, (__int64)"\n");
    v24 = *((_QWORD *)a2 + 7);
    v18 = *((_QWORD *)a2 + 1);
    v19 = *((_QWORD *)a2 + 2);
    v20 = *((_QWORD *)a2 + 3);
    v21 = *((_QWORD *)a2 + 4);
    v22 = *((_QWORD *)a2 + 5);
    v3 = (void *)PopFxConvertV1Components(a2 + 16, (unsigned int)a2[1]);
    v10 = 0LL;
    v11 = v24;
    a3 = (__int64)v23;
  }
  else
  {
    if ( v7 == 2 )
    {
      v3 = a2 + 20;
      v11 = *((_QWORD *)a2 + 8);
      v18 = *((_QWORD *)a2 + 2);
      v19 = *((_QWORD *)a2 + 3);
      v20 = *((_QWORD *)a2 + 4);
      v21 = *((_QWORD *)a2 + 5);
      v22 = *((_QWORD *)a2 + 6);
    }
    else
    {
      if ( v7 != 3 )
        goto LABEL_36;
      v3 = a2 + 26;
      v8 = *((_QWORD *)a2 + 8);
      v4 = a2;
      v9 = *((_QWORD *)a2 + 9);
      v18 = *((_QWORD *)a2 + 2);
      v19 = *((_QWORD *)a2 + 3);
      v20 = *((_QWORD *)a2 + 4);
      v21 = *((_QWORD *)a2 + 5);
      v22 = *((_QWORD *)a2 + 6);
      v11 = *((_QWORD *)a2 + 11);
    }
    v10 = *((_QWORD *)a2 + 1);
  }
  v12 = 0;
  if ( v8 )
  {
    if ( v9 )
    {
      v12 = 1;
      goto LABEL_6;
    }
  }
  else if ( !v9 )
  {
LABEL_6:
    v13 = PopFxRegisterDevice(DeviceObject, v11, v10, a3);
    if ( v13 >= 0 && v12 )
    {
      v15 = v4[20];
      v16 = *v23;
      if ( v15 == -1 )
      {
        *(_DWORD *)(v16 + 912) = 0;
      }
      else
      {
        if ( !v15 )
          v15 = PopFxDirectedFxDefaultTimeout;
        *(_DWORD *)(v16 + 912) = v15;
      }
      v17 = *((_QWORD *)v4 + 1);
      if ( (v17 & 2) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(v16 + 824), 0x200u);
        v17 = *((_QWORD *)v4 + 1);
      }
      if ( (v17 & 4) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v16 + 824), 0x400u);
      _InterlockedOr((volatile signed __int32 *)(v16 + 824), 0x20u);
      if ( !v18 && !v19 && !v20 && !v21 && !v22 )
        _InterlockedOr((volatile signed __int32 *)(v16 + 824), 1u);
    }
    goto LABEL_8;
  }
LABEL_36:
  v13 = -1073741811;
LABEL_8:
  if ( v3 && *a2 == 1 )
    ExFreePoolWithTag(v3, 0x4D584650u);
  return (unsigned int)v13;
}
