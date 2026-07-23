/*
 * XREFs of PiDevCfgResolveVariableKeyHandle @ 0x1408A9BEC
 * Callers:
 *     PiDevCfgResolveVariableKeyCopy @ 0x1408A9B10 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1408AA3C0 (PiDevCfgResolveVariableKeyValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PnpValidateRegistryString @ 0x14036F0EC (PnpValidateRegistryString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     PnpRegSzToString @ 0x1407401EC (PnpRegSzToString.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x14077B730 (PiDevCfgResolveVariable.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14077CAC8 (_PnpCtxOpenContextBaseKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableKeyHandle(_QWORD *a1, void *a2, _QWORD *a3)
{
  unsigned int v5; // r13d
  NTSTATUS RegistryValue; // eax
  unsigned int *v7; // r15
  int DeviceRegProp; // edi
  __int64 v9; // rbx
  const wchar_t *v10; // rdi
  const wchar_t **v11; // rsi
  __int64 v12; // rcx
  WCHAR *v13; // rsi
  wchar_t *v14; // rax
  wchar_t **v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // eax
  int v19; // edx
  NTSTATUS v20; // eax
  const wchar_t *v21; // rsi
  wchar_t *v22; // rax
  PVOID PoolWithTag; // rax
  const wchar_t *v24; // r12
  unsigned int v25; // r13d
  wchar_t *v26; // rax
  wchar_t *v27; // rbx
  __int64 v28; // rcx
  int v29; // esi
  int v30; // edx
  _QWORD *v31; // r14
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rdx
  const wchar_t *v35; // rbx
  __int64 v36; // rax
  unsigned int MaximumLength; // ebx
  wchar_t *Buffer; // r13
  unsigned int v39; // eax
  const wchar_t *v40; // r12
  wchar_t *v41; // rax
  wchar_t *v42; // r14
  __int64 v43; // rcx
  const wchar_t *v44; // r9
  unsigned int v45; // esi
  __int64 v46; // rcx
  unsigned int v47; // eax
  __int64 v48; // rsi
  const wchar_t *v49; // r14
  __int64 v50; // rax
  UNICODE_STRING v51; // xmm0
  unsigned int v52; // edx
  _WORD *v53; // rcx
  HANDLE v54; // rax
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v59; // [rsp+60h] [rbp-A0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v61; // [rsp+98h] [rbp-68h]
  int v62; // [rsp+A0h] [rbp-60h] BYREF
  int v63; // [rsp+A4h] [rbp-5Ch] BYREF
  const wchar_t *v64; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING UnicodeString; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v66; // [rsp+C0h] [rbp-40h]
  HANDLE v67; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v69; // [rsp+D8h] [rbp-28h]
  _BYTE v70[76]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v71; // [rsp+12Ch] [rbp+2Ch]

  v69 = a3;
  *a3 = 0LL;
  v61 = a1;
  P = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v67 = 0LL;
  v62 = 0;
  DestinationString = 0LL;
  v63 = 0;
  v5 = 0;
  v66 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"KeyRoot", 0, &P);
  v7 = (unsigned int *)P;
  DeviceRegProp = RegistryValue;
  if ( RegistryValue < 0 )
    goto LABEL_105;
  if ( !PnpValidateRegistryString(P) )
  {
LABEL_3:
    DeviceRegProp = -1073741823;
    goto LABEL_105;
  }
  v9 = 0LL;
  v10 = (const wchar_t *)((char *)v7 + v7[2]);
  v11 = (const wchar_t **)&off_140985CC0;
  while ( wcsicmp(*v11, v10) )
  {
    v9 = (unsigned int)(v9 + 1);
    v11 += 4;
    if ( (unsigned int)v9 >= 7 )
      goto LABEL_7;
  }
  v15 = &(&off_140985CC0)[4 * v9];
  if ( v15 )
  {
    v16 = *((unsigned int *)v15 + 4);
    v13 = 0LL;
    v17 = *a1;
    if ( !(_DWORD)v16 )
    {
      v19 = *((_DWORD *)v15 + 3);
      if ( !v19 )
      {
        DeviceRegProp = -1073741595;
        goto LABEL_105;
      }
      if ( v19 == 7 )
      {
        v62 = 78;
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          *(_QWORD *)(v17 + 48),
                          0LL,
                          9,
                          (__int64)&v63,
                          (__int64)v70,
                          (__int64)&v62,
                          0);
        if ( DeviceRegProp < 0 )
          goto LABEL_105;
        if ( v63 != 1 )
          goto LABEL_3;
        v19 = *((_DWORD *)v15 + 3);
        v71 = 0;
        v13 = (WCHAR *)v70;
      }
      else
      {
        v13 = v15[3];
      }
      DeviceRegProp = PnpCtxOpenContextBaseKey(v12, v19, v16, 0x20019u, (__int64)&Handle);
      if ( DeviceRegProp < 0 )
        goto LABEL_105;
      if ( v13 )
      {
        RtlInitUnicodeString(&DestinationString, v13);
        ObjectAttributes.RootDirectory = Handle;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        v13 = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( DeviceRegProp < 0 )
          goto LABEL_105;
        ZwClose(Handle);
        Handle = KeyHandle;
      }
      goto LABEL_31;
    }
    v18 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v17 + 48), v16, 0, 131097, 0, (__int64)&Handle, 0LL);
  }
  else
  {
LABEL_7:
    v13 = 0LL;
    if ( wcsicmp(v10, L"SYSTEM") )
    {
      if ( wcsicmp(v10, L"SOFTWARE") )
      {
        if ( wcsicmp(v10, L"HARDWARE") )
        {
          DeviceRegProp = -1073741772;
          goto LABEL_105;
        }
        v14 = L"\\Registry\\Machine\\HARDWARE";
      }
      else
      {
        v14 = L"\\Registry\\Machine\\SOFTWARE";
      }
      *(_DWORD *)&DestinationString.Length = 3538996;
    }
    else
    {
      *(_DWORD *)&DestinationString.Length = 3276848;
      v14 = L"\\Registry\\Machine\\SYSTEM";
    }
    DestinationString.Buffer = v14;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v18 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  }
  DeviceRegProp = v18;
  if ( v18 < 0 )
    goto LABEL_105;
LABEL_31:
  ExFreePoolWithTag(v7, 0);
  P = v13;
  v20 = IopGetRegistryValue(a2, L"KeyPath", 0, &P);
  v7 = (unsigned int *)P;
  DeviceRegProp = v20;
  if ( v20 < 0 )
  {
    if ( v20 != -1073741772 )
      goto LABEL_105;
    v54 = Handle;
    DeviceRegProp = (int)v13;
    v67 = Handle;
    Handle = v13;
    goto LABEL_103;
  }
  if ( !PnpValidateRegistryString(P) )
    goto LABEL_3;
  v64 = (const wchar_t *)((char *)v7 + v7[2]);
  v21 = v64;
  v22 = wcschr(v64, 0x24u);
  if ( !v22 )
    goto LABEL_98;
  do
  {
    ++v5;
    v22 = wcschr(v22 + 1, 0x24u);
  }
  while ( v22 );
  LODWORD(P) = v5;
  if ( !v5 )
  {
LABEL_98:
    v52 = v7[3];
    v53 = (_WORD *)((char *)v7 + v7[2]);
    LODWORD(P) = 0;
    PnpRegSzToString(v53, v52, (int *)&P);
    DestinationString.Length = (unsigned __int16)P;
    DestinationString.MaximumLength = *((_WORD *)v7 + 6);
    DestinationString.Buffer = (wchar_t *)((char *)v7 + v7[2]);
LABEL_99:
    ObjectAttributes.RootDirectory = Handle;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DeviceRegProp = ZwOpenKey(&v67, 0x20019u, &ObjectAttributes);
    if ( DeviceRegProp < 0 )
      goto LABEL_105;
    v54 = v67;
LABEL_103:
    *v69 = v54;
    goto LABEL_105;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v5, 0x63647050u);
  v66 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_37:
    DeviceRegProp = -1073741670;
    goto LABEL_105;
  }
  memset(PoolWithTag, 0, 8LL * v5);
  v24 = v21;
  v25 = 0;
  if ( *v21 )
  {
    while ( v25 < (unsigned int)P )
    {
      v26 = wcschr(v24, 0x5Cu);
      v27 = v26;
      if ( v26 )
      {
        *v26 = 0;
        v28 = v26 - v24;
      }
      else
      {
        v28 = -1LL;
        do
          ++v28;
        while ( v24[v28] );
      }
      v29 = 2 * v28;
      v30 = 2 * v28;
      if ( *v24 == 36 )
      {
        v31 = (char *)v66 + 8 * v25;
        DeviceRegProp = PiDevCfgResolveVariable((__int64)v61, v24 + 1, v31);
        if ( DeviceRegProp < 0 )
        {
          if ( DeviceRegProp != -1073741772 )
            break;
          v30 = v29;
          DeviceRegProp = 0;
        }
        else
        {
          v32 = *v31;
          v30 = v29;
          v33 = *(_DWORD *)(*v31 + 32LL);
          if ( v33 )
          {
            if ( v33 <= 2 )
            {
              v30 = *(_DWORD *)(v32 + 36) - 2;
            }
            else
            {
              v30 = v29;
              if ( v33 == 7 )
              {
                v34 = -1LL;
                do
                  ++v34;
                while ( *(_WORD *)(*(_QWORD *)(v32 + 40) + 2 * v34) );
                v30 = 2 * v34;
              }
            }
          }
        }
        ++v25;
      }
      if ( (unsigned __int64)(v30 + (unsigned int)UnicodeString.MaximumLength) + 2 >= 0xFFFE )
      {
        DeviceRegProp = -2147483643;
        break;
      }
      UnicodeString.MaximumLength += v30 + 2;
      if ( v27 )
      {
        *v27 = 92;
        v35 = v27 + 1;
      }
      else
      {
        v36 = -1LL;
        do
          ++v36;
        while ( v24[v36] );
        v35 = &v24[v36];
      }
      v24 = v35;
      if ( !*v35 )
        break;
    }
    v21 = v64;
  }
  if ( DeviceRegProp >= 0 )
  {
    MaximumLength = UnicodeString.MaximumLength;
    UnicodeString.Length = UnicodeString.MaximumLength - 2;
    UnicodeString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, UnicodeString.MaximumLength, 0x63647050u);
    Buffer = UnicodeString.Buffer;
    if ( !UnicodeString.Buffer )
      goto LABEL_37;
    v39 = 0;
    v40 = v21;
    LODWORD(v61) = 0;
    v59 = MaximumLength;
    if ( *v21 )
    {
      while ( v39 < (unsigned int)P )
      {
        v41 = wcschr(v40, 0x5Cu);
        v42 = v41;
        if ( v41 )
        {
          *v41 = 0;
          v43 = v41 - v40;
        }
        else
        {
          v43 = -1LL;
          do
            ++v43;
          while ( v40[v43] );
        }
        v44 = v40;
        if ( v40 != v21 )
        {
          if ( MaximumLength <= 2 )
            goto LABEL_3;
          *Buffer++ = 92;
          MaximumLength -= 2;
          v59 = MaximumLength;
        }
        v45 = 2 * v43;
        if ( *v40 == 36 )
        {
          v46 = *((_QWORD *)v66 + (unsigned int)v61);
          LODWORD(v61) = (_DWORD)v61 + 1;
          if ( v46 )
          {
            v47 = *(_DWORD *)(v46 + 32);
            if ( v47 )
            {
              if ( v47 <= 2 )
              {
                v44 = *(const wchar_t **)(v46 + 40);
                v45 = *(_DWORD *)(v46 + 36) - 2;
              }
              else if ( v47 == 7 )
              {
                v44 = *(const wchar_t **)(v46 + 40);
                v48 = -1LL;
                do
                  ++v48;
                while ( v44[v48] );
                v45 = 2 * v48;
              }
            }
          }
        }
        if ( MaximumLength <= v45 )
        {
          DeviceRegProp = -1073741823;
          break;
        }
        memmove(Buffer, v44, v45);
        Buffer += (unsigned __int64)v45 >> 1;
        MaximumLength = v59 - v45;
        v59 -= v45;
        if ( v42 )
        {
          *v42 = 92;
          v49 = v42 + 1;
        }
        else
        {
          v50 = -1LL;
          do
            ++v50;
          while ( v40[v50] );
          v49 = &v40[v50];
        }
        v40 = v49;
        if ( !*v49 )
          break;
        v39 = (unsigned int)v61;
        v21 = v64;
      }
    }
    if ( DeviceRegProp >= 0 )
    {
      if ( MaximumLength != 2 )
        goto LABEL_3;
      v51 = UnicodeString;
      *Buffer = 0;
      DestinationString = v51;
      goto LABEL_99;
    }
  }
LABEL_105:
  RtlFreeAnsiString(&UnicodeString);
  if ( v66 )
    ExFreePoolWithTag(v66, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DeviceRegProp;
}
