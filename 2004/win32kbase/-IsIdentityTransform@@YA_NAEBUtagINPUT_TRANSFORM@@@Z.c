/*
 * XREFs of ?IsIdentityTransform@@YA_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C011D780
 * Callers:
 *     ?TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z @ 0x1C01B795C (-TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C01B7A40 (-TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

bool __fastcall IsIdentityTransform(const struct tagINPUT_TRANSFORM *Source1)
{
  _DWORD Source2[16]; // [rsp+20h] [rbp-58h] BYREF

  memset(Source2, 0, sizeof(Source2));
  Source2[15] = 1065353216;
  Source2[10] = 1065353216;
  Source2[5] = 1065353216;
  Source2[0] = 1065353216;
  return RtlCompareMemory(Source1, Source2, 0x40uLL) == 64;
}
