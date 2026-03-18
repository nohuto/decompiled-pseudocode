/*
 * XREFs of DxgkDDisplayEnum @ 0x1C014A920
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDDisplayEnumInternal @ 0x1C014A940 (DxgkDDisplayEnumInternal.c)
 */

__int64 __fastcall DxgkDDisplayEnum(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return DxgkDDisplayEnumInternal(a1, a2);
}
