/*
 * XREFs of _RtlGetPersistedStateLocation@28 @ 0x4B2E5BB0
 * Callers:
 *     _GetOverlayRootFolder@12 @ 0x4B2D1DAC (_GetOverlayRootFolder@12.c)
 *     _RtlpGetTimeZoneInfoHandle@8 @ 0x4B2F1584 (_RtlpGetTimeZoneInfoHandle@8.c)
 *     _LdrpAppxGetRemediationRegistryKey@12 @ 0x4B32C6BD (_LdrpAppxGetRemediationRegistryKey@12.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x4B38B10C (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlExpandEnvironmentStrings@24 @ 0x4B2DC3A0 (_RtlExpandEnvironmentStrings@24.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlGetPersistedStateLocation(
        PCWSTR SourceString,
        PCWSTR a2,
        const unsigned __int16 *Src,
        unsigned int a4,
        _WORD *a5,
        unsigned int a6,
        size_t *a7)
{
  int v7; // edi
  signed int v8; // esi
  unsigned int v9; // kr00_4
  size_t v10; // ecx
  int v12; // eax
  int v13; // eax
  const WCHAR *v14; // eax
  int Heap; // eax
  int v16; // eax
  size_t v17; // ecx
  int v18; // edx
  __int16 *v19; // ecx
  __int16 v20; // ax
  int v21; // eax
  size_t v22; // [esp+Ch] [ebp-34h] BYREF
  HANDLE Handle; // [esp+10h] [ebp-30h] BYREF
  HANDLE v24; // [esp+14h] [ebp-2Ch] BYREF
  int v25; // [esp+18h] [ebp-28h]
  int v26; // [esp+1Ch] [ebp-24h] BYREF
  UNICODE_STRING DestinationString; // [esp+20h] [ebp-20h] BYREF
  int v28; // [esp+28h] [ebp-18h] BYREF
  HANDLE v29; // [esp+2Ch] [ebp-14h]
  UNICODE_STRING *p_DestinationString; // [esp+30h] [ebp-10h]
  int v31; // [esp+34h] [ebp-Ch]
  int v32; // [esp+38h] [ebp-8h]
  int v33; // [esp+3Ch] [ebp-4h]

  v25 = 0;
  Handle = 0;
  v24 = 0;
  v7 = 0;
  if ( a4 > 1 )
    return -1073741583;
  if ( byte_4B3A6618 )
  {
    v8 = -1073741772;
    goto LABEL_4;
  }
  v28 = 24;
  p_DestinationString = (UNICODE_STRING *)&dword_4B281750[2 * a4];
  v29 = 0;
  v31 = 64;
  v32 = 0;
  v33 = 0;
  v12 = ZwOpenKey(&Handle, 131097, &v28);
  v8 = v12;
  if ( v12 == -1073741772 )
  {
    byte_4B3A6618 = 1;
    goto LABEL_4;
  }
  if ( v12 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v29 = Handle;
    p_DestinationString = &DestinationString;
    v28 = 24;
    v31 = 64;
    v32 = 0;
    v33 = 0;
    v13 = ZwOpenKey(&v24, 131097, &v28);
    v8 = v13;
    if ( v13 == -1073741772 )
    {
LABEL_4:
      if ( Src )
      {
        v9 = wcslen(Src);
        v10 = 2 * (v9 + 1);
        v22 = v10;
        if ( v10 < v9 + 1 )
        {
          v8 = -1073741675;
        }
        else
        {
          v8 = a6 < v10 ? 0x80000005 : 0;
          if ( a7 )
            *a7 = v10;
          if ( v10 <= a6 )
            memcpy(a5, Src, v10);
        }
      }
      goto LABEL_10;
    }
    if ( v13 >= 0 )
    {
      v14 = a2;
      if ( !a2 )
        v14 = L"TargetPath";
      RtlInitUnicodeString(&DestinationString, v14);
      if ( a6 + 16 >= a6 )
      {
        Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, a6 + 16);
        v7 = Heap;
        if ( Heap )
        {
          v16 = ZwQueryValueKey(v24, &DestinationString, 2, Heap, a6 + 16, &v22);
          v8 = v16;
          if ( v16 < 0 )
          {
            if ( v16 != -2147483643 )
              goto LABEL_10;
          }
          else if ( *(_DWORD *)(v7 + 4) != 1 && *(_DWORD *)(v7 + 4) != 2 )
          {
            v8 = -1073741788;
            goto LABEL_10;
          }
          v17 = *(_DWORD *)(v7 + 8);
          v18 = v7 + 12;
          v22 = v17;
          if ( v16 < 0 )
            goto LABEL_50;
          if ( *(_WORD *)(v18 + 2 * (v17 >> 1) - 2) )
          {
            v17 += 2;
            v22 = v17;
            if ( a6 < v17 )
            {
              v8 = -2147483643;
            }
            else
            {
              *(_WORD *)(v18 + 2 * (v17 >> 1) - 2) = 0;
              v17 = v22;
            }
          }
          if ( v8 >= 0 && *(_DWORD *)(v7 + 4) == 2 )
          {
            v19 = (__int16 *)(v7 + 12);
            do
              v20 = *v19++;
            while ( v20 != (_WORD)v25 );
            v21 = RtlExpandEnvironmentStrings(0, (_WORD *)(v7 + 12), ((int)v19 - v7 - 14) >> 1, a5, a6 >> 1, &v26);
            v8 = v21;
            if ( v21 >= 0 || v21 == -1073741789 )
            {
              if ( a7 )
                *a7 = 2 * v26;
              if ( v21 == -1073741789 )
                v8 = -2147483643;
            }
          }
          else
          {
LABEL_50:
            if ( a7 )
              *a7 = v17;
            if ( v8 >= 0 )
              memcpy(a5, (const void *)(v7 + 12), v17);
          }
          goto LABEL_10;
        }
        v8 = -1073741801;
      }
      else
      {
        v8 = -1073741675;
      }
    }
  }
LABEL_10:
  if ( Handle )
    NtClose(Handle);
  if ( v24 )
    NtClose(v24);
  if ( v7 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v7);
  return v8;
}
