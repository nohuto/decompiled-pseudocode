/*
 * XREFs of BgQueryBootGraphicsInformation @ 0x1403988F4
 * Callers:
 *     BgkQueryBootGraphicsInformation @ 0x1409EF48C (BgkQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140398D88 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140398DD8 (BgpFwAcquireLock.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140398E44 (BgpFwQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgQueryBootGraphicsInformation(int a1, __int64 a2)
{
  unsigned int BootGraphicsInformation; // ebx

  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  if ( !a2 || a1 >= 4 )
    return 3221225485LL;
  BgpFwAcquireLock();
  if ( (dword_140C132D0 & 1) != 0 )
    BootGraphicsInformation = BgpFwQueryBootGraphicsInformation((unsigned int)a1, a2);
  else
    BootGraphicsInformation = -1073741823;
  BgpFwReleaseLock();
  return BootGraphicsInformation;
}
