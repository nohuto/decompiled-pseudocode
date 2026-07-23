/*
 * XREFs of PiDevCfgResolveVariable @ 0x14077B730
 * Callers:
 *     PiDevCfgQueryResolveValue @ 0x14050E6E4 (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140767B64 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769FCC (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A8270 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408A94E0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A9BEC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1408AA3C0 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408AA5A0 (PiDevCfgResolveVariableSwitchCase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PnpValidateRegistryString @ 0x14036F0EC (PnpValidateRegistryString.c)
 *     PnpStringToDwordValue @ 0x1403813EC (PnpStringToDwordValue.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlHashUnicodeString @ 0x14062BAB0 (RtlHashUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140669AF0 (RtlCreateUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariableConstant @ 0x1408A81A0 (PiDevCfgResolveVariableConstant.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariable(__int64 a1, const WCHAR *a2, _QWORD *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int *v5; // r14
  __int64 (__fastcall *v6)(__int64, HANDLE, _OWORD *); // r13
  unsigned int v7; // r15d
  NTSTATUS v8; // eax
  unsigned int v9; // ecx
  _QWORD *v10; // r12
  _QWORD *v11; // rsi
  void *v12; // rax
  NTSTATUS v13; // eax
  NTSTATUS RegistryValue; // eax
  const wchar_t **v15; // r13
  const wchar_t *v16; // rax
  unsigned int v17; // edi
  const wchar_t **v18; // r15
  __int64 v19; // rdi
  _OWORD *PoolWithTag; // rax
  _OWORD *v22; // rdi
  _QWORD *v23; // rax
  int v24; // eax
  wchar_t **v25; // rax
  _WORD *v26; // rsi
  __int64 v27; // rax
  unsigned int v28; // eax
  PVOID v29; // rax
  _DWORD *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rcx
  unsigned int v33; // [rsp+28h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+30h] [rbp-41h] BYREF
  PVOID P; // [rsp+38h] [rbp-39h] BYREF
  void *Src; // [rsp+40h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-19h] BYREF
  const wchar_t *HashValue; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = a1;
  v4 = 0;
  v5 = 0LL;
  LODWORD(HashValue) = 0;
  v6 = 0LL;
  KeyHandle = 0LL;
  v7 = 0;
  P = 0LL;
  DestinationString = 0LL;
  Src = 0LL;
  v33 = 0;
  if ( !*a2 )
    return (unsigned int)-1073741772;
  *a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v8 = RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)&HashValue);
  v9 = (unsigned int)HashValue;
  if ( v8 < 0 )
    v9 = 0;
  v10 = (_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL * (v9 % 0x7F));
  v11 = (_QWORD *)*v10;
  if ( (_QWORD *)*v10 != v10 )
  {
    do
    {
      v22 = v11;
      if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)v11 + 1, 1u) )
        break;
      v11 = (_QWORD *)*v11;
      v22 = 0LL;
    }
    while ( v11 != v10 );
    if ( v22 )
    {
      if ( *((_DWORD *)v22 + 8) == -1 )
        return (unsigned int)-1073741823;
      goto LABEL_27;
    }
    v3 = a1;
  }
  v12 = *(void **)(v3 + 16);
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = v12;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  v13 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v4 = v13;
  if ( v13 >= 0 )
  {
    RegistryValue = IopGetRegistryValue(KeyHandle, (const WCHAR *)&dword_14098C0C4, 0, &P);
    v5 = (unsigned int *)P;
    v4 = RegistryValue;
    if ( RegistryValue < 0 )
      goto LABEL_29;
    if ( !PnpValidateRegistryString(P) )
    {
      v4 = -1073741823;
      goto LABEL_29;
    }
    v15 = (const wchar_t **)&off_140985BA0;
    v16 = (const wchar_t *)((char *)v5 + v5[2]);
    HashValue = v16;
    v17 = 0;
    while ( wcsicmp(*v15, v16) )
    {
      v16 = HashValue;
      ++v17;
      v15 += 2;
      if ( v17 >= 8 )
        goto LABEL_11;
    }
    v6 = (__int64 (__fastcall *)(__int64, HANDLE, _OWORD *))*(&funcs_14077B996 + 2 * v17);
    if ( !v6 )
    {
LABEL_11:
      v4 = -1073741772;
      goto LABEL_29;
    }
LABEL_22:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x63647050u);
    v22 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      goto LABEL_29;
    }
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    v23 = (_QWORD *)v10[1];
    if ( (_QWORD *)*v23 != v10 )
LABEL_57:
      __fastfail(3u);
    *(_QWORD *)v22 = v10;
    *((_QWORD *)v22 + 1) = v23;
    *v23 = v22;
    v10[1] = v22;
    if ( RtlCreateUnicodeString((PUNICODE_STRING)v22 + 1, a2) )
    {
      if ( v6 )
      {
        *((_DWORD *)v22 + 8) = -1;
        v24 = v6(a1, KeyHandle, v22);
        v4 = v24;
        if ( v24 >= 0 )
        {
LABEL_27:
          *a3 = v22;
          v22 = 0LL;
          goto LABEL_28;
        }
        if ( v24 == -1073741772 )
          v4 = -1073741823;
LABEL_28:
        if ( !v22 )
          goto LABEL_29;
        v31 = *(_QWORD *)v22;
        if ( *(_OWORD **)(*(_QWORD *)v22 + 8LL) == v22 )
        {
          v32 = (_QWORD *)*((_QWORD *)v22 + 1);
          if ( (_OWORD *)*v32 == v22 )
          {
            *v32 = v31;
            *(_QWORD *)(v31 + 8) = v32;
            ExFreePoolWithTag(v22, 0);
LABEL_29:
            if ( v5 )
              ExFreePoolWithTag(v5, 0);
            goto LABEL_18;
          }
        }
        goto LABEL_57;
      }
      v26 = Src;
      if ( Src )
      {
        *((_DWORD *)v22 + 8) = 1;
        v27 = -1LL;
        do
          ++v27;
        while ( v26[v27] );
        v28 = 2 * v27 + 2;
        *((_DWORD *)v22 + 9) = v28;
        v29 = ExAllocatePoolWithTag(PagedPool, v28, 0x63647050u);
        *((_QWORD *)v22 + 5) = v29;
        if ( v29 )
        {
          memmove(v29, v26, *((unsigned int *)v22 + 9));
          goto LABEL_27;
        }
      }
      else
      {
        *((_DWORD *)v22 + 8) = 4;
        *((_DWORD *)v22 + 9) = 4;
        v30 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
        *((_QWORD *)v22 + 5) = v30;
        if ( v30 )
        {
          *v30 = v7;
          goto LABEL_27;
        }
      }
    }
    v4 = -1073741670;
    goto LABEL_28;
  }
  if ( v13 == -1073741772 )
  {
    v4 = 0;
    v18 = (const wchar_t **)&off_1409855F0;
    v19 = 0LL;
    while ( wcsicmp(*v18, a2) )
    {
      v19 = (unsigned int)(v19 + 1);
      v18 += 3;
      if ( (unsigned int)v19 >= 4 )
        goto LABEL_16;
    }
    v25 = &(&off_1409855F0)[3 * v19];
    if ( v25 )
    {
      v7 = *((_DWORD *)v25 + 4);
      Src = v25[1];
      goto LABEL_22;
    }
LABEL_16:
    if ( PnpStringToDwordValue((__int64)a2, &v33) )
    {
      v7 = v33;
      goto LABEL_22;
    }
    v4 = -1073741772;
  }
LABEL_18:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4;
}
