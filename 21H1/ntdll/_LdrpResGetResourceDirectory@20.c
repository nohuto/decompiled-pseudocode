/*
 * XREFs of _LdrpResGetResourceDirectory@20 @ 0x4B2BB320
 * Callers:
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 * Callees:
 *     _LdrpSectionTableFromVirtualAddress@24 @ 0x4B2B8182 (_LdrpSectionTableFromVirtualAddress@24.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

NTSTATUS __stdcall LdrpResGetResourceDirectory(
        unsigned int BaseOfImage,
        ULONG64 Size,
        unsigned int *a3,
        PIMAGE_NT_HEADERS *a4)
{
  _DWORD *SharedData; // eax
  int v5; // eax
  int v6; // esi
  unsigned int v7; // ebx
  bool v8; // zf
  NTSTATUS result; // eax
  IMAGE_OPTIONAL_HEADER64 *p_OptionalHeader; // eax
  WORD Magic; // cx
  char v12; // cl
  unsigned int v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // edx
  int v16; // edi
  unsigned int v17; // esi
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // cx
  int v20; // ecx
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  _DWORD v24[60]; // [esp+10h] [ebp-13Ch] BYREF
  _WORD v25[2]; // [esp+100h] [ebp-4Ch] BYREF
  const wchar_t *v26; // [esp+104h] [ebp-48h]
  _WORD v27[2]; // [esp+108h] [ebp-44h] BYREF
  const wchar_t *v28; // [esp+10Ch] [ebp-40h]
  unsigned int v29; // [esp+118h] [ebp-34h]
  unsigned __int16 v30; // [esp+11Ch] [ebp-30h]
  unsigned __int16 v31; // [esp+120h] [ebp-2Ch]
  PIMAGE_NT_HEADERS OutHeaders; // [esp+124h] [ebp-28h] BYREF
  BOOL v33; // [esp+128h] [ebp-24h]
  char v34; // [esp+12Fh] [ebp-1Dh]
  int v35; // [esp+130h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+134h] [ebp-18h]

  v34 = 1;
  LOBYTE(v33) = 1;
  v27[0] = 66;
  v27[1] = 68;
  v28 = L"LdrpResGetResourceDirectory Enter";
  v25[0] = 64;
  v25[1] = 66;
  v26 = L"LdrpResGetResourceDirectory Exit";
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v5 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v5 = 2147353477;
  if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    v6 = 2147353476;
    if ( RtlGetCurrentServiceSessionId() )
      v23 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v23 = 2147353476;
    LdrpTraceLoadMUIDll(v27, *(unsigned __int8 *)v23);
  }
  else
  {
    v6 = 2147353476;
  }
  v7 = BaseOfImage;
  if ( !BaseOfImage || !a3 || !a4 )
    return -1073741811;
  if ( (BaseOfImage & 3) != 0 )
  {
    v7 = BaseOfImage & 0xFFFFFFFC;
    v33 = !(BaseOfImage & 1);
  }
  v8 = (Size & 0x100000000000LL) == 0;
  HIDWORD(Size) = WORD2(Size) & 0x1000;
  result = RtlImageNtHeaderEx(v8, (PVOID)v7, (unsigned int)Size, &OutHeaders);
  if ( result >= 0 )
  {
    ms_exc.registration.TryLevel = 0;
    p_OptionalHeader = &OutHeaders->OptionalHeader;
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      qmemcpy(v24, p_OptionalHeader, 0xE0u);
      v12 = v34;
    }
    else
    {
      if ( Magic != 523 )
      {
        v35 = -1073741701;
        ms_exc.registration.TryLevel = -2;
LABEL_31:
        v20 = 2147353477;
        v21 = NtCurrentPeb()->SharedData;
        if ( v21 && *v21 )
          v20 = (int)NtCurrentPeb()->SharedData + 555;
        if ( (*(_BYTE *)v20 & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v6 = (int)NtCurrentPeb()->SharedData + 554;
          LdrpTraceLoadMUIDll(v25, *(unsigned __int8 *)v6);
        }
        return v35;
      }
      qmemcpy(v24, p_OptionalHeader, sizeof(v24));
      v12 = 0;
    }
    v13 = v24[23];
    if ( !v12 )
      v13 = v24[27];
    if ( v13 > 2 )
    {
      v14 = v24[28];
      if ( !v12 )
        v14 = v24[32];
      if ( v14 )
      {
        if ( v33 || v14 < v24[15] )
        {
          v15 = v14 + v7;
          if ( v14 + v7 >= v7 )
          {
            v16 = HIDWORD(Size);
LABEL_22:
            v29 = v15;
            ms_exc.registration.TryLevel = -2;
            if ( !v15 )
            {
              v35 = -1073741687;
              goto LABEL_30;
            }
            if ( !v16 )
              goto LABEL_29;
            if ( v15 <= v7 )
              goto LABEL_50;
            v17 = (v7 & 0xFFFFFFFC) + Size;
            if ( v15 + 16 > v17 )
              goto LABEL_50;
            ms_exc.registration.TryLevel = 1;
            v18 = *(_WORD *)(v15 + 12);
            v31 = v18;
            v19 = *(_WORD *)(v15 + 14);
            v30 = v19;
            ms_exc.registration.TryLevel = -2;
            if ( !v18 && !v19 )
            {
              v35 = -1073741686;
              goto LABEL_30;
            }
            if ( v15 + 8 * (v18 + v19) > v17 )
            {
LABEL_50:
              v35 = -1073741701;
            }
            else
            {
LABEL_29:
              *a3 = v15;
              *a4 = OutHeaders;
              v35 = 0;
            }
LABEL_30:
            v6 = 2147353476;
            goto LABEL_31;
          }
        }
        else
        {
          v16 = HIDWORD(Size);
          v22 = (_DWORD *)LdrpSectionTableFromVirtualAddress(v7, Size, (int)OutHeaders, 0, v14, HIDWORD(Size) != 0);
          if ( v22 )
          {
            if ( v22[4] )
            {
              v15 = v7 + v14 + v22[5] - v22[3];
              goto LABEL_22;
            }
            goto LABEL_39;
          }
        }
        v35 = -1073741701;
        goto LABEL_40;
      }
    }
LABEL_39:
    v35 = -1073741687;
LABEL_40:
    ms_exc.registration.TryLevel = -2;
    goto LABEL_30;
  }
  return result;
}
