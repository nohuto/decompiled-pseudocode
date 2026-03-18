/*
 * XREFs of AcpiRegisterDeviceFirmwareLockHandler @ 0x1C00A12FC
 * Callers:
 *     ACPIIoctlRegisterDeviceFirmwareLock @ 0x1C002DB1C (ACPIIoctlRegisterDeviceFirmwareLock.c)
 * Callees:
 *     InsertDeviceFirmwareLockHandlerEntry @ 0x1C002DB9C (InsertDeviceFirmwareLockHandlerEntry.c)
 */

__int64 __fastcall AcpiRegisterDeviceFirmwareLockHandler(PVOID Object, int a2, __int64 a3, __int64 a4)
{
  _QWORD *Pool2; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  int inserted; // edi
  void *v12; // rcx

  if ( Object && a2 == 132 && a3 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 80LL, 1332765505LL);
    v8 = (__int64)Pool2;
    if ( Pool2 )
    {
      Pool2[1] = Pool2;
      *Pool2 = Pool2;
      v9 = Pool2 + 2;
      *(_DWORD *)(v8 + 40) = 132;
      *(_QWORD *)(v8 + 48) = a3;
      *(_QWORD *)(v8 + 56) = a4;
      v9[1] = v9;
      *v9 = v9;
      *(_QWORD *)(v8 + 32) = Object;
      *(_DWORD *)(v8 + 64) = 1;
      ObfReferenceObjectWithTag(Object, 0x4F706341u);
      inserted = InsertDeviceFirmwareLockHandlerEntry(v8);
      if ( inserted < 0 )
      {
        v12 = *(void **)(v8 + 32);
        if ( v12 )
          ObfDereferenceObjectWithTag(v12, 0x4F706341u);
        ExFreePoolWithTag((PVOID)v8, 0x4F706341u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)inserted;
}
