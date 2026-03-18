/*
 * XREFs of ?AbnormalDDEPost@@YGKPAUtagDDECONV@@K@Z @ 0x17E7A7
 * Callers:
 *     ?xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FDC3 (-xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FE83 (-xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 * Callees:
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 */

BOOL __fastcall AbnormalDDEPost(int a1, int a2)
{
  _DWORD *v3; // eax

  if ( (*(_BYTE *)(a1 + 40) & 2) == 0 )
  {
    v3 = *(_DWORD **)(a1 + 20);
    if ( v3 )
      v3 = (_DWORD *)*v3;
    _PostMessage(*(_DWORD *)(a1 + 24), 993, (int)v3, 0);
  }
  return a2 == 993;
}
