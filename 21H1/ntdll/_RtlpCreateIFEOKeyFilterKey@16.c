/*
 * XREFs of _RtlpCreateIFEOKeyFilterKey@16 @ 0x4B342064
 * Callers:
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlStringFromGUIDEx@12 @ 0x4B2ED180 (_RtlStringFromGUIDEx@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwCreateKey@28 @ 0x4B2F2B50 (_ZwCreateKey@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpGenerateIFEOKeyFilterId@4 @ 0x4B3424DE (_RtlpGenerateIFEOKeyFilterId@4.c)
 */

int __fastcall RtlpCreateIFEOKeyFilterKey(_DWORD *a1, int a2, int a3, int a4)
{
  void *v4; // eax
  int IFEOKeyFilterId; // esi
  _DWORD v9[6]; // [esp+Ch] [ebp-3Ch] BYREF
  UNICODE_STRING UnicodeString; // [esp+24h] [ebp-24h] BYREF
  int v11; // [esp+2Ch] [ebp-1Ch] BYREF
  void *v12; // [esp+30h] [ebp-18h] BYREF
  _BYTE v13[16]; // [esp+34h] [ebp-14h] BYREF

  v4 = 0;
  v11 = 1;
  v12 = 0;
  while ( 1 )
  {
    if ( v4 )
      NtClose(v4);
    IFEOKeyFilterId = RtlpGenerateIFEOKeyFilterId(v13);
    if ( IFEOKeyFilterId < 0 )
      break;
    IFEOKeyFilterId = RtlStringFromGUIDEx((int)v13, (int)&UnicodeString, 1);
    if ( IFEOKeyFilterId < 0 )
      break;
    v9[0] = 24;
    v9[2] = &UnicodeString;
    v9[1] = a2;
    v9[3] = 576;
    v9[4] = 0;
    v9[5] = 0;
    IFEOKeyFilterId = ZwCreateKey((int)&v12, a3, (int)v9, 0, 0, 0, (int)&v11);
    RtlFreeAnsiString(&UnicodeString);
    if ( IFEOKeyFilterId < 0 )
      break;
    v4 = v12;
    if ( v11 != 2 )
    {
      *a1 = v12;
      return IFEOKeyFilterId;
    }
  }
  return IFEOKeyFilterId;
}
