/*
 * XREFs of PfSnQueueEnablePrefetcherTimer @ 0x14086448C
 * Callers:
 *     PfSnBeginBootPhase @ 0x140A544B0 (PfSnBeginBootPhase.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140A54598 (PfSnAllocateEnablePrefetcherTimer.c)
 */

__int64 __fastcall PfSnQueueEnablePrefetcherTimer(__int64 *a1)
{
  unsigned __int64 EnablePrefetcherTimer; // rax
  unsigned int v3; // ebx

  EnablePrefetcherTimer = PfSnAllocateEnablePrefetcherTimer(1LL);
  v3 = 0;
  if ( EnablePrefetcherTimer )
    KiSetTimerEx(EnablePrefetcherTimer, *a1, 0, 0, EnablePrefetcherTimer + 64);
  else
    return (unsigned int)-1073741670;
  return v3;
}
