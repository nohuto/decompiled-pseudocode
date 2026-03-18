/*
 * XREFs of DpiGetDevicePropertyDataString @ 0x1C01FAE1C
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C00612C0 (DpiMiracastInterfaceChange.c)
 *     DpiFdoInitializeFdo @ 0x1C01F992C (DpiFdoInitializeFdo.c)
 *     ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C03649C8 (-FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyDataString(
        PDEVICE_OBJECT Pdo,
        DEVPROPKEY *PropertyKey,
        __int64 a3,
        POOL_TYPE a4,
        _QWORD *a5,
        _DWORD *a6)
{
  _QWORD *v9; // rsi
  _DWORD *v10; // r14
  NTSTATUS DevicePropertyData; // eax
  unsigned int v12; // ebx
  PVOID PoolWithTag; // rax
  void *Data; // rdi
  NTSTATUS v15; // eax
  int v16; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  ULONG Type; // [rsp+70h] [rbp+30h] BYREF
  size_t Size; // [rsp+80h] [rbp+40h] BYREF

  Type = 0;
  LODWORD(Size) = 0;
  if ( Pdo )
  {
    if ( PropertyKey )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = a6;
        if ( a6 )
        {
          DevicePropertyData = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, 0, 0LL, (PULONG)&Size, &Type);
          v12 = DevicePropertyData;
          if ( DevicePropertyData == -1073741789 )
          {
            if ( Type == 18 )
            {
              LODWORD(Size) = Size + 2;
              PoolWithTag = ExAllocatePoolWithTag(a4, (unsigned int)Size, 0x74727044u);
              Data = PoolWithTag;
              if ( PoolWithTag )
              {
                memset(PoolWithTag, 0, (unsigned int)Size);
                v15 = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, Size, Data, (PULONG)&Size, &Type);
                v12 = v15;
                if ( v15 < 0 )
                {
                  WdLogSingleEntry1(2LL, v15);
                  ExFreePoolWithTag(Data, 0);
                  return v12;
                }
                goto LABEL_9;
              }
              v18 = -1073741670LL;
              v12 = -1073741670;
              v19 = 6LL;
            }
            else
            {
              v12 = -1073741811;
              v18 = -1073741811LL;
              v19 = 2LL;
            }
            WdLogSingleEntry1(v19, v18);
            return v12;
          }
          WdLogSingleEntry1(2LL, DevicePropertyData);
          Data = 0LL;
          if ( (v12 & 0x80000000) != 0 )
            return v12;
LABEL_9:
          v16 = Size;
          *v9 = Data;
          *v10 = v16;
          return v12;
        }
      }
    }
  }
  return -1073741811LL;
}
