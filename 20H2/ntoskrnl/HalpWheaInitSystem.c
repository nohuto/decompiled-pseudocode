/*
 * XREFs of HalpWheaInitSystem @ 0x1409A29C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14037B104 (HalpInterruptModel.c)
 *     HalpMcaInitializePcrContext @ 0x1409A2A1C (HalpMcaInitializePcrContext.c)
 *     HalpWheaInitDiscard @ 0x140A6257C (HalpWheaInitDiscard.c)
 */

__int64 HalpWheaInitSystem()
{
  int v0; // edx
  __int64 v1; // r8

  if ( (unsigned int)HalpInterruptModel() != 1 )
    return 0LL;
  switch ( v0 )
  {
    case 19:
LABEL_7:
      HalpMcaInitializePcrContext();
      return 0LL;
    case 12:
      HalpWheaInitDiscard(v1);
      return 0LL;
    case 17:
      off_140C006C8[0] = (__int64 (__fastcall *)())HalpReadWheaPhysicalMemory;
      off_140C006D0[0] = (__int64 (__fastcall *)())HalpWriteWheaPhysicalMemory;
      goto LABEL_7;
  }
  return 0LL;
}
