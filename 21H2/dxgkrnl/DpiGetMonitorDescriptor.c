/*
 * XREFs of DpiGetMonitorDescriptor @ 0x1C019092C
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C019075C (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01763B8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0176430 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C017A5C0 (DpiDxgkDdiQueryDeviceDescriptor.c)
 */

__int64 __fastcall DpiGetMonitorDescriptor(__int64 a1, unsigned int a2, __int64 a3, char *a4)
{
  __int64 v4; // rbp
  unsigned int DeviceDescriptor; // esi
  __int64 v6; // rdi
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15[2]; // [rsp+30h] [rbp-28h] BYREF
  char *v16; // [rsp+38h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 64);
  DeviceDescriptor = 0;
  v6 = a2;
  v8 = *(_QWORD *)(v4 + 40);
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  v15[1] = 128;
  v15[0] = a2;
  v16 = a4;
  v10 = *(_QWORD *)(v4 + 936);
  if ( *(_QWORD *)(v10 + 104) )
  {
    v13 = *(unsigned __int16 *)(v10 + 94);
    if ( a2 >= v13 )
    {
      return (unsigned int)-1071841272;
    }
    else
    {
      v14 = v13 - a2;
      if ( v14 >= 0x80 )
      {
        v14 = 128;
      }
      else
      {
        memset(&a4[v14], 0, 128 - v14);
        v10 = *(_QWORD *)(v4 + 936);
      }
      memmove(a4, (const void *)(*(_QWORD *)(v10 + 112) + v6), v14);
    }
  }
  else
  {
    KeWaitForSingleObject(*(PVOID *)(v10 + 72), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v9 + 3896), 1LL);
    DeviceDescriptor = DpiDxgkDdiQueryDeviceDescriptor(v8, *(_QWORD *)(v4 + 48), *(unsigned int *)(v4 + 504), v15);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v9 + 3896), v11);
    KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
  }
  return DeviceDescriptor;
}
