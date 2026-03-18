/*
 * XREFs of PiDevCfgResolveVariableSwitchCase @ 0x14094E570
 * Callers:
 *     <none>
 * Callees:
 *     PnpValidateRegistryString @ 0x1402D199C (PnpValidateRegistryString.c)
 *     RtlStringCchPrintfW @ 0x1402E0198 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x14069A1F8 (PiDevCfgResolveVariable.c)
 *     PiDevCfgCopyVariableData @ 0x1408048F4 (PiDevCfgCopyVariableData.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableSwitchCase(__int64 a1, void *a2, __int64 a3)
{
  int RegistryValue; // ebx
  unsigned int *v7; // rdi
  int v8; // eax
  unsigned int v9; // eax
  wchar_t *v10; // rdx
  NTSTATUS v11; // eax
  const WCHAR *v12; // rdx
  NTSTATUS v13; // eax
  PVOID P; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  wchar_t pszDest[12]; // [rsp+38h] [rbp-28h] BYREF

  P = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"Switch", 0, &P);
  if ( RegistryValue < 0 )
    goto LABEL_19;
  v7 = (unsigned int *)P;
  if ( !PnpValidateRegistryString(P) )
  {
LABEL_3:
    RegistryValue = -1073741823;
    goto LABEL_20;
  }
  v8 = PiDevCfgResolveVariable(a1, (const WCHAR *)((char *)v7 + v7[2]), &v16);
  RegistryValue = v8;
  if ( v8 < 0 )
    goto LABEL_5;
  ExFreePoolWithTag(v7, 0);
  P = 0LL;
  v9 = *(_DWORD *)(v16 + 32);
  if ( v9 )
  {
    if ( v9 > 2 )
    {
      if ( v9 == 4 )
      {
        if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%u", **(unsigned int **)(v16 + 40)) < 0 )
          goto LABEL_16;
        v10 = pszDest;
LABEL_12:
        v11 = IopGetRegistryValue(a2, v10, 0, &P);
        RegistryValue = v11;
        if ( v11 != -1073741772 )
        {
          if ( v11 >= 0 )
          {
            v7 = (unsigned int *)P;
            if ( !PnpValidateRegistryString(P) )
              goto LABEL_3;
            v12 = (const WCHAR *)((char *)v7 + v7[2]);
            if ( v12 )
              goto LABEL_27;
            goto LABEL_16;
          }
LABEL_19:
          v7 = (unsigned int *)P;
          goto LABEL_20;
        }
        goto LABEL_16;
      }
      if ( v9 != 7 )
        goto LABEL_16;
    }
    v10 = *(wchar_t **)(v16 + 40);
    if ( !v10 )
      goto LABEL_16;
    goto LABEL_12;
  }
LABEL_16:
  v13 = IopGetRegistryValue(a2, L"Default", 0, &P);
  RegistryValue = v13;
  if ( v13 < 0 )
  {
    if ( v13 == -1073741772 )
      RegistryValue = -1073741823;
    goto LABEL_19;
  }
  v7 = (unsigned int *)P;
  if ( !PnpValidateRegistryString(P) )
    goto LABEL_3;
  v12 = (const WCHAR *)((char *)v7 + v7[2]);
LABEL_27:
  v8 = PiDevCfgResolveVariable(a1, v12, &v17);
  RegistryValue = v8;
  if ( v8 >= 0 )
  {
    RegistryValue = PiDevCfgCopyVariableData(a3, v17);
    goto LABEL_20;
  }
LABEL_5:
  if ( v8 == -1073741772 )
    goto LABEL_3;
LABEL_20:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)RegistryValue;
}
