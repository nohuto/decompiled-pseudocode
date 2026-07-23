/*
 * XREFs of _LdrpSnapKernelBaseExtensions@0 @ 0x4B2CE517
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlxOemStringToUnicodeSize@4 @ 0x4B2AAD60 (_RtlxOemStringToUnicodeSize@4.c)
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlAnsiStringToUnicodeString@12 @ 0x4B2CC520 (_RtlAnsiStringToUnicodeString@12.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpResolveDelayLoadDescriptor@8 @ 0x4B2CE4C8 (_LdrpResolveDelayLoadDescriptor@8.c)
 *     _LdrGetDllHandleByName@12 @ 0x4B2CF2C0 (_LdrGetDllHandleByName@12.c)
 *     _ApiSetResolveToHost@20 @ 0x4B2D012C (_ApiSetResolveToHost@20.c)
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     _RtlInitAnsiString@8 @ 0x4B2F4FE0 (_RtlInitAnsiString@8.c)
 *     __strnicmp @ 0x4B2F74A0 (__strnicmp.c)
 */

int __stdcall LdrpSnapKernelBaseExtensions()
{
  const IMAGE_DELAYLOAD_DESCRIPTOR *v0; // edi
  int Descriptor; // esi
  ULONG v2; // ebx
  DWORD DllNameRVA; // eax
  void *v4; // ecx
  ULONG v5; // eax
  int v6; // esi
  int v7; // eax
  size_t v9; // [esp-4h] [ebp-3Ch]
  char v10; // [esp+Fh] [ebp-29h] BYREF
  PVOID DllHandle; // [esp+10h] [ebp-28h] BYREF
  ULONG Size; // [esp+14h] [ebp-24h] BYREF
  PCSZ SourceString; // [esp+18h] [ebp-20h]
  void *ApiSetMap; // [esp+1Ch] [ebp-1Ch]
  _UNICODE_STRING UnicodeString; // [esp+20h] [ebp-18h] BYREF
  _STRING DestinationString; // [esp+28h] [ebp-10h] BYREF
  _UNICODE_STRING String2; // [esp+30h] [ebp-8h] BYREF

  DllHandle = 0;
  LdrGetDllHandleByName((PUNICODE_STRING)&LdrpKernelbaseDllName, 0, &DllHandle);
  v0 = (const IMAGE_DELAYLOAD_DESCRIPTOR *)RtlImageDirectoryEntryToData(DllHandle, 1u, 0xDu, &Size);
  if ( !v0 )
    return 0;
  Descriptor = 0;
  v2 = Size >> 5;
  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0;
  Size = 0;
  if ( v2 )
  {
    do
    {
      DllNameRVA = v0->DllNameRVA;
      if ( !DllNameRVA )
        break;
      LODWORD(v9) = 4;
      SourceString = (char *)DllHandle + DllNameRVA;
      if ( !_strnicmp((const char *)DllHandle + DllNameRVA, "EXT-", v9) )
      {
        RtlInitAnsiString(&DestinationString, SourceString);
        v5 = RtlxOemStringToUnicodeSize(v4, (PCSTR *)&DestinationString);
        v6 = v5;
        if ( v5 > UnicodeString.MaximumLength )
        {
          if ( v5 >= 0xFFFE )
          {
            Descriptor = -1073741675;
            break;
          }
          if ( UnicodeString.Buffer )
            RtlFreeAnsiString(&UnicodeString);
          UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine(v6);
          if ( !UnicodeString.Buffer )
          {
            Descriptor = -1073741670;
            break;
          }
          UnicodeString.MaximumLength = v6;
        }
        else
        {
          UnicodeString.Length = 0;
        }
        RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
        LdrpLogDllState(0, (int)&UnicodeString, 5328);
        Descriptor = ApiSetResolveToHost(0, &v10, &String2);
        if ( Descriptor >= 0 && v10 )
          v7 = (String2.Length == 0) + 5329;
        else
          v7 = 5331;
        LdrpLogDllState(0, (int)&UnicodeString, v7);
        if ( v10 && !RtlCompareUnicodeString((PUNICODE_STRING)&LdrpKernel32DllName, &String2, 1u) )
        {
          Descriptor = LdrpResolveDelayLoadDescriptor((char *)DllHandle, v0);
          if ( Descriptor < 0 )
            break;
          Descriptor = 0;
        }
      }
      ++v0;
      ++Size;
    }
    while ( Size < v2 );
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
  }
  return Descriptor;
}
