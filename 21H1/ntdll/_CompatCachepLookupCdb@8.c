/*
 * XREFs of _CompatCachepLookupCdb@8 @ 0x4B2D1C4D
 * Callers:
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _LdrpSendPostSnapNotifications@4 @ 0x4B2D0ABB (_LdrpSendPostSnapNotifications@4.c)
 *     _LdrpLogDeprecatedDllEtwEvent@4 @ 0x4B2EBC3E (_LdrpLogDeprecatedDllEtwEvent@4.c)
 *     _LdrpCheckComponentOnDemandEtwEvent@4 @ 0x4B32FAB2 (_LdrpCheckComponentOnDemandEtwEvent@4.c)
 * Callees:
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _NtApphelpCacheControl@8 @ 0x4B2F2E40 (_NtApphelpCacheControl@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _wcsrchr @ 0x4B2FA900 (_wcsrchr.c)
 */

int __fastcall CompatCachepLookupCdb(wchar_t *Str, int a2)
{
  int v2; // esi
  wchar_t *v5; // eax
  const WCHAR *v6; // eax
  size_t v8; // [esp-4h] [ebp-D8h]
  _BYTE v9[124]; // [esp+Ch] [ebp-C8h] BYREF
  _UNICODE_STRING DestinationString; // [esp+88h] [ebp-4Ch] BYREF
  int *v11; // [esp+C8h] [ebp-Ch]
  int v12; // [esp+CCh] [ebp-8h]
  int v13; // [esp+D0h] [ebp-4h] BYREF

  LODWORD(v8) = 196;
  v2 = 0;
  memset(v9, 0, v8);
  v13 = 0;
  v5 = wcsrchr(Str, 0x5Cu);
  if ( v5 )
    v6 = (const WCHAR *)(v5 + 1);
  else
    v6 = (const WCHAR *)Str;
  if ( RtlInitUnicodeStringEx(&DestinationString, v6) < 0 )
    return 0;
  v12 = 4;
  v11 = &v13;
  if ( (int)NtApphelpCacheControl(6, v9) >= 0 && (a2 & v13) != 0 )
    return 1;
  return v2;
}
