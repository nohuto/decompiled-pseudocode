/*
 * XREFs of _RtlComputePrivatizedDllName_U@12 @ 0x4B334AB0
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x4B33D7A3 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlComputePrivatizedDllName_U(unsigned __int16 *a1, int a2, int a3)
{
  unsigned __int16 *v3; // ebx
  unsigned __int16 v4; // si
  unsigned __int16 *v5; // ecx
  unsigned __int16 *v6; // eax
  int v7; // esi
  wchar_t *Buffer; // edi
  size_t Length; // ebx
  wchar_t *v10; // ecx
  wchar_t *v11; // eax
  unsigned int v12; // eax
  unsigned int v14; // eax
  char *StringRoutine; // eax
  char *v16; // esi
  char *v17; // esi
  unsigned int v18; // edx
  char *v19; // eax
  unsigned int v20; // eax
  char *v21; // eax
  char *v22; // esi
  char *v23; // ebx
  char *v24; // ebx
  char *v25; // eax
  int v26; // [esp+Ch] [ebp-28h]
  char *v27; // [esp+10h] [ebp-24h]
  int v28; // [esp+14h] [ebp-20h]
  char *v29; // [esp+14h] [ebp-20h]
  wchar_t *v30; // [esp+18h] [ebp-1Ch]
  __int16 v31; // [esp+18h] [ebp-1Ch]
  size_t Size; // [esp+1Ch] [ebp-18h]
  unsigned __int16 *v33; // [esp+20h] [ebp-14h]
  size_t i; // [esp+24h] [ebp-10h]
  unsigned __int16 *Src; // [esp+28h] [ebp-Ch]
  unsigned int v36; // [esp+30h] [ebp-4h]

  v3 = 0;
  v27 = 0;
  v4 = *a1;
  v5 = (unsigned __int16 *)*((_DWORD *)a1 + 1);
  Src = v5;
  v33 = 0;
  if ( !*a1 )
    goto LABEL_12;
  v6 = &v5[(v4 >> 1) - 1];
  if ( v6 <= v5 )
    goto LABEL_12;
  while ( 1 )
  {
    v7 = *v6;
    if ( v7 == 46 )
    {
      if ( !v3 )
      {
        v3 = v6;
        v33 = v6;
      }
      goto LABEL_8;
    }
    if ( (_WORD)v7 == 92 || (_WORD)v7 == 47 )
      break;
LABEL_8:
    if ( --v6 <= v5 )
      goto LABEL_11;
  }
  Src = v6 + 1;
LABEL_11:
  v4 = *a1;
LABEL_12:
  i = 0;
  v26 = 0;
  v28 = v3 != 0 ? 0 : 8;
  v36 = *a1 - (((char *)Src - (char *)v5) & 0xFFFFFFFE);
  Buffer = LdrpOriginalAppPackagesPath.Buffer;
  if ( !LdrpOriginalAppPackagesPath.Buffer )
  {
    Length = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    v30 = Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
    {
      Buffer = (wchar_t *)((char *)Buffer + (unsigned int)NtCurrentPeb()->ProcessParameters);
      v30 = Buffer;
    }
    v10 = &Buffer[(Length >> 1) - 1];
    v11 = Buffer;
    while ( v10 > Buffer )
    {
      if ( *v10 == 92 || *v10 == 47 )
      {
        v11 = v10 + 1;
        break;
      }
      --v10;
    }
    v12 = ((char *)v11 - (char *)Buffer) & 0xFFFFFFFE;
    if ( v12 <= 0xFFFE )
    {
      Size = (unsigned __int16)v12;
      if ( v4 <= 0xFFFCu )
      {
        v14 = v36 + 2 + v28 + (unsigned __int16)v12;
        if ( v14 <= 0xFFFE )
        {
          v26 = (unsigned __int16)v14;
          StringRoutine = (char *)NtdllpAllocateStringRoutine((unsigned __int16)v14);
          v16 = StringRoutine;
          v27 = StringRoutine;
          if ( StringRoutine )
          {
            memcpy(StringRoutine, Buffer, Size);
            v17 = &v16[2 * (Size >> 1)];
            memcpy(v17, Src, v36);
            v18 = v36;
            v19 = &v17[2 * (v36 >> 1)];
            if ( v33 )
            {
              *(_WORD *)v19 = 0;
            }
            else
            {
              *(_DWORD *)v19 = *(_DWORD *)L".DLL";
              *((_DWORD *)v19 + 1) = *(_DWORD *)L"LL";
              *((_WORD *)v19 + 4) = aDll[4];
              Buffer = v30;
            }
            goto LABEL_34;
          }
          return -1073741801;
        }
      }
    }
    return -1073741562;
  }
  Length = 0;
  for ( i = 92; Length < LdrpOriginalAppPackagesPath.Length; Length += 2 )
  {
    if ( LdrpOriginalAppPackagesPath.Buffer[Length >> 1] == 59 )
      break;
  }
  v18 = *a1 - (((char *)Src - (char *)v5) & 0xFFFFFFFE);
LABEL_34:
  v20 = v18 + 2 + i + Length + v28 + 14;
  v31 = v18 + 2 + i + Length + v28 + 14;
  if ( v20 > 0xFFFE )
    return -1073741562;
  v21 = (char *)NtdllpAllocateStringRoutine((unsigned __int16)v20);
  v22 = v21;
  v29 = v21;
  if ( !v21 )
    return -1073741801;
  memcpy(v21, Buffer, Length);
  v23 = &v22[2 * (Length >> 1)];
  if ( i )
  {
    memcpy(v23, L"\\microsoft.system.package.metadata\\Application", i);
    v23 += 2 * (i >> 1);
  }
  *(_DWORD *)v23 = *(_DWORD *)L".Local";
  *((_DWORD *)v23 + 1) = *(_DWORD *)L"ocal";
  *((_DWORD *)v23 + 2) = *(_DWORD *)L"al";
  *((_WORD *)v23 + 6) = 92;
  v24 = v23 + 14;
  memcpy(v24, Src, v36);
  v25 = &v24[2 * (v36 >> 1)];
  if ( v33 )
  {
    *(_WORD *)v25 = 0;
  }
  else
  {
    *(_DWORD *)v25 = *(_DWORD *)L".DLL";
    *((_DWORD *)v25 + 1) = *(_DWORD *)L"LL";
    *((_WORD *)v25 + 4) = aDll[4];
  }
  *(_DWORD *)(a2 + 4) = v27;
  *(_WORD *)(a2 + 2) = v26;
  *(_WORD *)a2 = v26;
  if ( v26 )
    *(_WORD *)a2 = v26 - 2;
  *(_DWORD *)(a3 + 4) = v29;
  *(_WORD *)(a3 + 2) = v31;
  *(_WORD *)a3 = v31 - 2;
  return 0;
}
