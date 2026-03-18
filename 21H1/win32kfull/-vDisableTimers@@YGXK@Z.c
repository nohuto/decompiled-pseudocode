/*
 * XREFs of ?vDisableTimers@@YGXK@Z @ 0xAD16A
 * Callers:
 *     _vDisableSynchronize@4 @ 0xAD0E8 (_vDisableSynchronize@4.c)
 *     ?vDisableSynchronizeNKAPC@@YGXPAX00@Z @ 0x1FD29C (-vDisableSynchronizeNKAPC@@YGXPAX00@Z.c)
 * Callees:
 *     _UserKillTimer@4 @ 0x1A5A1D (_UserKillTimer@4.c)
 */

void __fastcall vDisableTimers(char a1)
{
  if ( (a1 & 0x40) != 0 )
    --gcSynchronizeFlush;
  if ( a1 < 0 && --gcSynchronizeTimer < 0 )
  {
    if ( gidSynchronizeTimer )
    {
      UserKillTimer();
      gidSynchronizeTimer = 0;
    }
  }
}
