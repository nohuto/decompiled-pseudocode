/*
 * XREFs of HalpHvLpReadMultipleMsr @ 0x14050E6FC
 * Callers:
 *     HalpHvEpReadMsr @ 0x14050E360 (HalpHvEpReadMsr.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x14050E638 (HalpHvLpReadMcaStatusMsr.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall HalpHvLpReadMultipleMsr(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  if ( qword_140C4C4D8 )
    return qword_140C4C4D8();
  if ( a2 )
    memset(a4, 0, 8LL * a2);
  return 3221225473LL;
}
