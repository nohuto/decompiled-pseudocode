/*
 * XREFs of PiIommuAllocateExtension @ 0x14084C604
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x140749848 (PiDmaGuardProcessNewDeviceNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PipIommuRetrieveSecondaryDeviceId @ 0x140659040 (PipIommuRetrieveSecondaryDeviceId.c)
 *     PipIommuRetrieveDeviceId @ 0x14084C784 (PipIommuRetrieveDeviceId.c)
 *     PiIommuFreeExtension @ 0x140863944 (PiIommuFreeExtension.c)
 *     PnpTraceIommuDeviceProperties @ 0x140957610 (PnpTraceIommuDeviceProperties.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiIommuAllocateExtension(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 Pool2; // rax
  _QWORD *v7; // rbx
  int DeviceId; // edi
  __int64 (__fastcall *v9)(_QWORD, unsigned int *); // rax
  char v10; // cl
  char v11; // dl
  char v12; // al
  char v13; // cl
  __int64 result; // rax
  char v15; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v16; // [rsp+58h] [rbp+20h] BYREF

  v16 = 0;
  v15 = 0;
  Pool2 = ExAllocatePool2(256LL, 40LL, 1685089872LL);
  v7 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    DeviceId = -1073741670;
    goto LABEL_16;
  }
  DeviceId = PipIommuRetrieveDeviceId(a2, Pool2);
  if ( DeviceId < 0 )
    goto LABEL_15;
  if ( (*(_BYTE *)(*v7 + 4LL) & 2) != 0 )
  {
    DeviceId = PipIommuRetrieveSecondaryDeviceId(a2, v7 + 3);
    if ( DeviceId < 0 )
      goto LABEL_15;
  }
  v9 = *(__int64 (__fastcall **)(_QWORD, unsigned int *))(a2 + 56);
  if ( !v9 )
  {
    DeviceId = -1073741637;
    goto LABEL_15;
  }
  DeviceId = v9(*(_QWORD *)(a2 + 8), &v16);
  if ( DeviceId < 0 )
  {
LABEL_15:
    PiIommuFreeExtension((ULONG_PTR)v7);
    v7 = 0LL;
    goto LABEL_16;
  }
  *((_BYTE *)v7 + 16) ^= (*((_BYTE *)v7 + 16) ^ (8 * (v16 >> 1))) & 8;
  v10 = *((_BYTE *)v7 + 16) ^ (*((_BYTE *)v7 + 16) ^ (4 * v16)) & 4;
  *((_BYTE *)v7 + 16) = v10;
  v11 = v10 ^ (v10 ^ (32 * (v16 >> 3))) & 0x20;
  *((_BYTE *)v7 + 16) = v11;
  v12 = v11 ^ (v11 ^ (16 * (v16 >> 2))) & 0x10;
  *((_BYTE *)v7 + 16) = v12;
  if ( (v12 & 0x24) != 0 )
    PnpTraceIommuDeviceProperties(a1, v16);
  DeviceId = (*(__int64 (__fastcall **)(_QWORD, char *))(HalIommuDispatch + 152))(*v7, &v15);
  if ( DeviceId < 0 )
  {
    DeviceId = 0;
  }
  else
  {
    v13 = *((_BYTE *)v7 + 16) ^ (*((_BYTE *)v7 + 16) ^ (32 * v15)) & 0x40;
    *((_BYTE *)v7 + 16) = v13;
    *((_BYTE *)v7 + 16) = (v15 << 7) | v13 & 0x7F;
  }
  *((_DWORD *)v7 + 5) = 2;
LABEL_16:
  result = (unsigned int)DeviceId;
  *a3 = v7;
  return result;
}
