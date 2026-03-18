/*
 * XREFs of ?VidSchiConvertGpuTimeStampToSchedulerUnits@@YA_KPEAU_VIDSCH_NODE@@_K_J@Z @ 0x1C0037018
 * Callers:
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00397E8 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VidSchiConvertGpuTimeStampToSchedulerUnits(
        struct _VIDSCH_NODE *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  unsigned __int64 v6; // rcx

  v3 = *((_QWORD *)a1 + 1397);
  v4 = *((_QWORD *)a1 + 1398);
  if ( v4 == v3 )
    return 0LL;
  v6 = *((_QWORD *)a1 + 1395) + (a2 - v3) * (*((_QWORD *)a1 + 1396) - *((_QWORD *)a1 + 1395)) / (v4 - v3);
  if ( is_mul_ok(v6, 0x989680uLL) )
    return v6 * (unsigned __int128)0x989680uLL / a3;
  else
    return 10000000 * (v6 / a3) + 10000000 * (v6 % a3) / a3;
}
