/*
 * XREFs of KeCopyPage @ 0x140403030
 * Callers:
 *     MiReplacePageOfProtoPool @ 0x140256EFC (MiReplacePageOfProtoPool.c)
 *     MiInitializeImageProtos @ 0x14025BF1C (MiInitializeImageProtos.c)
 *     MiCreateSystemPageTable @ 0x140296560 (MiCreateSystemPageTable.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiFillCombinePage @ 0x14036B1BC (MiFillCombinePage.c)
 *     MiCopyKstack @ 0x140535E90 (MiCopyKstack.c)
 *     MiSlowRotateCopy @ 0x140539F3C (MiSlowRotateCopy.c)
 *     MiScrubPage @ 0x140564534 (MiScrubPage.c)
 *     MiRevertRelocatedImagePfn @ 0x1405FB138 (MiRevertRelocatedImagePfn.c)
 *     MiValidateSectionCreate @ 0x1406C32C0 (MiValidateSectionCreate.c)
 *     MxCopyPage @ 0x140A578CC (MxCopyPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCopyPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // xmm3

  v2 = a1 + 4096;
  v3 = a2 + 4096;
  v4 = -4096LL;
  do
  {
    _mm_prefetch((const char *)(v3 + v4), 0);
    _mm_prefetch((const char *)(v3 + v4 + 64), 0);
    _mm_prefetch((const char *)(v3 + v4 + 128), 0);
    _mm_prefetch((const char *)(v3 + v4 + 192), 0);
    v4 += 256LL;
  }
  while ( v4 );
  result = -4096LL;
  do
  {
    v6 = *(__m128i *)(v3 + result + 16);
    v7 = *(__m128i *)(v3 + result + 32);
    v8 = *(__m128i *)(v3 + result + 48);
    _mm_stream_si128((__m128i *)(v2 + result), *(__m128i *)(v3 + result));
    _mm_stream_si128((__m128i *)(v2 + result + 16), v6);
    _mm_stream_si128((__m128i *)(v2 + result + 32), v7);
    _mm_stream_si128((__m128i *)(v2 + result + 48), v8);
    result += 64LL;
  }
  while ( result );
  _mm_sfence();
  return result;
}
