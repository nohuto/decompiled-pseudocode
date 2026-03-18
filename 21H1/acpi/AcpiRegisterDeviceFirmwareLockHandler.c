/*
 * XREFs of AcpiRegisterDeviceFirmwareLockHandler @ 0x1C00A2E7C
 * Callers:
 *     ACPIIoctlRegisterDeviceFirmwareLock @ 0x1C00306DC (ACPIIoctlRegisterDeviceFirmwareLock.c)
 * Callees:
 *     InsertDeviceFirmwareLockHandlerEntry @ 0x1C003075C (InsertDeviceFirmwareLockHandlerEntry.c)
 */

__int64 __fastcall AcpiRegisterDeviceFirmwareLockHandler(PVOID Object, int a2, __int64 a3, __int64 a4)
{
  _QWORD *PoolWithTag; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  int inserted; // edi
  void *v12; // rcx

  if ( Object && a2 == 132 && a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x4F706341u);
    v8 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[3] = 0LL;
      *((_DWORD *)PoolWithTag + 11) = 0;
      PoolWithTag[8] = 0LL;
      PoolWithTag[9] = 0LL;
      PoolWithTag[1] = PoolWithTag;
      *PoolWithTag = PoolWithTag;
      v9 = PoolWithTag + 2;
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
