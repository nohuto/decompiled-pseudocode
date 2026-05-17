/*
 * XREFs of RtlpQueryPseudoEnvironmentVariable @ 0x18008904C
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x1800157E0 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     RtlFindCharInUnicodeString @ 0x18001D390 (RtlFindCharInUnicodeString.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlStringCbPrintfExW @ 0x1800697EC (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x18009D4D0 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x18009FA20 (NtQuerySystemInformationEx.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

int __fastcall RtlpQueryPseudoEnvironmentVariable(int a1, _WORD *a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  __int64 Heap; // rdi
  int v8; // ecx
  const wchar_t *Buffer; // rdx
  __int64 v10; // r8
  int result; // eax
  int v12; // r8d
  unsigned int i; // edx
  unsigned __int64 v14; // rbx
  size_t v15; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  int CharInUnicodeString; // eax
  unsigned __int64 Length; // rbx
  char v19; // [rsp+40h] [rbp-A8h]
  int v20; // [rsp+44h] [rbp-A4h]
  unsigned int v21; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-98h]
  _WORD v23[2]; // [rsp+58h] [rbp-90h] BYREF
  int v24; // [rsp+5Ch] [rbp-8Ch] BYREF
  int v25; // [rsp+60h] [rbp-88h]
  unsigned int v26; // [rsp+64h] [rbp-84h]
  __int64 v27; // [rsp+68h] [rbp-80h] BYREF
  _CURDIR *p_CurrentDirectory; // [rsp+70h] [rbp-78h]
  _BYTE SystemInformation[16]; // [rsp+78h] [rbp-70h] BYREF
  int v30; // [rsp+88h] [rbp-60h]
  _WORD Src[16]; // [rsp+98h] [rbp-50h] BYREF

  v19 = 0;
  Heap = 0LL;
  v22 = 0LL;
  if ( !a1 )
  {
    p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    v19 = 1;
    Buffer = p_CurrentDirectory->DosPath.Buffer;
    Length = p_CurrentDirectory->DosPath.Length;
    Heap = v22;
LABEL_24:
    v14 = Length >> 1;
    goto LABEL_11;
  }
  v8 = a1 - 1;
  if ( !v8 )
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    CharInUnicodeString = RtlFindCharInUnicodeString(
                            1,
                            (__int16 *)&ProcessParameters->ImagePathName,
                            (__int64)&RtlDosPathSeperatorsString,
                            v23);
    Buffer = ProcessParameters->ImagePathName.Buffer;
    Heap = v22;
    if ( CharInUnicodeString >= 0 )
    {
      v14 = (v23[0] >> 1) + 1;
      goto LABEL_11;
    }
    Length = ProcessParameters->ImagePathName.Length;
    goto LABEL_24;
  }
  if ( v8 != 1 )
  {
    result = NtQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL);
    v20 = result;
    if ( result < 0 )
      goto LABEL_28;
    if ( v30 == 1 )
    {
      Buffer = L"Legacy";
      v14 = 6LL;
    }
    else
    {
      Buffer = L"UEFI";
      v14 = 4LL;
    }
LABEL_11:
    if ( a2 )
    {
      if ( v14 < a3 )
      {
        *a4 = v14;
        v15 = v14;
        memmove(a2, Buffer, v15 * 2);
        a2[v15] = 0;
        result = 0;
LABEL_14:
        v20 = result;
        goto LABEL_28;
      }
      if ( a3 )
        *a2 = 0;
    }
    *a4 = v14 + 1;
    result = -1073741789;
    goto LABEL_14;
  }
  v24 = 4;
  v21 = 0;
  NtQuerySystemInformationEx(107LL, &v24, 4LL, 0LL, 0, &v21);
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v21);
  v22 = Heap;
  if ( !Heap )
  {
    result = -1073741801;
    goto LABEL_14;
  }
  result = NtQuerySystemInformationEx(107LL, &v24, 4LL, Heap, v21, &v21);
  v20 = result;
  if ( result >= 0 )
  {
    v12 = 0;
    v25 = 0;
    for ( i = 0; ; ++i )
    {
      v26 = i;
      if ( i >= *(unsigned __int16 *)(Heap + 10) )
        break;
      v12 += *(unsigned __int8 *)(Heap + 48LL * i + 33);
      v25 = v12;
    }
    result = RtlStringCbPrintfExW(Src, 0x20uLL, &v27, 0LL, 0, L"%u", v12);
    v20 = result;
    if ( result >= 0 )
    {
      Buffer = Src;
      v14 = (v27 - (__int64)Src) >> 1;
      goto LABEL_11;
    }
  }
LABEL_28:
  if ( v19 )
  {
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock, (__int64)Buffer, v10);
    result = v20;
    Heap = v22;
  }
  if ( Heap )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v22);
    return v20;
  }
  return result;
}
