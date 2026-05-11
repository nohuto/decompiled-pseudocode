/*
 * XREFs of USBHwGetDeviceIDString @ 0x1C002E770
 * Callers:
 *     USBDeviceStart @ 0x1C002C080 (USBDeviceStart.c)
 * Callees:
 *     memmove @ 0x1C0013AC0 (memmove.c)
 *     RegistryReadPnPKeyValue @ 0x1C002B214 (RegistryReadPnPKeyValue.c)
 *     USBHwSyncGetStringDescriptor @ 0x1C002E678 (USBHwSyncGetStringDescriptor.c)
 */

__int64 __fastcall USBHwGetDeviceIDString(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rax
  int StringDescriptor; // edi
  __int64 v8; // r14
  int v9; // ebx
  _BYTE *PoolWithTag; // rax
  _BYTE *v11; // rbx
  bool v12; // zf
  __int64 v13; // rdx
  char *v14; // rax
  char *v15; // rdi
  int v17; // [rsp+20h] [rbp-38h]
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  P = 0LL;
  StringDescriptor = -1073741822;
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 72) + 32LL);
  *a2 = 0LL;
  if ( (int)RegistryReadPnPKeyValue(*(struct _DEVICE_OBJECT **)(a1 + 32), L"IgnoreHwString", (__int64)a3, &P) < 0
    || (v9 = *(_DWORD *)P, ExFreePool(P), v9 != 1) )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xFFuLL, 0x41627845u);
    LODWORD(P) = 0;
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      StringDescriptor = USBHwSyncGetStringDescriptor(a1, *(_BYTE *)(v8 + 15), 0x409u, PoolWithTag, v17, &P);
      if ( StringDescriptor >= 0 )
      {
        v12 = (_DWORD)P == 2;
        v13 = (unsigned int)((_DWORD)P - 2);
        *a3 = v13;
        if ( !v12 )
        {
          v14 = (char *)ExAllocatePoolWithTag(PagedPool, v13 + 2, 0x41627845u);
          v15 = v14;
          if ( v14 )
          {
            memmove(v14, v11 + 2, (unsigned int)*a3);
            *(_WORD *)&v15[*a3] = 0;
            *a2 = v15;
            *a3 += 2;
            StringDescriptor = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v15, ExFreePool);
          }
          else
          {
            StringDescriptor = -1073741670;
          }
        }
      }
      ExFreePool(v11);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)StringDescriptor;
}
