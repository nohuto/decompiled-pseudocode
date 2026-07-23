/*
 * XREFs of PiAuditDeviceOperation @ 0x1408B57A8
 * Callers:
 *     PiPnpRtlSetObjectProperty @ 0x14074594C (PiPnpRtlSetObjectProperty.c)
 *     PiAuditDeviceEnableDisableAction @ 0x1408B5730 (PiAuditDeviceEnableDisableAction.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x1408B5764 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceStart @ 0x1408B5DB4 (PiAuditDeviceStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PnpFindAlternateStringData @ 0x14061065C (PnpFindAlternateStringData.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     SeAuditPlugAndPlay @ 0x14091DFD8 (SeAuditPlugAndPlay.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiAuditDeviceOperation(__int64 a1, int a2, char a3)
{
  void *v4; // r13
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int v10; // ebx
  int v11; // r14d
  SIZE_T i; // rdx
  PVOID PoolWithTag; // rax
  void *v14; // r12
  int ObjectProperty; // eax
  __int16 v16; // ax
  SIZE_T v17; // rdx
  PVOID v18; // rax
  void *v19; // r15
  int v20; // eax
  __int16 v21; // ax
  SIZE_T v22; // rdx
  PVOID v23; // rax
  int v24; // eax
  __int16 v25; // ax
  __int64 v26; // rdx
  SIZE_T j; // rdx
  PVOID v28; // rax
  void *v29; // rsi
  int v30; // eax
  _WORD *v31; // rax
  _WORD *v32; // rdi
  int k; // eax
  _WORD *v34; // rax
  int AlternateStringData; // eax
  const WCHAR *v36; // rdx
  int v38; // [rsp+68h] [rbp-69h] BYREF
  SIZE_T v39; // [rsp+6Ch] [rbp-65h] BYREF
  unsigned int v40; // [rsp+74h] [rbp-5Dh] BYREF
  char v41; // [rsp+78h] [rbp-59h]
  unsigned int NumberOfBytes; // [rsp+7Ch] [rbp-55h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+80h] [rbp-51h] BYREF
  int v44; // [rsp+84h] [rbp-4Dh] BYREF
  const WCHAR *v45; // [rsp+88h] [rbp-49h] BYREF
  __int64 v46; // [rsp+90h] [rbp-41h]
  __int128 v47; // [rsp+98h] [rbp-39h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-19h] BYREF
  int v50; // [rsp+C8h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-1h] BYREF
  UNICODE_STRING v52; // [rsp+E0h] [rbp+Fh] BYREF
  __int128 v53; // [rsp+F0h] [rbp+1Fh] BYREF

  v41 = a3;
  v46 = a1;
  v40 = 0;
  v45 = 0LL;
  NumberOfBytes_4 = 0;
  v39 = 0LL;
  v4 = 0LL;
  v44 = 0;
  v38 = 0;
  v52 = 0LL;
  v53 = 0LL;
  DestinationString = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v47 = 0LL;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 1 )
                return (unsigned int)-1073741823;
              v11 = 6;
            }
            else
            {
              v11 = 5;
            }
          }
          else
          {
            v11 = 4;
          }
        }
        else
        {
          v11 = 3;
        }
      }
      else
      {
        v11 = 2;
      }
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v11 = 0;
  }
  NumberOfBytes = 512;
  for ( i = 512LL; ; i = NumberOfBytes )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, i, 0x20207050u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(a1 + 8),
                       1LL,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_HardwareIds,
                       (__int64)&v38,
                       (__int64)PoolWithTag,
                       NumberOfBytes,
                       (__int64)&NumberOfBytes,
                       0);
    if ( ObjectProperty != -1073741789 )
      break;
    ExFreePoolWithTag(v14, 0);
  }
  if ( ObjectProperty >= 0 && v38 == 8210 )
  {
    v16 = NumberOfBytes;
  }
  else
  {
    ExFreePoolWithTag(v14, 0);
    v16 = 0;
    v14 = 0LL;
    NumberOfBytes = 0;
  }
  LOWORD(v49) = v16;
  v17 = 512LL;
  WORD1(v49) = v16;
  *((_QWORD *)&v49 + 1) = v14;
  LODWORD(v39) = 512;
  while ( 1 )
  {
    v18 = ExAllocatePoolWithTag(PagedPool, v17, 0x20207050u);
    v19 = v18;
    if ( !v18 )
    {
      v10 = -1073741670;
      goto LABEL_74;
    }
    v20 = PnpGetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            *(_QWORD *)(a1 + 8),
            1LL,
            0LL,
            0LL,
            (__int64)&DEVPKEY_Device_CompatibleIds,
            (__int64)&v38,
            (__int64)v18,
            v39,
            (__int64)&v39,
            0);
    if ( v20 != -1073741789 )
      break;
    ExFreePoolWithTag(v19, 0);
    v17 = (unsigned int)v39;
  }
  if ( v20 >= 0 && v38 == 8210 )
  {
    v21 = v39;
  }
  else
  {
    ExFreePoolWithTag(v19, 0);
    v21 = 0;
    v19 = 0LL;
    LODWORD(v39) = 0;
  }
  v22 = 64LL;
  LOWORD(v48) = v21;
  HIDWORD(v39) = 64;
  WORD1(v48) = v21;
  *((_QWORD *)&v48 + 1) = v19;
  while ( 1 )
  {
    v23 = ExAllocatePoolWithTag(PagedPool, v22, 0x20207050u);
    v4 = v23;
    if ( !v23 )
      break;
    v24 = PnpGetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            *(_QWORD *)(a1 + 8),
            1LL,
            0LL,
            0LL,
            (__int64)&DEVPKEY_Device_LocationInfo,
            (__int64)&v38,
            (__int64)v23,
            SHIDWORD(v39),
            (__int64)&v39 + 4,
            0);
    if ( v24 != -1073741789 )
    {
      if ( v24 >= 0 && v38 == 18 )
      {
        v25 = WORD2(v39);
      }
      else
      {
        ExFreePoolWithTag(v4, 0);
        v25 = 0;
        v4 = 0LL;
        HIDWORD(v39) = 0;
      }
      v26 = *(_QWORD *)(a1 + 8);
      LOWORD(v47) = v25;
      WORD1(v47) = v25;
      v44 = 16;
      *((_QWORD *)&v47 + 1) = v4;
      if ( (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  v26,
                  1LL,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_Device_ClassGuid,
                  (__int64)&v38,
                  (__int64)&v53,
                  16,
                  (__int64)&v44,
                  0) < 0
        || v38 != 13
        || v44 != 16 )
      {
        v53 = 0LL;
      }
      NumberOfBytes_4 = 32;
      for ( j = 32LL; ; j = NumberOfBytes_4 )
      {
        v28 = ExAllocatePoolWithTag(PagedPool, j, 0x20207050u);
        v29 = v28;
        if ( !v28 )
          goto LABEL_35;
        v30 = PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a1 + 8),
                1LL,
                0LL,
                0LL,
                (__int64)&DEVPKEY_Device_Class,
                (__int64)&v38,
                (__int64)v28,
                NumberOfBytes_4,
                (__int64)&NumberOfBytes_4,
                0);
        if ( v30 != -1073741789 )
          break;
        ExFreePoolWithTag(v29, 0);
      }
      if ( v30 < 0 || v38 != 18 )
      {
        ExFreePoolWithTag(v29, 0);
        v29 = 0LL;
        NumberOfBytes_4 = 0;
      }
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v29);
      v40 = 32;
      v31 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x20207050u);
      v32 = v31;
      if ( !v31 )
      {
LABEL_54:
        v10 = -1073741670;
LABEL_70:
        if ( v29 )
          ExFreePoolWithTag(v29, 0);
        goto LABEL_72;
      }
      for ( k = PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(a1 + 8),
                  1LL,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_NAME,
                  (__int64)&v38,
                  (__int64)v31,
                  v40,
                  (__int64)&v40,
                  0);
            ;
            k = PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(v46 + 8),
                  1LL,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_NAME,
                  (__int64)&v38,
                  (__int64)v34,
                  v40,
                  (__int64)&v40,
                  0) )
      {
        v10 = k;
        if ( k != -1073741789 )
          break;
        ExFreePoolWithTag(v32, 0);
        v34 = ExAllocatePoolWithTag(PagedPool, v40, 0x20207050u);
        v32 = v34;
        if ( !v34 )
          goto LABEL_54;
      }
      if ( k < 0 )
        goto LABEL_67;
      if ( v38 == 25 )
      {
        AlternateStringData = PnpFindAlternateStringData(v32, v40, &v45, &v50);
        v38 = 18;
        v36 = v32;
        if ( AlternateStringData )
          v36 = v45;
        goto LABEL_68;
      }
      if ( v38 == 18 )
      {
        v36 = v32;
      }
      else
      {
LABEL_67:
        v10 = 0;
        ExFreePoolWithTag(v32, 0);
        v40 = 0;
        v32 = 0LL;
        v36 = 0LL;
      }
LABEL_68:
      RtlInitUnicodeString(&v52, v36);
      SeAuditPlugAndPlay(
        v46,
        (unsigned int)&v52,
        (unsigned int)&v49,
        (unsigned int)&v48,
        (__int64)&v47,
        (__int64)&v53,
        (__int64)&DestinationString,
        v11,
        v41);
      if ( v32 )
        ExFreePoolWithTag(v32, 0);
      goto LABEL_70;
    }
    ExFreePoolWithTag(v4, 0);
    v22 = HIDWORD(v39);
  }
LABEL_35:
  v10 = -1073741670;
LABEL_72:
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
LABEL_74:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v10;
}
