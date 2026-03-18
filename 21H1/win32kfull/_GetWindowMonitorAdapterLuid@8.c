/*
 * XREFs of _GetWindowMonitorAdapterLuid@8 @ 0x202DA
 * Callers:
 *     _WindowRedirectionBitmapMatchesMonitorAdapter@4 @ 0x2026A (_WindowRedirectionBitmapMatchesMonitorAdapter@4.c)
 *     _CreateOrGetRedirectionBitmap@16 @ 0x20722 (_CreateOrGetRedirectionBitmap@16.c)
 * Callees:
 *     <none>
 */

int __fastcall GetWindowMonitorAdapterLuid(int a1, int a2)
{
  int v2; // eax
  int v3; // esi
  int v5; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(a1 + 20);
  v3 = 0;
  v7 = 0;
  v5 = ValidateHmonitorNoRip(*(_DWORD *)(v2 + 164));
  if ( v5 )
    return DrvGetWDDMAdapterInfo(*(_DWORD *)(v5 + 120), 0, a2, &v7);
  return v3;
}
