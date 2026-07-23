/*
 * XREFs of PiIommuAllocateExtension @ 0x1407660DC
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x1407657A0 (PiDmaGuardProcessNewDeviceNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PipIommuRetrieveDeviceId @ 0x1407661E0 (PipIommuRetrieveDeviceId.c)
 *     PiIommuFreeExtension @ 0x14076634C (PiIommuFreeExtension.c)
 *     PnpTraceIommuDeviceProperties @ 0x1408B1E60 (PnpTraceIommuDeviceProperties.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiIommuAllocateExtension(__int64 a1, __int64 a2, _QWORD *a3)
{
  _OWORD *PoolWithTag; // rbx
  int DeviceId; // edi
  __int64 (__fastcall *v8)(_QWORD, unsigned int *); // rax
  char v9; // cl
  char v10; // dl
  char v11; // al
  __int64 result; // rax
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x64706E50u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    DeviceId = PipIommuRetrieveDeviceId(a2, PoolWithTag);
    if ( DeviceId < 0
      || ((v8 = *(__int64 (__fastcall **)(_QWORD, unsigned int *))(a2 + 56)) == 0LL
        ? (DeviceId = -1073741637)
        : (DeviceId = v8(*(_QWORD *)(a2 + 8), &v13)),
          DeviceId < 0) )
    {
      PiIommuFreeExtension((ULONG_PTR)PoolWithTag);
      PoolWithTag = 0LL;
    }
    else
    {
      *((_BYTE *)PoolWithTag + 16) ^= (*((_BYTE *)PoolWithTag + 16) ^ (8 * (v13 >> 1))) & 8;
      v9 = *((_BYTE *)PoolWithTag + 16) ^ (*((_BYTE *)PoolWithTag + 16) ^ (4 * v13)) & 4;
      *((_BYTE *)PoolWithTag + 16) = v9;
      v10 = v9 ^ (v9 ^ (32 * (v13 >> 3))) & 0x20;
      *((_BYTE *)PoolWithTag + 16) = v10;
      v11 = v10 ^ (v10 ^ (16 * (v13 >> 2))) & 0x10;
      *((_BYTE *)PoolWithTag + 16) = v11;
      if ( (v11 & 0x24) != 0 )
        PnpTraceIommuDeviceProperties(a1, v13);
    }
  }
  else
  {
    DeviceId = -1073741670;
  }
  result = (unsigned int)DeviceId;
  *a3 = PoolWithTag;
  return result;
}
