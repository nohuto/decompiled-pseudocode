/*
 * XREFs of HalpHvLpReadMultipleMsr @ 0x1404C22AC
 * Callers:
 *     HalpHvEpReadMsr @ 0x1404C1F60 (HalpHvEpReadMsr.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x1404C21E8 (HalpHvLpReadMcaStatusMsr.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall HalpHvLpReadMultipleMsr(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  if ( qword_140C4A1D8 )
    return qword_140C4A1D8();
  if ( a2 )
    memset(a4, 0, 8LL * a2);
  return 3221225473LL;
}
