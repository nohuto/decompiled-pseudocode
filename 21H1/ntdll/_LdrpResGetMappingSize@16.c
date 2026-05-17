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

int __stdcall LdrpResGetMappingSize(int a1, unsigned int *a2, int a3, char a4)
{
  _DWORD *SharedData; // eax
  int v5; // eax
  int v6; // esi
  unsigned int FileSizeFromLoadAsDataTable; // ebx
  int result; // eax
  __int16 v9; // cx
  unsigned int v10; // edi
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // eax
  char v14[12]; // [esp+10h] [ebp-5Ch] BYREF
  unsigned int v15; // [esp+1Ch] [ebp-50h]
  _WORD v16[2]; // [esp+2Ch] [ebp-40h] BYREF
  const wchar_t *v17; // [esp+30h] [ebp-3Ch]
  _WORD v18[2]; // [esp+34h] [ebp-38h] BYREF
  const wchar_t *v19; // [esp+38h] [ebp-34h]
  int v20; // [esp+40h] [ebp-2Ch] BYREF
  unsigned int v21; // [esp+44h] [ebp-28h]
  unsigned int v22; // [esp+48h] [ebp-24h]
  int v23; // [esp+4Ch] [ebp-20h]
  bool v24; // [esp+53h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]

  v18[0] = 54;
  v18[1] = 56;
  v19 = L"LdrpResGetMappingSize Enter";
  v16[0] = 52;
  v16[1] = 54;
  v17 = L"LdrpResGetMappingSize Exit";
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
    LdrpTraceLoadMUIDll(v18, *(unsigned __int8 *)v13);
  }
  else
  {
    v6 = 2147353476;
  }
  if ( !a1 || !a2 )
    return -1073741811;
  v21 = 0;
  if ( (a3 & 0x20000) != 0 )
    v21 = *a2;
  *a2 = 0;
  FileSizeFromLoadAsDataTable = 0;
  v24 = (a3 & 0x100) != 0 && (a1 & 1) == 0;
  v19 = (const wchar_t *)(a1 & 0xFFFFFFFC);
  result = RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFC, 0, 0, &v20);
  v23 = result;
  if ( result >= 0 )
  {
    ms_exc.registration.TryLevel = 0;
    v9 = *(_WORD *)(v20 + 24);
    if ( v9 == 267 || v9 == 523 )
    {
      v10 = *(_DWORD *)(v20 + 80);
      v22 = v10;
    }
    else
    {
      v10 = 0;
      v22 = 0;
      result = -1073741701;
      v23 = -1073741701;
    }
    ms_exc.registration.TryLevel = -2;
    if ( result >= 0 )
    {
      if ( !v24 || !v10 )
      {
        if ( !a4 )
          FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
        if ( FileSizeFromLoadAsDataTable )
        {
          result = 0;
          v23 = 0;
        }
        else
        {
          result = NtQueryVirtualMemory(-1, v19, 3, v14, 28, 0);
          v23 = result;
          if ( result >= 0 )
            FileSizeFromLoadAsDataTable = v15;
        }
        if ( FileSizeFromLoadAsDataTable || !v10 )
          goto LABEL_16;
        result = 0;
        v23 = 0;
      }
      FileSizeFromLoadAsDataTable = v10;
LABEL_16:
      if ( result >= 0 )
      {
        if ( v21 && v21 < FileSizeFromLoadAsDataTable )
          v23 = -1073741793;
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
        LdrpTraceLoadMUIDll(v16, *(unsigned __int8 *)v6);
      }
      return v23;
    }
  }
  return result;
}
