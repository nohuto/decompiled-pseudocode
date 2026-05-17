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
  wchar_t *v6; // eax
  _DWORD v8[49]; // [esp+Ch] [ebp-C8h] BYREF
  int v9; // [esp+D0h] [ebp-4h] BYREF

  v2 = 0;
  memset(v8, 0, sizeof(v8));
  v9 = 0;
  v5 = wcsrchr(Str, 0x5Cu);
  if ( v5 )
    v6 = v5 + 1;
  else
    v6 = Str;
  if ( (int)RtlInitUnicodeStringEx(&v8[31], v6) < 0 )
    return 0;
  v8[48] = 4;
  v8[47] = &v9;
  if ( (int)NtApphelpCacheControl(6, v8) >= 0 && (a2 & v9) != 0 )
    return 1;
  return v2;
}
