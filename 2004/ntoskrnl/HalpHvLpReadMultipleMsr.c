/*
 * XREFs of HalpHvLpReadMultipleMsr @ 0x1404BD3BC
 * Callers:
 *     HalpHvEpReadMsr @ 0x1404BD070 (HalpHvEpReadMsr.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x1404BD2F8 (HalpHvLpReadMcaStatusMsr.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall HalpHvLpReadMultipleMsr(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  if ( qword_140C4A258 )
    return qword_140C4A258();
  if ( a2 )
    memset(a4, 0, 8LL * a2);
  return 3221225473LL;
}
