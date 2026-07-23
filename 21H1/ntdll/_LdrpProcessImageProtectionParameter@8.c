/*
 * XREFs of _LdrpProcessImageProtectionParameter@8 @ 0x4B32CAFE
 * Callers:
 *     _LdrpCheckNXCompatibility@4 @ 0x4B2E7520 (_LdrpCheckNXCompatibility@4.c)
 * Callees:
 *     _wcschr @ 0x4B2FA680 (_wcschr.c)
 *     _wcstoul @ 0x4B2FAC70 (_wcstoul.c)
 *     _LdrpFixSectionProtection@12 @ 0x4B32C976 (_LdrpFixSectionProtection@12.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

char __fastcall LdrpProcessImageProtectionParameter(int a1, const wchar_t *a2)
{
  wchar_t *v4; // eax
  ULONG v5; // edi
  wchar_t *EndPtr; // [esp+Ch] [ebp-4h] BYREF

  v4 = wcschr(a2, 0x2Cu);
  if ( v4 )
  {
    *v4 = 0;
    v4 = (wchar_t *)wcstoul(v4 + 1, &EndPtr, 16);
    v5 = (ULONG)v4;
    if ( v4 )
    {
      DbgPrintEx(
        85,
        3u,
        (int)"CLIENT(ntdll): Tyring to fix protection for %ws section in %wZ module to 0x%X\n",
        (int)a2);
      LOBYTE(v4) = LdrpFixSectionProtection(*(_DWORD *)(a1 + 24), a2, v5);
    }
  }
  return (char)v4;
}
