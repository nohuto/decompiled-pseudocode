/*
 * XREFs of DrvDbGetDeviceIdMappedProperty @ 0x140672A48
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x140672910 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406303EC (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140635220 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140672DB0 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140735334 (DrvDbOpenDeviceIdRegKey.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x14097E040 (DrvDbGetObjectDatabaseNodeName.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedProperty(
        __int64 *a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        _WORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  __int64 *v10; // r13
  int v11; // r11d
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // di
  wchar_t *v15; // rax
  __int64 *v16; // r12
  int v17; // eax
  int v18; // ecx
  int RegValueMappedProperty; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // ecx
  int v24; // edx
  unsigned int v25; // ecx
  wchar_t *v26; // rax
  HANDLE v27; // rdx
  int v28; // eax
  int ObjectDatabaseNodeName; // eax
  unsigned int v30; // edx
  __int64 **i; // r8
  __int64 *v32; // r10
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 **v35; // rdi
  __int64 v36; // [rsp+20h] [rbp-40h]
  __int64 v37; // [rsp+28h] [rbp-38h]
  int v38; // [rsp+50h] [rbp-10h] BYREF
  int v39; // [rsp+54h] [rbp-Ch]
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF
  __int64 *v41; // [rsp+A0h] [rbp+40h]
  char v42; // [rsp+B8h] [rbp+58h]

  v41 = a1;
  Handle = 0LL;
  v10 = a1;
  v38 = 0;
  *a5 = 0;
  *a8 = 0;
  v11 = *(_DWORD *)(a4 + 16);
  v39 = 0;
  v42 = 0;
  if ( v11 != 2 )
  {
    if ( v11 == 3 )
    {
      LODWORD(a1) = 1956831636;
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
    for ( i = &off_140004DC8; ; i += 5 )
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
    v35 = &(&off_140004DC8)[5 * v30];
    if ( v35 )
    {
      if ( !a3 )
      {
        RegValueMappedProperty = DrvDbOpenDeviceIdRegKey((_DWORD)v10, a2, 1, 0, (__int64)&Handle, 0LL);
        if ( RegValueMappedProperty < 0 )
          goto LABEL_21;
        a3 = Handle;
      }
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v34, a3, (__int64)v35, a5, a6, a7, a8);
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
  if ( v15 == (wchar_t *)a2 && !v10[5] )
  {
    v16 = (__int64 *)v10[2];
    if ( v16 == v10 + 2 )
      goto LABEL_20;
    while ( 1 )
    {
      LOBYTE(v37) = 0;
      LODWORD(v36) = 1;
      v17 = DrvDbOpenObjectRegKey(v41, v16, 5u, a2, v36, v37, &Handle, 0LL, 0LL);
      RegValueMappedProperty = v17;
      if ( v17 >= 0 )
      {
        v42 = 1;
        RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(
                                   v18,
                                   (_DWORD)Handle,
                                   v39 + (int)a6,
                                   (a7 - v39) >> 1,
                                   (__int64)&v38,
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
            if ( v42 )
            {
              if ( *a8 )
              {
                *a5 = 8210;
                v25 = *a8 + 2;
                *a8 = v25;
                if ( a6 && v25 <= a7 )
                  a6[((unsigned __int64)v25 >> 1) - 1] = 0;
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
          v23 = 2 * v38 - 2;
          if ( (unsigned int)(2 * v38) <= 2 )
            v23 = 2 * v38;
          if ( a6 )
          {
            v24 = v39;
            if ( v23 + v39 < a7 )
              v24 = v23 + v39;
            v39 = v24;
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
      v16 = (__int64 *)*v16;
      if ( v16 == v41 + 2 )
        goto LABEL_18;
    }
  }
  v27 = 0LL;
  if ( a3 != (HANDLE)-1LL )
    v27 = a3;
  if ( !v27 )
  {
    RegValueMappedProperty = DrvDbOpenDeviceIdRegKey((_DWORD)v10, a2, 1, 0, (__int64)&Handle, 0LL);
    if ( RegValueMappedProperty < 0 )
      goto LABEL_21;
    LODWORD(v27) = (_DWORD)Handle;
  }
  RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(
                             (_DWORD)a1,
                             (_DWORD)v27,
                             (_DWORD)a6,
                             a7 >> 1,
                             (__int64)&v38,
                             v14);
  if ( (int)(RegValueMappedProperty + 0x80000000) < 0 || RegValueMappedProperty == -1073741789 )
  {
    v28 = 2 * v38;
    *a5 = 8210;
    *a8 = v28;
  }
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegValueMappedProperty;
}
