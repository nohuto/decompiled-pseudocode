/*
 * XREFs of HalpWheaInitSystem @ 0x140A5B290
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14036FA84 (HalpInterruptModel.c)
 *     HalpMcaInitializePcrContext @ 0x140A5B2F8 (HalpMcaInitializePcrContext.c)
 *     HalpWheaInitDiscard @ 0x140AF9508 (HalpWheaInitDiscard.c)
 */

__int64 HalpWheaInitSystem()
{
  int v0; // edx
  __int64 v1; // r8

  if ( (unsigned int)HalpInterruptModel() != 1 )
    return 0LL;
  if ( v0 == 19 )
    goto LABEL_7;
  if ( v0 != 12 )
  {
    if ( v0 != 17 )
      return 0LL;
    off_140C01D18[0] = (__int64 (__fastcall *)())HalpReadWheaPhysicalMemory;
    off_140C01D20[0] = (__int64 (__fastcall *)())HalpWriteWheaPhysicalMemory;
LABEL_7:
    HalpMcaInitializePcrContext();
    return 0LL;
  }
  if ( v1 )
  {
    HalpWheaInitDiscard(v1);
    return 0LL;
  }
  return 3221225473LL;
}
