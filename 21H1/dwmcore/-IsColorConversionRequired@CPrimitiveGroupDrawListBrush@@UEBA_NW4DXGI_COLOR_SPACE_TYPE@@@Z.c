/*
 * XREFs of ?IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18026A820
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x18007007C (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

char __fastcall CPrimitiveGroupDrawListBrush::IsColorConversionRequired(
        CPrimitiveGroupDrawListBrush *this,
        enum DXGI_COLOR_SPACE_TYPE a2)
{
  __int64 v2; // r9
  __int64 v3; // rbx
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 9);
  v3 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(v2 + 16) + 8LL) )
    return 0;
  while ( a2 == CDrawListBitmap::GetPixelFormatInfo(
                  (CDrawListBitmap *)(*(_QWORD *)(v2 + 104)
                                    + 48LL * *(unsigned int *)(**(_QWORD **)(v2 + 16) + 144 * v3 + 40)),
                  v7)[2] )
  {
    v2 = *((_QWORD *)this + 9);
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(*(_QWORD *)(v2 + 16) + 8LL) )
      return 0;
  }
  return 1;
}
