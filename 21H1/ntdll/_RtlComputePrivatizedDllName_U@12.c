/*
 * XREFs of _RtlComputePrivatizedDllName_U@12 @ 0x4B334AB0
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x4B33D7A3 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __cdecl RtlComputePrivatizedDllName_U(
        PUNICODE_STRING DllName,
        PUNICODE_STRING RealName,
        PUNICODE_STRING LocalName)
{
  wchar_t *v3; // ebx
  unsigned __int16 Length; // si
  wchar_t *Buffer; // ecx
  wchar_t *v6; // eax
  int v7; // esi
  wchar_t *v8; // edi
  unsigned int v9; // ebx
  wchar_t *v10; // ecx
  wchar_t *v11; // eax
  unsigned int v12; // eax
  unsigned int v14; // eax
  wchar_t *StringRoutine; // eax
  wchar_t *v16; // esi
  wchar_t *v17; // esi
  unsigned int v18; // edx
  char *v19; // eax
  unsigned int v20; // eax
  wchar_t *v21; // eax
  wchar_t *v22; // esi
  char *v23; // ebx
  char *v24; // ebx
  char *v25; // eax
  size_t v26; // [esp-10h] [ebp-44h]
  size_t v27; // [esp-4h] [ebp-38h]
  size_t v28; // [esp-4h] [ebp-38h]
  int v29; // [esp+Ch] [ebp-28h]
  wchar_t *v30; // [esp+10h] [ebp-24h]
  int v31; // [esp+14h] [ebp-20h]
  wchar_t *v32; // [esp+14h] [ebp-20h]
  wchar_t *v33; // [esp+18h] [ebp-1Ch]
  unsigned __int16 v34; // [esp+18h] [ebp-1Ch]
  unsigned int Size; // [esp+1Ch] [ebp-18h]
  wchar_t *Size_4; // [esp+20h] [ebp-14h]
  unsigned int i; // [esp+24h] [ebp-10h]
  wchar_t *v38; // [esp+28h] [ebp-Ch]
  unsigned int v39; // [esp+30h] [ebp-4h]

  v3 = 0;
  v30 = 0;
  Length = DllName->Length;
  Buffer = DllName->Buffer;
  v38 = Buffer;
  Size_4 = 0;
  if ( !DllName->Length )
    goto LABEL_12;
  v6 = &Buffer[(Length >> 1) - 1];
  if ( v6 <= Buffer )
    goto LABEL_12;
  while ( 1 )
  {
    v7 = *v6;
    if ( v7 == 46 )
    {
      if ( !v3 )
      {
        v3 = v6;
        Size_4 = v6;
      }
      goto LABEL_8;
    }
    if ( (_WORD)v7 == 92 || (_WORD)v7 == 47 )
      break;
LABEL_8:
    if ( --v6 <= Buffer )
      goto LABEL_11;
  }
  v38 = v6 + 1;
LABEL_11:
  Length = DllName->Length;
LABEL_12:
  i = 0;
  v29 = 0;
  v31 = v3 != 0 ? 0 : 8;
  v39 = DllName->Length - (((char *)v38 - (char *)Buffer) & 0xFFFFFFFE);
  v8 = LdrpOriginalAppPackagesPath.Buffer;
  if ( !LdrpOriginalAppPackagesPath.Buffer )
  {
    v9 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    v8 = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    v33 = v8;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
    {
      v8 = (wchar_t *)((char *)v8 + (unsigned int)NtCurrentPeb()->ProcessParameters);
      v33 = v8;
    }
    v10 = &v8[(v9 >> 1) - 1];
    v11 = v8;
    while ( v10 > v8 )
    {
      if ( *v10 == 92 || *v10 == 47 )
      {
        v11 = v10 + 1;
        break;
      }
      --v10;
    }
    v12 = ((char *)v11 - (char *)v8) & 0xFFFFFFFE;
    if ( v12 <= 0xFFFE )
    {
      Size = (unsigned __int16)v12;
      if ( Length <= 0xFFFCu )
      {
        v14 = v39 + 2 + v31 + (unsigned __int16)v12;
        if ( v14 <= 0xFFFE )
        {
          v29 = (unsigned __int16)v14;
          StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v14);
          v16 = StringRoutine;
          v30 = StringRoutine;
          if ( StringRoutine )
          {
            LODWORD(v27) = Size;
            memcpy(StringRoutine, v8, v27);
            LODWORD(v26) = v39;
            v17 = &v16[Size >> 1];
            memcpy(v17, v38, v26);
            v18 = v39;
            v19 = (char *)&v17[v39 >> 1];
            if ( Size_4 )
            {
              *(_WORD *)v19 = 0;
            }
            else
            {
              *(_DWORD *)v19 = *(_DWORD *)L".DLL";
              *((_DWORD *)v19 + 1) = *(_DWORD *)L"LL";
              *((_WORD *)v19 + 4) = aDll[4];
              v8 = v33;
            }
            goto LABEL_34;
          }
          return -1073741801;
        }
      }
    }
    return -1073741562;
  }
  v9 = 0;
  for ( i = 92; v9 < LdrpOriginalAppPackagesPath.Length; v9 += 2 )
  {
    if ( LdrpOriginalAppPackagesPath.Buffer[v9 >> 1] == 59 )
      break;
  }
  v18 = DllName->Length - (((char *)v38 - (char *)Buffer) & 0xFFFFFFFE);
LABEL_34:
  v20 = v18 + 2 + i + v9 + v31 + 14;
  v34 = v18 + 2 + i + v9 + v31 + 14;
  if ( v20 > 0xFFFE )
    return -1073741562;
  v21 = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v20);
  v22 = v21;
  v32 = v21;
  if ( !v21 )
    return -1073741801;
  LODWORD(v27) = v9;
  memcpy(v21, v8, v27);
  v23 = (char *)&v22[v9 >> 1];
  if ( i )
  {
    LODWORD(v28) = i;
    memcpy(v23, L"\\microsoft.system.package.metadata\\Application", v28);
    v23 += 2 * (i >> 1);
  }
  *(_DWORD *)v23 = *(_DWORD *)L".Local";
  *((_DWORD *)v23 + 1) = *(_DWORD *)L"ocal";
  *((_DWORD *)v23 + 2) = *(_DWORD *)L"al";
  LODWORD(v28) = v39;
  *((_WORD *)v23 + 6) = 92;
  v24 = v23 + 14;
  memcpy(v24, v38, v28);
  v25 = &v24[2 * (v39 >> 1)];
  if ( Size_4 )
  {
    *(_WORD *)v25 = 0;
  }
  else
  {
    *(_DWORD *)v25 = *(_DWORD *)L".DLL";
    *((_DWORD *)v25 + 1) = *(_DWORD *)L"LL";
    *((_WORD *)v25 + 4) = aDll[4];
  }
  RealName->Buffer = v30;
  RealName->MaximumLength = v29;
  RealName->Length = v29;
  if ( v29 )
    RealName->Length = v29 - 2;
  LocalName->Buffer = v32;
  LocalName->MaximumLength = v34;
  LocalName->Length = v34 - 2;
  return 0;
}
