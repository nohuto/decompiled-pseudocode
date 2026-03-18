/*
 * XREFs of bQueryFntCacheReg @ 0xDF8D6
 * Callers:
 *     _vGetJpn98FixPitch@0 @ 0xDF832 (_vGetJpn98FixPitch@0.c)
 *     bFntCacheDisabled @ 0xDF87C (bFntCacheDisabled.c)
 *     bServicingStackModifiedFonts @ 0xDF960 (bServicingStackModifiedFonts.c)
 *     vGetLastBootTimeStatus @ 0xDF9F4 (vGetLastBootTimeStatus.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

int __fastcall bQueryFntCacheReg(HANDLE KeyHandle, PCWSTR SourceString, _DWORD *a3)
{
  PCWSTR v3; // esi
  int v4; // edi
  PCWSTR v6; // ecx
  _DWORD *v8; // esi
  struct _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-Ch] BYREF
  ULONG Length; // [esp+14h] [ebp-4h] BYREF

  v3 = SourceString;
  v4 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v6 = v3 + 1;
  while ( *v3++ )
    ;
  Length = 2 * (v3 - v6) + 30;
  v8 = PALLOCMEM2(Length, 1128682580, 1);
  if ( v8 )
  {
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v8, Length, &Length) >= 0 )
    {
      v4 = 1;
      *a3 = *(_DWORD *)((char *)v8 + v8[2]);
    }
    Win32FreePool(v8);
  }
  return v4;
}
