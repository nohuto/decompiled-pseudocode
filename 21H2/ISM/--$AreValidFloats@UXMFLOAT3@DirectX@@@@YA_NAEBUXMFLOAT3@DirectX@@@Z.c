/*
 * XREFs of ??$AreValidFloats@UXMFLOAT3@DirectX@@@@YA_NAEBUXMFLOAT3@DirectX@@@Z @ 0x18014E450
 * Callers:
 *     _lambda_f2d9a31b738d46358cc103eee0272db8_::operator() @ 0x1801588A8 (_lambda_f2d9a31b738d46358cc103eee0272db8_--operator().c)
 * Callees:
 *     ??$IsValidFloat@M@Details@@YA_NM@Z @ 0x1800C4738 (--$IsValidFloat@M@Details@@YA_NM@Z.c)
 */

char __fastcall AreValidFloats<DirectX::XMFLOAT3>(float *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  while ( Details::IsValidFloat<float>(*a1) )
  {
    ++v2;
    ++a1;
    if ( v2 >= 3 )
      return 1;
  }
  return 0;
}
