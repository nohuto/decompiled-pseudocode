/*
 * XREFs of FsRtlGetVirtualDiskNestingLevel @ 0x14024A300
 * Callers:
 *     <none>
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x1402D0240 (IopBuildDeviceIoControlRequest.c)
 *     IoSetThreadHardErrorMode @ 0x1402F4B10 (IoSetThreadHardErrorMode.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x14039AD40 (FsRtlQueryMaximumVirtualDiskNestingLevel.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

NTSTATUS __stdcall FsRtlGetVirtualDiskNestingLevel(
        PDEVICE_OBJECT DeviceObject,
        PULONG NestingLevel,
        PULONG NestingFlags)
{
  unsigned __int64 DeviceType; // rax
  ULONG MaximumVirtualDiskNestingLevel; // esi
  ULONG v8; // edi
  __int64 v9; // rcx
  BOOLEAN v10; // r12
  IRP *v11; // rax
  int v12; // ebx
  ULONG v14; // edx
  __int16 Object; // [rsp+50h] [rbp-29h] BYREF
  char v16; // [rsp+52h] [rbp-27h]
  char v17; // [rsp+53h] [rbp-26h]
  int v18; // [rsp+54h] [rbp-25h]
  _QWORD v19[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v20; // [rsp+68h] [rbp-11h] BYREF
  __int128 v21; // [rsp+70h] [rbp-9h] BYREF
  __int128 v22; // [rsp+80h] [rbp+7h] BYREF
  ULONG v23; // [rsp+90h] [rbp+17h]
  void *retaddr; // [rsp+D8h] [rbp+5Fh]

  DeviceType = DeviceObject->DeviceType;
  v17 = 0;
  MaximumVirtualDiskNestingLevel = 0;
  v8 = 1;
  v21 = 0LL;
  if ( (unsigned int)DeviceType > 0x24 )
    return -1073741808;
  v9 = 0x100000018CLL;
  if ( !_bittest64(&v9, DeviceType) )
    return -1073741808;
  Object = 0;
  v19[1] = v19;
  v16 = 6;
  v19[0] = v19;
  v18 = 0;
  v10 = IoSetThreadHardErrorMode(0);
  v20 = 1LL;
  v23 = 0;
  v22 = 0LL;
  v11 = (IRP *)((__int64 (__fastcall *)(__int64, PDEVICE_OBJECT, __int64 *, __int64, __int128 *, int, _BYTE, __int16 *, __int128 *, void *))IopBuildDeviceIoControlRequest)(
                 2953616LL,
                 DeviceObject,
                 &v20,
                 8LL,
                 &v22,
                 20,
                 0,
                 &Object,
                 &v21,
                 retaddr);
  if ( v11 )
  {
    v12 = IofCallDriver(DeviceObject, v11);
    if ( v12 == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      v12 = v21;
    }
    if ( v12 >= 0 && *((_QWORD *)&v21 + 1) >= 0x14uLL && (_DWORD)v22 == 1 )
    {
      if ( v23 > FsRtlQueryMaximumVirtualDiskNestingLevel() )
      {
        MaximumVirtualDiskNestingLevel = FsRtlQueryMaximumVirtualDiskNestingLevel();
      }
      else if ( v23 )
      {
        MaximumVirtualDiskNestingLevel = v23;
      }
      if ( BYTE4(v22) )
        v8 = 0;
      v14 = v8;
      v8 |= 2u;
      if ( (BYTE12(v22) & 2) == 0 )
        v8 = v14;
    }
    else if ( v12 != -1073741670 )
    {
      v12 = 0;
    }
  }
  else
  {
    v12 = -1073741670;
  }
  *NestingLevel = MaximumVirtualDiskNestingLevel;
  if ( NestingFlags )
    *NestingFlags = v8;
  IoSetThreadHardErrorMode(v10);
  return v12;
}
