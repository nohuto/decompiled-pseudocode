/*
 * XREFs of ?GetColorManagementCaps@@YGKAAVPDEVOBJ@@@Z @ 0xAE862
 * Callers:
 *     _GetColorManagementCapsWrap@4 @ 0xAE84A (_GetColorManagementCapsWrap@4.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall GetColorManagementCaps(int *this)
{
  int v1; // ecx
  unsigned int result; // eax
  int v3; // ecx

  v1 = *this;
  result = 0;
  if ( (*(_BYTE *)(v1 + 24) & 1) != 0 && (*(_DWORD *)(v1 + 1404) == 3 || (*(_BYTE *)(v1 + 1416) & 0x10) != 0) )
    result = 2;
  v3 = *(_DWORD *)(v1 + 1120);
  if ( (v3 & 0x4000000) != 0 )
    result |= 4u;
  if ( (v3 & 0x2000000) != 0 )
    result |= 1u;
  return result;
}
