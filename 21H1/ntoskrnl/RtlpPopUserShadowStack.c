/*
 * XREFs of RtlpPopUserShadowStack @ 0x140321BBC
 * Callers:
 *     RtlpUnwindEpilogue @ 0x1403219C4 (RtlpUnwindEpilogue.c)
 *     RtlDispatchException @ 0x14032BD60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14032C220 (RtlUnwindEx.c)
 *     RtlpxVirtualUnwind @ 0x14032D9F0 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x14037E7E0 (RtlLocateExtendedFeature2.c)
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
