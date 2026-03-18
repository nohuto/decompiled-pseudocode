/*
 * XREFs of ?GetSignFromMappingMode@@YGHPAUHDC__@@PAUtagPOINT@@@Z @ 0x1B7851
 * Callers:
 *     _ClientFrame@24 @ 0x1B78B9 (_ClientFrame@24.c)
 * Callees:
 *     <none>
 */

int __fastcall GetSignFromMappingMode(int a1, _DWORD *a2)
{
  int result; // eax
  int v5; // [esp+8h] [ebp-10h] BYREF
  int v6; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( !GreGetDCPoint(a1, 1, &v5) || !GreGetDCPoint(a1, 2, &v7) )
    return 0;
  *a2 = (((v5 ^ v7) >> 31) & 0xFFFFFFFE) + 1;
  result = 1;
  a2[1] = (((v6 ^ v8) >> 31) & 0xFFFFFFFE) + 1;
  return result;
}
