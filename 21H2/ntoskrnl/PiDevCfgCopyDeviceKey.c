/*
 * XREFs of PiDevCfgCopyDeviceKey @ 0x140769FCC
 * Callers:
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140769E40 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140769EBC (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x1408A5B98 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x1408A8120 (PiDevCfgResetDeviceKeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PiDevCfgParsePropertyKeyName @ 0x14036D198 (PiDevCfgParsePropertyKeyName.c)
 *     PnpValidateStringData @ 0x14036F128 (PnpValidateStringData.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x14037C1E4 (PiDevCfgPushCopyKeyEntry.c)
 *     PiDevCfgParseVariableName @ 0x140393FBC (PiDevCfgParseVariableName.c)
 *     PnpRegistryValueExists @ 0x140394F68 (PnpRegistryValueExists.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1403FA7E0 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403FC060 (ZwDeleteValueKey.c)
 *     ZwSetSecurityObject @ 0x1403FDAA0 (ZwSetSecurityObject.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1407349AC (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14073C540 (PiDevCfgGetKeySecurityDescriptor.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     PiDevCfgSetObjectProperty @ 0x1407454AC (PiDevCfgSetObjectProperty.c)
 *     _RegRtlDeleteTreeInternal @ 0x140766B34 (_RegRtlDeleteTreeInternal.c)
 *     IopGetRegistryKeyInformation @ 0x14076A7A4 (IopGetRegistryKeyInformation.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14077B4FC (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14077B730 (PiDevCfgResolveVariable.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKey(
        HANDLE KeyHandle,
        void *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        HANDLE *a6,
        __int64 a7)
{
  __int64 v7; // rsi
  unsigned int v8; // r13d
  __int64 v9; // r12
  int RegistryKeyInformation; // ebx
  ULONG v11; // edx
  ULONG v12; // eax
  ULONG Length; // edi
  WCHAR *PoolWithTag; // r15
  ULONG i; // r14d
  NTSTATUS v16; // eax
  HANDLE *v17; // r13
  PVOID v18; // r14
  HANDLE v19; // r12
  ULONG j; // esi
  NTSTATUS v21; // eax
  const WCHAR *v22; // rdi
  unsigned int v24; // edi
  unsigned int v25; // ebx
  bool v26; // si
  int v27; // ebx
  PVOID v28; // r12
  ULONG *v29; // r13
  unsigned int v30; // r15d
  ULONG MaximumLength; // edi
  char *Buffer; // rsi
  ULONG v33; // r14d
  int v34; // eax
  _WORD *v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  char *v39; // rdi
  int v40; // eax
  bool v41; // al
  int v42; // eax
  __int64 v43; // rbx
  unsigned int v44; // r9d
  int v45; // eax
  char *v46; // rdi
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r8
  int v52; // eax
  int v53; // edx
  NTSTATUS v54; // eax
  HANDLE v55; // rdx
  __int64 v56; // rax
  int ResultLength; // [rsp+28h] [rbp-D8h]
  ULONG ResultLengtha; // [rsp+28h] [rbp-D8h]
  int v59; // [rsp+60h] [rbp-A0h] BYREF
  ULONG DataSize; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE v61; // [rsp+68h] [rbp-98h]
  unsigned int v62; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v64; // [rsp+80h] [rbp-80h] BYREF
  __int64 v65; // [rsp+88h] [rbp-78h]
  PVOID v66; // [rsp+90h] [rbp-70h] BYREF
  PVOID v67; // [rsp+98h] [rbp-68h] BYREF
  int v68; // [rsp+A0h] [rbp-60h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING ValueName; // [rsp+B0h] [rbp-50h] BYREF
  PVOID Data; // [rsp+C0h] [rbp-40h]
  __int64 v72; // [rsp+C8h] [rbp-38h]
  int v73; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v74; // [rsp+D4h] [rbp-2Ch]
  ULONG v75; // [rsp+D8h] [rbp-28h]
  ULONG Disposition; // [rsp+DCh] [rbp-24h] BYREF
  PVOID v77; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v78; // [rsp+E8h] [rbp-18h]
  UNICODE_STRING v79; // [rsp+F0h] [rbp-10h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v81; // [rsp+130h] [rbp+30h] BYREF
  HANDLE KeyHandlea; // [rsp+140h] [rbp+40h]
  HANDLE *v83; // [rsp+148h] [rbp+48h]
  UNICODE_STRING v84; // [rsp+150h] [rbp+50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+160h] [rbp+60h] BYREF
  GUID v86; // [rsp+170h] [rbp+70h] BYREF
  int v87; // [rsp+180h] [rbp+80h]

  v7 = a7;
  KeyHandlea = KeyHandle;
  v61 = a2;
  v83 = a6;
  v74 = a4;
  v87 = 0;
  v78 = a3;
  v8 = a4;
  v72 = a7;
  v9 = a3;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v64 = 0LL;
  v67 = 0LL;
  DataSize = 0;
  v84 = 0LL;
  P = 0LL;
  v81 = 0LL;
  Disposition = 0;
  DestinationString = 0LL;
  v73 = 1;
  ValueName = 0LL;
  v77 = 0LL;
  v79 = 0LL;
  v59 = 0;
  v86 = 0LL;
  v68 = 0;
  RegistryKeyInformation = IopGetRegistryKeyInformation(KeyHandle);
  if ( RegistryKeyInformation < 0 )
    goto LABEL_19;
  v11 = 2 * *((_DWORD *)P + 6) + 26;
  DataSize = 2 * *((_DWORD *)P + 9) + 18;
  v12 = DataSize;
  if ( DataSize <= v11 )
    v12 = v11;
  Length = v12;
  v65 = v12;
  ExFreePoolWithTag(P, 0);
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, Length, 0x63647050u);
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    RegistryKeyInformation = -1073741670;
    goto LABEL_19;
  }
  for ( i = 0; ; ++i )
  {
    v75 = i;
    v16 = ZwEnumerateValueKey(KeyHandlea, i, KeyValueBasicInformation, PoolWithTag, Length, &DataSize);
    RegistryKeyInformation = v16;
    if ( v16 >= 0 )
    {
      v24 = 0;
      PoolWithTag[((unsigned __int64)*((unsigned int *)PoolWithTag + 2) >> 1) + 6] = 0;
      RegistryKeyInformation = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag + 6);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_110;
      ValueName = DestinationString;
      v62 = 0;
      if ( v7 )
      {
        if ( *(_QWORD *)(v7 + 16) )
        {
          v41 = PiDevCfgParseVariableName(DestinationString.Buffer, &v79, &v62);
          v24 = v62;
          if ( v41 )
          {
            if ( (v62 & 0x400000) != 0 )
              goto LABEL_64;
            v66 = 0LL;
            v42 = PiDevCfgResolveVariable(v7, v79.Buffer, &v66);
            if ( v42 >= 0 )
            {
              if ( (unsigned int)(*((_DWORD *)v66 + 8) - 1) > 1 || *((_DWORD *)v66 + 9) > 0xFFFEu )
                goto LABEL_64;
              ValueName.Buffer = (wchar_t *)*((_QWORD *)v66 + 5);
              ValueName.Length = *((_WORD *)v66 + 18) - 2;
              ValueName.MaximumLength = *((_WORD *)v66 + 18);
            }
            else
            {
              if ( v42 != -1073741772 )
                goto LABEL_64;
              ValueName = v79;
            }
          }
        }
      }
      v25 = *((_DWORD *)PoolWithTag + 1) & 0xFFFF0000;
      PoolWithTag[3] = 0;
      if ( (v25 & 0x400000) != 0 || v9 && !PiDevCfgParsePropertyKeyName(&ValueName.Length, &v86, &v73) )
        goto LABEL_64;
      v26 = (a5 & 1) != 0;
      v27 = v24 | v25;
      if ( (v27 & 0x30000) != 0 || !v26 )
      {
        if ( v9 )
        {
          if ( (unsigned int)PnpGetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               v9,
                               v8,
                               (__int64)v61,
                               0LL,
                               (__int64)&v86,
                               (__int64)&v59,
                               0LL,
                               0,
                               (__int64)&v68,
                               0) != -1073741789 )
          {
LABEL_32:
            if ( (v27 & 0x10000) == 0 )
              goto LABEL_33;
LABEL_63:
            v7 = v72;
LABEL_64:
            Length = v65;
            continue;
          }
        }
        else if ( !PnpRegistryValueExists(v61, &ValueName) )
        {
          goto LABEL_32;
        }
        if ( (v27 & 0x20000) != 0 || !v26 )
          goto LABEL_63;
      }
LABEL_33:
      v66 = 0LL;
      v28 = 0LL;
      Data = 0LL;
      RegistryKeyInformation = IopGetRegistryValue(KeyHandlea, DestinationString.Buffer, 0, &v66);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_110;
      v29 = (ULONG *)v66;
      v30 = *((_DWORD *)v66 + 1) & 0xFFFF0000;
      MaximumLength = *((_DWORD *)v66 + 3);
      Buffer = (char *)v66 + *((unsigned int *)v66 + 2);
      v33 = (unsigned __int16)*((_DWORD *)v66 + 1);
      if ( v72
        && *(_QWORD *)(v72 + 16)
        && v33 - 1 <= 1
        && PnpValidateStringData((__int64)v66 + *((unsigned int *)v66 + 2), MaximumLength)
        && PiDevCfgParseVariableName(v35, &v79, &v62) )
      {
        Buffer = (char *)v79.Buffer;
        v66 = 0LL;
        v36 = PiDevCfgResolveVariable(v72, v79.Buffer, &v66);
        RegistryKeyInformation = v36;
        if ( v36 < 0 )
        {
          RegistryKeyInformation = 0;
          if ( v36 == -1073741772 )
            MaximumLength = v79.MaximumLength;
          else
            Buffer = 0LL;
          goto LABEL_49;
        }
        if ( (v62 & 0xC0000) == 0 )
        {
          MaximumLength = *((_DWORD *)v66 + 9);
          Buffer = (char *)*((_QWORD *)v66 + 5);
          v33 = (unsigned __int16)*((_DWORD *)v66 + 8);
          v30 |= *((_DWORD *)v66 + 8) & 0xFFFF0000;
          goto LABEL_49;
        }
        ResultLength = (int)ValueName.Buffer;
        v34 = PiDevCfgResolveMultiSzValue(
                *((unsigned int *)v66 + 8),
                *((unsigned int *)v66 + 9),
                *((_QWORD *)v66 + 5),
                v62,
                v61);
      }
      else
      {
        if ( v33 != 7 && v33 - 1 > 1 || (v30 & 0xC0000) == 0 )
          goto LABEL_49;
        ResultLength = (int)ValueName.Buffer;
        v34 = PiDevCfgResolveMultiSzValue(v33, MaximumLength, Buffer, v30, v61);
      }
      v28 = Data;
      RegistryKeyInformation = v34;
      if ( v34 < 0 )
      {
        Buffer = 0LL;
        RegistryKeyInformation = 0;
      }
      else
      {
        MaximumLength = DataSize;
        v33 = 7;
        Buffer = (char *)Data;
        if ( DataSize >= 2 && !*(_WORD *)Data )
          v30 |= 0x200000u;
      }
LABEL_49:
      if ( Buffer )
      {
        if ( v33 == 0x8000 )
        {
          if ( !v78 )
          {
            v39 = (char *)v61;
            if ( !v83 )
              goto LABEL_56;
            v40 = PiDevCfgPushCopyKeyEntry(v83, Buffer, v61, ((v30 & 0x20000) == 0) | 0x80000000);
            goto LABEL_55;
          }
        }
        else if ( v33 || (v30 & 0x100000) == 0 )
        {
          v37 = v78;
          v38 = v30 & 0x200000;
          if ( !v78 )
          {
            if ( v38 )
            {
              v39 = (char *)v61;
              RegistryKeyInformation = ZwDeleteValueKey(v61, &ValueName);
              if ( RegistryKeyInformation == -1073741772 )
                RegistryKeyInformation = 0;
              goto LABEL_56;
            }
            ResultLengtha = MaximumLength;
            v39 = (char *)v61;
            v40 = ZwSetValueKey(v61, &ValueName, *v29, v33, Buffer, ResultLengtha);
LABEL_55:
            RegistryKeyInformation = v40;
LABEL_56:
            if ( v28 )
              ExFreePoolWithTag(v28, 0);
            v9 = v78;
            if ( !v78 && v33 != 0x8000 && (v30 & 0x100000) != 0 )
            {
              if ( *(_QWORD *)&PiPnpRtlCtx && (v50 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
                v51 = *(_QWORD *)(v50 + 8);
              else
                v51 = 0LL;
              RegRtlDeleteTreeInternal(v39, ValueName.Buffer, v51, 0);
            }
            ExFreePoolWithTag(v29, 0);
            if ( RegistryKeyInformation < 0 )
              goto LABEL_110;
            PoolWithTag = (WCHAR *)P;
            i = v75;
            v8 = v74;
            goto LABEL_63;
          }
          if ( v38 )
          {
            v47 = 0;
            v77 = 0LL;
            v48 = 0;
            v59 = 0;
            v68 = 0;
            v46 = 0LL;
            goto LABEL_101;
          }
          if ( v73 != 1 )
          {
            v44 = v73;
            v59 = v73;
LABEL_100:
            v45 = PiDevCfgConvertPropertyFromValue(v33, MaximumLength, (wchar_t *)Buffer, v44, &v68, &v77);
            v46 = (char *)v77;
            RegistryKeyInformation = v45;
            v47 = v59;
            v48 = v68;
            v37 = v78;
LABEL_101:
            if ( RegistryKeyInformation >= 0 && (v46 || !v47) )
            {
              v49 = PiDevCfgSetObjectProperty(
                      *(__int64 *)&PiPnpRtlCtx,
                      0LL,
                      v37,
                      v74,
                      (__int64)v61,
                      ResultLength,
                      (__int64)&v86,
                      v47,
                      (__int64)v46,
                      v48,
                      0);
              RegistryKeyInformation = v49;
              if ( v49 == -1073741790 || !v59 && v49 == -1073741275 )
                RegistryKeyInformation = 0;
              if ( v46 )
              {
                if ( v46 != Buffer )
                  ExFreePoolWithTag(v46, 0);
                v77 = 0LL;
              }
            }
            goto LABEL_109;
          }
          if ( v33 )
          {
            if ( v33 <= 2 )
            {
              v44 = 18;
              goto LABEL_143;
            }
            switch ( v33 )
            {
              case 4u:
                v44 = 7;
                goto LABEL_143;
              case 7u:
                v44 = 8210;
                goto LABEL_143;
              case 0xBu:
                v44 = 9;
LABEL_143:
                v59 = v44;
                goto LABEL_100;
            }
          }
          v44 = 4099;
          goto LABEL_143;
        }
      }
LABEL_109:
      v39 = (char *)v61;
      goto LABEL_56;
    }
    if ( v16 == -2147483622 )
    {
      RegistryKeyInformation = 0;
      goto LABEL_9;
    }
    if ( v16 != -2147483643 )
      goto LABEL_158;
    ExFreePoolWithTag(PoolWithTag, 0);
    Length = DataSize;
    v65 = DataSize;
    P = ExAllocatePoolWithTag(PagedPool, DataSize, 0x63647050u);
    PoolWithTag = (WCHAR *)P;
    if ( !P )
      break;
    --i;
  }
  RegistryKeyInformation = -1073741670;
LABEL_158:
  if ( RegistryKeyInformation < 0 )
    goto LABEL_110;
LABEL_9:
  if ( v9 )
  {
LABEL_110:
    v18 = v67;
    goto LABEL_15;
  }
  v17 = v83;
  v18 = v67;
  if ( v83 )
  {
    v19 = KeyHandlea;
    for ( j = 0; ; ++j )
    {
      v21 = ZwEnumerateKey(v19, j, KeyBasicInformation, PoolWithTag, Length, &DataSize);
      v22 = 0LL;
      RegistryKeyInformation = v21;
      if ( v21 >= 0 )
        break;
      if ( v21 == -2147483622 )
      {
        RegistryKeyInformation = 0;
        goto LABEL_15;
      }
      if ( v21 != -2147483643 )
        goto LABEL_15;
      ExFreePoolWithTag(PoolWithTag, 0);
      Length = DataSize;
      v65 = DataSize;
      P = ExAllocatePoolWithTag(PagedPool, DataSize, 0x63647050u);
      PoolWithTag = (WCHAR *)P;
      if ( !P )
      {
        RegistryKeyInformation = -1073741670;
        goto LABEL_15;
      }
      --j;
LABEL_92:
      ;
    }
    PoolWithTag[((unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1) + 8] = 0;
    RegistryKeyInformation = RtlInitUnicodeStringEx(&v84, PoolWithTag + 8);
    if ( RegistryKeyInformation < 0 )
      goto LABEL_15;
    v81 = v84;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v19;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.ObjectName = &v84;
    RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    if ( RegistryKeyInformation < 0 )
      goto LABEL_15;
    v43 = v72;
    v62 = 0;
    if ( v72 && *(_QWORD *)(v72 + 16) && PiDevCfgParseVariableName(v84.Buffer, &v79, &v62) )
    {
      v66 = 0LL;
      v52 = PiDevCfgResolveVariable(v43, v79.Buffer, &v66);
      if ( v52 < 0 )
      {
        if ( v52 != -1073741772 )
          goto LABEL_168;
        v81 = v79;
      }
      else
      {
        v53 = *((_DWORD *)v66 + 8);
        if ( (unsigned int)(v53 - 1) > 1 )
        {
          if ( v53 == 7 )
          {
            v22 = (const WCHAR *)*((_QWORD *)v66 + 5);
            goto LABEL_75;
          }
LABEL_168:
          ZwClose(Handle);
          Handle = 0LL;
LABEL_91:
          Length = v65;
          goto LABEL_92;
        }
        v81.Buffer = (wchar_t *)*((_QWORD *)v66 + 5);
        v81.Length = *((_WORD *)v66 + 18) - 2;
        v81.MaximumLength = *((_WORD *)v66 + 18);
      }
    }
LABEL_75:
    RegistryKeyInformation = PiDevCfgGetKeySecurityDescriptor(Handle, &v67);
    if ( RegistryKeyInformation >= 0 )
    {
      v18 = v67;
    }
    else
    {
      RegistryKeyInformation = 0;
      v67 = 0LL;
      v18 = 0LL;
    }
    if ( !v22 )
    {
      ObjectAttributes.RootDirectory = v61;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v81;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = v18;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      RegistryKeyInformation = ZwCreateKey(&v64, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      if ( RegistryKeyInformation >= 0 )
      {
        if ( Disposition == 2 && v18 )
          ZwSetSecurityObject(v64, 4u, v18);
        RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v17, Handle, v64, a5 | 0x40000000u);
        if ( RegistryKeyInformation < 0 )
          ZwClose(v64);
        Handle = 0LL;
LABEL_85:
        v64 = 0LL;
      }
LABEL_86:
      if ( v18 )
      {
        ExFreePoolWithTag(v18, 0);
        v18 = 0LL;
        v67 = 0LL;
      }
      if ( Handle )
      {
        ZwClose(Handle);
        Handle = 0LL;
      }
      if ( RegistryKeyInformation < 0 )
        goto LABEL_15;
      goto LABEL_91;
    }
    if ( !*v22 )
      goto LABEL_86;
    while ( 2 )
    {
      RtlInitUnicodeString(&v81, v22);
      ObjectAttributes.RootDirectory = v61;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.ObjectName = &v81;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = v18;
      v54 = ZwOpenKey(&v64, 0xF003Fu, &ObjectAttributes);
      RegistryKeyInformation = v54;
      if ( v54 >= 0 )
      {
        if ( v18 )
          ZwSetSecurityObject(v64, 4u, v18);
        goto LABEL_181;
      }
      if ( v54 != -1073741772 )
        goto LABEL_86;
      if ( (v62 & 0x10000) != 0 )
      {
        RegistryKeyInformation = 0;
      }
      else
      {
        RegistryKeyInformation = ZwCreateKey(&v64, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
        if ( RegistryKeyInformation < 0 )
          goto LABEL_86;
LABEL_181:
        v55 = Handle;
        if ( !Handle )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &v84;
          ObjectAttributes.RootDirectory = v19;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
          if ( RegistryKeyInformation < 0 )
            goto LABEL_190;
          v55 = Handle;
        }
        RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v17, v55, v64, a5 | 0x40000000u);
        if ( RegistryKeyInformation < 0 )
        {
LABEL_190:
          ZwClose(v64);
          goto LABEL_85;
        }
        Handle = 0LL;
        v64 = 0LL;
      }
      v56 = -1LL;
      do
        ++v56;
      while ( v22[v56] );
      v22 += v56 + 1;
      if ( !*v22 )
        goto LABEL_86;
      continue;
    }
  }
LABEL_15:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
  if ( v64 )
    ZwClose(v64);
  return (unsigned int)RegistryKeyInformation;
}
