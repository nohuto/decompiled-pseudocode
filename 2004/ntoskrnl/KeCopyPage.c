/*
 * XREFs of KeCopyPage @ 0x1403FB0A0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiCreateSystemPageTable @ 0x1402E2660 (MiCreateSystemPageTable.c)
 *     MiReplacePageOfProtoPool @ 0x1402F4350 (MiReplacePageOfProtoPool.c)
 *     MiInitializeImageProtos @ 0x14031C75C (MiInitializeImageProtos.c)
 *     MiFillCombinePage @ 0x140368D7C (MiFillCombinePage.c)
 *     MiCopyKstack @ 0x140530780 (MiCopyKstack.c)
 *     MiSlowRotateCopy @ 0x14053482C (MiSlowRotateCopy.c)
 *     MiScrubPage @ 0x14055EE54 (MiScrubPage.c)
 *     MiValidateSectionCreate @ 0x1406EAE30 (MiValidateSectionCreate.c)
 *     MiRevertRelocatedImagePfn @ 0x1406EBCD8 (MiRevertRelocatedImagePfn.c)
 *     MxCopyPage @ 0x140A54C28 (MxCopyPage.c)
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
