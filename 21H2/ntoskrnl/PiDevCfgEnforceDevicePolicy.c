/*
 * XREFs of PiDevCfgEnforceDevicePolicy @ 0x14076F2A8
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140742FE0 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1408A7C34 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A7CA4 (PiDevCfgQueryPolicyStringList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgEnforceDevicePolicy(__int64 a1, __int64 a2, const wchar_t *a3)
{
  int v5; // esi
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  char v8; // r15
  unsigned int v9; // ebx
  int v10; // eax
  _WORD *v11; // rsi
  int v12; // eax
  wchar_t *v13; // r14
  const wchar_t *v14; // rdi
  __int64 v15; // rax
  const wchar_t *v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  wchar_t *v19; // r12
  int v20; // eax
  wchar_t *v21; // r13
  __int64 v22; // r12
  const wchar_t **v23; // r14
  const wchar_t *v24; // rsi
  wchar_t *v25; // r12
  char v26; // r14
  const wchar_t *v27; // rdi
  __int64 v28; // rax
  const wchar_t *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  wchar_t *v33; // r14
  int v34; // eax
  wchar_t *v35; // rsi
  const wchar_t *v36; // rdi
  __int64 v37; // rax
  const wchar_t *v38; // rdi
  __int64 v39; // rax
  bool v40; // di
  PVOID v41; // rcx
  unsigned int v42; // eax
  char v44; // [rsp+28h] [rbp-79h]
  char v45; // [rsp+29h] [rbp-78h]
  char v46; // [rsp+2Ah] [rbp-77h]
  char v47; // [rsp+2Bh] [rbp-76h]
  char v48; // [rsp+2Ch] [rbp-75h]
  char v49; // [rsp+2Dh] [rbp-74h]
  HANDLE Handle; // [rsp+30h] [rbp-71h] BYREF
  PVOID P; // [rsp+38h] [rbp-69h] BYREF
  BOOL v52; // [rsp+40h] [rbp-61h]
  __int64 v53; // [rsp+48h] [rbp-59h] BYREF
  const wchar_t *v54; // [rsp+50h] [rbp-51h]
  HANDLE KeyHandle; // [rsp+58h] [rbp-49h] BYREF
  wchar_t *Str1; // [rsp+60h] [rbp-41h] BYREF
  __int64 v57; // [rsp+68h] [rbp-39h] BYREF
  const wchar_t **v58; // [rsp+70h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-29h] BYREF
  wchar_t *v60; // [rsp+A8h] [rbp+7h] BYREF
  wchar_t *v61; // [rsp+B0h] [rbp+Fh] BYREF
  PVOID v62; // [rsp+B8h] [rbp+17h]
  char v65; // [rsp+120h] [rbp+7Fh] BYREF

  v53 = 8913030LL;
  Handle = 0LL;
  v54 = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\DeviceInstall";
  P = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v53;
  Str1 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v65 = 0;
  v5 = 576;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 == -1073741772 )
  {
    if ( !PnpBootMode )
    {
LABEL_5:
      v7 = 0;
      goto LABEL_129;
    }
    LODWORD(v53) = 6422624;
    v54 = L"\\Registry\\Machine\\System\\DriverDatabase\\Policies";
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v53;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  if ( v6 < 0 )
    goto LABEL_5;
  LODWORD(v53) = 1703960;
  v54 = L"Restrictions";
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v53;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_5;
  LOBYTE(v5) = 0;
  v8 = 0;
  v52 = v5;
  v44 = 0;
  v47 = 0;
  v46 = 0;
  v45 = 0;
  v48 = 0;
  v49 = 0;
  v9 = 1;
  if ( (int)PiDevCfgQueryPolicyEnabled(Handle, L"AllowDenyLayered", &v65) >= 0 )
    v52 = v65 != 0;
  if ( (int)PiDevCfgQueryPolicyEnabled(Handle, L"DenyRemovableDevices", &v65) >= 0
    && v65
    && (*(_BYTE *)(a1 + 560) & 0x10) != 0 )
  {
    v8 = 1;
  }
  v10 = PiDevCfgQueryPolicyStringList(Handle, L"AllowDeviceClasses", &P);
  v11 = P;
  if ( v10 < 0 )
    v11 = 0LL;
  P = v11;
  v12 = PiDevCfgQueryPolicyStringList(Handle, L"DenyDeviceClasses", &Str1);
  v13 = Str1;
  if ( v12 < 0 )
    v13 = 0LL;
  v62 = v13;
  if ( a3 )
  {
    if ( v11 )
    {
      v14 = v11;
      if ( *v11 )
      {
        while ( wcsicmp(v14, a3) )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( v14[v15] );
          v14 += v15 + 1;
          if ( !*v14 )
            goto LABEL_28;
        }
        v44 = 1;
      }
    }
    else if ( !v13 )
    {
      goto LABEL_36;
    }
LABEL_28:
    if ( v13 )
    {
      v16 = v13;
      if ( *v13 )
      {
        while ( wcsicmp(v16, a3) )
        {
          v17 = -1LL;
          do
            ++v17;
          while ( v16[v17] );
          v16 += v17 + 1;
          if ( !*v16 )
            goto LABEL_36;
        }
        v47 = 1;
        v8 = 1;
      }
    }
  }
LABEL_36:
  v18 = PiDevCfgQueryPolicyStringList(Handle, L"AllowDeviceIDs", &v57);
  v19 = (wchar_t *)v57;
  if ( v18 < 0 )
    v19 = 0LL;
  Str1 = v19;
  v20 = PiDevCfgQueryPolicyStringList(Handle, L"DenyDeviceIDs", &v58);
  v21 = (wchar_t *)v58;
  if ( v20 < 0 )
    v21 = 0LL;
  if ( v19 || v21 )
  {
    v22 = 2LL;
    v23 = (const wchar_t **)(a2 + 32);
    v57 = 2LL;
    v58 = (const wchar_t **)(a2 + 32);
    do
    {
      v24 = *v23;
      if ( *v23 && *v24 )
      {
        v25 = Str1;
        v26 = v45;
        do
        {
          if ( v25 )
          {
            if ( !v26 )
            {
              v27 = v25;
              if ( *v25 )
              {
                while ( wcsicmp(v27, v24) )
                {
                  v28 = -1LL;
                  do
                    ++v28;
                  while ( v27[v28] );
                  v27 += v28 + 1;
                  if ( !*v27 )
                    goto LABEL_55;
                }
                v26 = 1;
                v44 = 1;
              }
            }
          }
LABEL_55:
          if ( v21 )
          {
            if ( !v46 )
            {
              v29 = v21;
              if ( *v21 )
              {
                while ( wcsicmp(v29, v24) )
                {
                  v30 = -1LL;
                  do
                    ++v30;
                  while ( v29[v30] );
                  v29 += v30 + 1;
                  if ( !*v29 )
                    goto LABEL_64;
                }
                v46 = 1;
                v8 = 1;
              }
            }
          }
LABEL_64:
          v31 = -1LL;
          do
            ++v31;
          while ( v24[v31] );
          v24 += v31 + 1;
        }
        while ( *v24 );
        v22 = v57;
        v45 = v26;
        v23 = v58;
      }
      v23 += 2;
      --v22;
      v58 = v23;
      v57 = v22;
    }
    while ( v22 );
    v19 = Str1;
  }
  v32 = PiDevCfgQueryPolicyStringList(Handle, L"AllowInstanceIDs", &v60);
  v33 = v60;
  if ( v32 < 0 )
    v33 = 0LL;
  v34 = PiDevCfgQueryPolicyStringList(Handle, L"DenyInstanceIDs", &v61);
  v35 = v61;
  if ( v34 < 0 )
    v35 = 0LL;
  if ( v33 )
  {
    v36 = v33;
    if ( *v33 )
    {
      while ( wcsicmp(v36, *(const wchar_t **)(a2 + 8)) )
      {
        v37 = -1LL;
        do
          ++v37;
        while ( v36[v37] );
        v36 += v37 + 1;
        if ( !*v36 )
          goto LABEL_84;
      }
      v49 = 1;
      v44 = 1;
    }
  }
  else if ( !v35 )
  {
    goto LABEL_92;
  }
LABEL_84:
  if ( v35 )
  {
    v38 = v35;
    if ( *v35 )
    {
      while ( wcsicmp(v38, *(const wchar_t **)(a2 + 8)) )
      {
        v39 = -1LL;
        do
          ++v39;
        while ( v38[v39] );
        v38 += v39 + 1;
        if ( !*v38 )
          goto LABEL_92;
      }
      v48 = 1;
      v8 = 1;
    }
  }
LABEL_92:
  if ( v8 )
  {
    v41 = P;
    v40 = v52;
    goto LABEL_105;
  }
  if ( v44 )
  {
    v41 = P;
    goto LABEL_101;
  }
  v40 = v52;
  if ( v52 || (int)PiDevCfgQueryPolicyEnabled(Handle, L"DenyUnspecified", &v65) < 0 || !v65 )
  {
    v41 = P;
    v7 = 0;
    goto LABEL_117;
  }
  v41 = P;
  if ( (a3 || !P) && (!PnpSetupInProgress || !PnpSetupUpgradeInProgress) )
  {
LABEL_105:
    if ( v40 && v44 )
    {
      if ( v48 )
      {
        v9 = 0;
      }
      else if ( !v46 )
      {
        v9 = 3 - (v47 != 0);
      }
      if ( v49 )
        v42 = 0;
      else
        v42 = 2 - (v45 != 0);
      v7 = v42 >= v9 ? 0xC0000361 : 0;
    }
    else
    {
      v7 = -1073740959;
    }
    goto LABEL_117;
  }
LABEL_101:
  v7 = 0;
LABEL_117:
  if ( v41 )
    ExFreePoolWithTag(v41, 0);
  if ( v62 )
    ExFreePoolWithTag(v62, 0);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
LABEL_129:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v7;
}
