/*
 * XREFs of PiDevCfgQueryIncludedDriverNode @ 0x1408A77A8
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14076C43C (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x14036F050 (PnpDuplicateUnicodeString.c)
 *     PnpValidateRegistryMultiSz @ 0x140392FCC (PnpValidateRegistryMultiSz.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memset @ 0x140414300 (memset.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x14050E318 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     _PnpOpenObjectRegKey @ 0x14062C674 (_PnpOpenObjectRegKey.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140669AF0 (RtlCreateUnicodeString.c)
 *     PiDevCfgFreeDriverNode @ 0x14073A5A4 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x14073BAF8 (PiDevCfgOpenDriverConfiguration.c)
 *     PiDevCfgGetDriverPackageId @ 0x14073C3A8 (PiDevCfgGetDriverPackageId.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverNode(__int64 a1, const wchar_t *a2, const WCHAR *a3, int a4, __int64 *a5)
{
  const WCHAR *v7; // rsi
  unsigned int *v9; // r15
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char v16; // al
  __int64 v17; // rcx
  int DriverPackageId; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  PVOID PoolWithTag; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r8
  NTSTATUS RegistryValue; // eax
  wchar_t *i; // rsi
  int v28; // ecx
  char v29; // r14
  int DriverConfigurationKeyScope; // eax
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // rax
  HANDLE KeyHandle; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v36; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+38h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v7 = a2;
  Handle = 0LL;
  KeyHandle = 0LL;
  v9 = 0LL;
  v36 = 0LL;
  if ( !a2 )
  {
    v15 = PiDevCfgOpenDriverConfiguration(*(void **)(a1 + 16), a3, &KeyHandle);
    v11 = v15;
    if ( v15 == -1073741772 )
    {
      v11 = 0;
    }
    else if ( v15 < 0 )
    {
      goto LABEL_73;
    }
    if ( !KeyHandle )
    {
      v7 = *(const WCHAR **)(a1 + 344);
      if ( !v7 )
        goto LABEL_24;
      if ( *v7 )
      {
        while ( 1 )
        {
          DriverPackageId = PiDevCfgGetDriverPackageId((__int64)v7, (__int64)&UnicodeString);
          v11 = DriverPackageId;
          if ( DriverPackageId == -1073741772 )
            goto LABEL_41;
          if ( DriverPackageId < 0 )
            goto LABEL_73;
          v19 = PnpOpenObjectRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)UnicodeString.Buffer,
                  8u,
                  131097,
                  0,
                  (__int64)&Handle);
          v11 = v19;
          if ( v19 == -1073741772 )
            break;
          if ( v19 < 0 )
            goto LABEL_73;
          v20 = PiDevCfgOpenDriverConfiguration(Handle, a3, &KeyHandle);
          v11 = v20;
          if ( v20 < 0 )
          {
            if ( v20 != -1073741772 )
              goto LABEL_37;
            ZwClose(Handle);
            Handle = 0LL;
            RtlFreeAnsiString(&UnicodeString);
            v21 = -1LL;
            do
              ++v21;
            while ( v7[v21] );
            v7 += v21 + 1;
            if ( *v7 )
              continue;
          }
          goto LABEL_38;
        }
        v11 = -1073740655;
      }
LABEL_37:
      if ( v11 < 0 )
        goto LABEL_73;
LABEL_38:
      if ( !KeyHandle )
      {
LABEL_24:
        v11 = -1073740654;
        goto LABEL_75;
      }
      goto LABEL_39;
    }
    v7 = *(const WCHAR **)(a1 + 48);
    goto LABEL_17;
  }
  if ( !wcsicmp(a2, *(const wchar_t **)(a1 + 48)) )
  {
    v10 = PiDevCfgOpenDriverConfiguration(*(void **)(a1 + 16), a3, &KeyHandle);
    v11 = v10;
    if ( v10 != -1073741772 )
    {
      if ( v10 < 0 )
        goto LABEL_73;
LABEL_17:
      v16 = PnpDuplicateUnicodeString((__int64)&UnicodeString, a1 + 56);
      v17 = 0LL;
      if ( !v16 )
      {
LABEL_40:
        v11 = -1073741670;
        goto LABEL_73;
      }
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v17 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
      v14 = SysCtxRegOpenKey(v17, *(_QWORD *)(a1 + 16), 0LL, 0, 0x20019u, (__int64)&Handle);
      v11 = v14;
      goto LABEL_21;
    }
LABEL_11:
    v11 = -1073740654;
    goto LABEL_73;
  }
  v12 = PiDevCfgGetDriverPackageId((__int64)v7, (__int64)&UnicodeString);
  v11 = v12;
  if ( v12 != -1073741772 )
  {
    if ( v12 < 0 )
      goto LABEL_73;
    v13 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)UnicodeString.Buffer, 8u, 131097, 0, (__int64)&Handle);
    v11 = v13;
    if ( v13 != -1073741772 )
    {
      if ( v13 < 0 )
        goto LABEL_73;
      v14 = PiDevCfgOpenDriverConfiguration(Handle, a3, &KeyHandle);
      v11 = v14;
      if ( v14 != -1073741772 )
      {
LABEL_21:
        if ( v14 < 0 )
          goto LABEL_73;
LABEL_39:
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1A0uLL, 0x63647050u);
        v23 = (__int64)PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_40;
        memset(PoolWithTag, 0, 0x1A0uLL);
        *(_DWORD *)(v23 + 184) = 32;
        *(_QWORD *)(v23 + 232) = v23 + 224;
        *(_QWORD *)(v23 + 224) = v23 + 224;
        *(_QWORD *)(v23 + 216) = v23 + 208;
        *(_QWORD *)(v23 + 208) = v23 + 208;
        *(_QWORD *)(v23 + 376) = v23 + 368;
        *(_QWORD *)(v23 + 368) = v23 + 368;
        if ( RtlCreateUnicodeString((PUNICODE_STRING)(v23 + 40), v7)
          && PnpDuplicateUnicodeString(v23 + 56, (__int64)&UnicodeString)
          && RtlCreateUnicodeString((PUNICODE_STRING)(v23 + 88), a3) )
        {
          *(_DWORD *)(v23 + 104) = a4;
          RegistryValue = IopGetRegistryValue(KeyHandle, L"IncludeScope", 0, &v36);
          v9 = v36;
          v11 = RegistryValue;
          if ( RegistryValue == -1073741772 )
          {
            v11 = 0;
LABEL_68:
            *(_QWORD *)(v23 + 16) = Handle;
            *(_QWORD *)(v23 + 32) = KeyHandle;
            Handle = 0LL;
            KeyHandle = 0LL;
            *a5 = v23;
            v23 = 0LL;
            goto LABEL_69;
          }
          if ( RegistryValue >= 0 )
          {
            if ( !PnpValidateRegistryMultiSz(v36) )
            {
              v11 = -1073741823;
              goto LABEL_69;
            }
            for ( i = (wchar_t *)((char *)v9 + v9[2]); ; i += v33 + 1 )
            {
              v24 = *i;
              if ( !(_WORD)v24 )
                goto LABEL_68;
              v28 = *i - 42;
              if ( *i == 42 )
                v28 = i[1];
              if ( !v28 )
              {
                *(_DWORD *)(v23 + 104) = -1;
                goto LABEL_68;
              }
              v29 = 1;
              if ( (_WORD)v24 != 43 )
              {
                if ( (_WORD)v24 != 45 )
                  goto LABEL_59;
                v29 = 0;
              }
              ++i;
LABEL_59:
              DriverConfigurationKeyScope = PiDevCfgGetDriverConfigurationKeyScope(i);
              v31 = *(_DWORD *)(v23 + 104);
              if ( v29 )
                v32 = DriverConfigurationKeyScope | v31;
              else
                v32 = ~DriverConfigurationKeyScope & v31;
              v33 = -1LL;
              *(_DWORD *)(v23 + 104) = v32;
              do
                ++v33;
              while ( i[v33] );
            }
          }
        }
        else
        {
          v11 = -1073741670;
        }
LABEL_69:
        if ( v23 )
          PiDevCfgFreeDriverNode(v23, v24, v25);
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        goto LABEL_73;
      }
      goto LABEL_11;
    }
  }
LABEL_41:
  v11 = -1073740655;
LABEL_73:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_75:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v11;
}
