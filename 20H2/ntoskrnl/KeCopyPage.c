/*
 * XREFs of KeCopyPage @ 0x1404009F0
 * Callers:
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     MiReplacePageOfProtoPool @ 0x1403191F4 (MiReplacePageOfProtoPool.c)
 *     MiCreateSystemPageTable @ 0x1403360F0 (MiCreateSystemPageTable.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     MiInitializeImageProtos @ 0x140350EE8 (MiInitializeImageProtos.c)
 *     MiFillCombinePage @ 0x14036AD5C (MiFillCombinePage.c)
 *     MiCopyKstack @ 0x140534150 (MiCopyKstack.c)
 *     MiSlowRotateCopy @ 0x1405381FC (MiSlowRotateCopy.c)
 *     MiScrubPage @ 0x140562824 (MiScrubPage.c)
 *     MiRevertRelocatedImagePfn @ 0x1406BF0E8 (MiRevertRelocatedImagePfn.c)
 *     MiValidateSectionCreate @ 0x14070EA48 (MiValidateSectionCreate.c)
 *     MxCopyPage @ 0x140A552A8 (MxCopyPage.c)
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
