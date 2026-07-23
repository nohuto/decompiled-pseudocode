/*
 * XREFs of _RtlpQueryPseudoEnvironmentVariable@16 @ 0x4B32E262
 * Callers:
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlFindCharInUnicodeString@16 @ 0x4B2CAA20 (_RtlFindCharInUnicodeString@16.c)
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 *     _ZwQuerySystemInformationEx@24 @ 0x4B2F3F90 (_ZwQuerySystemInformationEx@24.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlStringCbPrintfExW @ 0x4B32DF38 (_RtlStringCbPrintfExW.c)
 *     _RtlpQueryPseudoEnvironmentVariable@16 @ 0x4B32E262 (_RtlpQueryPseudoEnvironmentVariable@16.c)
 */

NTSTATUS __fastcall RtlpQueryPseudoEnvironmentVariable(int a1, void *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4; // esi
  unsigned __int16 *v5; // edi
  int v6; // ecx
  NTSTATUS result; // eax
  wchar_t *v8; // ecx
  unsigned int v9; // eax
  unsigned __int16 *Heap; // eax
  int v11; // edx
  unsigned int i; // ecx
  _UNICODE_STRING *p_ImagePathName; // esi
  unsigned int Length; // eax
  void *v15; // edx
  int v16; // esi
  size_t v17; // [esp-4h] [ebp-A4h]
  int v18; // [esp-4h] [ebp-A4h]
  _CURDIR *p_CurrentDirectory; // [esp+10h] [ebp-90h]
  int v20[3]; // [esp+14h] [ebp-8Ch] BYREF
  void *v21; // [esp+20h] [ebp-80h]
  unsigned int *v22; // [esp+24h] [ebp-7Ch]
  int InputBuffer; // [esp+28h] [ebp-78h] BYREF
  USHORT NonInclusivePrefixLength; // [esp+2Ch] [ebp-74h] BYREF
  ULONG ReturnLength; // [esp+30h] [ebp-70h] BYREF
  unsigned __int16 *v26; // [esp+34h] [ebp-6Ch]
  char v27; // [esp+3Bh] [ebp-65h]
  NTSTATUS CharInUnicodeString; // [esp+3Ch] [ebp-64h]
  char SystemInformation[16]; // [esp+40h] [ebp-60h] BYREF
  int v30; // [esp+50h] [ebp-50h]
  wchar_t Buffer[18]; // [esp+64h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+88h] [ebp-18h]

  v21 = a2;
  v4 = a4;
  v22 = a4;
  v27 = 0;
  CharInUnicodeString = 0;
  v5 = 0;
  v26 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( !a1 )
  {
    p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v27 = 1;
    v8 = p_CurrentDirectory->DosPath.Buffer;
    Length = p_CurrentDirectory->DosPath.Length;
    v5 = v26;
LABEL_21:
    v9 = Length >> 1;
    goto LABEL_22;
  }
  v6 = a1 - 1;
  if ( !v6 )
  {
    p_ImagePathName = &NtCurrentPeb()->ProcessParameters->ImagePathName;
    CharInUnicodeString = RtlFindCharInUnicodeString(
                            1u,
                            p_ImagePathName,
                            (PUNICODE_STRING)&RtlDosPathSeperatorsString,
                            &NonInclusivePrefixLength);
    v8 = p_ImagePathName->Buffer;
    v5 = v26;
    if ( CharInUnicodeString >= 0 )
    {
      v9 = (NonInclusivePrefixLength >> 1) + 1;
      v4 = v22;
      goto LABEL_22;
    }
    Length = p_ImagePathName->Length;
    v4 = v22;
    goto LABEL_21;
  }
  if ( v6 != 1 )
  {
    result = NtQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0);
    CharInUnicodeString = result;
    if ( result < 0 )
      goto LABEL_29;
    if ( v30 == 1 )
    {
      v8 = L"Legacy";
      v18 = 6;
    }
    else
    {
      v8 = L"UEFI";
      v18 = 4;
    }
    v9 = v18;
LABEL_22:
    v15 = v21;
    if ( v21 )
    {
      if ( v9 < a3 )
      {
        *v4 = v9;
        v16 = 2 * v9;
        LODWORD(v17) = 2 * v9;
        memcpy(v15, v8, v17);
        *(_WORD *)((char *)v21 + v16) = 0;
        result = 0;
        goto LABEL_28;
      }
      if ( a3 )
        *(_WORD *)v21 = 0;
    }
    *v4 = v9 + 1;
    result = -1073741789;
    goto LABEL_28;
  }
  InputBuffer = 4;
  ReturnLength = 0;
  ZwQuerySystemInformationEx(SystemLogicalProcessorAndGroupInformation, &InputBuffer, 4u, 0, 0, &ReturnLength);
  CharInUnicodeString = 0;
  LODWORD(v17) = ReturnLength;
  Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v17);
  v5 = Heap;
  v26 = Heap;
  if ( !Heap )
  {
    result = -1073741801;
LABEL_28:
    CharInUnicodeString = result;
    goto LABEL_29;
  }
  result = ZwQuerySystemInformationEx(
             SystemLogicalProcessorAndGroupInformation,
             &InputBuffer,
             4u,
             Heap,
             ReturnLength,
             &ReturnLength);
  CharInUnicodeString = result;
  if ( result >= 0 )
  {
    v11 = 0;
    for ( i = 0; ; ++i )
    {
      v20[2] = v11;
      v20[1] = i;
      if ( i >= v5[5] )
        break;
      v11 += HIBYTE(v5[22 * i + 16]);
    }
    result = RtlStringCbPrintfExW(Buffer, 0x20u, v20, 0, 0, (int *)L"%u", v11);
    CharInUnicodeString = result;
    if ( result >= 0 )
    {
      v8 = Buffer;
      v9 = (v20[0] - (int)Buffer) >> 1;
      goto LABEL_22;
    }
  }
LABEL_29:
  ms_exc.registration.TryLevel = -2;
  if ( v27 )
  {
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    result = CharInUnicodeString;
    v5 = v26;
  }
  if ( v5 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    return CharInUnicodeString;
  }
  return result;
}
