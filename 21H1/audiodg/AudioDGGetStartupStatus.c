/*
 * XREFs of AudioDGGetStartupStatus @ 0x14001BC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioDGGetStartupStatus()
{
  if ( hHandle )
    WaitForSingleObjectEx(hHandle, 0xFFFFFFFF, 0);
  return (unsigned int)dword_140084F40;
}
