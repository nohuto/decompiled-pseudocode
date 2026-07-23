/*
 * XREFs of _LdrpResGetMappingSize@16 @ 0x4B2BAB30
 * Callers:
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _LdrResGetRCConfig@20 @ 0x4B2BB5A0 (_LdrResGetRCConfig@20.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _LdrpGetFileSizeFromLoadAsDataTable@4 @ 0x4B2BE66C (_LdrpGetFileSizeFromLoadAsDataTable@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

NTSTATUS __stdcall LdrpResGetMappingSize(int a1, unsigned int *a2, int a3, char a4)
{
  _DWORD *SharedData; // eax
  int v5; // eax
  int v6; // esi
  unsigned int FileSizeFromLoadAsDataTable; // ebx
  NTSTATUS result; // eax
  WORD Magic; // cx
  DWORD SizeOfImage; // edi
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // eax
  ULONG_PTR *v14; // [esp+0h] [ebp-6Ch]
  _BYTE MemoryInformation[12]; // [esp+10h] [ebp-5Ch] BYREF
  unsigned int v16; // [esp+1Ch] [ebp-50h]
  _WORD v17[2]; // [esp+2Ch] [ebp-40h] BYREF
  const wchar_t *v18; // [esp+30h] [ebp-3Ch]
  _WORD v19[2]; // [esp+34h] [ebp-38h] BYREF
  PVOID BaseAddress; // [esp+38h] [ebp-34h]
  PIMAGE_NT_HEADERS OutHeaders; // [esp+40h] [ebp-2Ch] BYREF
  unsigned int v22; // [esp+44h] [ebp-28h]
  DWORD v23; // [esp+48h] [ebp-24h]
  int v24; // [esp+4Ch] [ebp-20h]
  bool v25; // [esp+53h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]

  v19[0] = 54;
  v19[1] = 56;
  BaseAddress = L"LdrpResGetMappingSize Enter";
  v17[0] = 52;
  v17[1] = 54;
  v18 = L"LdrpResGetMappingSize Exit";
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v5 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v5 = 2147353477;
  if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    v6 = 2147353476;
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476;
    LdrpTraceLoadMUIDll(v19, *(unsigned __int8 *)v13);
  }
  else
  {
    v6 = 2147353476;
  }
  if ( !a1 || !a2 )
    return -1073741811;
  v22 = 0;
  if ( (a3 & 0x20000) != 0 )
    v22 = *a2;
  *a2 = 0;
  FileSizeFromLoadAsDataTable = 0;
  v25 = (a3 & 0x100) != 0 && (a1 & 1) == 0;
  BaseAddress = (PVOID)(a1 & 0xFFFFFFFC);
  result = RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFC), 0LL, &OutHeaders);
  v24 = result;
  if ( result >= 0 )
  {
    ms_exc.registration.TryLevel = 0;
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 || Magic == 523 )
    {
      SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
      v23 = SizeOfImage;
    }
    else
    {
      SizeOfImage = 0;
      v23 = 0;
      result = -1073741701;
      v24 = -1073741701;
    }
    ms_exc.registration.TryLevel = -2;
    if ( result >= 0 )
    {
      if ( !v25 || !SizeOfImage )
      {
        if ( !a4 )
          FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
        if ( FileSizeFromLoadAsDataTable )
        {
          result = 0;
          v24 = 0;
        }
        else
        {
          result = NtQueryVirtualMemory(
                     (HANDLE)0xFFFFFFFF,
                     BaseAddress,
                     MemoryRegionInformation,
                     MemoryInformation,
                     0x1CuLL,
                     v14);
          v24 = result;
          if ( result >= 0 )
            FileSizeFromLoadAsDataTable = v16;
        }
        if ( FileSizeFromLoadAsDataTable || !SizeOfImage )
          goto LABEL_16;
        result = 0;
        v24 = 0;
      }
      FileSizeFromLoadAsDataTable = SizeOfImage;
LABEL_16:
      if ( result >= 0 )
      {
        if ( v22 && v22 < FileSizeFromLoadAsDataTable )
          v24 = -1073741793;
        else
          *a2 = FileSizeFromLoadAsDataTable;
      }
      v11 = NtCurrentPeb()->SharedData;
      if ( v11 && *v11 )
        v12 = (int)NtCurrentPeb()->SharedData + 555;
      else
        v12 = 2147353477;
      if ( (*(_BYTE *)v12 & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v6 = (int)NtCurrentPeb()->SharedData + 554;
        LdrpTraceLoadMUIDll(v17, *(unsigned __int8 *)v6);
      }
      return v24;
    }
  }
  return result;
}
