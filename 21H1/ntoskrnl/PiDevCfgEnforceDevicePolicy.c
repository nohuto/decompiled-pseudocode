/*
 * XREFs of PiDevCfgEnforceDevicePolicy @ 0x14075AB08
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1407284B0 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     _wcsicmp @ 0x1403CDC90 (_wcsicmp.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1408A36B4 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A3724 (PiDevCfgQueryPolicyStringList.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgEnforceDevicePolicy(__int64 a1, __int64 a2, const wchar_t *a3)
{
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  bool v8; // r14
  int v9; // eax
  wchar_t *v10; // r12
  int v11; // eax
  _WORD *v12; // rdi
  const wchar_t *v13; // rbx
  __int64 v14; // rax
  const wchar_t *v15; // rbx
  __int64 v16; // rax
  int v17; // eax
  wchar_t *v18; // r13
  int v19; // eax
  wchar_t *v20; // r15
  __int64 v21; // r12
  const wchar_t **v22; // rsi
  const wchar_t *v23; // rdi
  char v24; // r12
  char v25; // si
  const wchar_t *v26; // rbx
  __int64 v27; // rax
  const wchar_t *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  wchar_t *v32; // rsi
  int v33; // eax
  wchar_t *v34; // rdi
  const wchar_t *v35; // rbx
  __int64 v36; // rax
  const wchar_t *v37; // rbx
  __int64 v38; // rax
  char v39; // [rsp+28h] [rbp-69h] BYREF
  char v40; // [rsp+29h] [rbp-68h]
  char v41; // [rsp+2Ah] [rbp-67h]
  HANDLE Handle; // [rsp+30h] [rbp-61h] BYREF
  __int64 v43; // [rsp+38h] [rbp-59h] BYREF
  const wchar_t *v44; // [rsp+40h] [rbp-51h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-49h] BYREF
  __int64 v46; // [rsp+50h] [rbp-41h] BYREF
  const wchar_t **v47; // [rsp+58h] [rbp-39h] BYREF
  wchar_t *v48; // [rsp+60h] [rbp-31h] BYREF
  PVOID P; // [rsp+68h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-21h] BYREF
  wchar_t *v51; // [rsp+A0h] [rbp+Fh] BYREF
  wchar_t *v52; // [rsp+A8h] [rbp+17h] BYREF
  char v55; // [rsp+110h] [rbp+7Fh]

  v43 = 8913030LL;
  Handle = 0LL;
  v44 = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\DeviceInstall";
  v48 = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v43;
  P = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v39 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 == -1073741772 )
  {
    if ( !PnpBootMode )
    {
LABEL_3:
      v6 = 0;
      goto LABEL_4;
    }
    LODWORD(v43) = 6422624;
    v44 = L"\\Registry\\Machine\\System\\DriverDatabase\\Policies";
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v43;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  if ( v5 < 0 )
    goto LABEL_3;
  LODWORD(v43) = 1703960;
  v44 = L"Restrictions";
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v43;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_3;
  v8 = 0;
  v55 = 0;
  v41 = 0;
  v40 = 0;
  if ( (int)PiDevCfgQueryPolicyEnabled(Handle, L"DenyRemovableDevices", &v39) >= 0 && v39 )
    v8 = (*(_BYTE *)(a1 + 560) & 0x10) != 0;
  v9 = PiDevCfgQueryPolicyStringList(Handle, L"AllowDeviceClasses", &v48);
  v10 = v48;
  if ( v9 < 0 )
    v10 = 0LL;
  v48 = v10;
  v11 = PiDevCfgQueryPolicyStringList(Handle, L"DenyDeviceClasses", &P);
  v12 = P;
  if ( v11 < 0 )
    v12 = 0LL;
  P = v12;
  if ( a3 )
  {
    if ( v10 )
    {
      v13 = v10;
      if ( *v10 )
      {
        while ( wcsicmp(v13, a3) )
        {
          v14 = -1LL;
          do
            ++v14;
          while ( v13[v14] );
          v13 += v14 + 1;
          if ( !*v13 )
            goto LABEL_30;
        }
        v55 = 1;
      }
    }
    else if ( !v12 )
    {
      goto LABEL_38;
    }
LABEL_30:
    if ( v12 )
    {
      v15 = v12;
      if ( *v12 )
      {
        while ( wcsicmp(v15, a3) )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( v15[v16] );
          v15 += v16 + 1;
          if ( !*v15 )
            goto LABEL_38;
        }
        v8 = 1;
      }
    }
  }
LABEL_38:
  v17 = PiDevCfgQueryPolicyStringList(Handle, L"AllowDeviceIDs", &v46);
  v18 = (wchar_t *)v46;
  if ( v17 < 0 )
    v18 = 0LL;
  v19 = PiDevCfgQueryPolicyStringList(Handle, L"DenyDeviceIDs", &v47);
  v20 = (wchar_t *)v47;
  v6 = 0;
  if ( v19 < 0 )
    v20 = 0LL;
  if ( v18 || v20 )
  {
    v21 = 2LL;
    v22 = (const wchar_t **)(a2 + 32);
    v46 = 2LL;
    v47 = (const wchar_t **)(a2 + 32);
    do
    {
      v23 = *v22;
      if ( *v22 && *v23 )
      {
        v24 = v41;
        v25 = v40;
        do
        {
          if ( v18 && !v25 )
          {
            v26 = v18;
            if ( *v18 )
            {
              while ( wcsicmp(v26, v23) )
              {
                v27 = -1LL;
                do
                  ++v27;
                while ( v26[v27] );
                v26 += v27 + 1;
                if ( !*v26 )
                  goto LABEL_57;
              }
              v25 = 1;
              v55 = 1;
            }
LABEL_57:
            v6 = 0;
          }
          if ( v20 && !v24 )
          {
            v28 = v20;
            if ( *v20 )
            {
              while ( wcsicmp(v28, v23) )
              {
                v29 = -1LL;
                do
                  ++v29;
                while ( v28[v29] );
                v28 += v29 + 1;
                if ( !*v28 )
                  goto LABEL_67;
              }
              v24 = 1;
              v8 = 1;
            }
LABEL_67:
            v6 = 0;
          }
          v30 = -1LL;
          do
            ++v30;
          while ( v23[v30] );
          v23 += v30 + 1;
        }
        while ( *v23 );
        v40 = v25;
        v22 = v47;
        v41 = v24;
        v21 = v46;
      }
      v22 += 2;
      --v21;
      v47 = v22;
      v46 = v21;
    }
    while ( v21 );
    v10 = v48;
  }
  v31 = PiDevCfgQueryPolicyStringList(Handle, L"AllowInstanceIDs", &v51);
  v32 = v51;
  if ( v31 < 0 )
    v32 = 0LL;
  v33 = PiDevCfgQueryPolicyStringList(Handle, L"DenyInstanceIDs", &v52);
  v34 = v52;
  if ( v33 < 0 )
    v34 = 0LL;
  if ( v32 )
  {
    v35 = v32;
    if ( *v32 )
    {
      while ( wcsicmp(v35, *(const wchar_t **)(a2 + 8)) )
      {
        v36 = -1LL;
        do
          ++v36;
        while ( v35[v36] );
        v35 += v36 + 1;
        if ( !*v35 )
          goto LABEL_88;
      }
      v55 = 1;
    }
LABEL_88:
    v6 = 0;
    goto LABEL_89;
  }
  if ( v34 )
  {
LABEL_89:
    if ( v34 )
    {
      v37 = v34;
      if ( *v34 )
      {
        while ( wcsicmp(v37, *(const wchar_t **)(a2 + 8)) )
        {
          v38 = -1LL;
          do
            ++v38;
          while ( v37[v38] );
          v37 += v38 + 1;
          if ( !*v37 )
            goto LABEL_97;
        }
        v8 = 1;
      }
LABEL_97:
      v6 = 0;
    }
  }
  if ( v8 )
    goto LABEL_106;
  if ( !v55 && (int)PiDevCfgQueryPolicyEnabled(Handle, L"DenyUnspecified", &v39) >= 0 && v39 )
  {
    if ( !a3 && v10 )
      goto LABEL_108;
    if ( !PnpSetupInProgress || !PnpSetupUpgradeInProgress )
LABEL_106:
      v6 = -1073740959;
  }
  if ( v10 )
LABEL_108:
    ExFreePoolWithTag(v10, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
LABEL_4:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v6;
}
