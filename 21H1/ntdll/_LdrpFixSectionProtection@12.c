/*
 * XREFs of _LdrpFixSectionProtection@12 @ 0x4B32C976
 * Callers:
 *     _LdrpProcessImageProtectionParameter@8 @ 0x4B32CAFE (_LdrpProcessImageProtectionParameter@8.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlAnsiStringToUnicodeString@12 @ 0x4B2CC520 (_RtlAnsiStringToUnicodeString@12.c)
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _wcschr @ 0x4B2FA680 (_wcschr.c)
 *     _wcstoul @ 0x4B2FAC70 (_wcstoul.c)
 *     _RtlpImageNtHeader@4 @ 0x4B32CB5D (_RtlpImageNtHeader@4.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

char __fastcall LdrpFixSectionProtection(int a1, const wchar_t *a2, ULONG NewProtect)
{
  wchar_t *v5; // eax
  int v6; // ecx
  char v7; // bl
  int v8; // eax
  int v9; // edi
  unsigned int v10; // edx
  int v11; // esi
  unsigned __int16 v12; // cx
  unsigned int v13; // ecx
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-34h] BYREF
  _UNICODE_STRING String2; // [esp+18h] [ebp-2Ch] BYREF
  ANSI_STRING SourceString; // [esp+20h] [ebp-24h] BYREF
  wchar_t *EndPtr; // [esp+28h] [ebp-1Ch] BYREF
  ULONG OldProtect; // [esp+2Ch] [ebp-18h] BYREF
  int v20; // [esp+30h] [ebp-14h]
  PVOID BaseAddress; // [esp+34h] [ebp-10h] BYREF
  ULONG_PTR RegionSize; // [esp+38h] [ebp-Ch] BYREF
  unsigned int v23; // [esp+40h] [ebp-4h]

  HIDWORD(RegionSize) = 0;
  v20 = a1;
  v5 = wcschr(a2, 0x3Du);
  if ( !v5 )
    return 0;
  *v5 = 0;
  v6 = *a2;
  if ( v6 == 83 )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)v5 + 1);
    v7 = 0;
  }
  else
  {
    if ( v6 != 79 )
      return 0;
    HIDWORD(RegionSize) = wcstoul(v5 + 1, &EndPtr, 16);
    if ( !HIDWORD(RegionSize) )
      return 0;
    v7 = 1;
  }
  v8 = RtlpImageNtHeader(a1);
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = 0;
  v11 = *(unsigned __int16 *)(v8 + 20) + v8 + 24;
  v23 = 0;
  if ( *(_WORD *)(v8 + 6) )
  {
    do
    {
      if ( !*(_DWORD *)(v11 + 12) || !*(_DWORD *)(v11 + 8) )
        goto LABEL_23;
      if ( v7 )
      {
        if ( HIDWORD(RegionSize) != v10 + 1 )
          goto LABEL_21;
      }
      else
      {
        v12 = 0;
        SourceString.Buffer = (char *)v11;
        SourceString.MaximumLength = 8;
        SourceString.Length = 0;
        do
        {
          if ( !*(_BYTE *)(v12 + v11) )
            break;
          SourceString.Length = ++v12;
        }
        while ( v12 < 8u );
        if ( RtlAnsiStringToUnicodeString(&String2, &SourceString, 1u) < 0 )
          return 0;
        if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
        {
LABEL_22:
          RtlFreeAnsiString(&String2);
          v10 = v23;
          goto LABEL_23;
        }
      }
      LODWORD(RegionSize) = *(_DWORD *)(v11 + 8);
      BaseAddress = (PVOID)(v20 + *(_DWORD *)(v11 + 12));
      ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, NewProtect, &OldProtect);
      DbgPrintEx(85, 3u, (int)"Set 0x%X protection for %p section for %d bytes, old protection 0x%X\n", NewProtect);
      if ( v7 )
        return 1;
      v10 = v23;
LABEL_21:
      if ( !v7 )
        goto LABEL_22;
LABEL_23:
      v13 = *(unsigned __int16 *)(v9 + 6);
      ++v10;
      v11 += 40;
      v23 = v10;
    }
    while ( v10 < v13 );
  }
  return 1;
}
