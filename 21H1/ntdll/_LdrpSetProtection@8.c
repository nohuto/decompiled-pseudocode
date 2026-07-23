/*
 * XREFs of _LdrpSetProtection@8 @ 0x4B331251
 * Callers:
 *     _LdrpProtectAndRelocateImage@20 @ 0x4B3310B1 (_LdrpProtectAndRelocateImage@20.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 */

NTSTATUS __fastcall LdrpSetProtection(PVOID BaseOfImage, char a2)
{
  PIMAGE_NT_HEADERS v2; // ebx
  int v3; // edi
  _DWORD *i; // esi
  int v5; // eax
  ULONG v6; // ecx
  NTSTATUS result; // eax
  ULONG OldProtect; // [esp+Ch] [ebp-18h] BYREF
  PVOID BaseAddress; // [esp+10h] [ebp-14h] BYREF
  ULONG_PTR RegionSize; // [esp+14h] [ebp-10h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [esp+1Ch] [ebp-8h] BYREF
  char v12; // [esp+23h] [ebp-1h]

  v12 = a2;
  HIDWORD(RegionSize) = BaseOfImage;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders);
  v2 = OutHeaders;
  v3 = 0;
  if ( !OutHeaders->FileHeader.NumberOfSections )
    return 0;
  for ( i = (DWORD *)((char *)&OutHeaders->OptionalHeader.AddressOfEntryPoint
                    + OutHeaders->FileHeader.SizeOfOptionalHeader); ; i += 10 )
  {
    v5 = i[5];
    if ( v5 >= 0 && *i )
    {
      if ( v12 )
      {
        v6 = (v5 & 0x20000000) != 0 ? ((v5 & 0x40000000) != 0 ? 32 : 16) : 2;
        if ( (v5 & 0x4000000) != 0 )
          v6 |= 0x200u;
      }
      else
      {
        v6 = 4;
      }
      BaseAddress = (PVOID)(HIDWORD(RegionSize) + *(i - 1));
      LODWORD(RegionSize) = *i;
      if ( (_DWORD)RegionSize )
      {
        result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, v6, &OldProtect);
        if ( result < 0 )
          break;
      }
    }
    if ( ++v3 >= (unsigned int)v2->FileHeader.NumberOfSections )
      return 0;
  }
  return result;
}
