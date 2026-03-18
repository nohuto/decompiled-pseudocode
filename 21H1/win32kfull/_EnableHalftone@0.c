/*
 * XREFs of _EnableHalftone@0 @ 0xEA5EA
 * Callers:
 *     <none>
 * Callees:
 *     _HT_InitSaneLimits @ 0xEA648 (_HT_InitSaneLimits.c)
 */

int __stdcall EnableHalftone()
{
  dword_27430C = EngCreateSemaphore();
  if ( !dword_27430C )
    return 0;
  Src = 0;
  dword_274320 = 0;
  dword_274324 = 0;
  dword_27431C = 0;
  dword_274304 = EngCreateSemaphore();
  if ( !dword_274304 )
    return 0;
  word_274328 = 0;
  hsem = EngCreateSemaphore();
  if ( !hsem )
    return 0;
  word_27432A = 0;
  HT_InitSaneLimits();
  return 1;
}
