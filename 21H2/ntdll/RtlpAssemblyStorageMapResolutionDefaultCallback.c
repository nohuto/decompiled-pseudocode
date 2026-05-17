/*
 * XREFs of RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180047690
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180073680 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180016BB0 (RtlGetNtSystemRoot.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlDoesFileExists_UEx @ 0x180046798 (RtlDoesFileExists_UEx.c)
 *     DbgPrintEx @ 0x180051450 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     NtOpenKey @ 0x18009D880 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x18009DC80 (NtEnumerateKey.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E01C0 (RtlpGetAssemblyStorageMapRootLocation.c)
 */

char __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  size_t v8; // r15
  wchar_t *Buffer; // rdx
  char *v10; // rbx
  __int64 v11; // rcx
  const WCHAR *NtSystemRoot; // rax
  size_t Length; // r14
  unsigned int v14; // ecx
  HANDLE v15; // r12
  int v16; // r15d
  int v17; // r14d
  int v18; // eax
  __int64 v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v23[4]; // [rsp+40h] [rbp-C0h] BYREF
  char *v24; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h]
  void *v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+78h] [rbp-88h]
  __int128 v30; // [rsp+80h] [rbp-80h]
  _BYTE v31[12]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v32; // [rsp+9Ch] [rbp-64h]
  char v33; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a1 - 1;
  if ( !v5 )
  {
    v26 = 48;
    v22 = 0LL;
    v27 = 0LL;
    v29 = 64;
    v28 = &unk_18011DB60;
    v30 = 0LL;
    v18 = NtOpenKey(&v22, 8LL, &v26);
    v17 = v18;
    if ( v18 >= 0 || v18 == -1073741772 || v18 == -1073741431 )
    {
      v7 = v22;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v7;
      return v7;
    }
    LOBYTE(v7) = DbgPrintEx(51LL, 0LL, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_18011DB60, v18);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_40;
  }
  v6 = (unsigned int)(v5 - 1);
  if ( (_DWORD)v6 )
  {
    LOBYTE(v7) = 2;
    if ( (_DWORD)v6 == 2 && *(_QWORD *)a2 )
      LOBYTE(v7) = NtClose(*(HANDLE *)a2);
    return v7;
  }
  if ( !*(_QWORD *)(a2 + 8) )
  {
    v7 = (unsigned __int64)NtCurrentPeb();
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 8LL) & 0x8000) != 0 )
    {
      v7 = (unsigned __int64)NtCurrentPeb();
      v8 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 32) + 96LL);
      if ( v8 + 16 <= 0xFFFE )
      {
        v7 = *(unsigned __int16 *)(a2 + 26);
        if ( v8 + 16 <= v7 )
        {
          Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
          if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
            Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
          v10 = *(char **)(a2 + 32);
          memmove(v10, Buffer, v8);
          *(_OWORD *)&v10[v8] = xmmword_18012E170;
          v11 = *(_QWORD *)(a2 + 32);
          *(_WORD *)(a2 + 24) = v8 + 14;
          LOBYTE(v7) = RtlDoesFileExists_UEx(v11, 1);
          if ( !(_BYTE)v7 )
            *(_WORD *)(a2 + 24) = 0;
        }
        else
        {
          *(_BYTE *)(a2 + 16) = 1;
          if ( a3 )
            *a3 = -1073741789;
        }
      }
      else
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741562;
      }
    }
    else
    {
      *(_WORD *)(a2 + 24) = 0;
    }
    return v7;
  }
  if ( *(_QWORD *)(a2 + 8) == 1LL )
  {
    NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot(v6, a2);
    RtlInitUnicodeString(&DestinationString, NtSystemRoot);
    Length = DestinationString.Length;
    v14 = *(unsigned __int16 *)(a2 + 26);
    *(_WORD *)(a2 + 24) = 0;
    LOBYTE(v7) = Length + 16;
    if ( (int)Length + 16 <= v14 )
    {
      memmove(*(void **)(a2 + 32), DestinationString.Buffer, Length);
      v7 = *(_QWORD *)(a2 + 32);
      *(_OWORD *)(Length + v7) = *(_OWORD *)L"\\WinSxS\\";
      *(_WORD *)(a2 + 24) = Length + 16;
    }
    else
    {
      *(_BYTE *)(a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741789;
    }
    return v7;
  }
  LOBYTE(v7) = -1;
  if ( *(_QWORD *)(a2 + 8) > 0xFFFFFFFFuLL )
    goto LABEL_35;
  v15 = *(HANDLE *)a2;
  v16 = *(_DWORD *)(a2 + 8);
  v21 = 0;
  if ( !v15 )
    goto LABEL_35;
  LODWORD(v7) = ((__int64 (__fastcall *)(HANDLE, _QWORD, _QWORD, _BYTE *, int, int *))NtEnumerateKey)(
                  v15,
                  (unsigned int)(v16 - 2),
                  0LL,
                  v31,
                  544,
                  &v21);
  v17 = v7;
  if ( (v7 & 0x80000000) != 0LL )
  {
    if ( (_DWORD)v7 != -2147483622 )
    {
      LOBYTE(v7) = DbgPrintEx(
                     51LL,
                     0LL,
                     "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                     v16 - 2,
                     v7);
LABEL_29:
      *(_BYTE *)(a2 + 16) = 1;
LABEL_40:
      if ( a3 )
        *a3 = v17;
      return v7;
    }
LABEL_35:
    *(_BYTE *)(a2 + 17) = 1;
    return v7;
  }
  LOBYTE(v7) = v32;
  if ( v32 <= 0xFFFE )
  {
    v23[0] = v32;
    v23[1] = v32;
    v24 = &v33;
    LODWORD(v7) = RtlpGetAssemblyStorageMapRootLocation(v15, v23, a2 + 24);
    v17 = v7;
    if ( (v7 & 0x80000000) == 0LL )
      return v7;
    LODWORD(v20) = v7;
    LOBYTE(v7) = DbgPrintEx(
                   51LL,
                   0LL,
                   "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                   v23,
                   v20);
    goto LABEL_29;
  }
  *(_BYTE *)(a2 + 16) = 1;
  if ( a3 )
    *a3 = -1073741562;
  return v7;
}
