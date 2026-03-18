/*
 * XREFs of EnableHalftone @ 0x1C0129740
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitSaneLimits @ 0x1C01297CC (HT_InitSaneLimits.c)
 */

__int64 EnableHalftone()
{
  qword_1C0339F98 = EngCreateSemaphore();
  if ( !qword_1C0339F98 )
    return 0LL;
  Src = 0LL;
  qword_1C0339FBC = 0LL;
  dword_1C0339FB8 = 0;
  qword_1C0339F88 = EngCreateSemaphore();
  if ( !qword_1C0339F88 )
    return 0LL;
  word_1C0339FC4 = 0;
  hsem = EngCreateSemaphore();
  if ( !hsem )
    return 0LL;
  word_1C0339FC6 = 0;
  HT_InitSaneLimits();
  return 1LL;
}
