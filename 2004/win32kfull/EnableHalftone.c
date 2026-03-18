/*
 * XREFs of EnableHalftone @ 0x1C01278A0
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitSaneLimits @ 0x1C012792C (HT_InitSaneLimits.c)
 */

__int64 EnableHalftone()
{
  qword_1C033AF68 = EngCreateSemaphore();
  if ( !qword_1C033AF68 )
    return 0LL;
  Src = 0LL;
  qword_1C033AF8C = 0LL;
  dword_1C033AF88 = 0;
  qword_1C033AF58 = EngCreateSemaphore();
  if ( !qword_1C033AF58 )
    return 0LL;
  word_1C033AF94 = 0;
  hsem = EngCreateSemaphore();
  if ( !hsem )
    return 0LL;
  word_1C033AF96 = 0;
  HT_InitSaneLimits();
  return 1LL;
}
