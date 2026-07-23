/*
 * XREFs of DrvDbSetDeviceIdMappedProperty @ 0x140734F60
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x140672910 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14072E80C (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407350B0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140735334 (DrvDbOpenDeviceIdRegKey.c)
 */

__int64 __fastcall DrvDbSetDeviceIdMappedProperty(int a1, int a2, void *a3, __int64 a4, int a5, __int64 a6, ULONG a7)
{
  int v7; // r11d
  HANDLE v8; // r10
  __int64 v13; // rdx
  __int64 **i; // r8
  __int64 *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 **v18; // rbp
  int v19; // edi
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rax
  NTSTATUS v23; // eax
  __int64 v25; // rax
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0LL;
  Handle = 0LL;
  if ( v7 == 2 )
  {
    v25 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
      v25 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v25 )
      return (unsigned int)-1073741790;
  }
  v13 = 0LL;
  for ( i = &off_140004DC8; ; i += 5 )
  {
    v15 = *i;
    if ( *((_DWORD *)*i + 4) == v7 )
    {
      v16 = *v15 - *(_QWORD *)a4;
      if ( *v15 == *(_QWORD *)a4 )
        v16 = v15[1] - *(_QWORD *)(a4 + 8);
      if ( !v16 )
        break;
    }
    v13 = (unsigned int)(v13 + 1);
    if ( (_DWORD)v13 )
      return (unsigned int)-1073741802;
  }
  v17 = 5 * v13;
  v18 = &(&off_140004DC8)[5 * v13];
  if ( !v18 )
    return (unsigned int)-1073741802;
  v19 = a5;
  if ( a5 != *((_DWORD *)v18 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( a3 || (v20 = DrvDbOpenDeviceIdRegKey(a1, a2, 3, 0, (__int64)&Handle, 0LL), v8 = Handle, v21 = v20, v20 >= 0) )
  {
    if ( *(_DWORD *)(a4 + 16) != 3 )
      goto LABEL_38;
    v22 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
      v22 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v22 )
    {
LABEL_38:
      if ( a3 )
        v8 = a3;
      v23 = DrvDbSetRegValueMappedProperty(v17, v8, (__int64)v18, v19, a6, a7);
      goto LABEL_21;
    }
    if ( v19 == 8210 )
    {
      if ( a6 && a7 )
      {
LABEL_18:
        if ( a3 )
          v8 = a3;
        v23 = DrvDbSetDeviceIdDriverInfMatches(v17, v8);
LABEL_21:
        v8 = Handle;
        v21 = v23;
        goto LABEL_22;
      }
    }
    else if ( !v19 && !a6 && !a7 )
    {
      goto LABEL_18;
    }
    v21 = -1073741811;
  }
LABEL_22:
  if ( v8 )
    ZwClose(v8);
  return v21;
}
