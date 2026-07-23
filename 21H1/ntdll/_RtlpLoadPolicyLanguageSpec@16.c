/*
 * XREFs of _RtlpLoadPolicyLanguageSpec@16 @ 0x4B36AC26
 * Callers:
 *     _RtlpLoadMachineUIByPolicy@12 @ 0x4B2A71E0 (_RtlpLoadMachineUIByPolicy@12.c)
 *     _RtlpLoadLanguageConfigList@12 @ 0x4B2ACFED (_RtlpLoadLanguageConfigList@12.c)
 *     _RtlpLoadUserUIByPolicy@12 @ 0x4B2AD890 (_RtlpLoadUserUIByPolicy@12.c)
 * Callees:
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _RtlpMuiRegGetOrAddString@16 @ 0x4B2AD813 (_RtlpMuiRegGetOrAddString@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpMuiRegGetInstalledLanguageIndex@16 @ 0x4B2D4EAF (_RtlpMuiRegGetInstalledLanguageIndex@16.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall RtlpLoadPolicyLanguageSpec(void *a1, _DWORD *a2, _BYTE *a3, _WORD *a4)
{
  WCHAR *v5; // edi
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  WCHAR *Heap; // eax
  int v10; // ecx
  int InstalledLanguageIndex; // esi
  SIZE_T v13; // [esp-4h] [ebp-34h]
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-20h] BYREF
  DWORD Lcid; // [esp+18h] [ebp-18h] BYREF
  _DWORD *v16; // [esp+1Ch] [ebp-14h]
  int v17; // [esp+20h] [ebp-10h] BYREF
  int v18; // [esp+24h] [ebp-Ch] BYREF
  ULONG Size; // [esp+28h] [ebp-8h] BYREF
  __int16 Size_4; // [esp+2Ch] [ebp-4h] BYREF

  v16 = a2;
  LOWORD(v17) = 0;
  v5 = 0;
  Size_4 = -1;
  if ( a2 && a1 )
  {
    Size = 0;
    v6 = 1;
    v18 = 1;
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    v8 = LdrpQueryValueKey(a1, &DestinationString, &v18, 0, &Size, v7);
    if ( !Size || v8 == -1073741772 )
      return -1073741823;
    LODWORD(v13) = Size;
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v13);
    v5 = Heap;
    if ( !Heap )
      return -1073741801;
    InstalledLanguageIndex = LdrpQueryValueKey(a1, &DestinationString, &v18, Heap, &Size, v10);
    if ( InstalledLanguageIndex >= 0 )
    {
      if ( v18 == 1 && (RtlInitUnicodeString(&DestinationString, v5), RtlCultureNameToLCID(&DestinationString, &Lcid)) )
      {
        if ( Lcid != 4096 && Lcid != 5120 )
        {
          LOWORD(v17) = Lcid;
          goto LABEL_16;
        }
        InstalledLanguageIndex = RtlpMuiRegGetOrAddString(v16, DestinationString.Buffer, 0, &v17);
        if ( InstalledLanguageIndex >= 0 )
        {
          v6 = 3;
LABEL_16:
          InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex((int)v16, v6, v17, &Size_4);
          if ( InstalledLanguageIndex >= 0 )
          {
            if ( a3 )
              *a3 = 2;
            if ( a4 )
              *a4 = Size_4;
          }
        }
      }
      else
      {
        InstalledLanguageIndex = -1073741823;
      }
    }
  }
  else
  {
    InstalledLanguageIndex = -1073741811;
  }
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return InstalledLanguageIndex;
}
