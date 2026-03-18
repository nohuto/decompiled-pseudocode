/*
 * XREFs of DxgkHandleIndirectEscape @ 0x1C0392C44
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 * Callees:
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C0021D08 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1C0021DA4 (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C0023598 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C00235F0 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C00604C4 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     DxgkGetDeviceObjectFromAdapter @ 0x1C02C4F20 (DxgkGetDeviceObjectFromAdapter.c)
 *     DxgkSetIndirectDisplayHostProcess @ 0x1C02C5558 (DxgkSetIndirectDisplayHostProcess.c)
 *     DxgkGetIndirectDisplayRenderAdapterByHandle @ 0x1C02D1350 (DxgkGetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C02D48F4 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1C02EC078 (DxgkIddGetAdapterSessionDiagnostics.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EC214 (DxgkIddHandleSetDisplayConfig.c)
 *     ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x1C0391B9C (-DpiIndirectEscapeAccessCheck@@YAJXZ.c)
 *     ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C0392574 (-DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z.c)
 *     DpiIndirectDdiIoControl @ 0x1C0392A98 (DpiIndirectDdiIoControl.c)
 */

__int64 __fastcall DxgkHandleIndirectEscape(unsigned int a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  int v7; // eax
  _DWORD *v8; // r12
  struct _LUID *v9; // rbx
  _QWORD *PoolWithQuotaTag; // rdi
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  char *v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  __int64 v24; // rax
  int AdapterSessionDiagnostics; // eax
  PVOID v26; // r15
  __int64 v27; // r14
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v30[80]; // [rsp+48h] [rbp-50h] BYREF
  int DeviceObjectFromAdapter; // [rsp+A0h] [rbp+8h] BYREF
  void *v32; // [rsp+B0h] [rbp+18h] BYREF
  struct _LUID *v33; // [rsp+B8h] [rbp+20h] BYREF

  DeviceObjectFromAdapter = 0;
  if ( a1 < 0x30 )
  {
    v5 = -1073741789LL;
    DeviceObjectFromAdapter = -1073741789;
LABEL_3:
    WdLogSingleEntry1(2LL, v5);
    return (unsigned int)DeviceObjectFromAdapter;
  }
  if ( a2[1] != 5 )
  {
    v7 = DpiIndirectEscapeAccessCheck();
    DeviceObjectFromAdapter = v7;
    if ( v7 < 0 )
    {
      v5 = v7;
      goto LABEL_3;
    }
  }
  v8 = a2 + 10;
  a2[10] = 0;
  v9 = 0LL;
  v33 = 0LL;
  PoolWithQuotaTag = 0LL;
  v32 = 0LL;
  v11 = a2[3];
  if ( !v11
    || (v9 = (struct _LUID *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v11, 0x74727044u),
        AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v33),
        v33 = v9,
        Object = 0LL,
        AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&Object),
        v9) )
  {
    v12 = a2[6];
    if ( !v12
      || (PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v12, 0x74727044u),
          AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v32),
          v32 = PoolWithQuotaTag,
          *(_QWORD *)&DestinationString.Length = 0LL,
          AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&DestinationString),
          PoolWithQuotaTag) )
    {
      v16 = a2[3];
      if ( (_DWORD)v16 )
      {
        v17 = (char *)*((_QWORD *)a2 + 2);
        if ( (unsigned __int64)&v17[v16] > MmUserProbeAddress || &v17[v16] < v17 )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          LODWORD(v16) = a2[3];
          v17 = (char *)*((_QWORD *)a2 + 2);
        }
        memmove(v9, v17, (unsigned int)v16);
      }
      v18 = a2[6];
      if ( v18 )
        ProbeForWrite(*((volatile void **)a2 + 4), v18, 1u);
      v19 = a2[1];
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( !v20 )
        {
          Object = 0LL;
          DeviceObjectFromAdapter = DxgkGetDeviceObjectFromAdapter(*a2, (__int64)a2, &Object, a4);
          if ( DeviceObjectFromAdapter >= 0 )
          {
            v26 = Object;
            v27 = *((_QWORD *)Object + 8);
            if ( *(_BYTE *)(v27 + 1159) )
            {
              *(_QWORD *)&DestinationString.Length = *((_QWORD *)Object + 8);
              LOBYTE(DestinationString.Buffer) = 0;
              DeviceObjectFromAdapter = AUTO_REMOVE_LOCK::Acquire((struct _IO_REMOVE_LOCK **)&DestinationString);
              if ( DeviceObjectFromAdapter >= 0 )
              {
                AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v30, (struct _COMMON_PNP_CONTEXT *)v27);
                DeviceObjectFromAdapter = DpiIndirectDdiIoControl(v27);
                AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v30);
              }
              AUTO_REMOVE_LOCK::Release((PVOID *)&DestinationString);
            }
            else
            {
              DeviceObjectFromAdapter = -1073741275;
            }
            ObfDereferenceObject(v26);
          }
          goto LABEL_48;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          DxgkIddHandleSetDisplayConfig(*a2, a2[3], (unsigned int *)v9, &DeviceObjectFromAdapter);
          goto LABEL_48;
        }
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 != 1 )
            {
              DeviceObjectFromAdapter = -1073741637;
              WdLogSingleEntry1(2LL, -1073741637LL);
LABEL_48:
              if ( DeviceObjectFromAdapter < 0 )
                goto LABEL_13;
              if ( a2[6] >= *v8 )
              {
                if ( *v8 )
                  memmove(*((void **)a2 + 4), PoolWithQuotaTag, (unsigned int)*v8);
                goto LABEL_13;
              }
              DeviceObjectFromAdapter = -1073741811;
              v13 = -1073741811LL;
              goto LABEL_45;
            }
            v24 = a2[6];
            if ( (unsigned int)v24 >= 0x10 )
            {
              DeviceObjectFromAdapter = DxgkGetIndirectDisplayRenderAdapterByHandle(
                                          *a2,
                                          PoolWithQuotaTag,
                                          PoolWithQuotaTag + 1,
                                          a4);
              if ( DeviceObjectFromAdapter >= 0 )
                *v8 = 16;
              goto LABEL_48;
            }
