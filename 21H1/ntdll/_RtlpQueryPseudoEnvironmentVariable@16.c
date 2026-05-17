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
  int v5; // edi
  int v6; // ecx
  NTSTATUS result; // eax
  wchar_t *v8; // ecx
  unsigned int v9; // eax
  int Heap; // eax
  int v11; // edx
  unsigned int i; // ecx
  _UNICODE_STRING *p_ImagePathName; // esi
  unsigned int Length; // eax
  void *v15; // edx
  int v16; // esi
  int v17; // [esp-4h] [ebp-A4h]
  _CURDIR *p_CurrentDirectory; // [esp+10h] [ebp-90h]
  int v19[3]; // [esp+14h] [ebp-8Ch] BYREF
  void *v20; // [esp+20h] [ebp-80h]
  unsigned int *v21; // [esp+24h] [ebp-7Ch]
  int v22; // [esp+28h] [ebp-78h] BYREF
  unsigned __int16 v23; // [esp+2Ch] [ebp-74h] BYREF
  int v24; // [esp+30h] [ebp-70h] BYREF
  int v25; // [esp+34h] [ebp-6Ch]
  char v26; // [esp+3Bh] [ebp-65h]
  int CharInUnicodeString; // [esp+3Ch] [ebp-64h]
  char SystemInformation[16]; // [esp+40h] [ebp-60h] BYREF
  int v29; // [esp+50h] [ebp-50h]
  wchar_t Buffer[18]; // [esp+64h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+88h] [ebp-18h]

  v20 = a2;
  v4 = a4;
  v21 = a4;
  v26 = 0;
  CharInUnicodeString = 0;
  v5 = 0;
  v25 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( !a1 )
  {
    p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
    RtlEnterCriticalSection((int)NtCurrentPeb()->FastPebLock);
    v26 = 1;
    v8 = p_CurrentDirectory->DosPath.Buffer;
    Length = p_CurrentDirectory->DosPath.Length;
    v5 = v25;
LABEL_21:
    v9 = Length >> 1;
    goto LABEL_22;
  }
  v6 = a1 - 1;
  if ( !v6 )
  {
    p_ImagePathName = &NtCurrentPeb()->ProcessParameters->ImagePathName;
    CharInUnicodeString = RtlFindCharInUnicodeString(
                            1,
                            (__int16 *)p_ImagePathName,
                            (int)&RtlDosPathSeperatorsString,
                            &v23);
    v8 = p_ImagePathName->Buffer;
    v5 = v25;
    if ( CharInUnicodeString >= 0 )
    {
      v9 = (v23 >> 1) + 1;
      v4 = v21;
      goto LABEL_22;
    }
    Length = p_ImagePathName->Length;
    v4 = v21;
    goto LABEL_21;
  }
  if ( v6 != 1 )
  {
    result = NtQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0);
    CharInUnicodeString = result;
    if ( result < 0 )
      goto LABEL_29;
    if ( v29 == 1 )
    {
      v8 = L"Legacy";
      v17 = 6;
    }
    else
    {
      v8 = L"UEFI";
      v17 = 4;
    }
    v9 = v17;
LABEL_22:
    v15 = v20;
    if ( v20 )
    {
      if ( v9 < a3 )
      {
        *v4 = v9;
        v16 = 2 * v9;
        memcpy(v15, v8, 2 * v9);
        *(_WORD *)((char *)v20 + v16) = 0;
        result = 0;
        goto LABEL_28;
      }
      if ( a3 )
        *(_WORD *)v20 = 0;
    }
    *v4 = v9 + 1;
    result = -1073741789;
    goto LABEL_28;
  }
  v22 = 4;
  v24 = 0;
  ZwQuerySystemInformationEx(107, (int)&v22, 4, 0, 0, (int)&v24);
  CharInUnicodeString = 0;
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v24);
  v5 = Heap;
  v25 = Heap;
  if ( !Heap )
  {
    result = -1073741801;
LABEL_28:
    CharInUnicodeString = result;
    goto LABEL_29;
  }
  result = ZwQuerySystemInformationEx(107, (int)&v22, 4, Heap, v24, (int)&v24);
  CharInUnicodeString = result;
  if ( result >= 0 )
  {
    v11 = 0;
    for ( i = 0; ; ++i )
    {
      v19[2] = v11;
      v19[1] = i;
      if ( i >= *(unsigned __int16 *)(v5 + 10) )
        break;
      v11 += *(unsigned __int8 *)(44 * i + v5 + 33);
    }
    result = RtlStringCbPrintfExW(Buffer, 0x20u, v19, 0, 0, (wchar_t *)L"%u", v11);
    CharInUnicodeString = result;
    if ( result >= 0 )
    {
      v8 = Buffer;
      v9 = (v19[0] - (int)Buffer) >> 1;
      goto LABEL_22;
    }
  }
LABEL_29:
  ms_exc.registration.TryLevel = -2;
  if ( v26 )
  {
    RtlLeaveCriticalSection((int)NtCurrentPeb()->FastPebLock);
    result = CharInUnicodeString;
    v5 = v25;
  }
  if ( v5 )
  {
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v5);
    return CharInUnicodeString;
  }
  return result;
}
