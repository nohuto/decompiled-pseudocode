/*
 * XREFs of RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180081D50
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180072650 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180016BB0 (RtlGetNtSystemRoot.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlDoesFileExists_UEx @ 0x1800467D8 (RtlDoesFileExists_UEx.c)
 *     DbgPrintEx @ 0x180050340 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenKey @ 0x18009D2F0 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x18009D6F0 (NtEnumerateKey.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E0410 (RtlpGetAssemblyStorageMapRootLocation.c)
 */

char __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  __int64 v6; // rcx
  const WCHAR *NtSystemRoot; // rax
  __int64 Length; // r14
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  size_t v11; // r15
  wchar_t *Buffer; // rdx
  char *v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // r14d
  HANDLE v17; // r12
  int v18; // r15d
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
    v28 = &unk_18011D820;
    v30 = 0LL;
    v15 = NtOpenKey(&v22, 8LL, &v26);
    v16 = v15;
    if ( v15 >= 0 || v15 == -1073741772 || v15 == -1073741431 )
    {
      v10 = v22;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v10;
      return v10;
    }
    LOBYTE(v10) = DbgPrintEx(51, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_18011D820, v15);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_40;
  }
  v6 = (unsigned int)(v5 - 1);
  if ( (_DWORD)v6 )
  {
    LOBYTE(v10) = 2;
    if ( (_DWORD)v6 == 2 && *(_QWORD *)a2 )
      LOBYTE(v10) = NtClose(*(HANDLE *)a2);
  }
  else if ( *(_QWORD *)(a2 + 8) )
  {
    if ( *(_QWORD *)(a2 + 8) == 1LL )
    {
      NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot(v6, a2);
      RtlInitUnicodeString(&DestinationString, NtSystemRoot);
      Length = DestinationString.Length;
      v9 = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 24) = 0;
      LOBYTE(v10) = Length + 16;
      if ( (int)Length + 16 > v9 )
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741789;
      }
      else
      {
        memmove(*(void **)(a2 + 32), DestinationString.Buffer, (unsigned int)Length);
        v10 = *(_QWORD *)(a2 + 32);
        *(_OWORD *)(Length + v10) = *(_OWORD *)L"\\WinSxS\\";
        *(_WORD *)(a2 + 24) = Length + 16;
      }
      return v10;
    }
    LOBYTE(v10) = -1;
    if ( *(_QWORD *)(a2 + 8) > 0xFFFFFFFFuLL )
      goto LABEL_37;
    v17 = *(HANDLE *)a2;
    v18 = *(_DWORD *)(a2 + 8);
    v21 = 0;
    if ( !v17 )
      goto LABEL_37;
    LODWORD(v10) = NtEnumerateKey(v17, (unsigned int)(v18 - 2), 0LL, v31, 544, &v21);
    v16 = v10;
    if ( (v10 & 0x80000000) != 0LL )
    {
      if ( (_DWORD)v10 != -2147483622 )
      {
        LOBYTE(v10) = DbgPrintEx(
                        51,
                        0,
                        "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                        v18 - 2,
                        v10);
LABEL_31:
        *(_BYTE *)(a2 + 16) = 1;
LABEL_40:
        if ( a3 )
          *a3 = v16;
        return v10;
      }
LABEL_37:
      *(_BYTE *)(a2 + 17) = 1;
      return v10;
    }
    LOBYTE(v10) = v32;
    if ( v32 <= 0xFFFE )
    {
      v23[0] = v32;
      v23[1] = v32;
      v24 = &v33;
      LODWORD(v10) = RtlpGetAssemblyStorageMapRootLocation(v17, v23, a2 + 24);
      v16 = v10;
      if ( (v10 & 0x80000000) == 0LL )
        return v10;
      LODWORD(v20) = v10;
      LOBYTE(v10) = DbgPrintEx(
                      51,
                      0,
                      "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                      v23,
                      v20);
      goto LABEL_31;
    }
    *(_BYTE *)(a2 + 16) = 1;
    if ( a3 )
      *a3 = -1073741562;
  }
  else
  {
    v10 = (unsigned __int64)NtCurrentPeb();
    v11 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 32) + 96LL);
    if ( v11 + 16 > 0xFFFE )
    {
      *(_BYTE *)(a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741562;
    }
    else
    {
      v10 = *(unsigned __int16 *)(a2 + 26);
      if ( v11 + 16 > v10 )
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741789;
      }
      else
      {
        Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
        if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
          Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
        v13 = *(char **)(a2 + 32);
        memmove(v13, Buffer, v11);
        *(_OWORD *)&v13[v11] = xmmword_180128150;
        v14 = *(_QWORD *)(a2 + 32);
        *(_WORD *)(a2 + 24) = v11 + 14;
        LOBYTE(v10) = RtlDoesFileExists_UEx(v14, 1);
        if ( !(_BYTE)v10 )
          *(_WORD *)(a2 + 24) = 0;
      }
    }
  }
  return v10;
}
