/*
 * XREFs of ArbShareDriverExclusive @ 0x1407B9604
 * Callers:
 *     ArbFindSuitableRange @ 0x1407B9500 (ArbFindSuitableRange.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     IoGetDeviceProperty @ 0x140634AA0 (IoGetDeviceProperty.c)
 *     RtlGetNextRange @ 0x140760820 (RtlGetNextRange.c)
 *     RtlGetFirstRange @ 0x1407608D0 (RtlGetFirstRange.c)
 */

char __fastcall ArbShareDriverExclusive(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char v4; // si
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  unsigned __int64 *v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  bool v14; // cf
  unsigned __int8 v15; // dl
  struct _DEVICE_OBJECT *v17; // rax
  char v18; // cl
  struct _DEVICE_OBJECT *AttachedDevice; // rdx
  __int64 v20; // rax
  bool v21; // zf
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 *v23; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v24[2]; // [rsp+40h] [rbp-40h] BYREF
  wchar_t PropertyBuffer[8]; // [rsp+60h] [rbp-20h] BYREF

  ResultLength = 0;
  v23 = 0LL;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = 0;
  memset(v24, 0, sizeof(v24));
  v6 = *(_DWORD *)(v3 + 44);
  if ( (v6 & 2) != 0 )
  {
    v4 = 1;
  }
  else if ( (v6 & 4) == 0
         && IoGetDeviceProperty(
              *(PDEVICE_OBJECT *)(v3 + 32),
              DevicePropertyEnumeratorName,
              0xAu,
              PropertyBuffer,
              &ResultLength) >= 0 )
  {
    v7 = wcsicmp(PropertyBuffer, L"ROOT");
    v8 = *(_QWORD *)(a2 + 32);
    v9 = *(_DWORD *)(v8 + 44);
    if ( v7 )
    {
      v10 = v9 | 4;
    }
    else
    {
      v10 = v9 | 2;
      v4 = 1;
    }
    *(_DWORD *)(v8 + 44) = v10;
  }
  RtlGetFirstRange(*(__int64 **)(a1 + 48), (__int64)v24, &v23);
  while ( 1 )
  {
    v11 = v23;
    if ( !v23 )
      return 0;
    v12 = *v23;
    v13 = *(_QWORD *)(a2 + 16);
    v14 = v13 < *v23;
    if ( v13 > *v23 )
    {
      if ( v23[1] < v13 )
        goto LABEL_11;
      v14 = v13 < v12;
    }
    if ( !v14 || *(_QWORD *)(a2 + 24) >= v12 )
    {
      v15 = *((_BYTE *)v23 + 32);
      if ( (v15 & *(_BYTE *)(a2 + 67)) == 0
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2 || (v15 & 2) != 0) )
      {
        v17 = (struct _DEVICE_OBJECT *)v23[3];
        if ( v17 )
        {
          if ( v4 )
          {
            v18 = *((_BYTE *)v23 + 33);
            if ( (v18 & 0x40) == 0 )
            {
              if ( (v18 & 0x20) != 0
                || IoGetDeviceProperty(v17, DevicePropertyEnumeratorName, 0xAu, PropertyBuffer, &ResultLength) < 0 )
              {
                goto LABEL_37;
              }
              if ( !wcsicmp(PropertyBuffer, L"ROOT") )
              {
                *((_BYTE *)v11 + 33) |= 0x20u;
LABEL_37:
                *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
                v21 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
                goto LABEL_39;
              }
              *((_BYTE *)v11 + 33) |= 0x40u;
              v17 = (struct _DEVICE_OBJECT *)v11[3];
            }
            v4 = 0;
          }
          AttachedDevice = v17->AttachedDevice;
          if ( AttachedDevice )
            break;
        }
      }
    }
LABEL_11:
    RtlGetNextRange((__int64 *)v24, &v23, 1);
  }
  while ( 1 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 24LL);
    if ( v20 )
      break;
LABEL_34:
    AttachedDevice = AttachedDevice->AttachedDevice;
    if ( !AttachedDevice )
      goto LABEL_11;
  }
  while ( AttachedDevice->DriverObject != *(struct _DRIVER_OBJECT **)(v20 + 8) )
  {
    v20 = *(_QWORD *)(v20 + 24);
    if ( !v20 )
      goto LABEL_34;
  }
  *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
  v21 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
LABEL_39:
  if ( v21 )
    *(_BYTE *)(a2 + 66) |= 2u;
  return 1;
}
