/*
 * XREFs of HvlSetSecurePageCollectionMode @ 0x140417674
 * Callers:
 *     IoWriteCrashDump @ 0x140553244 (IoWriteCrashDump.c)
 * Callees:
 *     <none>
 */

void __fastcall HvlSetSecurePageCollectionMode(char a1)
{
  int v1; // eax

  if ( VslVsmEnabled )
  {
    v1 = 2 * HvlpForceAllPages;
    HvlpForceAllPages *= 2;
    if ( a1 )
      HvlpForceAllPages = v1 | 1;
  }
}
