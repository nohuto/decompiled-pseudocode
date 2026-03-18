/*
 * XREFs of RtlpPopUserShadowStack @ 0x14033036C
 * Callers:
 *     RtlpxVirtualUnwind @ 0x140228310 (RtlpxVirtualUnwind.c)
 *     RtlDispatchException @ 0x1402E5630 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402E5AF0 (RtlUnwindEx.c)
 *     RtlpUnwindEpilogue @ 0x140330174 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x140380F00 (RtlLocateExtendedFeature2.c)
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
