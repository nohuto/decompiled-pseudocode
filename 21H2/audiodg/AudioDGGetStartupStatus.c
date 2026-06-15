/*
 * XREFs of AudioDGGetStartupStatus @ 0x14001BEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioDGGetStartupStatus()
{
  if ( hHandle )
    WaitForSingleObjectEx(hHandle, 0xFFFFFFFF, 0);
  return (unsigned int)dword_14008FF70;
}
