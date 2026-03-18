/*
 * XREFs of DrvDbGetDeviceIdMappedProperty @ 0x1406E4A48
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1406E4910 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     wcschr @ 0x1403D35A0 (wcschr.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406E433C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbOpenObjectRegKey @ 0x1406E5508 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406E698C (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140722694 (DrvDbOpenDeviceIdRegKey.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140980740 (DrvDbGetObjectDatabaseNodeName.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedProperty(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  __int64 v10; // r13
  int v11; // r11d
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // di
  wchar_t *v15; // rax
  _QWORD *v16; // r12
  int v17; // eax
  __int64 v18; // rcx
  int RegValueMappedProperty; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // ecx
  wchar_t *v26; // rax
  HANDLE v27; // rdx
  unsigned int v28; // eax
  int ObjectDatabaseNodeName; // eax
  unsigned int v30; // edx
  __int64 **i; // r8
  __int64 *v32; // r10
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 **v35; // rdi
  unsigned int v36; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v37; // [rsp+54h] [rbp-Ch]
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+40h]
  char v40; // [rsp+B8h] [rbp+58h]

  v39 = a1;
  Handle = 0LL;
  v10 = a1;
  v36 = 0;
  *a5 = 0;
  *a8 = 0;
  v11 = *(_DWORD *)(a4 + 16);
  v37 = 0;
  v40 = 0;
  if ( v11 != 2 )
  {
    if ( v11 == 3 )
    {
      a1 = 0xBADB47CC74A2E194uLL;
      v12 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
      if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
        v12 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v12 )
      {
        v13 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
        if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
          v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        v14 = 1;
        if ( !v13 )
          goto LABEL_9;
        goto LABEL_30;
      }
    }
LABEL_65:
    v30 = 0;
    for ( i = &off_140002100; ; i += 5 )
    {
      v32 = *i;
      if ( *((_DWORD *)*i + 4) == v11 )
      {
        v33 = *v32 - *(_QWORD *)a4;
        if ( *v32 == *(_QWORD *)a4 )
          v33 = v32[1] - *(_QWORD *)(a4 + 8);
        if ( !v33 )
          break;
      }
      if ( ++v30 )
        return (unsigned int)-1073741802;
    }
    v34 = 5LL * v30;
    v35 = &(&off_140002100)[5 * v30];
    if ( v35 )
    {
      if ( !a3 )
      {
        RegValueMappedProperty = DrvDbOpenDeviceIdRegKey(v10, a2, 1, 0, (__int64)&Handle, 0LL);
        if ( RegValueMappedProperty < 0 )
          goto LABEL_21;
        a3 = Handle;
      }
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v34, a3, v35, a5, a6, a7, a8);
      goto LABEL_21;
    }
    return (unsigned int)-1073741802;
  }
  v21 = *(_QWORD *)a4 - DEVPKEY_NODE;
  if ( *(_QWORD *)a4 == DEVPKEY_NODE )
    v21 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
  if ( !v21 )
  {
    *a5 = 18;
    ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName(a1, 5LL, a2, a6, a7 >> 1, a8);
    RegValueMappedProperty = ObjectDatabaseNodeName;
    if ( (int)(ObjectDatabaseNodeName + 0x80000000) < 0 || ObjectDatabaseNodeName == -1073741789 )
      *a8 *= 2;
    goto LABEL_21;
  }
  v22 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
  if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
    v22 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v22 )
    goto LABEL_65;
LABEL_30:
  v14 = 0;
LABEL_9:
  if ( *(_WORD *)a2 != 64 || (v26 = wcschr((const wchar_t *)(a2 + 2), 0x3Au)) == 0LL || (v15 = v26 + 1) == 0LL )
    v15 = (wchar_t *)a2;
  if ( v15 == (wchar_t *)a2 && !*(_QWORD *)(v10 + 40) )
  {
    v16 = *(_QWORD **)(v10 + 16);
    if ( v16 == (_QWORD *)(v10 + 16) )
      goto LABEL_20;
    while ( 1 )
    {
      v17 = DrvDbOpenObjectRegKey(v39, (_DWORD)v16, 5, a2, 1, 0, (__int64)&Handle, 0LL, 0LL);
      RegValueMappedProperty = v17;
      if ( v17 >= 0 )
      {
        v40 = 1;
        RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(
                                   v18,
                                   (__int64)Handle,
                                   v37 + a6,
                                   (a7 - v37) >> 1,
                                   &v36,
                                   v14);
        ZwClose(Handle);
        Handle = 0LL;
        if ( RegValueMappedProperty >= 0 )
          goto LABEL_32;
        if ( RegValueMappedProperty != -1073741275 )
        {
          if ( RegValueMappedProperty != -1073741789 )
          {
LABEL_18:
            if ( (int)(RegValueMappedProperty + 0x80000000) >= 0 && RegValueMappedProperty != -1073741789 )
              goto LABEL_21;
            if ( v40 )
            {
              if ( *a8 )
              {
                *a5 = 8210;
                v25 = *a8 + 2;
                *a8 = v25;
                if ( a6 && v25 <= a7 )
                  *(_WORD *)(a6 + 2 * ((unsigned __int64)v25 >> 1) - 2) = 0;
                else
                  RegValueMappedProperty = -1073741789;
              }
              else
              {
                RegValueMappedProperty = -1073741275;
              }
            }
            else
            {
LABEL_20:
              RegValueMappedProperty = -1073741772;
            }
            goto LABEL_21;
          }
LABEL_32:
          v23 = 2 * v36 - 2;
          if ( 2 * v36 <= 2 )
            v23 = 2 * v36;
          if ( a6 )
          {
            v24 = v37;
            if ( v23 + v37 < a7 )
              v24 = v23 + v37;
            v37 = v24;
          }
          *a8 += v23;
          goto LABEL_17;
        }
      }
      else if ( v17 != -1073741772 )
      {
        goto LABEL_18;
      }
      RegValueMappedProperty = 0;
LABEL_17:
      v16 = (_QWORD *)*v16;
      if ( v16 == (_QWORD *)(v39 + 16) )
        goto LABEL_18;
    }
  }
  v27 = 0LL;
  if ( a3 != (HANDLE)-1LL )
    v27 = a3;
  if ( !v27 )
  {
    RegValueMappedProperty = DrvDbOpenDeviceIdRegKey(v10, a2, 1, 0, (__int64)&Handle, 0LL);
    if ( RegValueMappedProperty < 0 )
      goto LABEL_21;
    v27 = Handle;
  }
  RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(a1, (__int64)v27, a6, a7 >> 1, &v36, v14);
  if ( (int)(RegValueMappedProperty + 0x80000000) < 0 || RegValueMappedProperty == -1073741789 )
  {
    v28 = 2 * v36;
    *a5 = 8210;
    *a8 = v28;
  }
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegValueMappedProperty;
}