LABEL_44:
            DeviceObjectFromAdapter = -1073741811;
            v13 = v24;
LABEL_45:
            v14 = 2LL;
            goto LABEL_12;
          }
          AdapterSessionDiagnostics = DxgkIddGetAdapterSessionDiagnostics(
                                        *a2,
                                        a2[6],
                                        (unsigned __int8 *)PoolWithQuotaTag,
                                        a2 + 10);
        }
        else
        {
          v24 = a2[3];
          if ( (unsigned int)v24 < 8 )
            goto LABEL_44;
          AdapterSessionDiagnostics = DxgkSetIndirectDisplayRenderAdapterByHandle(*a2, v9, a3, a4);
        }
        DeviceObjectFromAdapter = AdapterSessionDiagnostics;
        goto LABEL_48;
      }
      v24 = a2[3];
      if ( (unsigned int)v24 >= 0x250 )
      {
        DestinationString = 0LL;
        HIWORD(v9[64].HighPart) = 0;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)v9);
        DeviceObjectFromAdapter = DpiIndirectStartAdapter(&DestinationString, v9, a2[3]);
        if ( DeviceObjectFromAdapter >= 0 )
          DxgkSetIndirectDisplayHostProcess();
        goto LABEL_48;
      }
      goto LABEL_44;
    }
  }
  v13 = -1073741801LL;
  DeviceObjectFromAdapter = -1073741801;
  v14 = 6LL;
LABEL_12:
  WdLogSingleEntry1(v14, v13);
LABEL_13:
  v15 = DeviceObjectFromAdapter;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v32);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v33);
  return v15;
}
