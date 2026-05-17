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
  void *v0; // ecx
  _DWORD *v1; // edi
  int Descriptor; // esi
  unsigned int v3; // ebx
  int v4; // eax
  char *v5; // ecx
  char *v6; // eax
  int v7; // esi
  int v8; // eax
  char v10; // [esp+Fh] [ebp-29h] BYREF
  _BYTE *v11; // [esp+10h] [ebp-28h] BYREF
  unsigned int v12; // [esp+14h] [ebp-24h] BYREF
  PCSZ SourceString; // [esp+18h] [ebp-20h]
  void *ApiSetMap; // [esp+1Ch] [ebp-1Ch]
  UNICODE_STRING UnicodeString; // [esp+20h] [ebp-18h] BYREF
  STRING DestinationString; // [esp+28h] [ebp-10h] BYREF
  _WORD v17[4]; // [esp+30h] [ebp-8h] BYREF

  v11 = 0;
  LdrGetDllHandleByName(&LdrpKernelbaseDllName, 0, &v11);
  v1 = RtlImageDirectoryEntryToData(v0, (int)v11, 1, 13, (int)&v12);
  if ( !v1 )
    return 0;
  Descriptor = 0;
  v3 = v12 >> 5;
  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0;
  v12 = 0;
  if ( v3 )
  {
    do
    {
      v4 = v1[1];
      if ( !v4 )
        break;
      SourceString = &v11[v4];
      if ( !_strnicmp(&v11[v4], "EXT-", 4u) )
      {
        RtlInitAnsiString(&DestinationString, SourceString);
        v6 = RtlxOemStringToUnicodeSize(v5, &DestinationString.Length);
        v7 = (int)v6;
        if ( (unsigned int)v6 > UnicodeString.MaximumLength )
        {
          if ( (unsigned int)v6 >= 0xFFFE )
          {
            Descriptor = -1073741675;
            break;
          }
          if ( UnicodeString.Buffer )
            RtlFreeAnsiString(&UnicodeString);
          UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine(v7);
          if ( !UnicodeString.Buffer )
          {
            Descriptor = -1073741670;
            break;
          }
          UnicodeString.MaximumLength = v7;
        }
        else
        {
          UnicodeString.Length = 0;
        }
        RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
        LdrpLogDllState(0, (int)&UnicodeString, 5328);
        Descriptor = ApiSetResolveToHost(0, &v10, v17);
        if ( Descriptor >= 0 && v10 )
          v8 = (v17[0] == 0) + 5329;
        else
          v8 = 5331;
        LdrpLogDllState(0, (int)&UnicodeString, v8);
        if ( v10 && !RtlCompareUnicodeString(&LdrpKernel32DllName, v17, 1) )
        {
          Descriptor = LdrpResolveDelayLoadDescriptor(v11, (int)v1);
          if ( Descriptor < 0 )
            break;
          Descriptor = 0;
        }
      }
      v1 += 8;
      ++v12;
    }
    while ( v12 < v3 );
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
  }
  return Descriptor;
}
