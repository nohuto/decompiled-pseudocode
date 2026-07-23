/*
 * XREFs of _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80
 * Callers:
 *     _RtlQueryApplicationKeyOption@32 @ 0x4B2A6C1D (_RtlQueryApplicationKeyOption@32.c)
 *     _LdrpMinimalMapModule@8 @ 0x4B2D110F (_LdrpMinimalMapModule@8.c)
 *     _LdrpQueryDllExecuteOptions@8 @ 0x4B2E76BD (_LdrpQueryDllExecuteOptions@8.c)
 *     _RtlQueryImageFileExecutionOptions@28 @ 0x4B2E9700 (_RtlQueryImageFileExecutionOptions@28.c)
 *     _LdrpInitializeApplicationVerifierPackage@24 @ 0x4B331CC8 (_LdrpInitializeApplicationVerifierPackage@24.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _LdrpQueryAndUpdateVerifierLaunchCounter@8 @ 0x4B333771 (_LdrpQueryAndUpdateVerifierLaunchCounter@8.c)
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 *     _WerpGlobalFlagsForProcess@4 @ 0x4B33B104 (_WerpGlobalFlagsForProcess@4.c)
 *     _RtlpQueryEafPlusModuleList@8 @ 0x4B342700 (_RtlpQueryEafPlusModuleList@8.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlUnicodeStringToInteger@12 @ 0x4B2E07A0 (_RtlUnicodeStringToInteger@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __stdcall RtlQueryImageFileKeyOption(
        HANDLE KeyHandle,
        PCWSTR SourceString,
        int a3,
        PULONG Value,
        unsigned int a5,
        ULONG *a6)
{
  NTSTATUS result; // eax
  _BYTE *v7; // edi
  NTSTATUS v8; // esi
  ULONG v9; // esi
  int v10; // edx
  unsigned int v11; // ecx
  void *ProcessHeap; // ecx
  PVOID Heap; // eax
  NTSTATUS v14; // eax
  int v15; // eax
  ULONG v16; // eax
  size_t v17; // [esp-4h] [ebp-434h]
  ULONG ResultLength; // [esp+10h] [ebp-420h] BYREF
  PVOID BaseAddress; // [esp+14h] [ebp-41Ch]
  _UNICODE_STRING DestinationString; // [esp+18h] [ebp-418h] BYREF
  HANDLE v21; // [esp+20h] [ebp-410h]
  ULONG *v22; // [esp+24h] [ebp-40Ch]
  _BYTE KeyValueInformation[1028]; // [esp+28h] [ebp-408h] BYREF

  v21 = KeyHandle;
  v22 = a6;
  result = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( result < 0 )
    return result;
  if ( a5 >= 0x3F4 )
  {
    v9 = a5 + 12;
    goto LABEL_20;
  }
  v7 = KeyValueInformation;
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x400u,
             &ResultLength);
  v8 = result;
  if ( result >= 0 )
  {
    BaseAddress = 0;
LABEL_8:
    v10 = a3;
    if ( a3 )
    {
      v11 = a5;
    }
    else
    {
      v11 = *((_DWORD *)v7 + 2);
      if ( v11 > a5 )
      {
        ResultLength = *((_DWORD *)v7 + 2);
        goto LABEL_11;
      }
      v10 = *((_DWORD *)v7 + 1);
    }
    v15 = *((_DWORD *)v7 + 1);
    switch ( v15 )
    {
      case 3:
      case 7:
        if ( v10 != v15 )
          goto LABEL_57;
        ResultLength = *((_DWORD *)v7 + 2);
        if ( !Value || *((_DWORD *)v7 + 2) > v11 )
          goto LABEL_11;
        LODWORD(v17) = *((_DWORD *)v7 + 2);
        break;
      case 4:
        if ( v10 == 4 )
        {
          if ( v11 == 4 && *((_DWORD *)v7 + 2) == 4 )
          {
            ResultLength = *((_DWORD *)v7 + 1);
            if ( Value )
            {
              *Value = *((_DWORD *)v7 + 3);
              goto LABEL_12;
            }
LABEL_11:
            v8 = -2147483643;
LABEL_12:
            if ( v22 && (v8 >= 0 || v8 == -2147483643) )
              *v22 = ResultLength;
            goto LABEL_16;
          }
          goto LABEL_35;
        }
LABEL_57:
        v8 = -1073741788;
        goto LABEL_16;
      case 11:
        if ( v10 != 11 )
          goto LABEL_57;
        if ( v11 == 8 && *((_DWORD *)v7 + 2) == 8 )
        {
          ResultLength = 8;
          if ( Value )
          {
            *Value = *((_DWORD *)v7 + 3);
            Value[1] = *((_DWORD *)v7 + 4);
            goto LABEL_12;
          }
          goto LABEL_11;
        }
LABEL_35:
        v8 = -1073741820;
        goto LABEL_16;
      case 1:
        if ( v10 == 4 )
        {
          if ( v11 == 4 )
          {
            if ( ((unsigned __int8)Value & 3) == 0 )
            {
              ResultLength = 4;
              if ( Value )
              {
                DestinationString.Buffer = (wchar_t *)(v7 + 12);
                DestinationString.Length = *((_WORD *)v7 + 4);
                DestinationString.MaximumLength = *((_WORD *)v7 + 4);
                v8 = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
                goto LABEL_12;
              }
              goto LABEL_11;
            }
            v8 = -2147483646;
LABEL_16:
            if ( BaseAddress )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
            return v8;
          }
          goto LABEL_35;
        }
        v16 = *((_DWORD *)v7 + 2);
        ResultLength = v16;
        if ( v16 > v11 )
          goto LABEL_11;
        LODWORD(v17) = v16;
        break;
      default:
        v8 = -1073741788;
        goto LABEL_12;
    }
    memcpy(Value, v7 + 12, v17);
    goto LABEL_12;
  }
  if ( result == -2147483643 )
  {
    while ( 1 )
    {
      v9 = ResultLength;
LABEL_20:
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        return -1073741801;
      LODWORD(v17) = v9;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, v17);
      BaseAddress = Heap;
      if ( !Heap )
        return -1073741801;
      v7 = Heap;
      v14 = ZwQueryValueKey(v21, &DestinationString, KeyValuePartialInformation, Heap, v9, &ResultLength);
      v8 = v14;
      if ( v14 >= 0 )
        goto LABEL_8;
      if ( v14 != -2147483643 )
        goto LABEL_16;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    }
  }
  return result;
}
