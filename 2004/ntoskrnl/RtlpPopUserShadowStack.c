/*
 * XREFs of RtlpPopUserShadowStack @ 0x14035F56C
 * Callers:
 *     RtlDispatchException @ 0x1402E6C20 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402E70E0 (RtlUnwindEx.c)
 *     RtlpxVirtualUnwind @ 0x1402E88B0 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x14035F374 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x14037F1D0 (RtlLocateExtendedFeature2.c)
 */

__int64 __fastcall RtlpPopUserShadowStack(__int64 a1)
{
  __int64 result; // rax

  result = *(_DWORD *)(a1 + 48) & 0x100040;
  if ( (_DWORD)result == 1048640 )
  {
    result = RtlLocateExtendedFeature2(a1 + 1232, 11LL, 0xFFFFF780000003D8uLL);
    if ( result )
    {
      if ( (*(_BYTE *)result & 1) != 0 )
        *(_QWORD *)(result + 8) += 8LL;
    }
  }
  return result;
}
