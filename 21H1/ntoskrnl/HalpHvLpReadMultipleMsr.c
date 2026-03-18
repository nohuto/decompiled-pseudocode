/*
 * XREFs of HalpHvLpReadMultipleMsr @ 0x1404BCCDC
 * Callers:
 *     HalpHvEpReadMsr @ 0x1404BC990 (HalpHvEpReadMsr.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x1404BCC18 (HalpHvLpReadMcaStatusMsr.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall HalpHvLpReadMultipleMsr(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  if ( qword_140C4A3B8 )
    return qword_140C4A3B8();
  if ( a2 )
    memset(a4, 0, 8LL * a2);
  return 3221225473LL;
}
