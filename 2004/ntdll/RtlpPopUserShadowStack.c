/*
 * XREFs of RtlpPopUserShadowStack @ 0x18007D800
 * Callers:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     RtlpxVirtualUnwind @ 0x180030EB0 (RtlpxVirtualUnwind.c)
 *     RtlDispatchException @ 0x180051210 (RtlDispatchException.c)
 *     RtlpUnwindEpilogue @ 0x180102D14 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x1800714A0 (RtlLocateExtendedFeature2.c)
 */

__int64 __fastcall RtlpPopUserShadowStack(__int64 a1)
{
  __int64 result; // rax

  result = *(_DWORD *)(a1 + 48) & 0x100040;
  if ( (_DWORD)result == 1048640 )
  {
    result = RtlLocateExtendedFeature2(a1 + 1232, 11, 2147353560LL, 0LL);
    if ( result )
    {
      if ( (*(_BYTE *)result & 1) != 0 )
        *(_QWORD *)(result + 8) += 8LL;
    }
  }
  return result;
}
