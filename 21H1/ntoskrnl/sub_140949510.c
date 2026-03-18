/*
 * XREFs of sub_140949510 @ 0x140949510
 * Callers:
 *     <none>
 * Callees:
 *     ExpGetLicenseTamperState @ 0x1405AD048 (ExpGetLicenseTamperState.c)
 *     sub_140948B3C @ 0x140948B3C (sub_140948B3C.c)
 */

__int64 __fastcall sub_140949510(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int a4, _DWORD *a5, _BYTE *a6)
{
  unsigned int v9; // ecx
  _DWORD v11[6]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 0;
  ExpGetLicenseTamperState(a1, v11);
  if ( v11[0] )
  {
    *a6 = 1;
    return (unsigned int)sub_140948B3C(a2, a3, a4, a5, 0);
  }
  else
  {
    v9 = -1073741772;
    *a6 = 0;
  }
  return v9;
}
